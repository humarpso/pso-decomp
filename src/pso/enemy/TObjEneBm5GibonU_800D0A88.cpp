#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800D0AE8 { f32 x, y, z; };

struct Obj_800D0AE8 { u8 pad[0x38]; Vec_800D0AE8 pos; };

struct Seq_800D0A94 { u8 pad0[4]; u32 count; };

struct Ent_800D0A94 { s32 w0; Seq_800D0A94 *seq; };

struct Cur_800D0A94 { u8 pad0[0x74]; s32 idx; };

struct Obj_800D0A94 { u8 pad0[0xD8]; Cur_800D0A94 *cur; Ent_800D0A94 *ents; };

struct Vec_800D0BD8 { f32 x, y, z; };

struct Obj_800D0BD8 { u8 pad[0x38]; Vec_800D0BD8 pos; };

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800D0AE8 *dst, const Vec_800D0AE8 *src);
int TObjEneBm5GibonU__sub_800CCC6C(void *, void *);
extern const f32 lbl_805DA240;
void TObjEneBm5GibonU__sub_800D0AE8(Obj_800D0AE8 *self, Vec_800D0AE8 *dir);
extern const f32 TObjEneBm5GibonU__data_805DA174;
f32 TObjEneBm5GibonU__sub_800D0A94(Obj_800D0A94 *arg0, f32 farg0);
f32 TObjPlayer__sub_8001978C(f32);
extern const f32 TObjEneBm5GibonU__data_805DA15C;
extern const f32 TObjEneBm5GibonU__data_805DA168;
f32 TObjEneBm5GibonU__sub_800D0BD8(Obj_800D0BD8 *arg0, Vec_800D0BD8 *arg1, Vec_800D0BD8 *arg2);
}

extern "C" {

int is_active__16TObjEneBm5GibonUFPv(void* p);
void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0);
void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0);
void set_flag__16TObjEneBm5GibonUFPv(void* p);
void update_target__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK select_and_apply_target__14TObjEneEpsilonFPvf(f32);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

int is_active__16TObjEneBm5GibonUFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

f32 TObjEneBm5GibonU__sub_800D0A94(Obj_800D0A94 *arg0, f32 farg0) {
    return TObjEneBm5GibonU__data_805DA174 / ((f32)(arg0->ents[arg0->cur->idx].seq->count - 1) / farg0);
}

#pragma push
#pragma fp_contract on
void TObjEneBm5GibonU__sub_800D0AE8(Obj_800D0AE8 *self, Vec_800D0AE8 *dir) {
    Vec_800D0AE8 v;
    VecCopy__FP3VecPC3Vec(&v, &self->pos);
    v.x = lbl_805DA240 * dir->x + v.x;
    v.z = lbl_805DA240 * dir->z + v.z;
    TObjEneBm5GibonU__sub_800CCC6C(self, &v);
}
#pragma pop

void play_sound_variant__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        update_linked_position__14TObjEneEpsilonFPv(lbl_805DA244);
        return;
    }
    update_linked_position__14TObjEneEpsilonFPv(lbl_805DA248);
}

extern f32 lbl_805DA244;
extern f32 lbl_805DA248;

void update_target__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA244);
        return;
    }
    select_and_apply_target__14TObjEneEpsilonFPvf(lbl_805DA248);
}

void set_flag__16TObjEneBm5GibonUFPv(void* p) { *(u32*)((char*)p + 0x4ac) |= 0x1; }

#pragma push
#pragma fp_contract on
f32 TObjEneBm5GibonU__sub_800D0BD8(Obj_800D0BD8 *arg0, Vec_800D0BD8 *arg1, Vec_800D0BD8 *arg2) {
    f32 dx;
    f32 dz;
    dx = arg0->pos.x - arg1->x;
    dz = arg0->pos.z - arg1->z;
    f32 d = dx * dx + dz * dz;
    f32 inv = TObjEneBm5GibonU__data_805DA168 / TObjPlayer__sub_8001978C(d);
    arg2->x = dx * inv;
    arg2->y = TObjEneBm5GibonU__data_805DA15C;
    arg2->z = dz * inv;
    return d * inv;
}
#pragma pop

void set_anim_by_state__16TObjEneBm5GibonUFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return;
    }
    TObjEneDD__sub_800BBA18(arg0, 6);
}

}
