#include "types.h"

extern "C" {

s32 fn_80142108(s32 *);
s32 TAdPlayerLoadGC__sub_801E15A4(s32, s32, s32, s32, s32 *, s32);
int fn_802431D0(void);
int fn_802431F4(void* p);
int fn_802432CC(void* p, int a1, int a2);
int fn_801A529C(void*, int);
int TAdPlayerLoadGC__sub_801E1944(void*, int, int, int);
int fn_80243070(void*);

int fn_802431D0(void) { return fn_80243070((void*)(0)); }
int fn_802431F4(void* p) { return fn_801A529C(p, 8); }
void fn_80243218(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    fn_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x800000FF);
}
void fn_80243274(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    fn_80142108(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x80000000);
}
int fn_802432CC(void* p, int a1, int a2) { return TAdPlayerLoadGC__sub_801E1944(p, a1, a2, 0); }

}
