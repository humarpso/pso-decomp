#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void release_object__10TBoss6RockFPv(void* p);
void TBoss6Rock__sub_80353FF0(void *);
void TBoss6Rock__sub_803542E8(void *, s32);
void TBoss6Rock__sub_8035A460(void *, s32);
void TBoss6Rock__sub_80354494(u8 *arg0);
extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;
extern const f32 lbl_805DFF98;
extern const f32 lbl_805DFFA4;
void TBoss6Rock__sub_8035461C(void *arg0);
}

extern "C" {

int TBoss6Rock__sub_80353A04(void);
int TBoss6Rock__sub_80353A0C(void);
void check_and_destroy__10TBoss6RockFPv(void* p);
void *create__10TBoss6RockFv(void);
void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1);
s32 get_point__10TBoss6RockFiPvPv(s32 arg0, void *arg1, f32 *arg2);
void *init_object__10TBoss6RockFPvPv(void *arg0, void *);
void release_object__10TBoss6RockFPv(void* p);
void render_if_active__10TBoss6RockFPv(u8 *arg0);
void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0);
s32 TBoss6PlotFalz__sub_802AB6CC(void *, f32);
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
s32 TBoss6Rock__sub_80353E10();
void *TBoss6Rock__sub_80354148(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void VecCopy__FP3VecPC3Vec(void *, const void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
int is_active__10TBoss6RockFv(void*);
int queue_destruction__7TObjectFv(void*);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_global_param__8TObjFishFi(int);

void set_target__10TBoss6RockFPviiiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x20)), (const void *)((void *) (arg2)));
        copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x30), (void *) (arg3));
        M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
        M2C_FIELD(arg0, s32 *, 0x40) = arg5;
    }
}

extern const f32 TBoss6Rock__data_805DFF48;
extern const f32 TBoss6Rock__data_805DFF4C;

void render_if_active__10TBoss6RockFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 0) && (TBoss6PlotFalz__sub_802AB6CC((void *) (arg0 + 0x20), (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - TBoss6Rock__data_805DFF48)) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x20));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x3C)));
        TBoss6PlotFalz__sub_802ABF44((f32) (TBoss6Rock__data_805DFF4C));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x40)));
        reset_fish_globals__8TObjFishFv();
        TObjPlayer__sub_803D9B78();
    }
}

void check_and_destroy__10TBoss6RockFPv(void* p) { if (is_active__10TBoss6RockFv(p) == 0) { *(int*)((char*)p + 0x1c) = 0; queue_destruction__7TObjectFv(p); } }

extern M2C_UNK lbl_804F1280[];

void *destroy__10TBoss6RockFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F1280[];

void *init_object__10TBoss6RockFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1280;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern void *tl_06;

void *create__10TBoss6RockFv(void) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = init_object__10TBoss6RockFPvPv((void *)((void *)(o)), (void *)((void *)(tl_06)));
    }
    return o;
}

    extern int TBoss6Rock__data_805D6EF4;
int TBoss6Rock__sub_80353A04(void) {  return TBoss6Rock__data_805D6EF4; }

    extern int TBoss6Rock__data_805D6EF0;
int TBoss6Rock__sub_80353A0C(void) {  return TBoss6Rock__data_805D6EF0; }

extern u8 TBoss6Rock__data_805437F8[];

s32 get_point__10TBoss6RockFiPvPv(s32 arg0, void *arg1, f32 *arg2) {
    if (TBoss6Rock__sub_80353E10() == 0) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *)(arg1), (const void *)(&TBoss6Rock__data_805437F8[arg0 * 0xC]));
    *arg2 = M2C_FIELD(TBoss6Rock__sub_80354148(arg0), f32 *, 4);
    return 1;
}

void release_object__10TBoss6RockFPv(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0xb0)); *(int*)((char*)p + 0xb0) = 0; } }
void TBoss6Rock__sub_80354494(u8 *arg0) {
    TBoss6Rock__sub_803542E8(arg0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 2) {
        TBoss6Rock__sub_8035A460(arg0 + 0xD4, M2C_FIELD(arg0, s32 *, 0xB4));
        TBoss3Volopt__sub_8022675C(0x4006AB1F, (u32) (arg0 + 0x38), 0, 0);
        release_object__10TBoss6RockFPv((void*)(arg0));
        TBoss6Rock__sub_80353FF0(arg0);
        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    }
}
#pragma fp_contract on
void TBoss6Rock__sub_8035461C(void *arg0) {
  s32 temp_r4;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0xC8)))) != 0)
  {
    f32 k = TBoss6Rock__data_805DFF4C;
    f32 s = lbl_805DFF98;
    if ((TBoss6Rock__data_805DFF4C && TBoss6Rock__data_805DFF4C) && TBoss6Rock__data_805DFF4C)
    {
    }
    temp_r4 = *((s32 *) (((s8 *) arg0) + 0xAC));
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) (s * ((k * (((f32) (temp_r4 & 3)) / TBoss6Rock__data_805DFF48)) + (k * (((f32) temp_r4) * lbl_805DFFA4))));
    *((s32 *) (((s8 *) arg0) + 0xC4)) = 1;
    *((s32 *) (((s8 *) arg0) + 0xB4)) = (s32) (*((s32 *) (((s8 *) arg0) + 0xB8)));
    *((s32 *) (((s8 *) arg0) + 0xBC)) = (s32) (*((s32 *) (((s8 *) arg0) + 0xC0)));
  }
}

}
