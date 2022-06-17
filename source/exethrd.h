//---------------------------------------------------------------------------

#ifndef exethrdH
#define exethrdH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class TRunExe : public TThread
{
private:
protected:
        void __fastcall Execute();
        void __fastcall TNSuccess();
        void __fastcall TNFail();
        bool __fastcall appLaunch();
public:
        __fastcall TRunExe(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
