#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowOptionCtrl__sub_8026B308(void *arg0, s16 arg1, s8 arg2);
void TWindowOptionCtrl__sub_8026B348(void *arg0);
void TWindowOptionCtrl__sub_8026B390(void *arg0);
void TWindowOptionCtrl__sub_8026B3C4(void *arg0, s32 arg1);
s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1);
void *fn_8001ED80();
s32 fn_80132E58(s8);
M2C_UNK fn_802260C4();
M2C_UNK fn_802260F0();
s16 fn_80226328();
M2C_UNK fn_802263A8(s16);
M2C_UNK fn_8022743C();
M2C_UNK fn_802274B8();
M2C_UNK fn_8023F160();
M2C_UNK fn_8023F18C();
M2C_UNK fn_80244B1C(u32);
u32 create_menu__17TWindowOptionCtrlFv(void *);
M2C_UNK fn_8036A648(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TWindowOptionCtrl__sub_8026B308(void *arg0, s16 arg1, s8 arg2) {
    void *temp_r3;

    temp_r3 = fn_8001ED80();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 4) = arg1;
        M2C_FIELD(temp_r3, s8 *, 6) = arg2;
    }
}

void TWindowOptionCtrl__sub_8026B348(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) != (s16) M2C_FIELD(arg0, s16 *, 0x20)) {
        fn_8022743C();
        fn_802263A8(M2C_FIELD(arg0, s16 *, 0x20));
        fn_802260F0();
    }
}

void TWindowOptionCtrl__sub_8026B390(void *arg0) {
    s16 temp_r3;

    temp_r3 = fn_80226328();
    M2C_FIELD(arg0, s16 *, 0x1E) = temp_r3;
    M2C_FIELD(arg0, s16 *, 0x20) = temp_r3;
}

void TWindowOptionCtrl__sub_8026B3C4(void *arg0, s32 arg1) {
    fn_8022743C();
    fn_8022743C();
    fn_802260C4();
    fn_8036A648(arg1);
    fn_802274B8();
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) | 2);
}

s32 handle_input__17TWindowOptionCtrlFPvi(void *arg0, s32 arg1) {
    if (fn_80132E58((s8) arg1) != 0) {
        fn_8023F160();
        fn_8023F18C();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x28) = create_menu__17TWindowOptionCtrlFv(arg0);
        fn_80244B1C(M2C_FIELD(arg0, u32 *, 0x28));
        return 1;
    }
    return 0;
}

}
