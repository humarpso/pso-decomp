#include "types.h"

extern "C" {

void * create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TWindowCallBack__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TWindowCallBack__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
