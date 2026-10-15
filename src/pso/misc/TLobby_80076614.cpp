#include "types.h"

extern "C" {

void * create_tombstone__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjTombstone__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_tombstone__6TLobbyFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x238);
    if (o != NULL) {
        o = TObjTombstone__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
