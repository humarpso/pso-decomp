#include "types.h"

extern "C" {

s32 fn_80076E84(s16);
s32 fn_802661D4(s32, s32, s32, s16);
s32 fn_80266200(s32, s32, s32, s16, s32);
s32 TObjCityMainWarp__sub_80266354(s32, s32, s32, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_801D8044(u32, s32, u8);
int fn_80286BD4(void* p);
int fn_80286B0C(void*, void* a1 = 0);

s32 fn_80286B64(s16 *arg0, s32 *arg1) {
    s32 spC;
    s16 sp8;

    fn_80286B0C((void*)(&sp8), (void*)(&spC));
    if ((sp8 == (s16) *arg0) && (spC == (s32) *arg1)) {
        return 0;
    }
    *arg0 = sp8;
    *arg1 = spC;
    return 1;
}
int fn_80286BD4(void* p) { return fn_80286B0C(p); }
int fn_80286BF4(void* a0 = 0, void* a1 = 0) { return 0; }
s32 fn_80286C78(s32 arg0, s32 arg1) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp == 0U) {
        return 0;
    }
    return fn_801D8044(temp, 3, (u8) arg0);
}
void fn_80286CC4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = fn_80076E84(arg0);
    if (fn_80286C78(arg0, arg1) == 0) {
        fn_802661D4(arg2, temp_r31, 6, arg0);
        return;
    }
    if (fn_80286BF4((void*)(arg0), (void*)(arg1)) == 0) {
        fn_80266200(arg2, temp_r31, 0x16, arg0, 0xFFFD3901);
        return;
    }
    TObjCityMainWarp__sub_80266354(arg2, temp_r31, 6, arg0);
}

}
