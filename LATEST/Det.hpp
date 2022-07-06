#pragma once
/******************************************************************************/
/* File   : Det.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgDet.hpp"
#include "Det_core.hpp"
#include "infDet_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Det:
      INTERFACES_EXPORTED_DET
      public abstract_module
   ,  public infDetClient
   ,  public class_Det_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
   public:
      FUNC(void, DET_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, DET_CONFIG_DATA, DET_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DET_CODE) DeInitFunction (void);
      FUNC(void, DET_CODE) MainFunction   (void);
      DET_CORE_FUNCTIONALITIES

      FUNC(Std_TypeReturn, DET_CODE) ReportError(
            uint16 IdModule
         ,  uint8  IdInstance
         ,  uint8  IdApi
         ,  uint8  IdError
      );
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Det, DET_VAR) Det;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

