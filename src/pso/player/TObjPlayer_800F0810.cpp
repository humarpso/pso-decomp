#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800F08AC_lbl_80501080 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_800F08AC_lbl_805010D0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

#include <stddef.h>
struct Stack_800F09E8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
    s32 sp20;
    M2C_UNK * sp24;
};

struct RecoveredGlobal_800F09E8_lbl_804976B0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);
extern s32 some_id_805c6f74;
void set_alt_model_flag__10TObjPlayerFv(void);
extern RecoveredGlobal_800F08AC_lbl_80501080 lbl_80501080;
extern RecoveredGlobal_800F08AC_lbl_805010D0 lbl_805010D0;
M2C_UNK *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1);
void TObjPlayer__sub_800F083C(void);
M2C_UNK *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1);
void clear_alt_model_flag__10TObjPlayerFv(void);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
void set_alt_model_flag__10TObjPlayerFv(void);
void update_lights__10TObjPlayerFv(void);
void draw_with_alt_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 is_split_screen();
s32 is_split_screen__10TObjPlayerFv(void);
s32 is_split_screen__10TObjPlayerFv(void);
s32 set_depth_buffer_settings_1__Fv();
s32 restore_saved_depth_alpha_state();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 draw_shadow_quad__10TObjPlayerFPvii(void *, int, int);
s32 abs__4cXyzCFv(int, int);
extern RecoveredGlobal_800F09E8_lbl_804976B0 lbl_804976B0;
extern s32 lbl_805D52F8;
extern const f32 lbl_805DA7F8;
extern const f32 lbl_805DA7FC;
extern const f32 lbl_805DA800;
void draw_blob_shadow(s32 arg0);
}

extern "C" {

void TObjPlayer__sub_800F083C(void);
void clear_alt_model_flag__10TObjPlayerFv(void);
void update_lights__10TObjPlayerFv(void);
int init_directional_light__9TObjLightFv(void*);
int TObjLight__sub_801337F8(void*);
M2C_UNK set_chunk_material_override_pair(M2C_UNK, M2C_UNK);

    extern int lbl_805D5560;
void update_lights__10TObjPlayerFv(void) { init_directional_light__9TObjLightFv((void*)(lbl_805D5560)); TObjLight__sub_801337F8((void*)(lbl_805D5560)); }

void TObjPlayer__sub_800F083C(void) {  }

extern s32 some_id_805c6f74;

void clear_alt_model_flag__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFFF7FF;
    set_chunk_material_override_pair(0xFF00, 0);
}
void set_alt_model_flag__10TObjPlayerFv(void) { (*(int *)&some_id_805c6f74) = ((*(int *)&some_id_805c6f74) | 0x800); set_chunk_material_override_pair((M2C_UNK)((void*)-513), (M2C_UNK)((void*)0)); }
M2C_UNK *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_805010D0.value, s32 *, 4) = arg1;
    M2C_FIELD(&lbl_80501080.value, s32 *, 0x30) = arg0;
    return &lbl_80501080.value;
}
void draw_with_alt_model__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    set_alt_model_flag__10TObjPlayerFv();
    TObjPlayer__sub_800F083C();
    M2C_FIELD(arg0, s32 *, 0x34) = ((s32)TObjPlayer__sub_800F08AC(temp_r31, arg1));
    draw__16TObjEneRe7BeruraFPv(arg0);
    update_lights__10TObjPlayerFv();
    clear_alt_model_flag__10TObjPlayerFv();
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
}
s32 is_split_screen__10TObjPlayerFv(void) {
    return is_split_screen() ? 1 : 0;
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void draw_blob_shadow(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800F09E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800F09E8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800F09E8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800F09E8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800F09E8, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800F09E8, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800F09E8, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800F09E8, sp24) == 0x1C) ? 1 : -1];
    Stack_800F09E8 stack;
    if (arg0 == 0) {
        if (is_split_screen__10TObjPlayerFv() != 0) {
            goto block_2;
        }
    } else {
block_2:
        stack.sp8 = lbl_805DA7F8;
        stack.spC = lbl_805DA7FC;
        stack.sp10 = lbl_805DA7FC;
        stack.sp14 = lbl_805DA800;
        stack.sp18 = lbl_805DA800;
        stack.sp1C = 0;
        stack.sp20 = lbl_805D52F8;
        stack.sp24 = (M2C_UNK *)(&lbl_804976B0.value);
        set_depth_buffer_settings_1__Fv();
        abs__4cXyzCFv((int) (0), (int) (8));
        abs__4cXyzCFv((int) (1), (int) (6));
        begin_effect_render__13TParticleCtrlFv();
        draw_shadow_quad__10TObjPlayerFPvii((void *) (&stack.sp8), (int) (0), (int) (0x20));
        stack.sp8 = lbl_805DA7FC;
        stack.spC = lbl_805DA7FC;
        draw_shadow_quad__10TObjPlayerFPvii((void *) (&stack.sp8), (int) (0), (int) (0x24));
        stack.sp8 = lbl_805DA7F8;
        stack.spC = lbl_805DA7F8;
        draw_shadow_quad__10TObjPlayerFPvii((void *) (&stack.sp8), (int) (0), (int) (0x28));
        stack.sp8 = lbl_805DA7FC;
        stack.spC = lbl_805DA7F8;
        draw_shadow_quad__10TObjPlayerFPvii((void *) (&stack.sp8), (int) (0), (int) (0x2C));
        end_effect_render__13TParticleCtrlFv();
        restore_saved_depth_alpha_state();
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_800F09E8_lbl_804976B0_size[sizeof(RecoveredGlobal_800F09E8_lbl_804976B0) == 0x18 ? 1 : -1];
#pragma pop

typedef char RecoveredGlobal_800F08AC_lbl_80501080_size[sizeof(RecoveredGlobal_800F08AC_lbl_80501080) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_800F08AC_lbl_805010D0_size[sizeof(RecoveredGlobal_800F08AC_lbl_805010D0) == 0x10 ? 1 : -1];

}
