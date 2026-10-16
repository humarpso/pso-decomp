#include "types.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(u8 *arg0, void *arg1, s32 arg2);
void set_string__20TWindowSubStatusDispFUl(u8 *, void *);
struct Ent_802684BC { u8 p0[0x1C]; s32 f1C; };
struct Win_802684BC { u8 p0[0x76]; s16 f76; };
s32 find_entry_value_by_id__17TWindowSubComCardFPvi(Win_802684BC *w, s32 arg1);
s32 is_flag_4_set__17TWindowSubComCardFv(void *);
void mark_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
void disable_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubComCard__sub_8026906C(void);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
s32 get_array_entry__13TUnk_804CE018Fi(void * a0 = 0, s16 a1 = 0);
s32 get_entry_id__17TWindowSubComCardFv();

void TWindowSubComCard::update_selected_entry() {
    get_array_entry__13TUnk_804CE018Fi(this, *(s16 *)((s8 *)this + 0x74));
    get_entry_id__17TWindowSubComCardFv();
}

s32 find_entry_value_by_id__17TWindowSubComCardFPvi(Win_802684BC *w, s32 arg1) {
    s32 i;
    Ent_802684BC *e;
    for (i = 0; i < w->f76; i++) {
        e = ((Ent_802684BC *(*)(void *, s32))get_array_entry__13TUnk_804CE018Fi)(w, i);
        if (e != NULL && is_flag_4_set__17TWindowSubComCardFv(e) != 0 && arg1 == ((s32 (*)(void *))get_entry_id__17TWindowSubComCardFv)(e)) {
            return e->f1C;
        }
    }
    return 0;
}
void mark_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__13TUnk_804CE018Fi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFv)() != 0 && arg1 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFv)(e)) {
            *(u16 *)e |= 1;
            *(s32 *)(e + 0x24) = -1;
        }
    }
}
void disable_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__13TUnk_804CE018Fi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFv)() != 0 && arg1 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFv)(e)) {
            *(u16 *)e &= 0xFFFE;
            *(s32 *)(e + 0x24) = 0xFF909090;
        }
    }
}
void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(u8 *arg0, void *arg1, s32 arg2) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__13TUnk_804CE018Fi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFv)() != 0 && arg2 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFv)(e)) {
            set_string__20TWindowSubStatusDispFUl(e, arg1);
        }
    }
}

void TWindowSubComCard::update_next_entry(s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;

    temp_r4 = *(s16 *)((s8 *)this + 0x72);
    if (temp_r4 < (s16) *(s16 *)((s8 *)this + 0x76)) {
        ((TWindowSubStatusDisp *)(get_array_entry__13TUnk_804CE018Fi(this, temp_r4)))->set_text(arg1, arg2, arg3);
        *(s16 *)((s8 *)this + 0x72) = (s16) (*(s16 *)((s8 *)this + 0x72) + 1);
    }
}

}
