#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__15TObjBoss2TunnelFPv(void *arg0);

M2C_UNK TObjBoss2Tunnel__sub_8007DE80(f32);

void update_position__15TObjBoss2TunnelFPv(void *arg0) {
    TObjBoss2Tunnel__sub_8007DE80(M2C_FIELD(arg0, f32 *, 0x1C));
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8003B138
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003B138 { char pad[0x18]; };
struct VObj_8003B138 : Base_8003B138 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0);
M2C_UNK TObjBoss2Tunnel__sub_8003B250(void *, f32);
void *initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
s32 get_particle_by_index__13TParticleCtrlFi(s32);

void create_particle_effect__15TObjBoss2TunnelFiif(s32 arg0, s32 arg1, f32 farg0) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = initialize_with_flags__13TParticleCtrlFPvPviiiiiUs(var_r31, arg0, get_particle_by_index__13TParticleCtrlFi(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_8003B138 *)var_r31)->m1();
        TObjBoss2Tunnel__sub_8003B250(var_r31, farg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003B1D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_8003B1D8(void);
M2C_UNK TObjBoss2Tunnel__sub_8003B250(f32);

extern const f32 lbl_805D85D8;

void TObjBoss2Tunnel__sub_8003B1D8(void) {
    TObjBoss2Tunnel__sub_8003B250(lbl_805D85D8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003B2B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjBoss2Tunnel__sub_8003B2B0(void);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;
extern void *lbl_805D4BF8;

void TObjBoss2Tunnel__sub_8003B2B0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D4BF8 = o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003C238
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enable_fog__15TObjBoss2TunnelFPv(void *arg0);
void enable_fog__15TObjBoss2TunnelFv(void);
M2C_UNK update_all__8TFogCtrlFii(s32, M2C_UNK);

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFPv(void *arg0) {
    update_all__8TFogCtrlFii((s32)(M2C_FIELD(arg0, s32 *, 0xB0)), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 4;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFv(void) {
    update_all__8TFogCtrlFii((s32)(0xB), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003C3F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1);
void dt__15TObjBoss2TunnelFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__15TObjBoss2Tunnel[];

void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss2Tunnel;
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x68, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003C628
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_flag_800__15TObjBoss2TunnelFv(void);
void set_global_flag_400__15TObjBoss2TunnelFv(void);
void TObjBoss2Tunnel__sub_8003C648(void);
void *create__15TObjBoss2TunnelFv(void);
void clear_target_flags__15TObjBoss2TunnelFv(void);
void *TObjBoss2Tunnel__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern s32 TObjBoss2Tunnel__data_805D4C00;

void set_global_flag_800__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x800;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void set_global_flag_400__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x400;
}

void TObjBoss2Tunnel__sub_8003C648(void) {  }

extern void *tl_02;

void *create__15TObjBoss2TunnelFv(void) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjBoss2Tunnel__ct(o, tl_02);
    }
    return o;
}

extern void *lbl_805D4BE8;
extern s32 TObjBoss2Tunnel__data_805D4C00;
extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;

void clear_target_flags__15TObjBoss2TunnelFv(void) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    TObjBoss2Tunnel__data_805D4C00 = 0;
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(lbl_805D4BE8, void **, 0x42C), void **, 0xA8), void **, 0x2C), s32 **, 0x30);
    lbl_805D4C08 = temp_r3;
    temp_r3_2 = M2C_FIELD(temp_r3, s32 **, 0x30);
    lbl_805D4C04 = temp_r3_2;
    *temp_r3_2 &= 0xFFFFFFFE;
    *lbl_805D4C08 &= 0xFFFFFFFE;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003C748
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804835D8[];

void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003C7A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__15TObjBoss2TunnelFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_804835D8[];
extern const f32 TObjBoss2Tunnel__data_805D85E0;

void *init__15TObjBoss2TunnelFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = TObjBoss2Tunnel__data_805D85E0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007CE14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 save_snapshot__15TObjBoss2TunnelFv(void);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TObjBoss2Tunnel__sub_8007CB50();
s32 TObjBoss2Tunnel__sub_8007CBC4();

M2C_UNK save_screen_snapshot();
M2C_UNK memcard_check_snapshot(M2C_UNK, s32 *);
extern s32 TObjBoss2Tunnel__data_805D4E94;

s32 save_snapshot__15TObjBoss2TunnelFv(void) {
    s32 sp8;

    memcard_check_snapshot(1, &sp8);
    if (sp8 == 1) {
        if ((s32) TObjBoss2Tunnel__data_805D4E94 != 0) {
            return -9;
        }
        save_screen_snapshot();
loop_4:
        if (TAdPlayerLoadGC__sub_801E1E38(1) == 0) {
            TObjBoss2Tunnel__data_805D4E94 = 0;
            return -5;
        }
        if (TObjBoss2Tunnel__sub_8007CBC4() != 0) {
            if (TObjBoss2Tunnel__sub_8007CB50() == 0) {
                TObjBoss2Tunnel__data_805D4E94 = 1;
                return -9;
            }
            goto block_9;
        }
        goto loop_4;
    }
block_9:
    TObjBoss2Tunnel__data_805D4E94 = 0;
    return sp8;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007DD24
#include "types.h"

extern "C" {

void TObjBoss2Tunnel__sub_8007DD24(void);

void TObjBoss2Tunnel__sub_8007DD24(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007DD70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_phase__15TObjBoss2TunnelFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007DDB0(f32);

extern f32 lbl_805D923C;

void advance_phase__15TObjBoss2TunnelFPv(void *arg0) {
    TObjBoss2Tunnel__sub_8007DDB0(M2C_FIELD(arg0, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805D923C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E0CC
#include "types.h"

extern "C" {

void reset_floats__15TObjBoss2TunnelFPv(void* a0);

    extern const float TObjBoss2Tunnel__data_805D9234;
void reset_floats__15TObjBoss2TunnelFPv(void* a0) { *(float*)((char*)a0 + 0x4) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x0) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0xc) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x8) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x18) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x14) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x10) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x1c) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x28) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x24) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x20) = TObjBoss2Tunnel__data_805D9234; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E1F8
#include "types.h"

extern "C" {

int check_param_threshold__15TObjBoss2TunnelFPvf(void *arg0, f32 arg1);

int check_param_threshold__15TObjBoss2TunnelFPvf(void *arg0, f32 arg1) {
    return arg1 >= *(f32 *)((u8 *)arg0 + 20);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E380
#include "types.h"

extern "C" {

void reset_coords__15TObjBoss2TunnelFPv(void* a0);

    extern const float TObjBoss2Tunnel__data_805D9234;
void reset_coords__15TObjBoss2TunnelFPv(void* a0) { *(float*)((char*)a0 + 0x4) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x0) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x8) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x14) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x10) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0xc) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x20) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x1c) = TObjBoss2Tunnel__data_805D9234; *(float*)((char*)a0 + 0x18) = TObjBoss2Tunnel__data_805D9234; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E418
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 decrement_packed_timer__15TObjBoss2TunnelFPvi(u32 *arg0, s32 arg1);
s32 spawn_effect__15TObjBoss2TunnelFiPvPv(s32 arg0, void *arg1, void *arg2);
s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1);
void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1);
int TBoss4Zako__sub_803D8910(void*, void*);
int TObjBoss2Tunnel__sub_8007E7D8(void*, void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
void *TBoss8Dragon__sub_8007A544(void *, M2C_UNK, f32);

s32 decrement_packed_timer__15TObjBoss2TunnelFPvi(u32 *arg0, s32 arg1) {
    u32 temp_r5;

    temp_r5 = *arg0;
    if ((s32)((temp_r5 >> 24) - arg1) < 0) {
        *arg0 = temp_r5 & 0xFFFFFF;
        return 1;
    }
    *arg0 = ((((temp_r5 >> 24) - arg1) << 24) & 0xFF000000) | (temp_r5 & 0xFFFFFF);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 spawn_effect__15TObjBoss2TunnelFiPvPv(s32 arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = TBoss8Dragon__sub_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        VecCopy__FP3VecPC3Vec(arg2, M2C_FIELD(temp_r3, s32 *, 4) + 0xC);
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

extern f32 TObjBoss2Tunnel__data_805D9210;

s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1) {
    f32 temp_f1;
    void *temp_r3;

    VecCopy__FP3VecPC3Vec(arg1, arg0);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1 + TObjBoss2Tunnel__data_805D9210);
    temp_r3 = TBoss8Dragon__sub_8007A544(arg1, 0x16EF, temp_f1);
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(temp_r3, s32 *, 4));
        return 1;
    }
    VecCopy__FP3VecPC3Vec(arg1, arg0);
    return 0;
}

void init_zako__15TObjBoss2TunnelFPvPv(void* p, void* a1) { TObjBoss2Tunnel__sub_8007E7D8(p, (char*)p + 0x8); TBoss4Zako__sub_803D8910(p, a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E664
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0);

s32 count_active_segments__15TObjBoss2TunnelFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0);
        if (!(temp_r3 & 8)) {
            var_r31 += 1;
        }
        if (!(temp_r3 & 0x10)) {
            var_r31 += count_active_segments__15TObjBoss2TunnelFPv(M2C_FIELD(arg0, void **, 0x2C));
        }
        arg0 = M2C_FIELD(arg0, void **, 0x30);
    } while (arg0 != NULL);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E71C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 arg0, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0(s32);

extern f32 TObjBoss2Tunnel__data_805D926C;

f32 calc_scaled_value__15TObjBoss2TunnelFif(s32 arg0, f32 farg0) {
    return (TObjBoss2Tunnel__data_805D926C * farg0) / TBoss8Dragon__sub_803D64C0(arg0 / 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E8D8
#include "types.h"

extern "C" {

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1);
int TObjPlayer__sub_803D898C(void*);
int TObjPlayer__sub_803D89E8(void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);

void render__15TObjBoss2TunnelFPvPv(void* p, void* a1) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D89E8((void*)0); TObjPlayer__sub_803D898C(a1); TObjPlayer__sub_803D9B78(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

f32 clamp_velocity__15TObjBoss2TunnelFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);
f32 TObjPlayer__sub_8001978C(f32);

extern const f32 TObjBoss2Tunnel__data_805D9234;
extern const f32 lbl_805D923C;

f32 clamp_velocity__15TObjBoss2TunnelFPv(void *arg0) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f29;
    f32 temp_f28;

    temp_f30 = M2C_FIELD(arg0, f32 *, 8);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0);
    temp_f29 = (temp_f31 * temp_f31) + (temp_f30 * temp_f30);
    if (TObjBoss2Tunnel__data_805D9234 != temp_f29) {
        temp_f28 = lbl_805D923C / TObjPlayer__sub_8001978C(temp_f29);
        if (TCameraCtrl__sub_8006B370(temp_f28) != 0) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) TObjBoss2Tunnel__data_805D9234;
            M2C_FIELD(arg0, f32 *, 8) = (f32) TObjBoss2Tunnel__data_805D9234;
            return TObjBoss2Tunnel__data_805D9234;
        }
        M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f31 * temp_f28);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f30 * temp_f28);
        return temp_f29 * temp_f28;
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) TObjBoss2Tunnel__data_805D9234;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjBoss2Tunnel__data_805D9234;
    return TObjBoss2Tunnel__data_805D9234;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007E9EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370();
f32 TCameraCtrl__sub_803D8D00();
f32 TNpcPlayer__sub_803D97B4(void *);

extern f32 TObjBoss2Tunnel__data_805D9234;

f32 update_scale__15TObjBoss2TunnelFPv(void *arg0) {
    f32 var_f31;
    f32 temp_f0;

    var_f31 = TObjBoss2Tunnel__data_805D9234;
    if (TObjBoss2Tunnel__data_805D9234 != TCameraCtrl__sub_803D8D00()) {
        var_f31 = TNpcPlayer__sub_803D97B4(arg0);
        if (TCameraCtrl__sub_8006B370() != 0) {
            M2C_FIELD(arg0, f32 *, 0) = var_f31 = TObjBoss2Tunnel__data_805D9234;
            M2C_FIELD(arg0, f32 *, 4) = var_f31;
            M2C_FIELD(arg0, f32 *, 8) = var_f31;
        }
    } else {
        temp_f0 = TObjBoss2Tunnel__data_805D9234;
        M2C_FIELD(arg0, f32 *, 0) = temp_f0;
        M2C_FIELD(arg0, f32 *, 4) = temp_f0;
        M2C_FIELD(arg0, f32 *, 8) = temp_f0;
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EA74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0);
void TLobby__send_and_handle_60(void *);
void bswap_6xB2_play_sound(void *);

void finalize_and_send_60__15TObjBoss2TunnelFPv(void *arg0) {
    bswap_6xB2_play_sound(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EAE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_8007EAE4(u8 *arg0);

void TObjBoss2Tunnel__sub_8007EAE4(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0) = 0xB2;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F1A88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss2Tunnel__sub_802F1A88(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804E4AD4[];

void *TObjBoss2Tunnel__sub_802F1A88(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4AD4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2070
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjBoss2Tunnel__sub_802F2070(void);

extern u32 lbl_805D6968;

s32 TObjBoss2Tunnel__sub_802F2070(void) {
    return ((u32) lbl_805D6968 >> 0xFU) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F1FB0(void *, s32, s32, f32, s32);

void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *new_obj = (void *) __nw__7TObjectFUl(0x78);
    if ((u32) new_obj != 0U) {
        fn_802F1FB0(new_obj, M2C_FIELD(arg0, s32 *, 0x8C), arg1, M2C_FIELD(arg0, f32 *, 0x84), arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2278
#include "types.h"

extern "C" {

void TObjBoss2Tunnel__sub_802F2278(void);

    extern int lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2278(void) { lbl_805D6968 = (lbl_805D6968 | 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2288
#include "types.h"

extern "C" {

void set_flag_0x200__15TObjBoss2TunnelFv(void);
int clear_flags_0x3000__15TObjBoss2TunnelFv(void);

    extern int lbl_805D6968;
void set_flag_0x200__15TObjBoss2TunnelFv(void) { lbl_805D6968 = (lbl_805D6968 | 0x200); clear_flags_0x3000__15TObjBoss2TunnelFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F22B4
#include "types.h"

extern "C" {

void clear_flags_0x3000__15TObjBoss2TunnelFv(void);

    extern int lbl_805D6968;
void clear_flags_0x3000__15TObjBoss2TunnelFv(void) { lbl_805D6968 = (lbl_805D6968 & 0xffffcfff); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F22F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjBoss2Tunnel__sub_802F22F4(void);
s32 is_phase_active__15TObjBoss2TunnelFv(void);

extern u32 lbl_805D6968;

s32 TObjBoss2Tunnel__sub_802F22F4(void) {
    return ((u32) lbl_805D6968 >> 0xDU) & 1;
}

extern u32 lbl_805D6968;

s32 is_phase_active__15TObjBoss2TunnelFv(void) {
    return ((u32) lbl_805D6968 >> 0xCU) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F230C
#include "types.h"

extern "C" {

s32 is_phase_active__15TObjBoss2TunnelFv(s32 a0 = 0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
void TObjBoss2Tunnel__sub_802F23FC(void);

s32 check_both__15TObjBoss2TunnelFi(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TObjBoss2Tunnel__sub_802F22F4();
    temp_r3 = is_phase_active__15TObjBoss2TunnelFv(arg0);
    return temp_r3 | temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F23FC
#include "types.h"

extern "C" {

s32 is_phase_active__15TObjBoss2TunnelFv(s32 a0 = 0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
void TObjBoss2Tunnel__sub_802F23FC(void);

void TObjBoss2Tunnel__sub_802F23FC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F253C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_effect__15TObjBoss2TunnelFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_802F25AC(void *);
M2C_UNK TObjBoss2Tunnel__sub_802F2664(void *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK advance_effect_timer__15TObjBoss2TunnelFPv();

extern M2C_UNK lbl_804E49A0[];
extern s32 lbl_805D6968;

void init_effect__15TObjBoss2TunnelFPv(void *arg0) {
    advance_effect_timer__15TObjBoss2TunnelFPv();
    TObjBoss2Tunnel__sub_802F2664(arg0, lbl_804E49A0, 0x1F, 0);
    if (lbl_805D6968 & 0x200) {
        lbl_805D6968 &= 0xFFFFFDFF;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    TObjBoss2Tunnel__sub_802F25AC(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2714
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0);
void TObjBoss2Tunnel__sub_802F273C(void);

extern const f32 lbl_805DEC68;
extern const f32 lbl_805DECFC;

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805DECFC);
    if (M2C_FIELD(arg0, f32 *, 0x5C) > lbl_805DEC68) {
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DEC68;
    }
}

void TObjBoss2Tunnel__sub_802F273C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2740
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0);
M2C_UNK TObjBoss2Tunnel__sub_8007DEE4(void *, f32, f32, f32, f32, f32);
s32 is_phase_active__15TObjBoss2TunnelFv(void *);
f32 get_random_float__8TObjFishFv(f32);
s32 advance_phase__15TObjBoss2TunnelFPv(void *, void *);
s32 check_both__15TObjBoss2TunnelFi();
f32 update_position__15TObjBoss2TunnelFPv(void *);

extern const f32 lbl_805DEC98;
extern const f32 lbl_805DEC9C;
extern const f32 lbl_805DECC4;
extern const f32 lbl_805DECC8;
extern const f32 lbl_805DECF8;
extern const f32 lbl_805DED00;
extern const f32 lbl_805DED04;
extern const f32 lbl_805DED08;

void update_phase_motion__15TObjBoss2TunnelFPv(u8 *arg0) {
    f32 sp8;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        if (check_both__15TObjBoss2TunnelFi() != 0) {
            if (is_phase_active__15TObjBoss2TunnelFv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DECC8;
            } else {
                M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DEC98;
            }
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DED08), (f32) (lbl_805DECF8));
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
        }
        break;
    case 1:
        if (check_both__15TObjBoss2TunnelFi() == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            sp8 = get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x54)));
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (M2C_FIELD(arg0, f32 *, 0x54)), (f32) (-update_position__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20))), (f32) (lbl_805DECF8));
            return;
        }
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (sp8 * M2C_FIELD(arg0, f32 *, 0x50));
        return;
    case 2:
        if (check_both__15TObjBoss2TunnelFi() == 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 3;
            TObjBoss2Tunnel__sub_8007DEE4((void *) (arg0 + 0x20), (f32) (lbl_805DECC4), (f32) (lbl_805DED00), (f32) (lbl_805DED04), (f32) (lbl_805DEC9C), (f32) (lbl_805DECF8));
            return;
        }
        break;
    case 3:
        if (advance_phase__15TObjBoss2TunnelFPv((void *) (arg0 + 0x20), (void *) (&sp8)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DEC9C;
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            return;
        }
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) * (lbl_805DED04 - sp8));
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F29B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void dt__15TObjBoss2TunnelFis(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E4B3C[];

void *destroy__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4B3C;
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88)); }
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x20, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F2C4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_802F2C4C(void);
void TObjBoss2Tunnel__sub_802F2C50(void);
void TObjBoss2Tunnel__sub_802F2C84(void);
void* TObjBoss2Tunnel__sub_802F2A2C(void*, s32);
void* __nw__7TObjectFUl(u32);

void TObjBoss2Tunnel__sub_802F2C4C(void) {  }

extern s32 tl_04;

void TObjBoss2Tunnel__sub_802F2C50(void) {
    void* obj = __nw__7TObjectFUl(0x94);
    if (obj != 0) {
        TObjBoss2Tunnel__sub_802F2A2C(obj, tl_04);
    }
}

    extern int lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2C84(void) { lbl_805D6968 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036EF0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_8036EF0C(int arg0);
M2C_UNK fn_8038B018(int, void *, void *, void *, void *);

extern s32 lbl_805D44F8;
extern u8 *lbl_805D7734;

void TObjBoss2Tunnel__sub_8036EF0C(int arg0) {
    lbl_805D44F8 = (s32) arg0;
    fn_8038B018((int) (M2C_FIELD(lbl_805D7734, u8 *, 0x19)), (void *) (lbl_805D7734 + 0x1A), (void *) ((u8) arg0), (void *) (lbl_805D7734 + 0x32), (void *) (lbl_805D7734));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036EF44
#include "types.h"

extern "C" {

int TObjBoss2Tunnel__sub_8036EF44(void);
void TObjBoss2Tunnel__sub_8036EF4C(void);
void enable_and_trigger__15TObjBoss2TunnelFv(void);
int TObjBoss2Tunnel__sub_8036EF0C(void*);

    extern int lbl_805D44F8;
int TObjBoss2Tunnel__sub_8036EF44(void) {  return lbl_805D44F8; }

    extern int lbl_805D44F8;
void TObjBoss2Tunnel__sub_8036EF4C(void) { lbl_805D44F8 = 1; }

    extern int lbl_805D44F8;
void enable_and_trigger__15TObjBoss2TunnelFv(void) { lbl_805D44F8 = 1; TObjBoss2Tunnel__sub_8036EF0C((void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803E2BAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_player_state__15TObjBoss2TunnelFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_player_state__15TObjBoss2TunnelFv(void) {
    TObjPlayer__sub_803E2248();
}

}
#endif
#endif
