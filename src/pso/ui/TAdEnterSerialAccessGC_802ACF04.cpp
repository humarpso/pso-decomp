#include "types.h"
#include "pso/ui/TAdEnterSerialAccessGC.h"

extern "C" {

void *TWindowCallBack__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void *TAdEnterSerialAccessGC::create_callback(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TWindowCallBack__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
