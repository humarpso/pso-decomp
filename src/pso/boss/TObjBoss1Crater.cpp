#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct VBase_18_5c1903 { char pad[0x18]; };

struct VObj_18_5c1903 : VBase_18_5c1903 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual M2C_UNK m21(s32, s32 *, void *, M2C_UNK, M2C_UNK);
    u8 pad1c[0x30 - 0x1C];
    u32 f30;
    u8 pad34[0xA4 - 0x34];
    struct Ent_8002C3FC *ents;
    s32 count;
};

struct Ent_8002C3FC { u8 pad0[0x18]; u32 flags; u8 pad1c[0x2C - 0x1C]; };

struct V2_8002C3FC { s32 a, b; };

struct Src_8002C3FC { u8 pad[0xAC]; s32 fAC; u8 padB0[0xC8 - 0xB0]; s32 fC8; };

struct Sub_8002C544 { u8 pad[0xC]; f32 fC; };

struct Crater_8002C544 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    s32 *vt;
    u8 pad1c[0x38 - 0x1C];
    u8 pos[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    Sub_8002C544 *fA4;
    u8 padA8[0xB0 - 0xA8];
    s32 fB0;
    void *fB4;
    s32 fB8[4];
    s32 fC8;
};

struct V3_8002C544 { f32 x, y, z; };

extern "C" {
M2C_UNK TBoss1Dragon__sub_8002AB6C(void *);
void TObjBoss1Crater__vt19(Src_8002C3FC *arg0, VObj_18_5c1903 *self, M2C_UNK arg2, s32 *arg3);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 isV2Mode__12TBoss1DragonFv();
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TBoss4Type2__sub_800874F4(void *, int, f32);
void fn_800BC4C8(void *);
void *TBoss8Dragon__sub_800BC5EC(void *, int);
s32 rand();
extern const V3_8002C544 lbl_80435560;
extern M2C_UNK __vt__15TObjBoss1Crater[];
extern Crater_8002C544 *TObjBoss1Crater__data_804FE1E8[];
extern s32 lbl_805D2688;
extern s32 TObjBoss1Crater__data_805D4B58;
extern const f32 lbl_805D8160;
extern const f32 lbl_805D8164;
Crater_8002C544 *TObjBoss1Crater__ct(Crater_8002C544 *self, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void *__dt__15TObjBoss1CraterFv(void *arg0, s16 arg1);
s32 is_count_below_limit__15TObjBoss1CraterFv(void);
void render__15TObjBoss1CraterFv(u8 *arg0);
void TBoss8Dragon__sub_800BC5A0(void *, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);

extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 some_id_805c6f74;

void render__15TObjBoss1CraterFv(u8 *arg0) {
    TObjPlayer__sub_803D9B2C();
    set_global_param__8TObjFishFi((void *) (lbl_805D4B54));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    some_id_805c6f74 |= 0x01000000;
    TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), s32 *, 8)));
    some_id_805c6f74 &= 0xFEFFFFFF;
    TObjPlayer__sub_803D9B78();
}

extern M2C_UNK __vt__15TObjBoss1Crater[];

void TObjBoss1Crater__vt19(Src_8002C3FC *arg0, VObj_18_5c1903 *self, M2C_UNK arg2, s32 *arg3) {
    s32 off;
    s32 i;
    Ent_8002C3FC *e;
    off = 0;
    for (i = 0; i < self->count; i++) {
        e = (Ent_8002C3FC *)((u8 *)self->ents + off);
        if (e->flags & 0x04000000) {
            V2_8002C3FC sp8 = *(V2_8002C3FC *)arg3;
            self->m21(arg0->fAC, (s32 *)&sp8, e, -1, -1);
            if (arg0->fC8 == 0x13 && !(self->f30 & 0x20)) {
                TBoss1Dragon__sub_8002AB6C(self);
            }
            return;
        }
        off += 0x2C;
    }
}

void *__dt__15TObjBoss1CraterFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss1Crater;
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xB4), 1); M2C_FIELD(arg0, M2C_UNK *, 0xB4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB0)); M2C_FIELD(arg0, M2C_UNK *, 0xB0) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjBoss1Crater__data_805D4B58;

Crater_8002C544 *TObjBoss1Crater__ct(Crater_8002C544 *self, void *arg1, void *arg2, void *arg3) {
    f32 r;
    void *p;
    s32 i;
    fn_800BC4C8(self);
    self->vt = ((s32 *)&__vt__15TObjBoss1Crater);
    r = lbl_80435560.z;
    self->f0 = lbl_805D2688;
    self->fA4->fC = r;
    VecCopy__FP3VecPC3Vec(self->pos, arg3);
    r = lbl_805D8164 * (f32)rand();
    self->f60 = (s32)(lbl_805D8160 * r);
    self->fB0 = TBoss4Type2__sub_800874F4(self->pos, 0x40, r);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (p != NULL) {
        p = TBoss8Dragon__sub_800BC5EC(p, 4);
    }
    self->fB4 = p;
    for (i = 0; i < 4; i++) {
        self->fB8[i] = 0;
    }
    if (TObjBoss1Crater__data_805D4B58 < 0x14) {
        TObjBoss1Crater__data_804FE1E8[TObjBoss1Crater__data_805D4B58++] = self;
    }
    switch (isV2Mode__12TBoss1DragonFv()) {
    case 0:
        self->fC8 = 1;
        break;
    case 1:
        self->fC8 = 0x13;
        break;
    }
    return self;
}

s32 is_count_below_limit__15TObjBoss1CraterFv(void) {
    return TObjBoss1Crater__data_805D4B58 < 0x14;
}

}
