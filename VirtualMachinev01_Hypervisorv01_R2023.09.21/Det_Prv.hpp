#ifndef DET_PRV_H
#define DET_PRV_H

#include "Types_SwcServiceDet.hpp"
#include "Det.hpp"
#include "rba_DiagLib_MemUtils.hpp"

#define DET_MEMSET(xDest_pv, xPattern_u32, numBytes_u32)  RBA_DIAGLIB_MEMSET((xDest_pv),(xPattern_u32),(numBytes_u32))
#define DET_UNUSED_PARAM(P)   ((void)(P))

#define DET_START_SEC_RAM_CLEARED
#include "Det_MemMap.hpp"
#if(DET_CFG_ERRORBUFFER_ENABLED)
extern Det_ErrorEntryBufferType Det_ErrorEntryBuffer[];
#endif
#define DET_STOP_SEC_RAM_CLEARED
#include "Det_MemMap.hpp"

#endif
