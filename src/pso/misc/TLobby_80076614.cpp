#include "types.h"
#include "pso/object/TObjTombstone_800762F0.h"
#include "pso/misc/TLobby.h"

extern "C" {

void *__nw__7TObjectFUl(int);

void *TLobby::create_tombstone(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = TObjTombstone__ct((u8 *)o, (s32)arg0, (s32)arg1, (u8 *)arg2);
    }
    return o;
}

}
