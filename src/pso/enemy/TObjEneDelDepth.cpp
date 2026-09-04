#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneDelDepth__sub_80315518(void);

void TObjEneDelDepth__sub_80315518(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x803138F8
#include "types.h"

extern "C" {

void TObjEneDelDepth__sub_803138F8(void* a0);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;
void TObjEneDelDepth__sub_803138F8(void* a0) { *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; TObjEneDelDepth__sub_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi(a0, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313A6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_move__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv();
s32 get_type__15TObjEneDelDepthFPv(s32);
M2C_UNK TObjEneDelDepth__sub_80316488(s32, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

extern const f32 TObjEneDelDepth__data_805DF260;

void init_move__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    refresh_lobby_state__10TObjPlayerFPv();
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    if (get_type__15TObjEneDelDepthFPv(M2C_FIELD(arg0, s32 *, 0x37C)) < 6) {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x22;
        TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 5);
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x20;
        TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 9);
    }
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313AF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0);
void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 get_type__15TObjEneDelDepthFPv(int);
M2C_UNK TObjEneDelDepth__sub_80316488(int, int);
u16 TObjPlayer__sub_800115C4(void *, void *, f32);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, int);

extern const f32 TObjEneDelDepth__data_805DF270;
extern const f32 TObjEneDelDepth__data_805DF280;

void update_ai_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    u16 temp_r3;

    if (get_type__15TObjEneDelDepthFPv((int) (M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
        if (temp_r0 <= 0) {
            temp_r3 = TObjPlayer__sub_800115C4((void *) (arg0), (void *) (&sp8), (f32) (TObjEneDelDepth__data_805DF280));
            if ((temp_r3 != 0xFFFF) && (TBoss6Kakusan__sub_803D8BD8((void *) (&sp8)) > TObjEneDelDepth__data_805DF270)) {
                TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (4));
                return;
            }
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
            TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        }
    }
}

extern const f32 TObjEneDelDepth__data_805DF260;

void start_attack_motion__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    TBoss3Volopt__sub_8022675C((int) (0x4003A321), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if (get_type__15TObjEneDelDepthFPv((int) (M2C_FIELD(arg0, s32 *, 0x37C))) < 6) {
        TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (4));
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = 0x10;
        TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (8));
    }
    set_draw_mode__15TObjEneDelDepthFPvi((void *) (arg0), (int) (0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_flag__15TObjEneDelDepthFPv(void *arg0);
void init_state__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, M2C_UNK);
s32 get_flag_bit4__15TObjEneDelDepthFPv();
M2C_UNK TObjEneDelDepth__sub_80316488(s32, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

void update_state_flag__15TObjEneDelDepthFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (get_flag_bit4__15TObjEneDelDepthFPv() != 0) {
            TObjEneDelDepth__sub_803154A8(arg0, 7);
            return;
        }
        TObjEneDelDepth__sub_803154A8(arg0, 6);
    }
}

extern const f32 TObjEneDelDepth__data_805DF260;

void init_state__15TObjEneDelDepthFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFBFFFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) TObjEneDelDepth__data_805DF260;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 3);
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313D2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(void *, void *, int, int);
M2C_UNK create_ex__9TTecMegidFiiii(void *, void *, int, int);

extern s32 lbl_805D5550;
extern u8 *TObjEneDelDepth__data_805D6AC0;

void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        if ((s32) lbl_805D5550 == 3) {
            create_ex__9TTecMegidFiiii((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        } else {
            create_ex__9TTecBartaFPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFPv((void *) (arg0)) != 0) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313DE4
#include "types.h"

extern "C" {

void TObjEneDelDepth__sub_80313DE4(void* p);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void TObjEneDelDepth__sub_80313DE4(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 12; TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)1); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80313F5C
#include "types.h"

extern "C" {

void init_draw_state__15TObjEneDelDepthFPv(void* p);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void init_draw_state__15TObjEneDelDepthFPv(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 8; TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)2); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031415C
#include "types.h"

extern "C" {

void setup_depth_draw__15TObjEneDelDepthFPv(void* p);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void setup_depth_draw__15TObjEneDelDepthFPv(void* p) { set_depth_offset__15TObjEneDelDepthFPvii(p, (void*)30, (void*)30); TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)0); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80314268
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_depth__15TObjEneDelDepthFPv(void *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK TObjEneDelDepth__sub_80316488(s32, M2C_UNK);
M2C_UNK set_depth_offset__15TObjEneDelDepthFPvii(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, M2C_UNK);

extern f32 TObjEneDelDepth__data_805DF298;

void init_depth__15TObjEneDelDepthFPv(void *arg0) {
    set_depth_offset__15TObjEneDelDepthFPvii(arg0, 0x1E, 0x1E);
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0x888;
    if (calc_boss4_scale__10TObjPlayerFi(arg0) > TObjEneDelDepth__data_805DF298) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = M2C_FIELD(arg0, s32 *, 0x3BC) * 0xFFFFFFFF;
    }
    TObjEneDelDepth__sub_80316488(M2C_FIELD(arg0, s32 *, 0x37C), 0);
    set_draw_mode__15TObjEneDelDepthFPvi(arg0, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803145A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0);
void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 is_state_complete__15TObjEneDelDepthFPv(int);
M2C_UNK TObjEneDelDepth__sub_80316488(int, int);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, int);

void try_enter_appear__15TObjEneDelDepthFPv(u8 *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv((int) (M2C_FIELD(arg0, s32 *, 0x37C))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (3));
        TBoss3Volopt__sub_8022675C((int) (0x4003A822), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void enter_appear_state__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 0x14;
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (0xB));
    set_draw_mode__15TObjEneDelDepthFPvi((void *) (arg0), (int) (1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031467C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, M2C_UNK);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
s32 is_state_complete__15TObjEneDelDepthFPv(s32);

void update_state__15TObjEneDelDepthFPv(void *arg0) {
    if (is_state_complete__15TObjEneDelDepthFPv(M2C_FIELD(arg0, s32 *, 0x37C)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        if (get_flag_bit4__15TObjEneDelDepthFPv(arg0) != 0) {
            TObjEneDelDepth__sub_803154A8(arg0, 7);
            return;
        }
        TObjEneDelDepth__sub_803154A8(arg0, 6);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803146EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_state8__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDelDepth__sub_80316488(int, int);
M2C_UNK set_draw_mode__15TObjEneDelDepthFPvi(void *, int);

void enter_state8__15TObjEneDelDepthFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000);
    M2C_FIELD(arg0, s32 *, 0x388) = 8;
    TObjEneDelDepth__sub_80316488((int) (M2C_FIELD(arg0, s32 *, 0x37C)), (int) (0xA));
    TBoss3Volopt__sub_8022675C((int) (0x4003A820), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    set_draw_mode__15TObjEneDelDepthFPvi((void *) (arg0), (int) (1));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803150B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
u16 TObjPlayer__sub_800115C4(void *, int, f32);
M2C_UNK set_default_depth_offset__15TObjEneDelDepthFPv(void *);

extern const f32 TObjEneDelDepth__data_805DF26C;

void try_relocate_on_timer__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4((void *) (arg0), (int) (0), (f32) (TObjEneDelDepth__data_805DF26C)) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C0) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C0) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
            }
            set_default_depth_offset__15TObjEneDelDepthFPv((void *) (arg0));
            return;
        }
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (1));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80315154
#include "types.h"

extern "C" {

void init_params__15TObjEneDelDepthFPv(void* a0);
int set_default_depth_offset__15TObjEneDelDepthFPv(void*);
int TObjEneDelDepth__sub_80315380(void);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;
void init_params__15TObjEneDelDepthFPv(void* a0) { TObjEneDelDepth__sub_80315380(); *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; *(int*)((char*)a0 + 0x3c0) = 0; TObjEneDelDepth__sub_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi(a0, (void*)0); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x4040000); set_default_depth_offset__15TObjEneDelDepthFPv(a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803151D0
#include "types.h"

extern "C" {

int TObjEneDelDepth__sub_803154A8(void*, void*);
void TObjEneDelDepth__vt61(void* p);
int set_default_depth_offset__15TObjEneDelDepthFPv(void* p);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, int, int);

int set_default_depth_offset__15TObjEneDelDepthFPv(void* p) { return set_depth_offset__15TObjEneDelDepthFPvii(p, 15, 15); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80315270
#include "types.h"

extern "C" {

int TObjEneDelDepth__sub_803154A8(void*, void*);
void TObjEneDelDepth__vt61(void* p);
int set_default_depth_offset__15TObjEneDelDepthFPv(void* p);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, int, int);

void TObjEneDelDepth__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 13) { TObjEneDelDepth__sub_803154A8(p, (void*)13); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803152D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1);

extern s32 lbl_805DF2D4;

void set_draw_mode__15TObjEneDelDepthFPvi(void *arg0, s32 arg1) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r6_2;

    temp_r6 = M2C_FIELD(arg0, void **, 0x380);
    M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xF5FFF297);
    switch (arg1) {
    case 0:
        temp_r5 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 0x0A000000 | 0x528);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 1:
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r5_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5_2, s32 *, 0x18) | 0x0A000000 | 0x28);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 0;
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    case 3:
        temp_r6_2 = M2C_FIELD(arg0, void **, 0x380);
        M2C_FIELD(temp_r6_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6_2, s32 *, 0x18) | lbl_805DF2D4);
        M2C_FIELD(arg0, s32 *, 0x3F0) = 1;
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031543C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_boss4_scale__10TObjPlayerFi();

extern M2C_UNK lbl_80475DD8;

void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031580C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1);
M2C_UNK conditional_delete__15TObjEneDelDepthFis(s32, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__15TObjEneDelDepth[];

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneDelDepth;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        conditional_delete__15TObjEneDelDepthFis(M2C_FIELD(arg0, s32 *, 0x37C), 1);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80315AD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_data__15TObjEneDelDepthFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjEneDelDepth__data_805D6AC4;

void free_shared_data__15TObjEneDelDepthFv(void) {
    if ((u32) TObjEneDelDepth__data_805D6AC4 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDelDepth__data_805D6AC4, 1);
        TObjEneDelDepth__data_805D6AC4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80315C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneDelDepth__create(s32 arg0);
s32 TObjControl__ct(s32, s32);
s32 TObjEneDelDepth__ct(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 TObjEneDelDepth__create(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x434);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneDelDepth__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80315CCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_globals__15TObjEneDelDepthFv(void);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);

extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;

void reset_globals__15TObjEneDelDepthFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
    TObjPlayer__sub_803E38FC(0x2500);
    TObjPlayer__sub_803E38FC(0x2500);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031623C
#include "types.h"

extern "C" {

int get_data__15TObjEneDelDepthFv(void);

    extern int TObjEneDelDepth__data_805D6AC4;
int get_data__15TObjEneDelDepthFv(void) {  return TObjEneDelDepth__data_805D6AC4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8031624C
#include "types.h"

extern "C" {

f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);

int get_flag_bit4__15TObjEneDelDepthFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803162A0
#include "types.h"

extern "C" {

f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);

s32 get_type__15TObjEneDelDepthFPv(void* p) { return *(s32*)((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80316420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0);

extern f32 lbl_805D6AC8;
extern u8 lbl_805D6ACC;
extern f32 lbl_805DF2E8;

s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 6) {
        return 0;
    }
    if ((s8) lbl_805D6ACC == 0) {
        f32 temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        lbl_805D6ACC = 1;
        lbl_805D6AC8 = temp_f1 - lbl_805DF2E8;
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) == lbl_805D6AC8) {
        return 1;
    }
    return 0;
}

}
#endif
#endif
