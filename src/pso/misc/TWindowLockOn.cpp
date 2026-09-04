#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__13TWindowLockOn[];

void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowLockOn;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800F5DD8
#include "types.h"

extern "C" {

s32 get_target_id__13TWindowLockOnFPv(void* p);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);
int initialize_enemy_photon_effect(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);

s32 get_target_id__13TWindowLockOnFPv(void* p) { return *(s32*)((char*)p + 0x370); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80262FD8
#include "types.h"

extern "C" {

void TWindowLockOn__sub_80262FD8(void);

void TWindowLockOn__sub_80262FD8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802635D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1);
M2C_UNK TWindowLockOn__update_for_enemy(s32, s32);
M2C_UNK TWindowLockOn__update_for_item(s32, s32);
M2C_UNK TWindowLockOn__update_for_other_player(s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257CB8(s32);

s32 obj_testFlags30(s32, M2C_UNK);

void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80257CB8(arg0 + 0x24);
    if (obj_testFlags30(arg1, 0x10000000) != 0) {
        TWindowLockOn__update_for_other_player(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x80000000) != 0) {
        TWindowLockOn__update_for_item(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x20000000) != 0) {
        TWindowLockOn__update_for_enemy(arg0, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802637C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TWindowLockOnFv(u8 *arg0);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);

void render__13TWindowLockOnFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x68);
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    if ((M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x40)) && (M2C_FIELD(arg0, f32 *, 0x34) == M2C_FIELD(arg0, f32 *, 0x44)) && (M2C_FIELD(arg0, f32 *, 0x38) == M2C_FIELD(arg0, f32 *, 0x48)) && (M2C_FIELD(arg0, f32 *, 0x3C) == M2C_FIELD(arg0, f32 *, 0x4C))) {
        TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026CB80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_target_distance__13TWindowLockOnFv(void);
void *TWindowSubComCard__sub_8026CBB8();

f32 get_target_distance__13TWindowLockOnFv(void) {
    return M2C_FIELD(TWindowSubComCard__sub_8026CBB8(), f32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026FF0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_8026ff0c;
struct VObj_8026ff0c {
    char pad[0x18];
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
};

extern "C" {

void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1);
s32 TLobby__sub_8039DAFC(s32, s32);
s32 is_inactive__10TObjPlayerFPv(void *);
struct VObj_8026ff0c *TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
M2C_UNK clear_visible_flag__20TWindowSubStatusDispFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(void *, s32, M2C_UNK);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(void *);

void update_for_player_index__13TWindowLockOnFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r31;
    struct VObj_8026ff0c *temp_r30;
    u8 *temp_r29;

    temp_r30 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r30 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r29 = (u8 *)temp_r30 + 0x85C;
    if (temp_r29 == NULL) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    temp_r31 = temp_r30->m10();
    if (temp_r31 == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    if (is_inactive__10TObjPlayerFPv(temp_r30) == 0) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(arg0);
    if ((get_field_20__17TWindowSubComCardFPv(arg0) == 0U) || (TLobby__sub_8039DAFC(get_field_20__17TWindowSubComCardFPv(arg0), temp_r31) != 0)) {
        TWindowSubStatusDisp__sub_8025AC50(arg0, temp_r31, 0x20);
    }
    if (temp_r30->m31() != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0xFFFF0000;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r29, s32 *, 0x18);
}

}
#endif
#endif
