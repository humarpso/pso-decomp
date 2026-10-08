#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(u8 *arg0, void *arg1, s32 arg2);
void set_string__20TWindowSubStatusDispFPvUi(u8 *, void *);
struct Ent_802684BC { u8 p0[0x1C]; s32 f1C; };
struct Win_802684BC { u8 p0[0x76]; s16 f76; };
s32 TWindowSubComCard__sub_802684BC(Win_802684BC *w, s32 arg1);
s32 is_flag_4_set__17TWindowSubComCardFPv(void *);
void TWindowSubComCard__sub_8026853C(u8 *arg0, s32 arg1);
void disable_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
void update_next_entry__17TWindowSubComCardFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubComCard__sub_8026906C(void);
u32 construct_type1_heading__20TWindowSubStatusDispFPvii(u32, s32, s16);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
void clear_flag__19TWindowSubTradeMainFPv(void* p);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK get_entry_id__17TWindowSubComCardFPv();
int is_flag80_set__20TWindowSubStatusDispFPv(void* p);
s32 is_open__17TWindowSubComCardFPv();
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 set_text__20TWindowSubStatusDispFPvUii(s32, s32, s32);
s32 set_text__20TWindowSubStatusDispFPvUiii(s32, s32, s32, s32);

void update_selected_entry__17TWindowSubComCardFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    get_entry_id__17TWindowSubComCardFPv();
}

s32 TWindowSubComCard__sub_802684BC(Win_802684BC *w, s32 arg1) {
    s32 i;
    Ent_802684BC *e;
    for (i = 0; i < w->f76; i++) {
        e = ((Ent_802684BC *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(w, i);
        if (e != NULL && is_flag_4_set__17TWindowSubComCardFPv(e) != 0 && arg1 == ((s32 (*)(void *))get_entry_id__17TWindowSubComCardFPv)(e)) {
            return e->f1C;
        }
    }
    return 0;
}
void TWindowSubComCard__sub_8026853C(u8 *arg0, s32 arg1) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFPv)() != 0 && arg1 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFPv)(e)) {
            *(u16 *)e |= 1;
            *(s32 *)(e + 0x24) = -1;
        }
    }
}
void disable_entry_by_id__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFPv)() != 0 && arg1 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFPv)(e)) {
            *(u16 *)e &= 0xFFFE;
            *(s32 *)(e + 0x24) = 0xFF909090;
        }
    }
}
void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(u8 *arg0, void *arg1, s32 arg2) {
    s32 i;
    u8 *e;
    for (i = 0; i < *(s16 *)(arg0 + 0x76); i++) {
        e = ((u8 *(*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, i);
        if (e != 0 && ((s32 (*)(void))is_flag_4_set__17TWindowSubComCardFPv)() != 0 && arg2 == ((s32 (*)(u8 *))get_entry_id__17TWindowSubComCardFPv)(e)) {
            set_string__20TWindowSubStatusDispFPvUi(e, arg1);
        }
    }
}

void update_next_entry__17TWindowSubComCardFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r4 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        set_text__20TWindowSubStatusDispFPvUiii(get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4), arg1, arg2, arg3);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
