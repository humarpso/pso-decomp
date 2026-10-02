#include "pso/TEneEffHamon.h"

TEneEffHamon::~TEneEffHamon() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800A4204_lbl_80490A18 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800A38A4___vt__12TEneEffHamon {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
typedef struct Hamon_800A36A8 {
    u8 pad0[0x1C];
    u8 mtx1C[0x34 - 0x1C];
    f32 scale;
    u8 pad38[0x40 - 0x38];
    f32 f40;
    u8 pad44[0x4C - 0x44];
    s32 delay;
    u8 color50[0x10];
} Hamon_800A36A8;

struct Vec_800A4064 { f32 x, y, z; };

struct Inner_800A4064 { u8 pad0[0xC]; s32 *p; };

struct Entry_800A4064 { u8 pad0[8]; Inner_800A4064 *inner; };

struct Obj_800A4064 {
    u8 pad0[0x38];
    s32 count;
    Vec_800A4064 base[(0x108 - 0x3C) / 12];
    Vec_800A4064 out[(0x1D4 - 0x108) / 12];
    Vec_800A4064 dir[22];
    u8 pad2DC[8];
    f32 scale[(0x328 - 0x2E4) / 4];
    s32 timer;
    u8 pad32C[0x330 - 0x32C];
    s32 type;
    u8 pad334[0x340 - 0x334];
    s32 active;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern const f32 lbl_805D99E0;
void run_task__12TEneEffHamonFv(u8 *arg0);
void TTecZondeEff__sub_800A39A8(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80490A18[];
extern s32 lbl_805D29E0;
u8 *TObjPlayer__sub_800A4204(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800A38A4___vt__12TEneEffHamon __vt__12TEneEffHamon;
extern s32 lbl_805D29D8;
extern const f32 lbl_805D99E4;
extern const f32 lbl_805D99E8;
extern const f32 lbl_805D99EC;
extern s32 tl_06;
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_chunk_material_override_pair(u32, u32);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK draw_chunk_object(s32);
extern u8 lbl_804A7418[];
extern u8 lbl_8050BEC0[];
extern u8 lbl_8058D4C0[];
extern int lbl_805D5030;
extern int lbl_805D5034;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__12TEneEffHamonFv(Hamon_800A36A8 *o);
void TTecZondeEff__sub_800A39A8(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern Entry_800A4064 *lbl_80500970[];
extern s32 lbl_805D5038;
extern const f32 lbl_805D99F8;
extern const f32 lbl_805D9A04;
extern const f32 lbl_805D9A08;
void TObjPlayer__sub_800A4064(Obj_800A4064 *self);
}

extern "C" {

void TEneEffHamon__sub_800A380C(void);
void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1);
void init_fish_effects__12TEneEffHamonFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int get_bml_model(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__12TEneEffHamonFv(Hamon_800A36A8 *o) {
    f32 s;
    if (o->delay > 0) {
        return;
    }
    lbl_805D5660 = some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= 0x810;
    set_chunk_material_override_pair(0xFFFF00FF, 0x800);
    set_global_param__8TObjFishFi(lbl_805D5034);
    set_chunk_material_color(o->color50);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(o->mtx1C);
    s = o->f40 * o->scale;
    scale_matrix(0, s, s, s);
    draw_chunk_object(lbl_805D5030);
    pop_matrix();
    set_chunk_material_color(lbl_804A7418);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
    some_id_805c6f74 = lbl_805D5660;
}

void run_task__12TEneEffHamonFv(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 - 1);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + M2C_FIELD(arg0, f32 *, 0x44));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + M2C_FIELD(arg0, f32 *, 0x48));
    if (M2C_FIELD(arg0, f32 *, 0x50) <= lbl_805D99E0) {
        queue_destruction__7TObjectFv();
    }
}

void TEneEffHamon__sub_800A380C(void) {  }

    extern int lbl_805D500C;
    extern int lbl_805D5030;
    extern int lbl_805D5034;
void init_fish_effects__12TEneEffHamonFv(void) { lbl_805D5030 = get_bml_model((void*)(lbl_805D500C), (void*)3); lbl_805D5034 = TObjFish__sub_8001EDB0((void*)(lbl_805D500C), (void*)3); }

extern M2C_UNK lbl_80490A18[];

typedef char RecoveredGlobal_800A38A4___vt__12TEneEffHamon_size[sizeof(RecoveredGlobal_800A38A4___vt__12TEneEffHamon) == 0x18 ? 1 : -1];
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject((void *)((void *) (arg0)), (void *)((int) (tl_06)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TEneEffHamon.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29D8;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D99E4;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x1C), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D99E8;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg3;
    if (arg2 <= 0) {
        arg2 = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805D99E4 / (f32) arg2);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (lbl_805D99EC / (f32) arg2);
    return arg0;
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800A4064(Obj_800A4064 *self) {
    s32 i;
    if (self->active != 0) {
        TTecZondeEff__sub_800A39A8(self);
        lbl_805D5038 = *lbl_80500970[0][self->type].inner->p;
        for (i = 0; i < self->count; i++) {
            self->scale[i] = lbl_805D99F8 * (lbl_805D9A08 * TBoss8Dragon__sub_803D64C0(self->timer * 0x1800) + lbl_805D9A04);
        }
        for (i = 0; i < self->count; i++) {
            f32 s = self->scale[i];
            self->out[i].x = self->dir[i].x * s + self->base[i].x;
            self->out[i].y = self->dir[i].y * s + self->base[i].y;
            self->out[i].z = self->dir[i].z * s + self->base[i].z;
        }
        self->timer++;
    }
}
#pragma pop

void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490A18;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_800A4204_lbl_80490A18_size[sizeof(RecoveredGlobal_800A4204_lbl_80490A18) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_800A4204(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800A4204_lbl_80490A18 *)&lbl_80490A18).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29E0;
    M2C_FIELD(arg0, s32 *, 0x338) = arg2;
    M2C_FIELD(arg0, s32 *, 0x33C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x330) = 0;
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    M2C_FIELD(arg0, s32 *, 0x344) = arg4;
    TTecZondeEff__sub_800A39A8(arg0);
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x32C) = 0xFF000000;
    M2C_FIELD(arg0, s32 *, 0x340) = 0;
    return arg0;
}

}
