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

void draw_player_status(s32 arg0, void *arg1, s32 arg2);
void show_sub_status_window(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2);
M2C_UNK TLobby__sub_8001DC24();
s32 TObjPlayer__sub_801AFFD0(void *);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
M2C_UNK draw_status_line(s32, s32, s32, s32);
M2C_UNK init_all__11TWindowCtrlFPvPv(M2C_UNK, M2C_UNK);

extern s32 lbl_805D3530;

void draw_player_status(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = ((VObj_801B0520 *)arg1)->m10();
    if (temp_r3 != 0) {
        if (check_value_equals__13TQuestColCtrlFPvi(arg1, lbl_805D3530) != 0) {
            draw_status_line(arg0, arg2, temp_r3, TObjPlayer__sub_801AFFD0(arg1));
            return;
        }
        show_sub_status_window((void *)(arg0), (M2C_UNK *)(arg2), (M2C_UNK *)(temp_r3));
    }
}

extern M2C_UNK lbl_805DC27C;

void show_sub_status_window(void *arg0, M2C_UNK *arg1, M2C_UNK *arg2) {
    text_builder_reset();
    text_builder_append(arg1);
    text_builder_append(arg2);
    text_builder_append(&lbl_805DC27C);
    init_all__11TWindowCtrlFPvPv(TLobby__sub_8001DC24(), 0x200);
}

}
