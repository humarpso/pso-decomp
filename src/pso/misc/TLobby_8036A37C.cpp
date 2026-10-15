#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void *TAdDialingMessageWindow__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TLobby::create_dialing_message_window(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TAdDialingMessageWindow__ct(o, arg0, arg1);
    }
    return o;
}

}
