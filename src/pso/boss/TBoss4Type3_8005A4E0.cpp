#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

extern "C" {
extern RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 TBoss4Type3__data_80486FC8;
extern const f32 TBoss4Type3__data_805D8C40;
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss4Type3__sub_8005A86C(void* p);
void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
void copy_pair__11TBoss4Type3FPvPv(void* p, void* q);
s32 create__11TBoss4Type3Fi(s32 arg0);
void draw__11TBoss4Type3FPv(void *arg0);
void init_effect__11TBoss4Type3FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss4Type3__ct(s32, s32, s32);
void TBoss4Type3__sub_8005A438(void *);
void TOHangerMachine01__sub_803D9C00(void *);
s32 TObjControl__ct(s32, s32);
void TObjPlayer__sub_80051E9C(int, f32);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
void end_effect_render__13TParticleCtrlFv(void);
void toggle_particle_effect__10TObjPlayerFv(void *);

void copy_pair__11TBoss4Type3FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

typedef char RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8_size[sizeof(RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8) == 0xC8 ? 1 : -1];
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3F0) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
        M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(((u8 *)(&TBoss4Type3__data_80486FC8.value) + (arg1 * 0x14)), s32 *, 0);
    }
}

void draw__11TBoss4Type3FPv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv(arg0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TBoss4Type3__sub_8005A438(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1152));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

extern const f32 lbl_805D8C68;

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C68);
}

void TBoss4Type3__sub_8005A86C(void* p) { draw__11TBoss4Type3FPv((void *)(p)); }

extern const f32 TBoss4Type3__data_805D8C34;

void init_effect__11TBoss4Type3FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type3__data_805D8C34;
    TBoss3Volopt__sub_8022675C(0x4003B734, arg0 + 0x38, 0, 1, arg0);
}

extern s32 tl_04;

s32 create__11TBoss4Type3Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x530);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type3__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
