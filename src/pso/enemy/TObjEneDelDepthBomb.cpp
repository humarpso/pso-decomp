#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb {
    M2C_UNK value;
    u8 remaining[0x138];
};

struct Vec_803133BC { f32 x; f32 y; f32 z; };

struct Bomb_803133BC {
    u8 pad0[0x38];
    Vec_803133BC pos;
    u8 pad1[0x248 - 0x44];
    u8 col[0x334 - 0x248];
    u8 f334[4];
    f32 f338;
    u8 pad2[4];
    f32 f340;
    f32 f344;
    s32 f348;
    s32 cnt;
    s32 f350;
    f32 f354;
};

extern "C" {
int TObjEneDelDepthBomb__sub_80313268(void);
s32 TObjPlayer__sub_80019038(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_depth_radius__19TObjEneDelDepthBombFPv(void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern M2C_UNK __vt__19TObjEneDelDepthBomb[];
extern s32 lbl_805D411C;
extern const f32 TObjEneDelDepth__data_805DF258;
u8 *TObjEneDelDepthBomb__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
int TObjEneDelDepthBomb__sub_80313268(void);
s32 create__11TTecRaBartaFPvPvPvPv(s32, void *, void *, s32);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DF264;
extern const f32 TObjEneDelDepth__data_805DF268;
extern const f32 TObjEneDelDepth__data_805DF26C;
void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o);
}

extern "C" {

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1);
void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int TObjPlayer__sub_80313138(void* a0 = 0);
int TObjPlayer__sub_803131AC(void);
int TObjPlayer__sub_80313218(void* p);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int check_flag_at_4__10TObjPlayerFPv(void* p);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int get_max_children__10TObjPlayerFPv(void* a0 = 0);
int query_field40__10TObjPlayerFPv(void* p);
void set_field_0__10TObjPlayerFPvs(void* p, s16 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
void update_children__10TObjPlayerFPv(void* p);

int TObjEneDelDepthBomb__sub_80313268(void) { return 0; }

void run_task__19TObjEneDelDepthBombFv(Bomb_803133BC *o) {
    s32 done = 0;
    f32 t;
    o->f338 += lbl_805DF264;
    TBoss4Zako__sub_803D8910(&o->pos, o->f334);
    if (++o->cnt > 0x14F) {
        done = 1;
    }
    Vec_803133BC v = o->pos;
    v.y += TObjEneDelDepth__data_805DF268;
    if (TObjPlayer__sub_80156844(o, &v, o->col) != 0) {
        o->f340 = v.y;
        if (o->pos.y <= o->f340) {
            done = 1;
        }
    } else {
        done = 1;
    }
    if (((int (*)(void *))TObjEneDelDepthBomb__sub_80313268)(o) != 0) {
        done = 1;
    }
    t = o->f344 + o->f354;
    o->f344 = t;
    if (t >= TObjEneDelDepth__data_805DF26C) {
        done = 1;
    }
    if (done != 0) {
        Vec_803133BC w;
        VecCopy__FP3VecPC3Vec(&w, &o->pos);
        w.y += TObjEneDelDepth__data_805DF268;
        create__11TTecRaBartaFPvPvPvPv(o->f348, &o->pos, &w, o->f350);
        queue_destruction__7TObjectFv(o);
    }
}

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x358);
    if (o != NULL) {
        o = TObjEneDelDepthBomb__ct((u8 *)(o), (M2C_UNK)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
    return o;
}

extern M2C_UNK __vt__19TObjEneDelDepthBomb[];

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjEneDelDepthBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb_size[sizeof(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb) == 0x13C ? 1 : -1];
u8 *TObjEneDelDepthBomb__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f30;
    f32 temp_f31;
    TObjPlayer__sub_80019038((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803135B4___vt__19TObjEneDelDepthBomb *)&__vt__19TObjEneDelDepthBomb).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D411C;
    M2C_FIELD(arg0, s32 *, 0x348) = arg2;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x10), s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg3));
    temp_f30 = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_f31 = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x354) = get_depth_radius__19TObjEneDelDepthBombFPv((void *) (M2C_FIELD(arg0, u8 **, 0x10)));
    M2C_FIELD(arg0, f32 *, 0x334) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f30);
    M2C_FIELD(arg0, f32 *, 0x338) = (f32) TObjEneDelDepth__data_805DF258;
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) (M2C_FIELD(arg0, f32 *, 0x354) * temp_f31);
    M2C_FIELD(arg0, s32 *, 0x350) = arg4;
    M2C_FIELD(arg0, f32 *, 0x344) = (f32) TObjEneDelDepth__data_805DF258;
    M2C_FIELD(arg0, s32 *, 0x34C) = 0;
    return arg0;
}

}
