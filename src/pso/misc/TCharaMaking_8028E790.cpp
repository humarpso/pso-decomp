#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028E9A4___vt__12TCharaMaking { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_8028E9A4___vt__12TCharaMaking_size[sizeof(RecoveredGlobal_8028E9A4___vt__12TCharaMaking) == 0x1C ? 1 : -1];

extern "C" {
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TCharaMaking__sub_8028E794(void *);
s32 TCMCharacter__ct(int, void *);
s32 create__14TObjCMMainMenuFPv(void *);
extern RecoveredGlobal_8028E9A4___vt__12TCharaMaking __vt__12TCharaMaking;
extern s32 lbl_805D3B6C;
extern s32 lbl_805D6524;
u8 *TCharaMaking__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void TCharaMaking__sub_8028E790(void);
void *create__12TCharaMakingFPvPv(void *arg0, void *arg1);
s32 update_main_menu__12TCharaMakingFi(s32 arg0);
void *__nw__7TObjectFUl(int);
M2C_UNK create__15TChCrCharSelectFPv(s32);
M2C_UNK create__9TSaveChCrFPv(M2C_UNK);
M2C_UNK fn_8028D8F4();
M2C_UNK fn_80291268();
s32 is_state_3__14TObjCMMainMenuFv(s32);
s32 is_state_4__14TObjCMMainMenuFv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

void TCharaMaking__sub_8028E790(void) {  }

extern s32 tl_03;
extern s32 lbl_805D6524;
extern s32 lbl_805D652C;

s32 update_main_menu__12TCharaMakingFi(s32 arg0) {
    M2C_UNK var_r3;

    if (is_state_3__14TObjCMMainMenuFv(lbl_805D6524) != 0) {
        fn_8028D8F4();
        var_r3 = 0;
        if ((s32) lbl_805D652C == 1) {
            var_r3 = 1;
        }
        create__9TSaveChCrFPv(var_r3);
        fn_80291268();
        queue_destruction__7TObjectFv(arg0);
        return 1;
    }
    if (is_state_4__14TObjCMMainMenuFv(lbl_805D6524) != 0) {
        queue_destruction__7TObjectFv(arg0);
        create__15TChCrCharSelectFPv(tl_03);
        return 1;
    }
    return 0;
}

extern void *lbl_805D6520;

void *create__12TCharaMakingFPvPv(void *arg0, void *arg1) {
    void *o;
    lbl_805D6520 = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TCharaMaking__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}
u8 *TCharaMaking__ct(u8 *arg0, s32 arg1) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TCharaMaking.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B6C;
    temp_r3 = ((u32)__nw__7TObjectFUl((int) (0x10C)));
    if (temp_r3 != 0U) {
        TCMCharacter__ct((int) (temp_r3), (void *) (arg0));
    }
    lbl_805D6524 = create__14TObjCMMainMenuFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1555;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x9000;
    TCharaMaking__sub_8028E794((void *) (arg0));
    return arg0;
}

}
