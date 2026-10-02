#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_default__12TBoss8DragonFPv(void *arg0);

M2C_UNK set_damage_phase_value__12TBoss8DragonFPvi(void *, M2C_UNK);

void init_default__12TBoss8DragonFPv(void *arg0) {
    set_damage_phase_value__12TBoss8DragonFPvi(arg0, 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8002AE5C
#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 floor();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void set_speed__12TBoss8DragonFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x10) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002CD2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_state__12TBoss8DragonFv(void);
void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_805D4B7C;

s32 get_state__12TBoss8DragonFv(void) {
    return lbl_805D4B7C;
}

extern M2C_UNK lbl_80482048[];

void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482048;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002D324
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void set_field_3c__12TBoss8DragonFPv(void* p);
void set_field_1c__12TBoss8DragonFPv(void* p);
void spawn_child_object__12TBoss8DragonFPv(void *arg0);
void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1);
void *TBoss8Dragon__sub_8002CD8C(void *, void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void set_field_3c__12TBoss8DragonFPv(void* p) { set_field_1c__12TBoss8DragonFPv((void*)(p)); *(int*)((char*)p + 0x3c) = 1; }
void set_field_1c__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern const f32 lbl_805D81A0;

void spawn_child_object__12TBoss8DragonFPv(void *arg0) {
    void *o;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D81A0;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        TBoss8Dragon__sub_8002CD8C(o, M2C_FIELD(arg0, void **, 0x10), 30);
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
}

extern M2C_UNK lbl_80482060[];

void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482060;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002D580
#include "types.h"

extern "C" {

void free_resources__12TBoss8DragonFv(void);
int destroy__12TBoss8DragonFPvs(void*, void*);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D4B60;
    extern int lbl_805D4B64;
    extern int lbl_805D4B68;
    extern int lbl_805D4B6C;
    extern int lbl_805D4B78;
void free_resources__12TBoss8DragonFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D4B78)); lbl_805D4B78 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D4B6C)); lbl_805D4B6C = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B64), (void*)1); lbl_805D4B64 = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B68), (void*)1); lbl_805D4B68 = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B60), (void*)1); lbl_805D4B60 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002DAEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss8Dragon__sub_8002DAEC(void *arg0);
s32 TBoss8Dragon__sub_8002DB04(void *arg0);
void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

s32 TBoss8Dragon__sub_8002DAEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) + ((M2C_FIELD(arg0, s32 *, 0xC) + 3) * 2);
}

s32 TBoss8Dragon__sub_8002DB04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) + 8;
}

void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002DDB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_default_velocity_scale__12TBoss8DragonFv(void);
M2C_UNK apply_velocity_scale__12TBoss8DragonFPvff(f32, f32);

extern const f32 lbl_805D81D4;
extern const f32 lbl_805D81E4;

void apply_default_velocity_scale__12TBoss8DragonFv(void) {
    apply_velocity_scale__12TBoss8DragonFPvff(lbl_805D81E4, lbl_805D81D4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002DDDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 apply_velocity_scale__12TBoss8DragonFPvff(void *arg0, f32 farg0, f32 farg1);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv();
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *, f32);

extern const f32 lbl_805D8198;
extern const f32 lbl_805D81F4;
extern const f32 lbl_805D81F8;

f32 apply_velocity_scale__12TBoss8DragonFPvff(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f31;
    s32 temp_r31;

    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv();
    if (temp_f1 > farg0) {
        var_f31 = lbl_805D8198;
        M2C_FIELD(arg0, f32 *, 0) = var_f31;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = var_f31;
    } else {
        temp_r31 = (s32) (lbl_805D81F8 * (temp_f1 / farg0));
        var_f31 = farg1 * (lbl_805D81F4 + TBoss8Dragon__sub_803D64DC(temp_r31, lbl_805D81F8));
        temp_f1_2 = TBoss8Dragon__sub_803D64C0(temp_r31);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0) * temp_f1_2;
        M2C_FIELD(arg0, f32 *, 0) = temp_f2;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f1_2);
        update_scale__15TObjBoss2TunnelFPv(arg0, temp_f1_2);
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005D6F4
#include "types.h"

extern "C" {

int get_flag_bit6__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_8005D700(void);

int get_flag_bit6__12TBoss8DragonFPv(void* p) { return (*(u32*)((char*)p + 0x4c0) >> 6) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005D700
#include "types.h"

extern "C" {

int get_flag_bit6__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_8005D700(void);

int TBoss8Dragon__sub_8005D700(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005D860
#include "types.h"

extern "C" {

int TBoss8Dragon__sub_8005D860(void* p);
int get_target_info__9TObjEneDDFPv(void*);

int TBoss8Dragon__sub_8005D860(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005DBD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0);
M2C_UNK render_nodes__7TObjectFv(s32, s32);

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render_nodes_with_flag__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x4C4, temp_r4);
    some_id_805c6f74 = lbl_805D5660;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005DE94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_model__12TBoss8DragonFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *, int);

extern u8 *lbl_805D4DA0;
extern const f32 lbl_805D8D58;

void render_model__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r4 = (unsigned char *) (M2C_FIELD(lbl_805D4DA0, void **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
    draw__16TObjEneRe7BeruraFPv((void *) (arg0), (int) (temp_r4));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
    pop_matrix();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005DF24
#include "types.h"

extern "C" {

void update_unless_demo__12TBoss8DragonFPv(void* p);
int render_model__12TBoss8DragonFPv(void*);
int check_demo_mode__10TObjPlayerFv(void*);

void update_unless_demo__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { render_model__12TBoss8DragonFPv(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005E040
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_8005E040(void *arg0);

extern f32 lbl_805D8D84;

void TBoss8Dragon__sub_8005E040(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8D84;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005E2A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_parts__12TBoss8DragonFPv(void *arg0);
void update_particle_positions__12TBoss8DragonFPv(void *arg0);
void enable__13TParticleCtrlFPv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void free_parts__12TBoss8DragonFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x72C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x72C));
        M2C_FIELD(arg0, u32 *, 0x72C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x728) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x728));
        M2C_FIELD(arg0, u32 *, 0x728) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x724) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x724));
        M2C_FIELD(arg0, u32 *, 0x724) = 0U;
    }
}

extern M2C_UNK lbl_804882BC[];

void update_particle_positions__12TBoss8DragonFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x724) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x724), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x724));
    }
    if (M2C_FIELD(arg0, void **, 0x728) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x728), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x728));
    }
    if (M2C_FIELD(arg0, void **, 0x72C) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x72C), lbl_804882BC);
        enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0x72C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005E8F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TBoss8Dragon__sub_8005E868(s32, s32, s32);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, s32);

s32 calc_product__12TBoss8DragonFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    temp_r31 = TBoss8Dragon__sub_8005E9E8(arg0, arg1, arg3);
    return temp_r31 * TBoss8Dragon__sub_8005E868(arg0, arg1, arg2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005ECF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2);
s32 TBoss8Dragon__sub_8005E868(s32, s32, M2C_UNK);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, M2C_UNK);
f32 TBoss8Dragon__sub_8005EAD0(s32, s32, M2C_UNK);

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = TBoss8Dragon__sub_8005E9E8(arg0, arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = TBoss8Dragon__sub_8005EAD0(arg0, arg2, 0);
    M2C_FIELD(arg1, f32 *, 0x10) = TBoss8Dragon__sub_8005EAD0(arg0, arg2, 1);
    M2C_FIELD(arg1, s32 *, 8) = TBoss8Dragon__sub_8005E868(arg0, arg2, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005EDC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src);
s16 TBoss8Dragon__sub_8005E944(void *, s16, s16);

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src) {
    M2C_FIELD(dst, s16 *, 0) = (s16) M2C_FIELD(src, s32 *, 0);
    M2C_FIELD(dst, s16 *, 2) = TBoss8Dragon__sub_8005E944(arg0, M2C_FIELD(src, s16 *, 4), M2C_FIELD(src, s16 *, 6));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005F50C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target_from_state__12TBoss8DragonFPv(void *arg0);

void update_target_from_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x40);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 8);
        return;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x60);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x778), s32 *, 0x5C);
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005F5E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_animation_by_state__12TBoss8DragonFPv(void *arg0);
void init_state_zero__12TBoss8DragonFPv(void *arg0);
M2C_UNK TBoss8Dragon__sub_8005F578(void *, M2C_UNK);

void set_animation_by_state__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x4C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C0) | 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
    switch (temp_r0) {
    default:
    case 0:
        TBoss8Dragon__sub_8005F578(arg0, 0x19);
        return;
    case 1:
        TBoss8Dragon__sub_8005F578(arg0, 0x1A);
        return;
    case 3:
        TBoss8Dragon__sub_8005F578(arg0, 0x1B);
        return;
    case 2:
        TBoss8Dragon__sub_8005F578(arg0, 0x1C);
        return;
    }
}

void init_state_zero__12TBoss8DragonFPv(void *arg0) {
    TBoss8Dragon__sub_8005F578(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005F71C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1);
M2C_UNK fn_800666C4(s32);

void trigger_effect__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    fn_800666C4(arg1 + 0x14);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005F7BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F968(void *, s32, s32);
M2C_UNK TBoss8Dragon__sub_80064AB0(void *);
struct Obj_8005F968 { u8 pad[0x60]; s32 f60; u8 pad64[0x480 - 0x64]; s32 f480; };
s32 TBoss4Type2__sub_80141FA8(s32, s32);
extern const f32 lbl_805D8DA0;
s32 enemy_validate_retained_target(void *);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, M2C_UNK *);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK update_epsilon_position__12TBoss8DragonFv();
M2C_UNK update_velocity__9TObjEneDDFPv();

extern M2C_UNK lbl_80437938[];

void update_periodic_effect__12TBoss8DragonFPv(void *arg0) {
    update_epsilon_position__12TBoss8DragonFv();
    if (!(M2C_FIELD(arg0, s32 *, 0x490) & 0x1F)) {
        if (enemy_validate_retained_target(arg0) != 0) {
            TObjEneEpsilon__sub_800B96A4(arg0);
        } else {
            copy_position__14TObjEneEpsilonFPv(arg0, lbl_80437938);
        }
        TBoss8Dragon__sub_80064AB0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) + 1);
}

extern M2C_UNK lbl_80437EB8;

void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) (M2C_FIELD(arg0, f32 *, 0x474) * farg0);
    M2C_FIELD(arg0, f32 *, 0x478) = (f32) (M2C_FIELD(arg0, f32 *, 0x478) * farg1);
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) (M2C_FIELD(arg0, f32 *, 0x47C) * farg0);
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x480) * farg2);
}

extern const f64 lbl_80437EB0;

void fire_at_angle__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(-M2C_FIELD(arg0, f32 *, 0x38), -M2C_FIELD(arg0, f32 *, 0x40))));
}

extern const f64 lbl_80437EB0;

void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))));
}

void TBoss8Dragon__sub_8005F968(void *selfv, s32 arg1, s32 arg2) {
#define self ((Obj_8005F968 *)selfv)
    s32 t;
    s32 v;

    t = TBoss4Type2__sub_80141FA8(self->f60, arg2);
    t = TBoss4Type2__sub_80141FA8((s32)((f32)t * lbl_805D8DA0), self->f480);
    v = (t < -arg1) ? -arg1 : ((t < arg1) ? t : arg1);
    self->f480 = self->f480 - v;
#undef self
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005FA08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0);
M2C_UNK TBoss8Dragon__sub_8005FA78(void *, s32, f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK update_velocity__9TObjEneDDFPv();

extern const f64 lbl_80437EB0;

void update_facing__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005FA78(arg0, (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), farg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005FAFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_motion_entry__12TBoss8DragonFPv(void *arg0);
void advance_motion_timer__12TBoss8DragonFPv(void *arg0);
M2C_UNK transition_enemy_state(void *, s16);

void advance_motion_entry__12TBoss8DragonFPv(void *arg0) {
    s16 *ptr;
    ptr = (s16 *) (M2C_FIELD(arg0, s32 *, 0x4BC) + 0x14);
    M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) ptr;
    ptr = (s16 *) M2C_FIELD(arg0, s32 *, 0x4BC);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != *ptr) {
        transition_enemy_state(arg0, *ptr);
    }
}

void advance_motion_timer__12TBoss8DragonFPv(void *arg0) {
    int temp_r4;
    void *temp_r5;
    void *temp_r4b;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x4BC);
        temp_r4 = (s16) M2C_FIELD(temp_r5, s16 *, 2);
        if (temp_r4 > 0) {
            M2C_FIELD(temp_r5, s16 *, 2) = (s16) (temp_r4 - 1);
            temp_r4b = M2C_FIELD(arg0, void **, 0x4BC);
            if (M2C_FIELD(temp_r4b, s16 *, 2) == 0) {
                advance_motion_entry__12TBoss8DragonFPv((void *)(arg0));
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80063714
#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80063714(void);

void TBoss8Dragon__sub_80063714(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80063C1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_switch_attack__12TBoss8DragonFPv(void *arg0);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
s32 spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK attach_particle_model(s32, s32, s32, M2C_UNK, M2C_UNK, f32);

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_switch_attack__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = spawn_particle_effect_with_flags(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        attach_particle_model(temp_r3, get_bml_model(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064764
#include "types.h"

extern "C" {

void run_default_state__12TBoss8DragonFPv(void* p);
int update_state_3__12TBoss8DragonFPv(void* p);
int set_state_2__12TBoss8DragonFPv(void* p);
int attack_default__12TBoss8DragonFPv(void* p);
int query_default__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_80064968(void*, int);

void run_default_state__12TBoss8DragonFPv(void* p) { query_default__12TBoss8DragonFPv((void*)(p)); attack_default__12TBoss8DragonFPv((void*)(p)); }
int update_state_3__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 3); }
int set_state_2__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 2); }
int attack_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 1); }
int query_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_80064968(p, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064A60
#include "types.h"

extern "C" {

void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1);
int VecCopy__FP3VecPC3Vec(void*, void*);
int TBoss8Dragon__sub_80065F4C(void*);

void copy_spawn_params__12TBoss8DragonFPvPv(void* p, void* a1) { *(short*)((char*)a1 + 0x2) = *(unsigned short*)((char*)p + 0x1c); VecCopy__FP3VecPC3Vec((char*)a1 + 0x4, (char*)p + 0x38); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x60); TBoss8Dragon__sub_80065F4C(a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064C08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);

void set_target_from_action__12TBoss8DragonFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064D58
#include "types.h"

extern "C" {

void reset_radius__12TBoss8DragonFPv(void* a0);
void set_anim_speed__12TBoss8DragonFPv(void* a0);
void reset_float_3c__12TBoss8DragonFPv(void* a0);
void reset_angle__12TBoss8DragonFPv(void* a0);
void set_phase__12TBoss8DragonFPv(void* p);
void set_attack_phase__12TBoss8DragonFPv(void* p);
void set_flag_4e4__12TBoss8DragonFPv(void* p);
void clear_timer__12TBoss8DragonFPv(void* p);

    extern const float lbl_805D8EC4;
void reset_radius__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8EC4; }

    extern const float lbl_805D8E20;
void set_anim_speed__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8E20; }

    extern const float lbl_805D8DEC;
void reset_float_3c__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8DEC; }

    extern const float lbl_805D8D84;
void reset_angle__12TBoss8DragonFPv(void* a0) { *(float*)((char*)a0 + 0x3c) = lbl_805D8D84; }

void set_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 3; }
void set_attack_phase__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 2; }
void set_flag_4e4__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 1; }
void clear_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x4e4) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064EC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);

void spawn_ancient_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x560, 0, 0);
}

void play_se__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    play_sound_effect(arg1, arg0 + 0x560, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80064F2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_epsilon_position__12TBoss8DragonFv(void);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

extern const f32 lbl_805D8EC8;

void update_epsilon_position__12TBoss8DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D8EC8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80065320
#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80065360(void);
void TBoss8Dragon__sub_80065364(void);
void TBoss8Dragon__sub_80065368(void);
void TBoss8Dragon__sub_8006536C(void);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void shift_position_history__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x3C0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss8Dragon__sub_80065360(void) {  }
void TBoss8Dragon__sub_80065364(void) {  }
void TBoss8Dragon__sub_80065368(void) {  }
void TBoss8Dragon__sub_8006536C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80065370
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80065370 { char pad[0x18]; };
struct VObj_80065370 : Base_80065370 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void vcall(s16 a, int b);
};

extern "C" {

void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370 *obj);
M2C_UNK set_animation_by_state__12TBoss8DragonFPv();

void update_animation_by_state__12TBoss8DragonFPv(struct VObj_80065370 *obj) {
    if (!(M2C_FIELD(obj, s32 *, 0x4C0) & 0xC) && (M2C_FIELD(obj, s16 *, 0x32C) <= 0)) {
        set_animation_by_state__12TBoss8DragonFPv();
    } else {
        obj->vcall(M2C_FIELD(obj, s16 *, 0x326), 9);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80065F14
#include "types.h"

extern "C" {

int get_instance_count__12TBoss8DragonFv(void);

    extern int lbl_805D4DBC;
int get_instance_count__12TBoss8DragonFv(void) {  return lbl_805D4DBC; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80065F1C
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TBoss8Dragon__sub_80065F1C(void);
void TBoss8Dragon__sub_80065F20(void);
void TBoss8Dragon__sub_80065F24(void);
void TBoss8Dragon__sub_80065F28(void);
void TBoss8Dragon__sub_80065F2C(void);
void TBoss8Dragon__sub_80065F30(void);
void TBoss8Dragon__sub_80065F34(void);
void init_color__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_800660A4(void* p);

void TBoss8Dragon__sub_80065F1C(void) {  }
void TBoss8Dragon__sub_80065F20(void) {  }
void TBoss8Dragon__sub_80065F24(void) {  }
void TBoss8Dragon__sub_80065F28(void) {  }
void TBoss8Dragon__sub_80065F2C(void) {  }
void TBoss8Dragon__sub_80065F30(void) {  }
void TBoss8Dragon__sub_80065F34(void) {  }
void init_color__12TBoss8DragonFPv(void* p) { *(u8*)((char*)p + 0x0) = 160; *(u8*)((char*)p + 0x1) = 10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80066060
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TBoss8Dragon__sub_80065F1C(void);
void TBoss8Dragon__sub_80065F20(void);
void TBoss8Dragon__sub_80065F24(void);
void TBoss8Dragon__sub_80065F28(void);
void TBoss8Dragon__sub_80065F2C(void);
void TBoss8Dragon__sub_80065F30(void);
void TBoss8Dragon__sub_80065F34(void);
void init_color__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_800660A4(void* p);

void bswap_boss_actions__12TBoss8DragonFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void TBoss8Dragon__sub_800660A4(void* p) { *(u8*)((char*)p + 0x0) = 159; *(u8*)((char*)p + 0x1) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80066108
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_80066108(void);

extern f32 lbl_805D4D90;
extern f32 lbl_805D4D94;
extern f32 lbl_805D8D58;
extern f32 lbl_805D8D90;
extern f32 lbl_805D9E80;

void TBoss8Dragon__sub_80066108(void) {
    lbl_805D4D90 = lbl_805D8D90 * lbl_805D9E80;
    lbl_805D4D94 = lbl_805D8D58 * lbl_805D9E80;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80066A4C
#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80066A4C(void);

void TBoss8Dragon__sub_80066A4C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80067064
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_sq_offset__12TBoss8DragonFPvf(void *arg0, f32 farg0);

f32 calc_sq_offset__12TBoss8DragonFPvf(void *arg0, f32 farg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 8) + farg0;
    return temp_f0 * temp_f0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008072C
#include "types.h"

extern "C" {

f32 TBoss8Dragon__sub_8008072C(void);
f64 pow();

f32 TBoss8Dragon__sub_8008072C(void) {
    return (f32) pow();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB650
#include "types.h"

extern "C" {

int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void noop__12TBoss8DragonFv(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int submit_cursor_candidate(void*, int);

void TBoss8Dragon__sub_800BB650(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB740
#include "types.h"

extern "C" {

int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void noop__12TBoss8DragonFv(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int submit_cursor_candidate(void*, int);

void refresh_and_send_entity_flags__12TBoss8DragonFPv(void* p) { refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BB7D0
#include "types.h"

extern "C" {

int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void noop__12TBoss8DragonFv(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int submit_cursor_candidate(void*, int);

void noop__12TBoss8DragonFv(void) {  }
void TBoss8Dragon__sub_800BB7D4(void) {  }
void TBoss8Dragon__sub_800BB7D8(void) {  }
void TBoss8Dragon__sub_800BB7DC(void) {  }
int set_player_state_default__12TBoss8DragonFPv(void* p) { return submit_cursor_candidate(p, -1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7B98
#include "types.h"

extern "C" {

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E3CFC
#include "types.h"

extern "C" {

void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1);
int render_tree__10TObjPlayerFPv(void*);
int TObjPlayer__sub_803D7B68(void*);

void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1) { TObjPlayer__sub_803D7B68(a1); render_tree__10TObjPlayerFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028A8F8
#include "types.h"

extern "C" {

int get_instance__12TBoss8DragonFv(void);

    extern int lbl_805D64CC;
int get_instance__12TBoss8DragonFv(void) {  return lbl_805D64CC; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F3504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 find_target_enemy__12TBoss8DragonFv(void);
s32 is_any_part_alive__12TBoss8DragonFv(void);
void update_all_parts__12TBoss8DragonFv(void);
M2C_UNK get_part_count_plus__12TBoss8DragonFPvi(u32, s32);
u32 get_enemy_entity();
M2C_UNK set_state_22__12TBoss8DragonFPv();

extern u32 lbl_805D6978;

s32 find_target_enemy__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) lbl_805D6978 == 0U) {
        return 0;
    }
    var_r31 = 1;
loop_3:
    get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, var_r31);
    if (get_enemy_entity() != 0U) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 6) {
        return 0;
    }
    goto loop_3;
}

extern u32 lbl_805D6978;

s32 is_any_part_alive__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) lbl_805D6978 == 0U) {
        return 1;
    }
    var_r31 = 1;
loop_3:
    get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, var_r31);
    if (get_enemy_entity() != 0U) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 6) {
        return 1;
    }
    goto loop_3;
}

extern u32 lbl_805D6978;

void update_all_parts__12TBoss8DragonFv(void) {
    s32 var_r31;

    if ((u32) lbl_805D6978 != 0U) {
        var_r31 = 1;
        do {
            get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, var_r31);
            if (get_enemy_entity() != 0U) {
                set_state_22__12TBoss8DragonFPv();
            }
            var_r31 += 1;
        } while (var_r31 < 6);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F36DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

bool has_enough_enemies__12TBoss8DragonFv(void);
M2C_UNK get_part_count_plus__12TBoss8DragonFPvi(u32, s32);
u32 get_enemy_entity();
s32 is_split_screen();

extern u32 lbl_805D6978;

bool has_enough_enemies__12TBoss8DragonFv(void) {
    s32 i;
    s32 count;

    if (is_split_screen() != 0) {
        return 1;
    }
    if (lbl_805D6978 == 0U) {
        return 0;
    }
    count = 0;
    i = 0;
    do {
        get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, i);
        if (get_enemy_entity() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x802F3EE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0);
M2C_UNK render_nodes__7TObjectFv(s32, s32);

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x3C4, temp_r4);
    some_id_805c6f74 = lbl_805D5660;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F42A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__12TBoss8DragonFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *, int);

extern u8 *TBoss8Dragon__data_805D6988;

void draw__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    TBoss7Tentacle__sub_803D9BA0((void *) (arg0 + 0x68));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r4 = (unsigned char *) (M2C_FIELD(TBoss8Dragon__data_805D6988, void **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 0x28);
    draw__16TObjEneRe7BeruraFPv((void *) (arg0), (int) (temp_r4));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
    pop_matrix();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F4324
#include "types.h"

extern "C" {

void try_update__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_802F4360(void* p);
int draw__12TBoss8DragonFPv(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int get_target_info__9TObjEneDDFPv(void*);

void try_update__12TBoss8DragonFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { draw__12TBoss8DragonFPv(p); } }
int TBoss8Dragon__sub_802F4360(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F4480
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void copy_vectors__12TBoss8DragonFPv(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);

struct VOff_802F4480_arg0 { char pad_0[0x410]; char f_410[1]; char pad_411[0xB]; char f_41C[1]; };

void copy_vectors__12TBoss8DragonFPv(void *arg0) {
    struct VOff_802F4480_arg0 *self = (struct VOff_802F4480_arg0 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_410, (void *)((char *)arg0 + 1004));
    VecCopy__FP3VecPC3Vec(self->f_41C, (void *)((char *)arg0 + 1016));
    TBoss6Type1__sub_803D9370(self->f_41C, self->f_410);
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1064), (void *)((char *)arg0 + 1028));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F4D00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__12TBoss8DragonFPvi(void *arg0, s32 arg1);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
u32 get_player_by_client_id(M2C_UNK);

extern const f32 TBoss8Dragon__data_805DED50;

void action__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss8Dragon__data_805DED50;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84C) > 0x96) {
            transition_enemy_state(arg0, 8);
        }
        break;
    case 0:
        if ((get_player_by_client_id(0) != 0U) || (get_player_by_client_id(1) != 0U) || (get_player_by_client_id(2) != 0U) || (get_player_by_client_id(3) != 0U)) {
            M2C_FIELD(arg0, s32 *, 0x84C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84C) + 1);
        }
        break;
    case 5:
    case 1:
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F513C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_wander_state__12TBoss8DragonFPvi(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback();

void update_wander_state__12TBoss8DragonFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x84C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84C) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84C) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x84C) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 0x1C) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
        advance_animation_playback();
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802F7B28
#include "types.h"

extern "C" {

int action_17__12TBoss8DragonFPvi(void* p, int a1);
int TBoss8Dragon__sub_802F7B4C(void* p, int a1);
int TBoss8Dragon__sub_802F7808(void*, int, int);

int action_17__12TBoss8DragonFPvi(void* p, int a1) { return TBoss8Dragon__sub_802F7808(p, a1, 17); }
int TBoss8Dragon__sub_802F7B4C(void* p, int a1) { return TBoss8Dragon__sub_802F7808(p, a1, 16); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FAAB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TBoss8Dragon__sub_802FABB4(void *arg0);
void calc_velocity_from_angle__12TBoss8DragonFPv(void *arg0);
u8 check_attack_ready__12TBoss8DragonFPv(void *arg0);
s32 mask_flags__12TBoss8DragonFiii(s32 arg1, s32 arg2, s32 arg3);
s32 TBoss8Dragon__sub_802FC88C(void *);
u32 get_player_by_client_id(s32);
s32 check_flag_100__10TObjPlayerFPv();
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern s32 lbl_805D53A0;

s32 mask_flags__12TBoss8DragonFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    var_r31 = arg3;
    if ((get_player_by_client_id(lbl_805D53A0) == 0U) || (check_flag_100__10TObjPlayerFPv() != 0)) {
        arg2 &= 0xFFFCF9F9;
    }
    return arg2 & var_r31;
}

extern f32 lbl_805DEEB0;

void calc_velocity_from_angle__12TBoss8DragonFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DEEB0 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x758)));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (lbl_805DEEB0 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x758)));
}

u8 check_attack_ready__12TBoss8DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if ((mask_flags__12TBoss8DragonFiii((s32)(arg0), (s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6D8), s32 *, 8)), (s32)(0x400)) != 0) && (TBoss8Dragon__sub_802FC88C(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 TBoss8Dragon__sub_802FABB4(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x754) >= 0x96) && (mask_flags__12TBoss8DragonFiii((s32)(arg0), (s32)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x6D8), s32 *, 8)), (s32)(0x400)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FB150
#include "types.h"

extern "C" {

int setup_instance__12TBoss8DragonFPv(void* p);
int get_state_flags__12TBoss8DragonFPv(void* p);
int emit_effect__12TBoss8DragonFPv(void* p);
int TObjEneDD__sub_800BA498(void*);
int emit_enemy_effect__9TObjEneDDFiiPvi(void*);
int setup_instance__9TObjEneDDFiiPvi(void*);

int setup_instance__12TBoss8DragonFPv(void* p) { return setup_instance__9TObjEneDDFiiPvi(p); }
int get_state_flags__12TBoss8DragonFPv(void* p) { return TObjEneDD__sub_800BA498(p); }
int emit_effect__12TBoss8DragonFPv(void* p) { return emit_enemy_effect__9TObjEneDDFiiPvi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FB300
#include "types.h"

extern "C" {

void TBoss8Dragon__sub_802FB300(void);

void TBoss8Dragon__sub_802FB300(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FB440
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__12TBoss8DragonFi(s32 arg0);
void TBoss8Dragon__sub_802FB484(void);
void update_pos_from_data__12TBoss8DragonFv(void);
M2C_UNK get_state_flags__12TBoss8DragonFPv(s32, M2C_UNK *);
M2C_UNK TBoss8Dragon__sub_802FB4DC(f32, f32, f32);
M2C_UNK TBoss8Dragon__sub_802FBE3C();
M2C_UNK TBoss8Dragon__sub_802FBF40(s32);

extern M2C_UNK lbl_804744DC[];

void init_state__12TBoss8DragonFi(s32 arg0) {
    TBoss8Dragon__sub_802FBE3C();
    get_state_flags__12TBoss8DragonFPv(arg0, lbl_804744DC);
    TBoss8Dragon__sub_802FBF40(arg0);
}

extern const f32 TBoss8Dragon__data_805DEDAC;
extern const f32 TBoss8Dragon__data_805DEEA4;
extern const f32 lbl_805DEEBC;

void TBoss8Dragon__sub_802FB484(void) {
    TBoss8Dragon__sub_802FB4DC(TBoss8Dragon__data_805DEEA4, lbl_805DEEBC, TBoss8Dragon__data_805DEDAC);
}

extern const f32 TBoss8Dragon__data_805DEEA4;
extern const f32 lbl_805DEEC0;
extern const f32 lbl_805DEEC4;

void update_pos_from_data__12TBoss8DragonFv(void) {
    TBoss8Dragon__sub_802FB4DC(TBoss8Dragon__data_805DEEA4, lbl_805DEEC0, lbl_805DEEC4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FB7E0
#include "types.h"

extern "C" {

int set_state_1__12TBoss8DragonFPv(void* p);
int check_condition_default__12TBoss8DragonFPv(void* p);
int TBoss8Dragon__sub_802FB828(void*, int);

int set_state_1__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_802FB828(p, 1); }
int check_condition_default__12TBoss8DragonFPv(void* p) { return TBoss8Dragon__sub_802FB828(p, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FB920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__12TBoss8DragonFi(s32 arg0);
M2C_UNK alloc_effect_node__12TBoss3VoloptFUisi(s32, M2C_UNK, s32);

void spawn_effect__12TBoss8DragonFi(s32 arg0) {
    alloc_effect_node__12TBoss3VoloptFUisi(arg0 + 0x38, 0xE0, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FBBA0
#include "types.h"

extern "C" {

void save_position__12TBoss8DragonFPv(void* p);
void restore_target_pos__12TBoss8DragonFPv(void* p);
void sync_target_pos__12TBoss8DragonFPv(void* p);

void save_position__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x688) = *(f32*)((char*)p + 0x394); *(f32*)((char*)p + 0x68c) = *(f32*)((char*)p + 0x39c); }
void restore_target_pos__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x38) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x40) = *(f32*)((char*)p + 0x694); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FBBE8
#include "types.h"

extern "C" {

void save_position__12TBoss8DragonFPv(void* p);
void restore_target_pos__12TBoss8DragonFPv(void* p);
void sync_target_pos__12TBoss8DragonFPv(void* p);

void sync_target_pos__12TBoss8DragonFPv(void* p) { *(f32*)((char*)p + 0x394) = *(f32*)((char*)p + 0x690); *(f32*)((char*)p + 0x39c) = *(f32*)((char*)p + 0x694); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FC164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_hit_result__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2);
void reset_action__12TBoss8DragonFPv(void* a0);
void activate_attack__12TBoss8DragonFPv(void* a0);
void set_active_flag__12TBoss8DragonFPv(void* a0);
void set_action_state__12TBoss8DragonFPv(void* p);
void set_state__12TBoss8DragonFPv(void* p);
void reset_timer__12TBoss8DragonFPv(void* p);
s32 TBoss4Type2__sub_80141FA8(s32, s32);

void check_hit_result__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (TBoss4Type2__sub_80141FA8(arg1, arg2) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x654) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x654) = -1;
}

    extern const float lbl_805DED70;
void reset_action__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) & 0xfffffffe); *(float*)((char*)a0 + 0x3c) = lbl_805DED70; }

    extern const float lbl_805DEE70;
void activate_attack__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = lbl_805DEE70; }

    extern const float TBoss8Dragon__data_805DED50;
void set_active_flag__12TBoss8DragonFPv(void* a0) { *(int*)((char*)a0 + 0x3c0) = (*(int*)((char*)a0 + 0x3c0) | 0x1); *(float*)((char*)a0 + 0x3c) = TBoss8Dragon__data_805DED50; }

void set_action_state__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 2; }
void set_state__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 1; }
void reset_timer__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x3e4) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FC2C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__12TBoss8DragonFii(s32 arg0, s32 arg1);
void spawn_trap__12TBoss8DragonFii(s32 arg0, s32 arg1);
void try_spawn_trap__12TBoss8DragonFPv(void *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
s32 TBoss8Dragon__sub_802F376C();

void try_spawn_trap__12TBoss8DragonFPv(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) && (TBoss8Dragon__sub_802F376C() != 0)) {
        spawn_trap__12TBoss8DragonFii((s32)(arg0), (s32)(0x4003D013));
    }
}

void spawn_trap__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x634, 0, 0);
}

void spawn_effect__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    play_sound_effect(arg1, arg0 + 0x634, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FCA34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_linked_position__12TBoss8DragonFv(void);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);

extern const f32 lbl_805DEEE0;

void update_linked_position__12TBoss8DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805DEEE0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FCC7C
#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
int TBoss8Dragon__sub_802FBBFC(void*, void*);
void set_state_22__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_802FCD00(void);
void TBoss8Dragon__sub_802FCD04(void);
void TBoss8Dragon__sub_802FCD08(void);
void TBoss8Dragon__sub_802FCD0C(void);

void store_position__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x434);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FCCD0
#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
int TBoss8Dragon__sub_802FBBFC(void*, void*);
void set_state_22__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_802FCD00(void);
void TBoss8Dragon__sub_802FCD04(void);
void TBoss8Dragon__sub_802FCD08(void);
void TBoss8Dragon__sub_802FCD0C(void);

void set_state_22__12TBoss8DragonFPv(void* p) { if (*(short*)((char*)p + 0x326) != 22) { TBoss8Dragon__sub_802FBBFC(p, (void*)22); } }
void TBoss8Dragon__sub_802FCD00(void) {  }
void TBoss8Dragon__sub_802FCD04(void) {  }
void TBoss8Dragon__sub_802FCD08(void) {  }
void TBoss8Dragon__sub_802FCD0C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FCD10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct D_A { char pad[0x18]; };
struct D_V : D_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m85(s16, s32);
};

extern "C" {

void check_death__12TBoss8DragonFPv(void *arg0);
s32 check_damage_reaction__12TBoss8DragonFPv(void *);
M2C_UNK TBoss8Dragon__sub_802FBBFC(void *, M2C_UNK);
s32 is_health_low__12TBoss8DragonFPv();

void check_death__12TBoss8DragonFPv(void *arg0) {
    if (is_health_low__12TBoss8DragonFPv() != 0) {
        if (check_damage_reaction__12TBoss8DragonFPv(arg0) != 0) {
            return;
        }
        goto block_8;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x20) && (M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            TBoss8Dragon__sub_802FBBFC(arg0, 0xC);
            return;
        }
        TBoss8Dragon__sub_802FBBFC(arg0, 0x15);
        return;
    }
block_8:
    ((D_V *) arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FD9D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802FD9D0(void);
void free_static__12TBoss8DragonFv(void);
void *create__12TBoss8DragonFPv(void *arg0);
void *TBoss8Dragon__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

    extern int TBoss8Dragon__data_805D69B8;
void TBoss8Dragon__sub_802FD9D0(void) { TBoss8Dragon__data_805D69B8 = 0; }

extern u32 TBoss8Dragon__data_805D6988;
extern u32 TBoss8Dragon__data_805D69A8;

void free_static__12TBoss8DragonFv(void) {
    if ((u32) TBoss8Dragon__data_805D69A8 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TBoss8Dragon__data_805D69A8);
        TBoss8Dragon__data_805D69A8 = 0U;
    }
    if ((u32) TBoss8Dragon__data_805D6988 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss8Dragon__data_805D6988, 1);
        TBoss8Dragon__data_805D6988 = 0U;
    }
}

extern void *tl_04;

void *create__12TBoss8DragonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x8A4);
    if (o != NULL) {
        o = TBoss8Dragon__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FDF10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802FDF10(void);

extern f32 lbl_805D6980;
extern f32 lbl_805D6984;
extern f32 lbl_805D69C0;
extern f32 lbl_805D9E80;
extern f32 TBoss8Dragon__data_805DEDC8;
extern f32 lbl_805DEE40;

void TBoss8Dragon__sub_802FDF10(void) {
    f32 temp_f1;

    temp_f1 = TBoss8Dragon__data_805DEDC8 * lbl_805D9E80;
    lbl_805D6980 = temp_f1;
    lbl_805D6984 = lbl_805DEE40 * lbl_805D9E80;
    lbl_805D69C0 = temp_f1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030B80C
#include "types.h"

extern "C" {

int TBoss8Dragon__sub_8030B80C(void);

    extern int lbl_805D53A0;
int TBoss8Dragon__sub_8030B80C(void) {  return (lbl_805D53A0 & 0xffff); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030BD7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_toggle_state__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_802F3638();
M2C_UNK TObjPlayer__sub_80082CBC(void *);
M2C_UNK TObjPlayer__sub_80082CCC(void *);

void update_toggle_state__12TBoss8DragonFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= TBoss8Dragon__sub_802F3638()) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                TObjPlayer__sub_80082CBC(M2C_FIELD(arg0, void **, 0x50));
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TObjPlayer__sub_80082CCC(M2C_FIELD(arg0, void **, 0x50));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80324D3C
#include "types.h"

extern "C" {

void copy_position__12TBoss8DragonFii(s32 arg0, s32 arg1);
int VecCopy__FP3VecPC3Vec(s32, s32, s32);

void copy_position__12TBoss8DragonFii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x20, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80325D38
#include "types.h"

extern "C" {

int queue_destruction__12TBoss8DragonFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__12TBoss8DragonFPv(void* p) { return queue_destruction__7TObjectFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80355A1C
#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80355A1C(void);

void TBoss8Dragon__sub_80355A1C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80359D6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss8Dragon__sub_80359D6C(void *arg0, s16 arg1);
void TBoss8Dragon__sub_802FD354(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804F1A78[];

void *TBoss8Dragon__sub_80359D6C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1A78;
        TBoss8Dragon__sub_802FD354(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036AEF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804F3610[];

M2C_UNK **TBoss8Dragon__sub_8036AEF8(M2C_UNK **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = lbl_804F3610;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800BC620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8002B094(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 __dl__FPv(u32 *);
s32 free__11TOBoss4RockFUi(u32);
int queue_destruction__12TObjGrassWebFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void *init_buffer__12TBoss8DragonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = alloc_buffer__11TOBoss4RockFPv(arg1 * 4);
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    fn_8002B094(arg0);
    return arg0;
}
u32 *free_buffer__12TBoss8DragonFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8002AE38
#include "types.h"

extern "C" {

void bswap_6x12_packet__10TObjPlayerFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void bswap_dragon_boss_fields__10TObjPlayerFPv(void* p);
void bswap_stats__10TObjPlayerFPv(void* p);
void send_6x12_packet__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(void);
f64 floor();
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void* p);
int test_card_flag_2__12TBoss8DragonFPv(void* p);
void set_speed__12TBoss8DragonFPvf(void* p, f32 v);
void set_field_b8__14TObjEnePanarmsFPvs(void* p, s16 v);
void set_field_dc__10TObjPlayerFPvi(void* p, s32 v);
void set_field_d8__10TObjPlayerFPvi(void* p, s32 v);
void reset_lobby_model__10TObjPlayerFPv(void* p);
void reset_type__10TObjPlayerFPv(void* p);
void set_type__10TObjPlayerFPvi(void* p, s32 v);
void set_type_dragon__10TObjPlayerFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int test_card_flag_2__12TBoss8DragonFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 2); }

}
#endif
#endif
