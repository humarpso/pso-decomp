#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void cast_gifoie__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125C70(void* p);
void create_pro_armor__10TObjPlayerFPv(void *arg0);
void update_terminal_state__10TObjPlayerFPv(void *arg0);
s32 TItemProArmor__sub_80102C3C(void *);
s32 TOKeyMachine01__sub_802034A8();
s32 TObjPlayer__sub_80100D1C(void *);
s32 TObjPlayer__sub_8011E384();
s32 TObjPlayer__sub_8011E618(void *);
s32 TObjPlayer__sub_8011F5E0(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
s32 TObjPlayer__sub_80121CA8(void *);
s16 TObjPlayer__sub_801251AC(s32);
s32 TObjPlayer__sub_80125AF8(u32 a0 = 0, s32 a1 = 0, u32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TObjPlayer__sub_802034B0(s32);
u32 __nw__7TObjectFUl(s32 a0 = 0);
s32 alloc__13TItemProArmorFi(s32);
s32 create__10TTecGiFoieFPvPvPv(s32, s32 *, s32);
s32 ct__13TItemProArmorFPv(s32, u32, s32, s32);

void spawn_effect__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        TObjPlayer__sub_80125AF8(obj, arg0, arg1, arg2, arg3);
    }
}
void cast_gifoie__10TObjPlayerFPv(void *arg0) {
    s32 sp8;

    if (TObjPlayer__sub_8011E384() != 0) {
        if ((TObjPlayer__sub_801251AC(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) && (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0)) {
            create__10TTecGiFoieFPvPvPv(M2C_FIELD(arg0, s32 *, 0xF0), &sp8, TObjPlayer__sub_80121CA8(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        TObjPlayer__sub_8011F5E0(arg0);
    }
}
void TObjPlayer__sub_80125C70(void* p) { *(s32*)((char*)p + 0x1f8) = -1; }
void create_pro_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x1F8) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            ct__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x5A);
        }
    }
    TObjPlayer__sub_8011E618(arg0);
    TObjPlayer__sub_8011E618(arg0);
}

extern s32 tl_05;

void update_terminal_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TOKeyMachine01__sub_802034A8();
    if ((temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x1F8)) && (TObjPlayer__sub_80100D1C(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = temp_r3;
        if (TObjPlayer__sub_802034B0(temp_r3) != 0) {
            spawn_effect__10TObjPlayerFiUiii((s32)(tl_05), (u32)(arg0), (s32)(1), (s32)(0x1AE));
            spawn_effect__10TObjPlayerFiUiii((s32)(tl_05), (u32)(arg0), (s32)(2), (s32)(0x1AE));
        }
    }
}

}
