#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TOBind__sub_8015860C(u8 *arg0);
}

extern "C" {

void run_task__6TOBindFv(void *arg0);
M2C_UNK TOBind__sub_80158608(void *);
void TORainbowCave01__sub_80158604(void);
s32 get_register__12TQuestThreadFPvi(s32, s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D5EE8;

void TOBind__sub_8015860C(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB8) + M2C_FIELD(arg0, f32 *, 0xC0));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xBC);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB8);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (temp_f0 - temp_f1);
    }
}

void run_task__6TOBindFv(void *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOBind__sub_80158608((void *)(arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) != 1) {
        if (get_register__12TQuestThreadFPvi(lbl_805D5EE8, M2C_FIELD(arg0, s32 *, 0xB4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = 1;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
        TOBind__sub_8015860C((u8 *)((void *)(arg0)));
    }
}

}
