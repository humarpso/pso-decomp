#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80198960_lbl_804B8DAC {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80198960_lbl_8050DD58 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
M2C_UNK get_bml_model(void *, int);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object();
extern RecoveredGlobal_80198960_lbl_804B8DAC lbl_804B8DAC;
extern RecoveredGlobal_80198960_lbl_8050DD58 lbl_8050DD58;
extern u32 lbl_805D5C60;
extern const f32 lbl_805DBF44;
void TWindowTimer__sub_80198960(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80198960_lbl_804B8DAC_size[sizeof(RecoveredGlobal_80198960_lbl_804B8DAC) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_80198960_lbl_8050DD58_size[sizeof(RecoveredGlobal_80198960_lbl_8050DD58) == 0x54 ? 1 : -1];
void TWindowTimer__sub_80198960(u8 *arg0) {
    if ((((u32) lbl_805D5C60 != 0U) || ((u32) M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x10) != 0U)) && ((u16) M2C_FIELD(&lbl_8050DD58.value, u16 *, 0x48) != 6)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50) == 1) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x10)));
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x14)));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        scale_matrix((int) (0), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44));
        get_bml_model((void *) (lbl_805D5C60), (int) (4));
        draw_chunk_object();
        pop_matrix();
    }
}

}
