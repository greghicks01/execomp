//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "exethrd.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall Unit2::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TRunExe::TRunExe(bool CreateSuspended)
        : TThread(true)
{
// choices - mutex the exe this operates on?
//           semaphore the operation based on the exe?
}
//---------------------------------------------------------------------------
void __fastcall TRunExe::Execute()
{
        //---- Place thread code here ----
        while ( ! Terminated )
        {
                bool success = appLaunch () ;
                if ( success )
                {
                        TNSuccess ( ) ;
                }
                else
                {
                        TNFail ( ) ;
                }
                Suspend ( ) ;
        }
}
//---------------------------------------------------------------------------


void __fastcall TRunExe::TNSuccess()
{
        //TODO: Add your source code here
}

void __fastcall TRunExe::TNFail()
{
        //TODO: Add your source code here
}

bool __fastcall TRunExe::appLaunch()
{
        //TODO: Add your source code here
}