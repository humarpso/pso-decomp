#include "types.h"

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
s32 draw_window_tab(s32, s32, s32, f32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
void *get_quest_id__12TQuestListVMFPv();

s32 get_entry_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x18); }

int TWindowSubComCard__sub_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
void fn_80269078(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x68) = arg1;
    set_all_values__20TWindowSubStatusDispFPvi((void *) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (1))), (int) (*(s32 *)((s8 *)arg0 + 0x68)));
}

}
