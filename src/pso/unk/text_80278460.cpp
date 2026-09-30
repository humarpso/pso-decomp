#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Wn_80278460 { u8 pad0[0x20]; s16 f20; u8 pad22[0x54]; s16 f76; };

extern "C" {
s32 get_item_info__10TObjPlayerFiiPv(u32, void *, void *);
u32 TLobby__sub_80101AB0();
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s16);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
void get_cursor_pos__14TWindowSubItemFPv(void *);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
s32 is_flag80_set__20TWindowSubStatusDispFPv(void *);
void fn_80278460(Wn_80278460 *arg0);
}

extern "C" {

void fn_80278460(Wn_80278460 *arg0) {
    u8 sp8[8];
    s32 i;
    u8 *item;
    u16 *e;
    u32 t;
    item = TPlayerBattleCtrl4P__sub_801BA74C(arg0->f20);
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

}
