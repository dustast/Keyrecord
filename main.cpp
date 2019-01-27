#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    MSG Msg;
    //message is called from the windows thread message queue to be translated
    // message loop is created  always running and hidden
    // since handle is null windows does nothing with the dispatch message
    while(GetMessage (&Msg, NULL, 0, 0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);

    }
    return 0;
}
