#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801B0520 { char pad[0x18]; };
struct VObj_801B0520 : Base_801B0520 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

extern "C" {

s32 TQuestColCtrl__sub_8003F3C8(void *, s32);
s32 TObjPlayer__sub_801AFFD0(void *);
M2C_UNK show_sub_status_window(s32, s32, s32);
M2C_UNK draw_status_line(s32, s32, s32, s32);
extern s32 lbl_805D3530;

void draw_player_status(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = ((VObj_801B0520 *)arg1)->m10();
    if (temp_r3 != 0) {
        if (TQuestColCtrl__sub_8003F3C8(arg1, lbl_805D3530) != 0) {
            draw_status_line(arg0, arg2, temp_r3, TObjPlayer__sub_801AFFD0(arg1));
            return;
        }
        show_sub_status_window(arg0, arg2, temp_r3);
    }
}

}
