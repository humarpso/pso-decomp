#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcEnemy__vt86(void *arg0);

void TObjNpcEnemy__vt86(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x3B8);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1C);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r4, s16 *, 0x1E);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80143118
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model__12TObjNpcEnemyFPv(u8 *arg0);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK TPlyPhotonChair__sub_80142770(s32);
M2C_UNK TPlyPhotonChair__sub_80142774();
M2C_UNK TObjPlayer__sub_801E2CCC(s32, void *, f32);
M2C_UNK TObjPlayer__sub_801E2DE4(s32, s32, f32);
M2C_UNK set_npc_enemy_param(s32);

extern s32 lbl_805D7710;

void draw_model__12TObjNpcEnemyFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142774();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        TObjPlayer__sub_801E2CCC(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_npc_enemy_param(lbl_805D7710);
        TObjPlayer__sub_801E2DE4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_npc_enemy_param(0);
    }
    reset_transform_state__10TObjPlayerFv();
    TPlyPhotonChair__sub_80142770(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7070
#include "types.h"

extern "C" {

void reset_anim_fields__12TObjNpcEnemyFPv(void* a0);

    extern const float lbl_805DE7D8;
void reset_anim_fields__12TObjNpcEnemyFPv(void* a0) { *(short*)((char*)a0 + 0x0) = 0; *(short*)((char*)a0 + 0x2) = 4; *(float*)((char*)a0 + 0x4) = lbl_805DE7D8; *(int*)((char*)a0 + 0x8) = 0; *(int*)((char*)a0 + 0xc) = 0; *(float*)((char*)a0 + 0x10) = lbl_805DE7D8; *(int*)((char*)a0 + 0x14) = 0; *(int*)((char*)a0 + 0x18) = 0; *(short*)((char*)a0 + 0x1c) = 0; *(short*)((char*)a0 + 0x1e) = 0; *(short*)((char*)a0 + 0x20) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7484
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1);
M2C_UNK init_npc_animation__10TObjPlayerFPvPvPvPv(void *, s32, s32, s16);

extern const f32 lbl_805DE7D8;

void set_npc_data__12TObjNpcEnemyFPvPv(void *arg0, void *arg1) {
    u16 temp_r0;
    void *temp_r3;
    void *temp_r5;

    M2C_FIELD(arg0, void **, 0x3B8) = arg1;
    temp_r5 = M2C_FIELD(arg0, void **, 0x3B8);
    if (temp_r5 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE7D8;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    temp_r3 = M2C_FIELD(arg0, void **, 0x3B8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) M2C_FIELD(temp_r5, s16 *, 0x1C);
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
    case 3:
        init_npc_animation__10TObjPlayerFPvPvPvPv(arg0, M2C_FIELD(temp_r5, s32 *, 0x18), M2C_FIELD(temp_r5, s32 *, 0x14), M2C_FIELD(arg0, s16 *, 0xB8));
        break;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 0xC) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x3B8), f32 *, 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D76B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__12TObjNpcEnemyFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK draw__16TObjEneRe7BeruraFPv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK draw_model__12TObjNpcEnemyFPv();
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK set_global_flag__10TObjPlayerFv(void *);
M2C_UNK clear_global_state__10TObjPlayerFv();

void update_state__12TObjNpcEnemyFPv(void *arg0) {
    void *sp4;
    u16 temp_r0;

    sp4 = M2C_FIELD(arg0, void **, 0x3B8);
    temp_r0 = M2C_FIELD(sp4, u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
        set_global_flag__10TObjPlayerFv(arg0);
        TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        clear_global_state__10TObjPlayerFv();
        return;
    case 1:
        draw__16TObjEneRe7BeruraFPv();
        return;
    case 2:
        set_global_flag__10TObjPlayerFv(arg0);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        clear_global_state__10TObjPlayerFv();
        return;
    case 3:
        draw_model__12TObjNpcEnemyFPv();
    case 4:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7748
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__12TObjNpcEnemyFv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
s32 TObjNpcEnemy__sub_802D7444(void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D97F0(int);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);
M2C_UNK update_state__12TObjNpcEnemyFPv(void *);

extern s32 some_id_805c6f74;
extern const f32 lbl_805DE7D8;

struct NpcBase_802d7748 { char pad[0x18]; };
struct NpcV_802d7748 : NpcBase_802d7748 {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32 a, f32 b);
};

void render__12TObjNpcEnemyFv(u8 *arg0) {
    u8 *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x3B8) != NULL) && (((NpcV_802d7748 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        TObjLight__sub_80134194((void *) (arg0));
        if (TObjNpcEnemy__sub_802D7444((void *) (arg0)) != 0) {
            some_id_805c6f74 |= 1;
        }
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D97F0((int) (0));
        set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x38));
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3B8));
        TObjPlayer__sub_803D9624((int) (0), (int) (temp_r4), (f32) (lbl_805DE7D8), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805DE7D8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        update_state__12TObjNpcEnemyFPv((void *) (arg0));
        TObjPlayer__sub_803D9B78();
        if (TObjNpcEnemy__sub_802D7444((void *) (arg0)) != 0) {
            some_id_805c6f74 &= 0xFFFFFFFE;
        }
        TObjLight__sub_80134098();
        render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (int) (0), (int) (0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjNpcEnemyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

extern M2C_UNK __vt__12TObjNpcEnemy[];

void *__dt__12TObjNpcEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcEnemy;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802D7984
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjNpcEnemy__create(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjNpcEnemy__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjNpcEnemy__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3BC);
    if (o2 != NULL) {
        o2 = TObjNpcEnemy__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D8090
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_global_count__12TObjNpcEnemyFi(s32 arg0);

extern s32 lbl_805D76DC;

void set_global_count__12TObjNpcEnemyFi(s32 arg0) {
    lbl_805D76DC = arg0;
}

}
#endif
#endif
