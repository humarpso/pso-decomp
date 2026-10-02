#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Wn_80278460 { u8 pad0[0x20]; s16 f20; u8 pad22[0x54]; s16 f76; };

extern "C" {
s32 get_item_info__10TObjPlayerFiiPv(u32, void *, void *);
u32 TLobby__sub_80101AB0();
u8 *get_player_by_client_id(s16);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
void get_cursor_pos__14TWindowSubItemFPv(void *);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
s32 is_flag80_set__20TWindowSubStatusDispFPv(void *);
void fn_80278460(Wn_80278460 *arg0);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
void get_cursor_pos__14TWindowSubItemFPv(void *);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
void fn_80278518(void *arg0, s32 arg1);
}

extern "C" {

void fn_80278460(Wn_80278460 *arg0) {
    u8 sp8[8];
    s32 i;
    u8 *item;
    u16 *e;
    u32 t;
    item = get_player_by_client_id(arg0->f20);
    if (item != NULL) {
        for (i = 0; (s16)i < arg0->f76; i++) {
            e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
            if (e != NULL && is_flag_4_set__20TWindowSubStatusDispFPv() != 0 && is_flag80_set__20TWindowSubStatusDispFPv(e) == 0) {
                get_cursor_pos__14TWindowSubItemFPv(e);
                if ((t = TLobby__sub_80101AB0()) != 0 && get_item_info__10TObjPlayerFiiPv(t, item, sp8) == 0) {
                    *e |= 0x80;
                }
            }
        }
    }
}
void fn_80278518(void *arg0, s32 arg1) {
    s32 var_r31;
    u16 *temp_r30;
    for (var_r31 = 0; var_r31 < M2C_FIELD(arg0, s16 *, 0x76); var_r31++) {
        temp_r30 = ((u16 *(*)(void *, s32)) get_array_entry__20TWindowSubStatusDispFPvi)(arg0, var_r31);
        if ((is_flag_4_set__20TWindowSubStatusDispFPv() != 0) && (arg1 == ((s32 (*)(void *)) get_cursor_pos__14TWindowSubItemFPv)(temp_r30))) {
            M2C_FIELD(temp_r30, s32 *, 0x2C) = 0xFFAAAAAA;
            M2C_FIELD(temp_r30, s32 *, 0x30) = 0xFF909090;
            M2C_FIELD(temp_r30, s32 *, 0x34) = 0xFF909090;
            M2C_FIELD(temp_r30, u16 *, 0) = (u16) (M2C_FIELD(temp_r30, u16 *, 0) | 0x80);
        }
    }
}

}
