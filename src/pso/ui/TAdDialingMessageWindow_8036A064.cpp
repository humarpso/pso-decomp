#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TAdDialingMessageWindow__sub_8036A0D0(void *arg0, s16 arg1);
void *init__23TAdDialingMessageWindowFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void tick_countdown__23TAdDialingMessageWindowFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK run_child_tasks__23TAdDialingMessageWindowFPv(u32);
M2C_UNK set_flag_and_notify__23TAdDialingMessageWindowFPv(void *);

void tick_countdown__23TAdDialingMessageWindowFPv(void *arg0) {
    u32 temp_r3;
    void *temp2_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, u32 *, 0x1C) = (u32) (temp_r3 - 1);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
                temp2_r3 = M2C_FIELD(arg0, void **, 0x20);
                if ((u32) temp2_r3 != 0U) {
                    set_flag_and_notify__23TAdDialingMessageWindowFPv(temp2_r3);
                }
            }
        }
        run_child_tasks__23TAdDialingMessageWindowFPv(M2C_FIELD(arg0, u32 *, 0x20));
    }
}

extern M2C_UNK lbl_804F3428[];

void *TAdDialingMessageWindow__sub_8036A0D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3428;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F3428[];

void *init__23TAdDialingMessageWindowFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3428;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    return arg0;
}

}
