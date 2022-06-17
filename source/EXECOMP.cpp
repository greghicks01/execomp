//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("EXECOMP.res");
USEFORM("TestForm.cpp", Form1);
USEUNIT("wrapper.cpp");
USEUNIT("exethrd.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        return 0;
}
//---------------------------------------------------------------------------
