#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct VB_802E74E4 { u8 pad[0xC]; };

struct VObj_802E74E4 : VB_802E74E4 { virtual void m0(int); };

struct Vec_802E7888 { f32 x, y, z; };

struct Ang_802E7888 { s32 x, y, z; };

struct Obj_802E7888 {
    u8 pad0[0x7B0];
    u32 f7B0;
    Vec_802E7888 pos;
    Vec_802E7888 v7C0;
};

extern "C" {
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DE9CC;
extern const f32 lbl_805DE9D0;
extern const f32 lbl_805DE9E8;
extern const f32 lbl_805DE9EC;
extern const float lbl_805DE9F0;
extern const f32 lbl_805DE9FC;
extern const f32 lbl_805DEA00;
extern const f32 lbl_805DEA04;
extern const f32 lbl_805DEA08;
extern const f32 lbl_805DEA0C;
s32 TObjPlayer__sub_802E76C8(u8 *arg0);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK free__11TOBoss4RockFUi(int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804E3BD8[];
u8 *TObjPlayer__sub_802E74E4(u8 *arg0, s16 arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_8001978C(f32);
s32 copy_vec3__11TBoss4Type2FPvPv(int, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
f32 TBoss6Type1__sub_803D9370(Vec_802E7888 *, Vec_802E7888 *);
extern const f64 lbl_80473FA8[];
void TObjFish__sub_802E7888(Obj_802E7888 *o);
}

extern "C" {

void TObjFish__sub_802E787C(void);
void *TObjPlayer__sub_802E6EB8(void *arg0, s16 arg1);
void TObjPlayer__sub_802E7084(void);
void TObjPlayer__sub_802E7088(void);
void *TObjPlayer__sub_802E7284(void *arg0, s16 arg1);
void TObjPlayer__sub_802E746C(void);
void TObjPlayer__sub_802E7470(void);
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
void destroy_child__8TObjFishFPv(void* p);
int get_instance__10TObjPlayerFv(void);
void *init_zeroed_object__10TObjPlayerFPv(void *arg0);
s32 *TBreakUpMdl__sub_8009705C(s32 *, s32);
s32 TObjPlayer__sub_802E75B8(void *, s32 *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
s32 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
int queue_destruction__7TObjectFv(void*);

    extern int lbl_805D6900;
int get_instance__10TObjPlayerFv(void) {  return lbl_805D6900; }

extern M2C_UNK lbl_804E3BA8[];

void *TObjPlayer__sub_802E6EB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3BA8;
        TObjPlayer__sub_802E74E4((u8 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_802E7084(void) {  }
void TObjPlayer__sub_802E7088(void) {  }

extern M2C_UNK lbl_804E3BC0[];

void *TObjPlayer__sub_802E7284(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3BC0;
        TObjPlayer__sub_802E74E4((u8 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_802E746C(void) {  }
void TObjPlayer__sub_802E7470(void) {  }
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 *temp_r4;
    s32 *var_r0;

    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (var_r0 != NULL) {
        var_r0 = TBreakUpMdl__sub_8009705C(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 **, 0x1C) = var_r0;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *temp_r4;
    TObjPlayer__sub_802E75B8(arg0, temp_r4);
    M2C_FIELD(arg0, s32 *, 0x28) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0x24) * 0x2C);
}

extern M2C_UNK lbl_804E3BD8[];

u8 *TObjPlayer__sub_802E74E4(u8 *arg0, s16 arg1) {
    VObj_802E74E4 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3BD8;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x28));
        temp_r3 = M2C_FIELD(arg0, VObj_802E74E4 **, 0x1C);
        if (temp_r3 != NULL) {
            temp_r3->m0(1);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *init_zeroed_object__10TObjPlayerFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E3BD8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

    extern float lbl_805D6910;
    extern const float lbl_805DE9F0;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
s32 TObjPlayer__sub_802E76C8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r30;
    var_r30 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805DE9E8);
        TBoss4Zako__sub_803D8910((void *) (arg0), (void *) (arg0 + 0xC));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
        if (temp_f1 < lbl_805DE9CC) {
            temp_f2 = M2C_FIELD(arg0, f32 *, 4);
            if (temp_f2 < lbl_805DE9FC) {
                temp_f3 = M2C_FIELD(arg0, f32 *, 0);
                temp_f4 = M2C_FIELD(arg0, f32 *, 8);
                if ((temp_f3 <= lbl_805DEA00) && (temp_f3 >= lbl_805DEA04) && (temp_f4 <= lbl_805DEA08) && (temp_f4 >= lbl_805DEA0C)) {
                    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f1 * lbl_805DE9D0);
                    M2C_FIELD(arg0, s32 *, 0x28) = 2;
                } else if (temp_f2 < (*(const f32 *)&lbl_805DE9F0)) {
                    var_r30 = 1;
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805DE9E8);
        TBoss4Zako__sub_803D8910((void *) (arg0), (void *) (arg0 + 0xC));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) - lbl_805DE9EC);
        if (M2C_FIELD(arg0, f32 *, 0x24) < lbl_805DE9CC) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DE9CC;
            M2C_FIELD(arg0, s32 *, 0x28) = 3;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((lbl_805DE9E8 * M2C_FIELD(arg0, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0x14));
        break;
    }
    return var_r30;
}
#pragma pop

void TObjFish__sub_802E787C(void) { lbl_805D6910 = lbl_805DE9F0; }

void TObjFish__sub_802E7888(Obj_802E7888 *o) {
    if (o->f7B0 != 0) {
        Vec_802E7888 d = o->pos;
        Ang_802E7888 ang;
        TBoss6Type1__sub_803D9370(&d, &o->v7C0);
        ang.x = -(s32)(lbl_80473FA8[0] * get_ad_end_text_start__10TObjPlayerFv(d.y, TObjPlayer__sub_8001978C(d.x * d.x + d.z * d.z))) - 0x4000;
        ang.y = (s32)(lbl_80473FA8[0] * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
        ang.z = 0;
        copy_pos__11TNowLoadingFPvPv(o->f7B0, &o->pos);
        copy_vec3__11TBoss4Type2FPvPv(o->f7B0, &ang);
    }
}

void destroy_child__8TObjFishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
