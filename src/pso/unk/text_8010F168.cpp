#include "types.h"

extern "C" {

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1);
u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2);
s32 __dl__FPv(void *);
s32 mem_alloc(void *);
s32 fn_8010F018();
s32 fn_8010F0C0(void *);
s32 mem_free(s32);
s32 init_forward__10TObjPlayerFv(void *);

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8010F018();
        mem_free(*(s32 *)((s8 *)arg0 + 8));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2) {
    init_forward__10TObjPlayerFv((void *) (arg0 + 0xC));
    *(s32 *)((s8 *)arg0 + 4) = arg1;
    *(s32 *)((s8 *)arg0 + 0) = arg2;
    *(s32 *)((s8 *)arg0 + 8) = mem_alloc((void *) (arg2));
    fn_8010F0C0((void *) (arg0));
    return arg0;
}

}
