#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK spawn_item_timer__13TItemAttackerFiii(void *, void (*)(void), s32);
s32 draw_icon__10TObjPlayerFPvii(u32, s32, void *);
void *construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(void *, s32, u32, void *, u32, u32);
void *__nw__7TObjectFUl(u32);
void expire_weapon_casing(void);
void launch_weapon_casing__10TObjPlayerFiUiiUiUi(s32 arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(void *, void (*)(void), s32);
void *construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(void *, s32, u32, void *, u32, u32);
void *__nw__7TObjectFUl(u32);
void expire_weapon_casing(void);
void spawn_weapon_casing__10TObjPlayerFiUiUiUiUi(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4);
}

extern "C" {

void spawn_weapon_casing__10TObjPlayerFiUiUiUiUi(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    void *p;
    if ((arg0 != 0) && (arg1 != 0U) && (arg2 != 0U) && (arg3 != 0U) && (arg4 != 0U)) {
        p = __nw__7TObjectFUl(0x44);
        if (p != 0) {
            p = construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(p, arg0, arg1, (void *)arg2, arg3, arg4);
        }
        spawn_item_timer__13TItemAttackerFiii(p, expire_weapon_casing, 0xF);
    }
}

void launch_weapon_casing__10TObjPlayerFiUiiUiUi(s32 arg0, u32 arg1, s32 arg2, u32 arg3, u32 arg4) {
    u8 sp8[0x18];
    void *var_r0;
    if ((arg0 != 0) && (arg1 != 0U) && (arg3 != 0U) && (arg4 != 0U) && (draw_icon__10TObjPlayerFPvii(arg1, arg2, sp8) != 0)) {
        var_r0 = __nw__7TObjectFUl(0x44);
        if (var_r0 != NULL) {
            var_r0 = construct_weapon_casing__10TObjPlayerFPvPvPvPvPvPv(var_r0, arg0, arg1, sp8, arg3, arg4);
        }
        spawn_item_timer__13TItemAttackerFiii(var_r0, expire_weapon_casing, 0xF);
    }
}

}
