#include "types.h"

struct RecoveredGlobal_80198960_lbl_804B8DAC {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80198960_lbl_8050DD58 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 get_bml_model(void *, int);
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
s32 draw_chunk_object();
extern RecoveredGlobal_80198960_lbl_804B8DAC lobby_gvm_texture_handles;
extern RecoveredGlobal_80198960_lbl_8050DD58 gogo_ball_configuration;
extern u32 gogo_ball_bml_resource;
extern const f32 lbl_805DBF44;
void TWindowTimer__sub_80198960(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80198960_lbl_804B8DAC_size[sizeof(RecoveredGlobal_80198960_lbl_804B8DAC) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_80198960_lbl_8050DD58_size[sizeof(RecoveredGlobal_80198960_lbl_8050DD58) == 0x54 ? 1 : -1];
void TWindowTimer__sub_80198960(u8 *arg0) {
    if ((((u32) gogo_ball_bml_resource != 0U) || ((u32) *(u32 *)((s8 *)(&lobby_gvm_texture_handles.value) + 0x10) != 0U)) && ((u16) *(u16 *)((s8 *)(&gogo_ball_configuration.value) + 0x48) != 6)) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0x50) == 1) {
            set_global_param__8TObjFishFl((int) (*(u32 *)((s8 *)(&lobby_gvm_texture_handles.value) + 0x10)));
        } else {
            set_global_param__8TObjFishFl((int) (*(u32 *)((s8 *)(&lobby_gvm_texture_handles.value) + 0x14)));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x34)));
        scale_matrix((int) (0), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44));
        get_bml_model((void *) (gogo_ball_bml_resource), (int) (4));
        draw_chunk_object();
        pop_matrix();
    }
}

}
