#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Vec_800E984C { f32 x, y, z; } Vec_800E984C;

typedef struct Tgt_800E984C { u8 pad[0x30]; u32 flags; u8 pad34[4]; Vec_800E984C pos; } Tgt_800E984C;

typedef struct Self_800E984C {
    u8 pad0[0x38];
    Vec_800E984C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x388 - 0x64];
    s32 f388;
    u8 pad38C[0x390 - 0x38C];
    s32 f390;
    u8 pad394[0x3CC - 0x394];
    s32 target;
    Vec_800E984C dest;
} Self_800E984C;

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnLookAt(void *, void *);
void create__22TObjEneSlimeTailAttackFiiii(void *, void *, s32, void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
s32 project_actor_to_ground(void *, void *, int);
Tgt_800E984C *get_player_by_client_id(s32);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DA66C;
extern const float lbl_805DA67C;
extern const f32 lbl_805DA6AC;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA710;
extern const f32 lbl_805DA714;
extern const f32 lbl_805DA718;
void TObjEneSlimeOne__sub_800E984C(Self_800E984C *self);
}

extern "C" {

void reset_display_state__15TObjEneSlimeOneFPv(void* a0);
void tick_timer__15TObjEneSlimeOneFPv(void *arg0);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

    extern const float lbl_805DA67C;
void reset_display_state__15TObjEneSlimeOneFPv(void* a0) { *(float*)((char*)a0 + 0x3b0) = lbl_805DA67C; *(float*)((char*)a0 + 0x3ac) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a8) = lbl_805DA67C; *(int*)((char*)a0 + 0x394) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)4); set_display_mode__15TObjEneSlimeOneFPvi(a0, (void*)2); }

void tick_timer__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}
#pragma push
#pragma fp_contract on
void TObjEneSlimeOne__sub_800E984C(Self_800E984C *self) {
    f32 r;
    s32 ang;
    s32 n;
    f32 len;
    Tgt_800E984C *t;
    t = get_player_by_client_id(self->target);
    if (t == NULL || (t->flags & 0x02000800)) {
        TObjEneSlimeOne__sub_800EAE78(self, 5);
        return;
    }
    VecCopy__FP3VecPC3Vec(&self->dest, &t->pos);
    r = lbl_805DA6AC * calc_boss4_scale__10TObjPlayerFi(self) + lbl_805DA710;
    ang = lbl_805DA714 * calc_boss4_scale__10TObjPlayerFi(self);
    self->dest.x = r * TBoss8Dragon__sub_803D64C0(ang) + self->dest.x;
    self->dest.z = r * TBoss8Dragon__sub_803D64DC(ang) + self->dest.z;
    Vec_800E984C dir = self->dest;
    TBoss6Type1__sub_803D9370(&dir, &self->pos);
    len = TBoss6Kakusan__sub_803D8BD8(&dir);
    if (lbl_805DA6B4 == len) {
        TObjEneSlimeOne__sub_800EAE78(self, 5);
        return;
    }
    n = len / lbl_805DA66C;
    if (TBoss6Kakusan__sub_803D8BD8(&dir) <= lbl_805DA718) {
        dir.x = (*(const f32 *)&lbl_805DA67C);
        dir.z = dir.y = lbl_805DA6B4;
    } else {
        TNpcPlayer__sub_803D97B4(&dir);
    }
    dir.x *= lbl_805DA66C;
    dir.y *= lbl_805DA66C;
    dir.z *= lbl_805DA66C;
    Vec_800E984C pos = self->pos;
    pos.y += lbl_805DA6AC;
    while (n > 0) {
        Vec_800E984C tmp = pos;
        if (project_actor_to_ground(self, &tmp, 0) == 0 || csnLookAt(&self->pos, &pos) != 0) {
            TObjEneSlimeOne__sub_800EAE78(self, 9);
            return;
        }
        n--;
        TBoss4Zako__sub_803D8910(&pos, &dir);
    }
    self->f390 = 0x5A;
    TObjEneSlimeOne__sub_800EC7F4((void*)((void *)self->f388), (void*)((void *)0));
    TBoss3Volopt__sub_8022675C(0x4003A318, &self->dest, 0, 0);
    create__22TObjEneSlimeTailAttackFiiii(self, &self->dest, self->f60, self);
    set_display_mode__15TObjEneSlimeOneFPvi((void*)(self), (void*)((void *)2));
}
#pragma pop

}
