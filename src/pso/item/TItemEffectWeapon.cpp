#ifndef PSO_CLASS_PACKAGE
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param);
void *__dt__17TItemEffectWeaponFv(void *self, s32 flag);
void *destroy__11TItemMagSubFPvs(void *, s32);
void  TItemEffectWeapon__sub_803639F0(s32);
s32   TItemEffectWeapon__sub_80363A1C(void);
void  free_to_heap__11TItemMagSubFPv(void *);
void  init_object__21TItemEffArmorParticleFPv(void *);

extern void *__vt__17TItemEffectWeapon[];

void *__dt__17TItemEffectWeaponFv(void *self, s32 flag) {
    if (self) {
        M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
        TItemEffectWeapon__sub_803639F0(M2C_FIELD(self, s32 *, 0x1C));
        destroy__11TItemMagSubFPvs(self, 0);
        if ((s16)flag > 0) {
            free_to_heap__11TItemMagSubFPv(self);
        }
    }
    return self;
}

extern void *__vt__17TItemEffectWeapon[];
extern s32 lbl_805D4470;

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param) {
    init_object__21TItemEffArmorParticleFPv(self);
    M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
    M2C_FIELD(self, s32 *, 0) = lbl_805D4470;
    M2C_FIELD(self, s32 *, 0x1C) = TItemEffectWeapon__sub_80363A1C();
    M2C_FIELD(self, s32 *, 0x24) = param;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    return self;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80115C24
#include "types.h"

extern "C" {

int decrement_timer__17TItemEffectWeaponFPv(void* p);
int decrement_packed_timer__15TObjBoss2TunnelFPvi(void*);

int decrement_timer__17TItemEffectWeaponFPv(void* p) { return decrement_packed_timer__15TObjBoss2TunnelFPvi(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803631A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_effect_sound__17TItemEffectWeaponFPv(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);

extern f32 lbl_805E0268;

void play_effect_sound__17TItemEffectWeaponFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805E0268, M2C_FIELD(arg0, f32 *, 0x1FC), lbl_805E0268);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036325C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_player_load__17TItemEffectWeaponFi(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK TObjPlayer__sub_8011EB84(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(s32, M2C_UNK *);

void send_player_load__17TItemEffectWeaponFi(s32 arg0) {
    M2C_UNK sp8;

    draw_status_icon__10TObjPlayerFPvi(arg0, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    TObjPlayer__sub_8011EB84(arg0, &sp8, 0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803632B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_value__17TItemEffectWeaponFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805E0270;
extern const f32 lbl_805E0274;

void approach_value__17TItemEffectWeaponFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1FC, lbl_805E0270, lbl_805E0274);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803632E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_target__17TItemEffectWeaponFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(s32, f32, f32);

extern const f32 lbl_805E0268;
extern const f32 lbl_805E0278;

void approach_target__17TItemEffectWeaponFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x1FC, lbl_805E0278, lbl_805E0268);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036330C
#include "types.h"

extern "C" {

void* init__17TItemEffectWeaponFPv(void* a0);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void* init__17TItemEffectWeaponFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F28E0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1fc) = lbl_805E0268; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803633B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804F28E0[];

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F28E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036340C
#include "types.h"

extern "C" {

void TItemEffectWeapon__sub_8036340C(void);
void TItemEffectWeapon__sub_80363410(void);

void TItemEffectWeapon__sub_8036340C(void) {  }
void TItemEffectWeapon__sub_80363410(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80363414
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void step__17TItemEffectWeaponFv(void *self);
void decrement_timer__17TItemEffectWeaponFPv(void *, s32);

void step__17TItemEffectWeaponFv(void *self) {
    s32 off;
    s8 *elem;
    s32 i;
    i = 0;
    off = 0;
    while (i != M2C_FIELD(self, s32 *, 0x20) / 2) {
        elem = M2C_FIELD(self, s8 **, 0x1C) + off;
        decrement_timer__17TItemEffectWeaponFPv(elem + 0xC, 0x3F);
        if ((*(u32 *)(elem + 0xC) & 0xFF000000) == 0) {
            M2C_FIELD(self, s32 *, 0x20) = i << 1;
            return;
        }
        decrement_timer__17TItemEffectWeaponFPv(M2C_FIELD(self, s8 **, 0x1C) + off + 0x1C, 0x3F);
        i++;
        off += 0x20;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80363780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void push_trail_entry__17TItemEffectWeaponFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK memcpy(void *, int, int);

void push_trail_entry__17TItemEffectWeaponFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 temp_r0;
    s32 temp_r3;
    u8 *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x1C) != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3 == 0x20) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r3 - 2);
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r0 != 0) {
            temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x1C));
            memcpy((void *) (temp_r4 + 0x20), (int) (temp_r4), (int) (temp_r0 * 0x10));
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & 0x4FFFFFFF);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80363A68
#include "types.h"

extern "C" {

void free_static_effects__17TItemEffectWeaponFv(void);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D6FB0;
    extern int lbl_805D6FB4;
void free_static_effects__17TItemEffectWeaponFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D6FB4)); free__11TOBoss4RockFUi((void*)(lbl_805D6FB0)); lbl_805D6FB4 = 0; lbl_805D6FB0 = 0; }

}
#endif
#endif
