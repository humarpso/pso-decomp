#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802E8274 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
};

struct RecoveredGlobal_802E8274_lbl_80472CB0 { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_802E8274_lbl_80472CB0_size[sizeof(RecoveredGlobal_802E8274_lbl_80472CB0) == 0x54 ? 1 : -1];

struct RecoveredGlobal_802E8274_lbl_804E3BFC { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_802E8274_lbl_804E3BFC_size[sizeof(RecoveredGlobal_802E8274_lbl_804E3BFC) == 0x30 ? 1 : -1];

struct RecoveredGlobal_802E80F4_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802E80F4_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_802E80F4_lbl_805412C0 {
    M2C_UNK value;
    u8 remaining[0x264];
};

struct RecoveredGlobal_802E80F4_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 TObjPlayer__sub_803D8960(int, void *, void *, int);
s32 TObjPlayer__sub_803D898C(void *);
f32 subtract_vector(void *, void *);
f32 transform_point_by_current_matrix(void *, void *);
s32 push_matrix();
s32 pop_matrix();
extern RecoveredGlobal_802E8274_lbl_80472CB0 lbl_80472CB0;
extern RecoveredGlobal_802E8274_lbl_804E3BFC lbl_804E3BFC;
extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6944;
extern const f32 lbl_805DEA10;
void TObjPlayer__sub_802E8274(void);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 clear_global_flag_400__9TObjEneDDFv();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 render_nodes__7TObjectFv(void *);
s32 TObjPlayer__sub_802E7F30(void *, int);
s32 TObjPlayer__sub_802E7FC0(void *);
void draw_effect__10TObjPlayerFv(void);
u32 is_part_active__11TBoss7JointFPv(int);
s32 draw_node_tree_if_visible__10TObjPlayerFPv(int);
s32 push_matrix();
s32 pop_matrix();
extern RecoveredGlobal_802E80F4_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_802E80F4_main_task main_task;
extern RecoveredGlobal_802E80F4_lbl_805412C0 lbl_805412C0;
extern RecoveredGlobal_802E80F4_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u8 *lbl_805D693C;
extern M2C_UNK *lbl_805D6940;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DEA1C;
void TObjPlayer__sub_802E80F4(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_802E80A0(void);
void TObjPlayer__sub_802E8234(u8 *arg0);
void draw_effect__10TObjPlayerFv(void);
void notify_fish_obj__10TObjPlayerFPv(void* a0);
void queue_boss_effect__10TObjPlayerFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);
int TObjFish__sub_8001EDB0(void*, void*);
int get_bml_model(void*, void*);
int set_global_param__8TObjFishFi(void);

    extern int lbl_805D6918;
void notify_fish_obj__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void queue_boss_effect__10TObjPlayerFPv(void* a0) { get_bml_model((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void TObjPlayer__sub_802E80A0(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); }

    extern int lbl_805D6918;
void draw_effect__10TObjPlayerFv(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); set_global_param__8TObjFishFi(); }

extern s32 lbl_805D691C;
extern s32 lbl_805D6920;
extern s32 lbl_805D6924;
extern s32 lbl_805D6928;
extern s32 lbl_805D692C;
extern s32 lbl_805D6930;
extern s32 lbl_805D6934;
extern s32 lbl_805D6944;

typedef char RecoveredGlobal_802E80F4_lbl_8050BEC0_size[sizeof(RecoveredGlobal_802E80F4_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802E80F4_main_task_size[sizeof(RecoveredGlobal_802E80F4_main_task) == 0x34 ? 1 : -1];
typedef char RecoveredGlobal_802E80F4_lbl_805412C0_size[sizeof(RecoveredGlobal_802E80F4_lbl_805412C0) == 0x268 ? 1 : -1];
typedef char RecoveredGlobal_802E80F4_lbl_8058D4C0_size[sizeof(RecoveredGlobal_802E80F4_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802E80F4(u8 *arg0) {
    s32 *var_r30;
    s32 var_r29;
    if (!(get_mode__11TCameraCtrlFPv((void *) (&main_task.value)) & 0x20) || !(M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805DEA1C)) {
        var_r30 = (s32 *)((u8 *)(arg0 + 0x5F8));
        var_r29 = 0;
        do {
            if (is_part_active__11TBoss7JointFPv((int) (*var_r30)) != 0U) {
                TObjPlayer__sub_802E7F30((void *) (arg0), (int) (var_r29));
            }
            var_r29 += 1;
            var_r30 = (s32 *)((u8 *)var_r30 + (4));
        } while (var_r29 != 0xA);
        lbl_805D5660 = some_id_805c6f74;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8050BEC0.value), (void *) (&lbl_8058D4C0.value));
        clear_global_flag_400__9TObjEneDDFv();
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7AC) != 0U) {
            if (M2C_FIELD(arg0, s32 *, 0x628) & 0x40) {
                M2C_FIELD(lbl_805D693C, M2C_UNK **, 0x2C) = &lbl_805412C0.value;
            } else {
                M2C_FIELD(lbl_805D693C, M2C_UNK **, 0x2C) = (M2C_UNK *) lbl_805D6940;
            }
            draw_effect__10TObjPlayerFv();
            draw_node_tree_if_visible__10TObjPlayerFPv((int) (M2C_FIELD(arg0, u32 *, 0x7AC)));
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BEC0.value));
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
        TObjPlayer__sub_802E7FC0((void *) (arg0));
        render_nodes__7TObjectFv((void *) (arg0 + 0x690));
    }
}

void TObjPlayer__sub_802E8234(u8 *arg0) {
    lbl_805D691C = 0;
    lbl_805D6924 = M2C_FIELD(arg0, s32 *, 0x628);
    lbl_805D6920 = 0;
    lbl_805D6928 = (long) (arg0 + 0x3EC);
    lbl_805D6930 = M2C_FIELD(arg0, s32 *, 0x6D8);
    lbl_805D6934 = M2C_FIELD(arg0, s32 *, 0x6D4);
    lbl_805D692C = (long) (arg0 + 0x4DC);
    lbl_805D6944 = (long) (arg0 + 0x7B4);
}
void TObjPlayer__sub_802E8274(void) {
    typedef char sp8_offset[(offsetof(Stack_802E8274, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802E8274, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802E8274, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802E8274, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_802E8274, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_802E8274, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_802E8274, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_802E8274, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_802E8274, sp28) == 0x20) ? 1 : -1];
    Stack_802E8274 stack;
    if ((s32) lbl_805D691C == 0x5F) {
        stack.sp20 = lbl_805DEA10;
        stack.sp24 = lbl_805DEA10;
        stack.sp28 = lbl_805DEA10;
        transform_point_by_current_matrix((void *) (&stack.sp20), (void *) (lbl_805D6944));
    }
    if ((s32) lbl_805D691C == 0x71) {
        stack.sp14 = lbl_805DEA10;
        stack.sp18 = lbl_805DEA10;
        stack.sp1C = lbl_805DEA10;
        transform_point_by_current_matrix((void *) (&stack.sp14), (void *) (lbl_805D6944 + 0xC));
    }
    if ((s32) lbl_805D691C == (s32) M2C_FIELD(&lbl_80472CB0.value, M2C_UNK *, (lbl_805D6920 * 4))) {
        stack.sp8 = lbl_805DEA10;
        stack.spC = lbl_805DEA10;
        stack.sp10 = lbl_805DEA10;
        transform_point_by_current_matrix((void *) (&stack.sp8), (void *) (lbl_805D6928));
        lbl_805D6920 += 1;
        lbl_805D6928 += 0xC;
    }
    if ((s32) lbl_805D691C == 0x33) {
        push_matrix();
        TObjPlayer__sub_803D8960((int) (0), (void *) (&lbl_804E3BFC.value), (void *) (lbl_805D692C), (int) (4));
        pop_matrix();
        subtract_vector((void *) (lbl_805D692C + 0xC), (void *) (lbl_805D692C));
    }
    if ((lbl_805D6924 & 0x80) && ((s32) lbl_805D691C >= 0x4D) && ((s32) lbl_805D691C <= 0x58)) {
        push_matrix();
        TObjPlayer__sub_803D898C((void *) (lbl_805D6934));
        pop_matrix();
        lbl_805D6934 += 0x30;
    }
    if (((s32) lbl_805D691C >= 0x1D) && ((s32) lbl_805D691C <= 0x20)) {
        push_matrix();
        TObjPlayer__sub_803D898C((void *) (lbl_805D6930));
        pop_matrix();
        lbl_805D6930 += 0x30;
    }
    lbl_805D691C += 1;
}

}
