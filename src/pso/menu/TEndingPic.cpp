#ifndef PSO_CLASS_PACKAGE
#include "pso/TEndingPic.h"

TEndingPic::~TEndingPic() {}
#else
#if PSO_CLASS_PACKAGE == 0x8008D5AC
#include "types.h"

extern "C" {

void TEndingPic__sub_8008D5AC(void);

    extern int TEndingPic__data_805D6EE0;
void TEndingPic__sub_8008D5AC(void) { TEndingPic__data_805D6EE0 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352BB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_animation_state__10TEndingPicFPv(void *arg0);
M2C_UNK update_flag890_state__10TObjPlayerFi(s32);

extern s32 TEndingPic__data_805D6EE0;

void advance_animation_state__10TEndingPicFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;

    switch ((s32) TEndingPic__data_805D6EE0) {
    case 1:
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 > (s32) ((temp_r4 * 3) - temp_r4)) {
            TEndingPic__data_805D6EE0 = 2;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        }
        break;
    case 2:
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0xD)) {
            TEndingPic__data_805D6EE0 = 3;
            return;
        }
        break;
    case 3:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_3;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3_3 > (s32) ((temp_r4_2 * 0xE) - temp_r4_2)) {
            TEndingPic__data_805D6EE0 = 4;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 4:
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_4;
        if (temp_r3_4 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0x18)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            TEndingPic__data_805D6EE0 = 1;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
            if (temp_r0 > 5) {
                M2C_FIELD(arg0, s32 *, 0x28) = 5;
                TEndingPic__data_805D6EE0 = 5;
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x28) = 5;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_current_pic__10TEndingPicFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);

extern s32 TEndingPic__data_805D6EE0;
extern const f32 lbl_805DFEF0;

void draw_current_pic__10TEndingPicFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    switch ((s32) TEndingPic__data_805D6EE0) {
    case 1:
    case 3:
        break;
    case 2:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 2), (int) (-1));
        TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0xAC), (f32) (lbl_805DFEF0));
        break;
    case 4:
    case 5:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 3), (int) (-1));
        TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0xCC), (f32) (lbl_805DFEF0));
        break;
    default:
        break;
    }
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352DB4
#include "types.h"

extern "C" {

void init_positions__10TEndingPicFPv(void* a0);

    extern const float lbl_805DFEF4;
    extern const float lbl_805DFEF8;
    extern const float lbl_805DFEFC;
    extern const float lbl_805DFF00;
    extern const float lbl_805DFF04;
    extern const float lbl_805DFF08;
    extern const float lbl_805DFF0C;
    extern const float lbl_805DFF10;
    extern const float lbl_805DFF14;
    extern const float lbl_805DFF18;
    extern const float lbl_805DFF1C;
    extern const float lbl_805DFF20;
    extern const float lbl_805DFF24;
    extern const float lbl_805DFF28;
void init_positions__10TEndingPicFPv(void* a0) { *(float*)((char*)a0 + 0x2c) = lbl_805DFEF4; *(float*)((char*)a0 + 0x30) = lbl_805DFEF8; *(float*)((char*)a0 + 0x34) = lbl_805DFEFC; *(float*)((char*)a0 + 0x38) = lbl_805DFF00; *(float*)((char*)a0 + 0x3c) = lbl_805DFF04; *(float*)((char*)a0 + 0x40) = lbl_805DFEF8; *(float*)((char*)a0 + 0x44) = lbl_805DFF08; *(float*)((char*)a0 + 0x48) = lbl_805DFF0C; *(float*)((char*)a0 + 0x4c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x50) = lbl_805DFEF8; *(float*)((char*)a0 + 0x54) = lbl_805DFF10; *(float*)((char*)a0 + 0x58) = lbl_805DFF00; *(float*)((char*)a0 + 0x5c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x60) = lbl_805DFEF8; *(float*)((char*)a0 + 0x64) = lbl_805DFF04; *(float*)((char*)a0 + 0x68) = lbl_805DFF0C; *(float*)((char*)a0 + 0x6c) = lbl_805DFEF4; *(float*)((char*)a0 + 0x70) = lbl_805DFEF8; *(float*)((char*)a0 + 0x74) = lbl_805DFEFC; *(float*)((char*)a0 + 0x78) = lbl_805DFF00; *(float*)((char*)a0 + 0x7c) = lbl_805DFF04; *(float*)((char*)a0 + 0x80) = lbl_805DFEF8; *(float*)((char*)a0 + 0x84) = lbl_805DFF08; *(float*)((char*)a0 + 0x88) = lbl_805DFF0C; *(float*)((char*)a0 + 0x8c) = lbl_805DFEF8; *(float*)((char*)a0 + 0x90) = lbl_805DFEF8; *(float*)((char*)a0 + 0x94) = lbl_805DFF10; *(float*)((char*)a0 + 0x98) = lbl_805DFF00; *(float*)((char*)a0 + 0x9c) = lbl_805DFEF8; *(float*)((char*)a0 + 0xa0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xa4) = lbl_805DFF04; *(float*)((char*)a0 + 0xa8) = lbl_805DFF0C; *(float*)((char*)a0 + 0xac) = lbl_805DFF14; *(float*)((char*)a0 + 0xb0) = lbl_805DFF18; *(float*)((char*)a0 + 0xb4) = lbl_805DFF1C; *(float*)((char*)a0 + 0xb8) = lbl_805DFF20; *(float*)((char*)a0 + 0xbc) = lbl_805DFEF8; *(float*)((char*)a0 + 0xc0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xc4) = lbl_805DFF08; *(float*)((char*)a0 + 0xc8) = lbl_805DFF08; *(float*)((char*)a0 + 0xcc) = lbl_805DFF14; *(float*)((char*)a0 + 0xd0) = lbl_805DFF24; *(float*)((char*)a0 + 0xd4) = lbl_805DFF1C; *(float*)((char*)a0 + 0xd8) = lbl_805DFF28; *(float*)((char*)a0 + 0xdc) = lbl_805DFEF8; *(float*)((char*)a0 + 0xe0) = lbl_805DFEF8; *(float*)((char*)a0 + 0xe4) = lbl_805DFF08; *(float*)((char*)a0 + 0xe8) = lbl_805DFF08; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352EB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__10TEndingPicFv(s32 arg0);
M2C_UNK draw_current_pic__10TEndingPicFPv(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 TEndingPic__data_805D6EE0;
extern s32 lbl_805D6EE4;

void render__10TEndingPicFv(s32 arg0) {
    if ((s32) TEndingPic__data_805D6EE0 != 0) {
        set_global_param__8TObjFishFi(lbl_805D6EE4);
        draw_current_pic__10TEndingPicFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80353010
#include "types.h"

extern "C" {

int TEndingPic__sub_80353010(void);

    extern int lbl_805D4F14;
int TEndingPic__sub_80353010(void) {  return lbl_805D4F14; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035307C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803530C4 { char pad[0x18]; };
struct VObj_803530C4 : Base_803530C4 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
};

extern "C" {

int set_phase_18__10TEndingPicFPv(void* p);
int TEndingPic__sub_803530A0(void* p);
void update_player_object__10TEndingPicFPv(void *arg0);
int TEndingPic__sub_80353110(void* p);
int TEndingPic__sub_80353134(void* p);
void update_shield__10TEndingPicFPv(void *arg0);
void TEndingPic__sub_80353194(void *arg0);
int TEndingPic__sub_80353018(void*, int);
s32 TItemProShield__sub_8001140C(s32, s32);
s32 get_field_2b8__14TItemProShieldFPv(s32);
s32 TObjPlayer__sub_800112A4(s32, s32);
s32 TObjPlayer__sub_80019248(void *);
s32 obj_getS16_2BA(s32);

int set_phase_18__10TEndingPicFPv(void* p) { return TEndingPic__sub_80353018(p, 18); }
int TEndingPic__sub_803530A0(void* p) { return TEndingPic__sub_80353018(p, 17); }

void update_player_object__10TEndingPicFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    if (TObjPlayer__sub_80019248(temp_r3) != 0) {
        struct VObj_803530C4 *o = (struct VObj_803530C4 *)M2C_FIELD(arg0, void **, 0xF0);
        o->m47();
    }
}

int TEndingPic__sub_80353110(void* p) { return TEndingPic__sub_80353018(p, 16); }
int TEndingPic__sub_80353134(void* p) { return TEndingPic__sub_80353018(p, 15); }
void update_shield__10TEndingPicFPv(void *arg0) {
    TItemProShield__sub_8001140C(M2C_FIELD(arg0, s32 *, 0xF0), get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, s32 *, 0xF0)));
}
void TEndingPic__sub_80353194(void *arg0) {
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), obj_getS16_2BA(M2C_FIELD(arg0, s32 *, 0xF0)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803531D0
#include "types.h"

extern "C" {

void TEndingPic__sub_803531D0(void* a0);
int TItemObject__sub_80116004(void*, f32);

    extern const f32 lbl_805DFF34;
void TEndingPic__sub_803531D0(void* a0) { TItemObject__sub_80116004((void*)(*(int*)((char*)a0 + 0xf0)), lbl_805DFF34); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803531F8
#include "types.h"

extern "C" {

void TEndingPic__sub_803531F8(void);

void TEndingPic__sub_803531F8(void) {  }

}
#endif
#endif
