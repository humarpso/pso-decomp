#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TQuestListVM.h"
#include "pso/misc/TWindowMeseta.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {
void fn_80269078(u8 *arg0, s32 arg1);
}

extern "C" {

int TWindowSubComCard__sub_8026906C(void* p);
u32 get_player_by_client_id(s32);
s32 draw_visible_window_entries(s32, s32, s32);
s32 draw_window_tab(s32, s32, s32, f32);

s32 TWindowSubComCard::get_entry_id() { return *(s32*)((char*)this + 0x18); }

int TWindowSubComCard__sub_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
void fn_80269078(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0x68) = arg1;
    ((TWindowSubStatusDisp *)(((TUnk_804CE018 *)arg0)->get_array_entry((int) (1))))->set_all_values((int) (*(s32 *)((s8 *)arg0 + 0x68)));
}

}
