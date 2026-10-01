#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800B7808 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
};

struct Seq_800B76E0 { u8 pad0[4]; u32 count; };

struct Ent_800B76E0 { s32 w0; Seq_800B76E0 *seq; };

struct Cur_800B76E0 { u8 pad0[0x94]; s32 idx; };

struct Obj_800B76E0 { u8 pad0[0xD8]; Cur_800B76E0 *cur; Ent_800B76E0 *ents; };

typedef s32 M2C_UNK;
typedef struct Vec_800B78F8 {
    f32 x, y, z;
} Vec_800B78F8;

typedef struct Wolf_800B78F8 {
    u8 pad0[0x60];
    s32 facing;
    u8 pad64[0x308 - 0x64];
    Vec_800B78F8 knockback;
} Wolf_800B78F8;

struct Vec_800B79E0 { f32 x, y, z; };

struct Obj_800B79E0 { u8 pad[0x38]; Vec_800B79E0 pos; };

extern "C" {
s32 TObjEneDellBiter__sub_80087350(s32, s32);
extern const f32 TObjEneBm5Wolf__data_805D9DE0;
void TObjEneBm5Wolf__sub_800B7808(s32 arg0, u8 *arg1);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
extern const f32 TObjEneBm5Wolf__data_805D9DE8;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
void TObjEneBm5Wolf__sub_800B7794(u8 *arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int get_flag_bit0__14TObjEneBm5WolfFPv(void* p);
s32 TObjEneEpsilon__sub_800B96A4(void *);
s32 update_velocity__9TObjEneDDFPv(void *);
s32 transform_relative_position__9TObjEneDDFPvPv(void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f64 TObjEneBm5Wolf__data_8043B5B0;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9DBC;
extern const f32 TObjEneBm5Wolf__data_805D9DEC;
extern const f32 TObjEneBm5Wolf__data_805D9DF0;
extern const f32 lbl_805D9E44;
s32 TObjEneBm5Wolf__sub_800B75B4(u8 *arg0);
extern const f32 lbl_805D9D9C;
f32 TObjEneBm5Wolf__sub_800B76E0(Obj_800B76E0 *arg0, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 TObjBoss2Tunnel__sub_8007E84C(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f64 TObjEneBm5Wolf__data_8043B5B0;
extern const f32 TObjEneBm5Wolf__data_805D9D78;
s32 TObjEneBm5Wolf__sub_800B78F8(Wolf_800B78F8 *s, s32 *heading);
f32 TObjPlayer__sub_8001978C(f32);
extern const f32 TObjEneBm5Wolf__data_805D9D78;
extern const f32 TObjEneBm5Wolf__data_805D9D8C;
f32 TObjEneBm5Wolf__sub_800B79E0(Obj_800B79E0 *self, Vec_800B79E0 *target, Vec_800B79E0 *out);
}

extern "C" {

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2);
int get_flag_bit0__14TObjEneBm5WolfFPv(void* p);
void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0);
void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0);
void select_target__14TObjEneBm5WolfFPv(void *arg0);
void set_anim_state__14TObjEneBm5WolfFPv(void *arg0);
void set_attack_flag__14TObjEneBm5WolfFPv(void* p);
void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

void TObjEneBm5Wolf__sub_800B75A8(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x414) = arg1;
    M2C_FIELD(arg0, s16 *, 0x418) = arg2;
}

#pragma push
#pragma fp_contract on
s32 TObjEneBm5Wolf__sub_800B75B4(u8 *arg0) {
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f0;
    if (transform_relative_position__9TObjEneDDFPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x390))) != 0) {
        TObjEneEpsilon__sub_800B96A4((void *) (arg0));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        if (((s32)get_flag_bit0__14TObjEneBm5WolfFPv((void*)((void *) (arg0)))) != 0) {
            var_f0 = TObjEneBm5Wolf__data_805D9DEC;
        } else {
            var_f0 = lbl_805D9E44;
        }
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x3A8);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x3A0);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + ((TObjEneBm5Wolf__data_805D9DBC * temp_f4) + (temp_f5 * var_f0)));
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) + ((TObjEneBm5Wolf__data_805D9DBC * temp_f5) - (temp_f4 * var_f0)));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        return (s32) (TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(arg0, f32 *, 0x3A0), (f64) M2C_FIELD(arg0, f32 *, 0x3A8)));
    }
    M2C_FIELD(arg0, f32 *, 0x3A0) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneBm5Wolf__data_805D9D78;
    M2C_FIELD(arg0, f32 *, 0x3A8) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x394)), (void *)((void *) (arg0 + 0x38)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) ((TObjEneBm5Wolf__data_805D9DF0 * M2C_FIELD(arg0, f32 *, 0x3A0)) + M2C_FIELD(arg0, f32 *, 0x394));
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) ((TObjEneBm5Wolf__data_805D9DF0 * M2C_FIELD(arg0, f32 *, 0x3A8)) + M2C_FIELD(arg0, f32 *, 0x39C));
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) TObjEneBm5Wolf__data_805D9DF0;
    return M2C_FIELD(arg0, s32 *, 0x60);
}
#pragma pop

int get_flag_bit0__14TObjEneBm5WolfFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

extern const f32 lbl_805D9E48;

f32 TObjEneBm5Wolf__sub_800B76E0(Obj_800B76E0 *arg0, f32 farg0) {
    return lbl_805D9D9C / ((f32)(arg0->ents[arg0->cur->idx].seq->count - 1) / farg0);
}

void play_proximity_effect__14TObjEneBm5WolfFi(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, lbl_805D9E48) != 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void TObjEneBm5Wolf__sub_800B7794(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DEC) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneBm5Wolf__data_805D9DE8) != 0)) {
        TBoss3Volopt__sub_8022675C((void *)(((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3C618)))), (void *)((u32) (arg0 + 0x38)), (int)(0), (int)(0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x1000));
    }
}

#pragma push
#pragma fp_contract on
void TObjEneBm5Wolf__sub_800B7808(s32 arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_800B7808, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800B7808, sp10) == 0x8) ? 1 : -1];
    Stack_800B7808 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    stack.sp8 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 0);
    stack.sp10 += TObjEneBm5Wolf__data_805D9DE0 * M2C_FIELD(arg1, f32 *, 8);
    TObjEneDellBiter__sub_80087350((s32) &stack.sp8, 0xF3);
}
#pragma pop

void play_variant_sound__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E4C);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D9E50);
}

extern f32 lbl_805D9E4C;
extern f32 lbl_805D9E50;

void select_target__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E4C);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805D9E50);
}

void set_attack_flag__14TObjEneBm5WolfFPv(void* p) { *(u32*)((char*)p + 0x408) |= 0x1; }

s32 TObjEneBm5Wolf__sub_800B78F8(Wolf_800B78F8 *s, s32 *heading) {
    Vec_800B78F8 v;
    Vec_800B78F8 side;
    s32 ret;
    VecCopy__FP3VecPC3Vec(&v, &s->knockback);
    v.y = TObjEneBm5Wolf__data_805D9D78;
    if (TObjEneBm5Wolf__data_805D9D78 != clamp_velocity__15TObjBoss2TunnelFPv(&v)) {
        *heading = (s32)(TObjEneBm5Wolf__data_8043B5B0 * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
        side.x = TBoss8Dragon__sub_803D64C0(s->facing);
        side.z = TBoss8Dragon__sub_803D64DC(s->facing);
        if (TObjBoss2Tunnel__sub_8007E84C(&side, &v) != 0) {
            ret = 0;
            *heading += 0x4000;
        } else {
            ret = 1;
            *heading -= 0x4000;
        }
    } else {
        ret = 0;
        *heading = s->facing;
    }
    *heading = (s16)*heading;
    return ret;
}

#pragma push
#pragma fp_contract on
f32 TObjEneBm5Wolf__sub_800B79E0(Obj_800B79E0 *self, Vec_800B79E0 *target, Vec_800B79E0 *out) {
    f32 dx;
    f32 dz;
    dz = self->pos.z - target->z;
    dx = self->pos.x - target->x;
    f32 distSq = dx * dx + dz * dz;
    f32 inv = TObjEneBm5Wolf__data_805D9D8C / ((f32 (*)(f32, f32))TObjPlayer__sub_8001978C)(distSq, self->pos.x);
    out->x = dx * inv;
    out->y = TObjEneBm5Wolf__data_805D9D78;
    out->z = dz * inv;
    return distSq * inv;
}
#pragma pop

void set_anim_state__14TObjEneBm5WolfFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3D8) != 0) {
        TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(6));
        return;
    }
    TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(5));
}

extern f32 TObjEneBm5Wolf__data_805D9DAC;

void set_state_by_timer__14TObjEneBm5WolfFi(s32 arg0) {
    if (calc_boss4_scale__10TObjPlayerFi() < TObjEneBm5Wolf__data_805D9DAC) {
        TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(8));
        return;
    }
    TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(9));
}

}
