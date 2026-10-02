#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_800B8B08 { u8 vec[0x18]; s32 f18; u32 flags; };

struct Obj_800B8B08 { u8 pad0[0x24]; s32 f24; u8 pad28[0x34 - 0x28]; s32 f34; u8 pad38[0xC0 - 0x38]; f32 fc0; u8 padc4[0xF8 - 0xC4]; s32 ff8; Rec_800B8B08 *recs; u8 pad100[4]; s32 count; };

struct Vec_800B8BB4 { f32 x, y, z; };

struct Rec_800B8BB4 { Vec_800B8BB4 pos; Vec_800B8BB4 v2; s32 f18; u32 flags; };

struct Hit_800B8BB4 { u8 pad0[4]; Vec_800B8BB4 *pos; };

struct Grass_800B8BB4 {
    u8 pad0[0x3C];
    f32 f3C;
    u8 pad40[4];
    Vec_800B8BB4 f44;
    u8 pad50[0xC0 - 0x50];
    f32 fC0;
    u8 padC4[4];
    f32 fC8;
    u8 padCC[0xFC - 0xCC];
    Rec_800B8BB4 *recs;
    f32 f100;
    s32 count;
    s32 f108;
    u8 f10C[4];
};

extern "C" {
s32 reset_transform_state__10TObjPlayerFv();
s32 set_position_vec3__10TObjPlayerFPvPv(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(int);
s32 TCameraCtrl__sub_803D9858(int);
s32 set_global_param__8TObjFishFi(int);
s32 TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
void render__10TObjCGrassFv(Obj_800B8B08 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 *csnVectorUnder(void *, void *, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern s32 lbl_805D53A4;
extern const f32 lbl_805D9E60;
extern const f32 TObjCGrass__data_805D9E64;
void run_task__10TObjCGrassFv(u8 *arg0);
}

extern "C" {

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1);
void* fn_800B8B00(void* p);
void release_global_805D5130__10TObjCGrassFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjEneBm5Wolf__sub_800B8AF8(void* p);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void free__11TOBoss4RockFUi(void *);

struct Stack_800B8DC4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 check_v2_mode__9TObjEneDDFv();
u8 *TObjEneDD__sub_800BB940(M2C_UNK *, M2C_UNK *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
struct RecoveredGlobal_800B8DC4_lbl_8043B628 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B628_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B628) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B628 lbl_8043B628;
struct RecoveredGlobal_800B8DC4_lbl_8043B638 {
    M2C_UNK value;
    u8 remaining[0x10];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B638_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B638) == 0x14 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B638 lbl_8043B638;
struct RecoveredGlobal_800B8DC4_lbl_80492500 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_80492500_size[sizeof(RecoveredGlobal_800B8DC4_lbl_80492500) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_80492500 lbl_80492500;
extern const f32 TObjCGrass__data_805D9E64;
extern const f32 lbl_805D9E68;
void TObjCGrass__sub_800B8DC4(void);

void* fn_800B8B00(void* p) { return (char*)p + 0x3e8; }

extern u32 lbl_805D5130;

void render__10TObjCGrassFv(Obj_800B8B08 *arg0) {
    s32 i;
    set_global_param__8TObjFishFi(arg0->f24);
    for (i = 0; i < arg0->count; i++) {
        if (!(arg0->recs[i].flags & 1)) {
            push_matrix_from(0);
            set_position_vec3__10TObjPlayerFPvPv(0, &arg0->recs[i]);
            rotate_matrix_y(0, arg0->recs[i].f18);
            TObjEneSlimeOne__sub_803E4AF4(arg0->f34, arg0->ff8, arg0->fc0);
            reset_transform_state__10TObjPlayerFv();
            TCameraCtrl__sub_803D9858(1);
        }
    }
}

void run_task__10TObjCGrassFv(u8 *arg0) {
    s32 i;
    Grass_800B8BB4 *self = (Grass_800B8BB4 *)arg0;
    Vec_800B8BB4 a;
    Vec_800B8BB4 b;
    Hit_800B8BB4 *hit;
    self->fC0 += self->fC8;
    if (self->f100 < self->fC0) {
        self->fC0 -= self->f100;
    }
    for (i = 0; i < self->count; i++) {
        VecCopy__FP3VecPC3Vec(&a, &self->recs[i].pos);
        VecCopy__FP3VecPC3Vec(&b, &self->recs[i].v2);
        VecCopy__FP3VecPC3Vec(&self->f44, &a);
        TBoss4Zako__sub_803D8910(&a, &b);
        if (i == lbl_805D53A4 % self->count) {
            hit = (Hit_800B8BB4 *)csnVectorUnder(&a, self->f10C, 1);
            if (hit != NULL) {
                VecCopy__FP3VecPC3Vec(&a, hit->pos);
                b.y += lbl_805D9E60;
                self->f44.y += b.y;
                if (a.y < self->f44.y) {
                    a.y = self->f44.y;
                } else {
                    b.y = TObjCGrass__data_805D9E64;
                }
                VecCopy__FP3VecPC3Vec(&self->recs[i].pos, &a);
                VecCopy__FP3VecPC3Vec(&self->recs[i].v2, &b);
            } else {
                self->recs[i].flags |= 1;
            }
        } else if (self->f3C <= a.y) {
            b.y = TObjCGrass__data_805D9E64;
        } else {
            b.y += lbl_805D9E60;
        }
        VecCopy__FP3VecPC3Vec(&self->recs[i].pos, &a);
        VecCopy__FP3VecPC3Vec(&self->recs[i].v2, &b);
    }
    if (self->f108-- < 0) {
        queue_destruction__7TObjectFv(self);
    }
}

void release_global_805D5130__10TObjCGrassFv(void) {
    if ((u32) lbl_805D5130 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5130, 1);
        lbl_805D5130 = 0U;
    }
}

void TObjCGrass__sub_800B8DC4(void) {
    Stack_800B8DC4 stack;

    u8 *temp_r3;
    u8 *temp_r5;
    u8 *var_r0;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5130 = (u32) TObjEneDD__sub_800BB940(&lbl_80492500.value, &lbl_8043B638.value);
    } else {
        temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_80492500.value, 0, 0, 0));
        }
        lbl_805D5130 = (u32) var_r0;
    }
    stack.sp8 = M2C_FIELD(&lbl_8043B628.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043B628.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043B628.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043B628.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D5130, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D5130, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x36), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (lbl_805D9E68), (f32) (TObjCGrass__data_805D9E64));
}

extern M2C_UNK __vt__10TObjCGrass[];

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCGrass;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
