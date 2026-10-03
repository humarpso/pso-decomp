#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_8018574C { char pad[0x18]; };
struct VObj_8018574C : VObjBase_8018574C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018590C_lbl_80444878 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void clamp_destination_index__15TObjCityMapWarpFPv(u8 *arg0);
s32 get_localized_text_entry(s32, s32);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s32, s32);
s32 create_window_menu(s32, s32, s32);
s32 get_window_layout_position(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
void clamp_destination_index__15TObjCityMapWarpFPv(u8 *arg0);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK TWindowSubComCard__sub_80265C30(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
extern RecoveredGlobal_8018590C_lbl_80444878 lbl_80444878;
void TObjCityMapWarp__vt13(u8 *arg0, s32 arg1);
}

extern "C" {

int is_field88_zero__15TObjCityMapWarpFPv(void* p);
void render__15TObjCityMapWarpFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void render__15TObjCityMapWarpFv(u8 *arg0) {
    if (((VObj_8018574C*)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjCityMapWarpFPv((void*)(arg0)) != 0) {
            draw_ginja_object(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xD8));
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model_with_motion(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x38), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model_with_motion(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x18), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x34), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

int is_field88_zero__15TObjCityMapWarpFPv(void* p) { return *(u32*)((char*)p + 0x88) == 0; }

void clamp_destination_index__15TObjCityMapWarpFPv(u8 *arg0) {
    s32 var_r0;
    var_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (var_r0 < 0) {
        var_r0 = 0;
    } else if (var_r0 >= 3) {
        var_r0 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = var_r0;
}
#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8018590C_lbl_80444878_size[sizeof(RecoveredGlobal_8018590C_lbl_80444878) == 0xC ? 1 : -1];
void TObjCityMapWarp__vt13(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0xEC) == 0U) {
        M2C_FIELD(temp_r31, u32 *, 0xEC) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        clamp_destination_index__15TObjCityMapWarpFPv((u8 *)((void *) (arg0)));
        TWindowSubTradeMain__sub_80266200(M2C_FIELD(temp_r31, u32 *, 0xEC), get_localized_text_entry(9, M2C_FIELD(&lbl_80444878.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x8C) * 4))), 0xA, 0, -1);
        set_flag70_bit10__16TObjCityMainWarpFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        set_flag_40__16TAdChrSelASlotGCFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        TWindowSubComCard__sub_80265C30((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
    }
}
#pragma pop

}
