/******************************************************************************/
/* File   : ServiceDet.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceDet.hpp"
#include "infServiceDet_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEDET_AR_RELEASE_VERSION_MAJOR                                    4
#define SERVICEDET_AR_RELEASE_VERSION_MINOR                                    3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEDET_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEDET_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEDET_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEDET_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infServiceDetClient,  SERVICEDET_VAR, SERVICEDET_CONST) gptrServiceDet = &ServiceDet;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceDet, SERVICEDET_VAR) ServiceDet;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEDET_CODE) module_ServiceDet::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEDET_CONST,       SERVICEDET_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEDET_CONFIG_DATA, SERVICEDET_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceDet_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceDet_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceDet_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceDet_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceDet_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDET_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEDET_CODE) module_ServiceDet::DeInitFunction(
   void
){
#if(STD_ON == ServiceDet_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceDet_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceDet_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDET_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEDET_CODE) module_ServiceDet::MainFunction(
   void
){
#if(STD_ON == ServiceDet_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceDet_InitCheck)
   }
   else{
#if(STD_ON == ServiceDet_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDET_E_UNINIT
      );
#endif
   }
#endif
}

#if(STD_ON == _ReSIM)
#include <iostream>
using namespace std;
#else
#endif

FUNC(Std_TypeReturn, SERVICEDET_CODE) module_ServiceDet::ReportError(
      uint16 IdModule
   ,  uint8  IdInstance
   ,  uint8  IdApi
   ,  uint8  IdError
){
#if(STD_ON == _ReSIM)
   cout<<endl<<"Development error reported";
   cout<<endl<<"IdModule   = "<<IdModule;
   cout<<endl<<"IdInstance = "<<IdInstance;
   cout<<endl<<"IdApi      = "<<IdApi;
   cout<<endl<<"IdError    = "<<IdError;
#else
#endif
   return E_OK;
}

void ServiceDet_ReportRuntimeError(
   void
){
}

void ServiceDet_ReportTransientFault(
   void
){
}

FUNC(void, SERVICEDET_CODE) module_ServiceDet::Start(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

