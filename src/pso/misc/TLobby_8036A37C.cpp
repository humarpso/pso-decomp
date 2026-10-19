#include "types.h"
#include "pso/ui/TAdDialingMessageWindow.h"
#include "pso/ui/TAdDialingMessageWindow.h"
#include "pso/misc/TLobby.h"

extern "C" {


void *TLobby::create_dialing_message_window(void *arg0, void *arg1) {
    void *o;
    o = (void *)new TAdDialingMessageWindow(arg0, arg1);
    return o;
}

}
