#include "types.h"
struct Vec_8011E87C { f32 x, y, z; };

struct Pl_8011E87C {
    u8 pad0[0xF0];
    void *owner;
    u8 padF4[0x18C - 0xF4];
    void *trails[4];
    s8 iconA[4];
    s8 iconB[4];
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pl_8011E950 {
    u8 pad0[0x174];
    u32 x174;
    u8 pad178[0x18C - 0x178];
    void *eff[4];
    s8 kind[4];
};

typedef struct V4_8011EA10 { f32 a; f32 b; f32 c; f32 d; } V4_8011EA10;

extern "C" {
s32 get_mode__11TCameraCtrlFPv(void *);
s32 TLobby__sub_800822E8(void *, s32);
s32 fn_80100CC8(Pl_8011E87C *);
s32 is_flag_400__10TObjPlayerFPv(void *);
void draw_icon__10TObjPlayerFPvii(void *, s32, Vec_8011E87C *);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
void push_trail_interpolated__17TItemEffectWeaponFv(void *, Vec_8011E87C *, Vec_8011E87C *);
extern u8 main_task[];
void update_trail_slot__11TItemWeaponFPvi(Pl_8011E87C *self, s32 slot);
s32 obj_testFlags30(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80121228(void *, M2C_UNK);
void *__ct__17TItemEffectWeaponFv(void *, u32, u32);
void *alloc__13TItemProArmorFi(M2C_UNK);
void create_weapon_trail_effects(Pl_8011E950 *arg0);
V4_8011EA10 get_weapon_color__11TItemWeaponFPv(void *);
u32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DAC90;
u32 pack_weapon_trail_color(void *arg0);
}

extern "C" {

void update_trail_slot__11TItemWeaponFPvi(Pl_8011E87C *self, s32 slot) {
    Vec_8011E87C a;
    Vec_8011E87C b;
    if (fn_80100CC8(self) != 0 && is_flag_400__10TObjPlayerFPv(self) == 0 &&
        TLobby__sub_800822E8(self->owner, 0xE0) != 0 &&
        is_flag_b0_4__10TObjPlayerFPv(self->owner) == 0 &&
        !(get_mode__11TCameraCtrlFPv(main_task) & 0x78)) {
        if (self->trails[slot] != NULL) {
            draw_icon__10TObjPlayerFPvii(self, self->iconA[slot], &a);
            draw_icon__10TObjPlayerFPvii(self, self->iconB[slot], &b);
            push_trail_interpolated__17TItemEffectWeaponFv(self->trails[slot], &a, &b);
        }
    }
}
void create_weapon_trail_effects(Pl_8011E950 *arg0) {
    u32 flags;
    s32 i;
    flags = pack_weapon_trail_color((void *)(arg0)) & 0x8FFFFFFF;
    if (arg0->x174 != 0U) {
        for (i = 0; i != 4; i++) {
            if (arg0->kind[i] != -1) {
                void *p = alloc__13TItemProArmorFi(0x2C);
                if (p != NULL) {
                    p = __ct__17TItemEffectWeaponFv(p, arg0->x174, flags);
                }
                arg0->eff[i] = p;
            }
            if (arg0->eff[i] != NULL && obj_testFlags30(arg0, 0x2000) != 0) {
                TObjPlayer__sub_80121228(arg0->eff[i], 1);
            }
        }
    }
}
u32 pack_weapon_trail_color(void *arg0) {
    V4_8011EA10 w = get_weapon_color__11TItemWeaponFPv(arg0);
    return (__cvt_fp2unsigned(lbl_805DAC90 * w.a) << 24 | __cvt_fp2unsigned(lbl_805DAC90 * w.b) << 16 | __cvt_fp2unsigned(lbl_805DAC90 * w.c) << 8) | __cvt_fp2unsigned(lbl_805DAC90 * w.d);
}

}
