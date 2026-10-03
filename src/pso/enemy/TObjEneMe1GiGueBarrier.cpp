#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80325BCC_lbl_804ECD40 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80325BCC_lbl_804ECD40_size[sizeof(RecoveredGlobal_80325BCC_lbl_804ECD40) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier_size[sizeof(RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier) == 0x38 ? 1 : -1];

struct VBase_18_ca64a0 { char pad[0x18]; };

struct VObj_18_ca64a0 : VBase_18_ca64a0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual s32 m9(f32, f32, f32);
};

extern "C" {
void *__nw__7TObjectFUl(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK advance_animation_playback(void *);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(int, void *, int, int);
s32 TObjEneMe1GiGueBarrier__sub_802CAC04(int);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(int);
s32 update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(int);
void run_task__22TObjEneMe1GiGueBarrierFv(u8 *arg0);
u16 obj_getField1c(void *);
u8 * TObjMotion__ct(void *);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void *);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(int);
s32 update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
M2C_UNK TObjEneMe1GiGueBarrier__sub_802CABF4(void *);
extern RecoveredGlobal_80325BCC_lbl_804ECD40 lbl_804ECD40;
extern M2C_UNK __vt__22TObjEneMe1GiGueBarrier[];
extern s32 lbl_805D4198;
extern s32 lbl_805D6C60;
u8 *TObjEneMe1GiGueBarrier__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
extern s32 lbl_805D6C60;
extern const f32 lbl_805DF620;
extern const f32 lbl_805DF624;
extern const f32 lbl_805DF628;
extern const f32 lbl_805DF62C;
void render__22TObjEneMe1GiGueBarrierFv(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGueBarrier__sub_80325CC0(void);
void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1);
void init_global__22TObjEneMe1GiGueBarrierFv(void);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void *);
s32 get_barrier_count__15TObjEneMe1GiGueFv();

extern M2C_UNK __vt__22TObjEneMe1GiGueBarrier[];

#pragma push
#pragma opt_common_subs off
void render__22TObjEneMe1GiGueBarrierFv(u8 *arg0) {
    if ((u32) (*(u32 *)&lbl_805D6C60) == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
        if (((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DF620, lbl_805DF620, lbl_805DF624) == 0) {
            return;
        }
        goto block_6;
    }
    if (((VObj_18_ca64a0 *)(arg0))->m9(lbl_805DF628, lbl_805DF62C, lbl_805DF624) != 0) {
block_6:
        if (toggle_flag_9__10TObjPlayerFPv((void *) (arg0)) == 0) {
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            end_effect_render__13TParticleCtrlFv();
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
        }
    }
}
#pragma pop

void run_task__22TObjEneMe1GiGueBarrierFv(u8 *arg0) {
    s32 temp_r0_2;
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xFC);
    if (temp_r0 == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (int) (update_and_get_pos__22TObjEneMe1GiGueBarrierFPv((int) (temp_r0))));
    M2C_FIELD(arg0, s32 *, 0x60) = get_timer__22TObjEneMe1GiGueBarrierFPv((int) (M2C_FIELD(arg0, u32 *, 0xFC)));
    advance_animation_playback((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x108) = (s32) (M2C_FIELD(arg0, s32 *, 0x108) - 1);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x104);
    switch (temp_r0_2) {
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            M2C_FIELD(arg0, s32 *, 0x104) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
                play_sound_effect((int) (0x4003A316), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            } else {
                play_sound_effect((int) (0x3A346), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
        break;
    default:
    case 1:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x108) <= 0) || (TObjEneMe1GiGueBarrier__sub_802CAC04((int) (M2C_FIELD(arg0, u32 *, 0xFC))) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x104) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        }
        break;
    }
}

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueBarrier;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneMe1GiGueBarrier__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    u8 *temp_r5;
    TObjMotion__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80325BCC___vt__22TObjEneMe1GiGueBarrier *)&__vt__22TObjEneMe1GiGueBarrier).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4198;
    M2C_FIELD(arg0, u8 **, 0xFC) = arg2;
    M2C_FIELD(arg0, u16 *, 0x100) = obj_getField1c(M2C_FIELD(arg0, u8 **, 0xFC));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (int)((void *) (update_and_get_pos__22TObjEneMe1GiGueBarrierFPv((int)((s32) M2C_FIELD(arg0, u8 **, 0xFC))))));
    M2C_FIELD(arg0, s32 *, 0x60) = get_timer__22TObjEneMe1GiGueBarrierFPv((int)(M2C_FIELD(arg0, u8 **, 0xFC)));
    M2C_FIELD(arg0, s32 *, 0x108) = get_field_44c__22TObjEneMe1GiGueBarrierFPv(M2C_FIELD(arg0, u8 **, 0xFC));
    TObjEneMe1GiGueBarrier__sub_802CABF4((void *) (M2C_FIELD(arg0, u8 **, 0xFC)));
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D6C60), u8 **, 0x42C), s32 *, 0x28);
    temp_r5 = (u8 *)(M2C_FIELD((*(u8 * *)&lbl_805D6C60), u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r5, s32 *, 0x2C);
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (&lbl_804ECD40.value), (int) (temp_r5));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD((*(u8 * *)&lbl_805D6C60), s32 *, 0x430)));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    return arg0;
}

void TObjEneMe1GiGueBarrier__sub_80325CC0(void) {  }

extern s32 lbl_805D6C60;

void * TObjEneMe1GiGueBarrier__sub_80325CC4(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjEneMe1GiGueBarrier__ct((u8 *)(o), (M2C_UNK)(arg0), (u8 *)(arg1));
    }
    return o;
}

void init_global__22TObjEneMe1GiGueBarrierFv(void) {
    lbl_805D6C60 = get_barrier_count__15TObjEneMe1GiGueFv();
}

}
