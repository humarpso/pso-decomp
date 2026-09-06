#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *);
void fn_802D50B8(void *arg0, void *arg1, void *arg2, void *arg3);
void TObjPlayer__sub_8011E87C(void *, s32);
void TObjPlayer__sub_80120BBC(s32, s8);
void TObjPlayer__sub_802D5108(s32 arg0);
}

extern "C" {

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x24); }
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }

void fn_802D50B8(void *arg0, void *arg1, void *arg2, void *arg3) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 132));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 140), arg2);
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 148), arg3);
}
void TObjPlayer__sub_802D5108(s32 arg0) {
    u32 temp_r0;
    u32 temp_r31;
    TObjPlayer__sub_80120BBC(arg0, 0x30);
    TObjPlayer__sub_8011E87C((void *) arg0, 0);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x188);
    temp_r31 = M2C_FIELD(arg0, u32 *, 0xF4);
    if (temp_r0 != 0U) {
        M2C_FIELD(arg0, u32 *, 0xF4) = temp_r0;
    }
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    TObjPlayer__sub_8011E87C((void *) arg0, 1);
    M2C_FIELD(arg0, u32 *, 0xF4) = temp_r31;
}

}
