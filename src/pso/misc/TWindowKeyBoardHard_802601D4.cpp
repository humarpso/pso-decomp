#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1);
void run_task__19TWindowKeyBoardHardFv(void *arg0);
s32 TKeyBoardControl__sub_80131FAC(void *);
s32 TWindowKeyBoardHard__sub_80260444();
void __dl__7TObjectFPv(void *);
M2C_UNK fn_80246258(void *);
M2C_UNK fn_8024664C(void *);
void fn_80246674(void *, int);
M2C_UNK fn_8025CC48(void *);
s32 fn_8025EC54(void *);
M2C_UNK fn_8025FBE8(void *);
M2C_UNK fn_8025FC60(void *);

extern s32 lbl_805D5544;

void run_task__19TWindowKeyBoardHardFv(void *arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    if ((void *) M2C_FIELD(arg0, void **, 0x70) != NULL) {
        if ((TWindowKeyBoardHard__sub_80260444() == 0) && (TKeyBoardControl__sub_80131FAC(M2C_FIELD(arg0, void **, 0x70)) == 0)) {
            if (fn_8025EC54(arg0) != 0) {
                if ((s32) lbl_805D5544 == 0) {
                    M2C_FIELD(arg0, s32 *, 0x68) = 0x3C;
                }
                M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) & 0xFFFFFEFF);
                temp_r3 = M2C_FIELD(arg0, void **, 0x70);
                M2C_FIELD(temp_r3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3, s32 *, 0xB4) & 0xFFFFFFBF);
                if (!(M2C_FIELD(arg0, s32 *, 0x60) & 0x40)) {
                    fn_8025CC48(M2C_FIELD(arg0, void **, 0x70));
                }
            }
            fn_8025FC60(arg0);
            fn_8025FBE8(arg0);
        }
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x68);
        if (temp_r3_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3_2 - 1);
        }
        fn_8024664C(arg0);
        fn_80246258(arg0);
    }
}

extern M2C_UNK __vt__19TWindowKeyBoardHard[];

void *__dt__19TWindowKeyBoardHardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowKeyBoardHard;
        fn_80246674(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
