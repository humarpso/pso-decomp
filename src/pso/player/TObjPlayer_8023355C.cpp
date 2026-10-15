#include "types.h"

extern "C" {

void create_tec_jelin__10TObjPlayerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecJelin__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create_tec_jelin__10TObjPlayerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecJelin__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
