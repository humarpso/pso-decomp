#include "types.h"
extern "C" {
void *construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s16, s32);
void *TWindowFukidasi__ct(void *, s32, s32, s32, f32);
s32 fn_8026CB74();
extern u8 lbl_804CF0A4[];
extern u8 lbl_804CF0B8[];
u8 *TWindowFukidasi__sub_80252B74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

u8 *TWindowFukidasi__sub_80252B74(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    construct_with_parent__15TWindowAdditionFPvPv(arg0, lbl_804CF0A4, arg3, fn_8026CB74());
    *(void **)(arg0 + 0x18) = lbl_804CF0B8;
    TWindowFukidasi__ct(arg0, arg1, arg2, arg3, farg0);
    return arg0;
}

}
