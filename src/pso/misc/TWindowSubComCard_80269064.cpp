#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 set_all_values__20TWindowSubStatusDispFPvi(void *, int);
void fn_80269078(u8 *arg0, s32 arg1);
}

extern "C" {

int TWindowSubComCard__sub_8026906C(void* p);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
u32 get_player_by_client_id(s32);
s32 setup_window_draw_context(s32, s32);
s32 draw_visible_window_entries(s32, s32, s32);
M2C_UNK draw_window_tab(s32, s32, M2C_UNK, f32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
void *get_quest_id__12TQuestListVMFPv();

s32 get_entry_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x18); }

int TWindowSubComCard__sub_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
void fn_80269078(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    set_all_values__20TWindowSubStatusDispFPvi((void *) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (1))), (int) (M2C_FIELD(arg0, s32 *, 0x68)));
}

}
