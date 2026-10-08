#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/protocol/subcmd_6x.h"
#include <stddef.h>

struct RecoveredGlobal_800773BC_lbl_80438830 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct E_80077480 { u8 pad[0x58]; };

struct X_80077480 { u8 pad[0x15a0]; u8 sub[0x58]; };

struct Ent_80077108 { s8 id; u8 a, b, c; };

struct Obj_80077108 { u8 pad[0x28]; Ent_80077108 e[12]; };

struct Obj_8007728C { u32 flags; u8 pad[0x1C]; u16 h[4]; };

struct Ent_8007714C { s8 id; u8 a, b, c; };

struct Obj_8007714C { u8 pad[0x28]; Ent_8007714C e[12]; };

struct Ent_80077098 { s8 a, b, c; u8 d; };
struct Obj_80077098 { u8 pad0[0x28]; Ent_80077098 e[12]; };
struct Obj_800770D0 { u8 pad0[0x20]; u16 s[4]; };
struct Obj_800771B0 { u8 pad0[0x20]; u16 s[4]; };
struct Obj_800771C4 { u8 pad0[0x20]; u16 s[4]; };
struct Ent_800771E4 { s8 a, b, c; u8 d; };
struct Obj_800771E4 { u8 pad0[0x28]; Ent_800771E4 e[12]; };

extern "C" {
s32 count_empty_slots__20TWindowSubSymbolChatFPv(Obj_80077098 *arg0);
s32 count_used_slots__20TWindowSubSymbolChatFPv(Obj_800770D0 *arg0);
void TWindowSubSymbolChat__sub_800771B0(Obj_800771B0 *arg0, s32 arg1);
s32 TWindowSubSymbolChat__sub_800771C4(Obj_800771C4 *arg0, s32 arg1);
void set_entry__20TWindowSubSymbolChatFPviiiiii(Obj_800771E4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0);
u8 *get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
    extern int lbl_805D4E50;
u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0);
void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0);
s32 is_initialized__20TWindowSubSymbolChatFPv();
    extern int lbl_805D4E50;
void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0);
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void * _w0);
    extern int lbl_805D4E50;
void update_symbol_chat_result__20TWindowSubSymbolChatFv(void * _w0);
void update_layout__20TWindowSubSymbolChatFPv(void* p);
int get_instance__20TWindowSubSymbolChatFv(void*);
    extern int lbl_805D4E50;
void update_layout__20TWindowSubSymbolChatFPv(void* p);
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
int get_instance__20TWindowSubSymbolChatFv(void*);
    extern int lbl_805D4E50;
void refresh_parts__20TWindowSubSymbolChatFPv(void* p);
void set_symbol_flags__20TWindowSubSymbolChatFPvii(u8 *arg0, s32 arg1, s32 arg2);
    extern int lbl_805D4E50;
void set_symbol_flags__20TWindowSubSymbolChatFPvii(u8 *arg0, s32 arg1, s32 arg2);
void set_symbol_flags__20TWindowSubSymbolChatFPvii(u8 *arg0, s32 arg1, s32 arg2);
void set_symbol_flags__20TWindowSubSymbolChatFPvii(u8 *arg0, s32 arg1, s32 arg2);
    extern int lbl_805D4E50;
void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
M2C_UNK strncpy(void *, void *, int);
void set_entry_name__20TWindowSubSymbolChatFPvPv(u8 *arg0, void *arg1);
s32 TLobby__sub_80076F48(void *, void *);
s32 send_symbol_chat__20TWindowSubSymbolChatFPv(void *);
s32 TWindowSubSymbolChat__sub_80077704(void *);
extern s32 lbl_805D53A0;
void send_selected_symbol_chat__20TWindowSubSymbolChatFPv(s32 *arg0);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_800773BC_lbl_80438830 lbl_80438830;
void play_symbol_sound__20TWindowSubSymbolChatFi(s32 arg0);
E_80077480 *get_card_window__17TWindowSubComCardFUi(u32 id);
u8 *TWindowSubSymbolChat__sub_80077480(s32 i);
s32 find_free_entry__20TWindowSubSymbolChatFPvi(Obj_80077108 *self, s32 i);
void set_entry_bits__20TWindowSubSymbolChatFPvUsiiii(Obj_8007728C *self, u16 v, s32 a, s32 idx, s32 b, s32 c);
void move_words__6TLobbyFPvPvi(void *, void *, u32);
void remove_slot_shift_down__20TWindowSubSymbolChatFPvi(Obj_8007714C *self, s32 i);
s32 TWindowSubSymbolChat__sub_80077464(u32 *arg0);
}

extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

void send_selected_symbol_chat__20TWindowSubSymbolChatFPv(s32 *arg0) {
    G_SymbolChat_6x07 packet;
    s32 temp_r4;
    TWindowSubSymbolChat__sub_80077704((void *) (&packet.header));
    temp_r4 = ((s32)((int)TWindowSubSymbolChat__sub_80077480((s32)((void *)((void *) (*arg0))))));
    packet.client_id = lbl_805D53A0;
    TLobby__sub_80076F48((void *) (&packet.data[0]), (void *) (temp_r4 + 0x1C));
    send_symbol_chat__20TWindowSubSymbolChatFPv((void *) (&packet.header));
}

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

void set_entry_name__20TWindowSubSymbolChatFPvPv(u8 *arg0, void *arg1) {
    strncpy((void *) (arg0 + 4), arg1, (int) (0x16));
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void set_flag_bit9__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1) {
    s32 var_r4;
    var_r4 = arg1;
    if (var_r4 != 0) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (var_r4 << 9));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void set_symbol_index__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFE1F);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (arg1 << 5));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

s32 count_empty_slots__20TWindowSubSymbolChatFPv(Obj_80077098 *arg0) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < 12; i++) {
        if (arg0->e[i].a == -1) {
            n++;
        }
    }
    return n;
}

s32 count_used_slots__20TWindowSubSymbolChatFPv(Obj_800770D0 *arg0) {
    s32 n = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 v = (u8)arg0->s[i];
        if (v != 0xFF) {
            n++;
        }
    }
    return n;
}

s32 find_free_entry__20TWindowSubSymbolChatFPvi(Obj_80077108 *self, s32 i) {
    for (; i < 12; i++) {
        if (self->e[i].id == -1) {
            return i;
        }
    }
    return i;
}

void remove_slot_shift_down__20TWindowSubSymbolChatFPvi(Obj_8007714C *self, s32 i) {
    if (i < 11) {
        Ent_8007714C *p = &self->e[i];
        move_words__6TLobbyFPvPvi(p, p + 1, ((11 - i) * sizeof(Ent_8007714C)) / 4);
    }
    self->e[11].id = -1;
    self->e[11].a = 0;
    self->e[11].b = 0;
    self->e[11].c = 0;
}

void TWindowSubSymbolChat__sub_800771B0(Obj_800771B0 *arg0, s32 arg1) {
    arg0->s[arg1] = 0xFF;
}

s32 TWindowSubSymbolChat__sub_800771C4(Obj_800771C4 *arg0, s32 arg1) {
    return ((u8)arg0->s[arg1] - 0xFF) != 0 ? 1 : 0;
}

void set_entry__20TWindowSubSymbolChatFPviiiiii(Obj_800771E4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Ent_800771E4 *p = &arg0->e[arg1];
    p->a = arg2;
    p->b = arg3;
    p->c = arg4;
    p->d = arg5;
    p->d = p->d | (arg6 * 2);
}

void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;
    temp = find_free_entry__20TWindowSubSymbolChatFPvi((Obj_80077108 *)((void*)((void*)((void*)(arg0)))), (s32)((void*)((void*)((void*)(0)))));
    if (temp < 0xC) {
        set_entry__20TWindowSubSymbolChatFPviiiiii((Obj_800771E4 *)arg0, temp, arg1, arg2, arg3, arg4, arg5);
        *arg0 |= 1;
    }
}

void set_entry_bits__20TWindowSubSymbolChatFPvUsiiii(Obj_8007728C *self, u16 v, s32 a, s32 idx, s32 b, s32 c) {
    u16 *p = &self->h[idx];
    *p = v;
    *p |= a << 8;
    *p |= b << 11;
    *p |= c << 12;
    self->flags |= 1;
}

void set_symbol_flags__20TWindowSubSymbolChatFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFE0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (arg2 * 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void refresh_parts__20TWindowSubSymbolChatFPv(void* p) { count_empty_slots__20TWindowSubSymbolChatFPv((Obj_80077098 *)get_instance__20TWindowSubSymbolChatFv(p)); }

void update_layout__20TWindowSubSymbolChatFPv(void* p) { count_used_slots__20TWindowSubSymbolChatFPv((Obj_800770D0 *)get_instance__20TWindowSubSymbolChatFv(p)); }

void update_symbol_chat_result__20TWindowSubSymbolChatFv(void * _w0) { lbl_805D4E50 = ((int)TWindowSubSymbolChat__sub_80077480((s32)((void *)(_w0)))); }

void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    if (is_initialized__20TWindowSubSymbolChatFPv() != 0) {
        play_symbol_sound__20TWindowSubSymbolChatFi((s32)(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF));
    }
}

typedef char RecoveredGlobal_800773BC_lbl_80438830_size[sizeof(RecoveredGlobal_800773BC_lbl_80438830) == 0x24 ? 1 : -1];
void play_symbol_sound__20TWindowSubSymbolChatFi(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 9)) {
        play_sound_effect(M2C_FIELD(&lbl_80438830.value, M2C_UNK *, (arg0 * 4)), 0U, 0, 0);
    }
}

u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0) {
    if (TWindowSubSymbolChat__sub_80077464((u32 *)(arg0)) == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCC);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCD);
    }
    return arg0 + 4;
}

s32 TWindowSubSymbolChat__sub_80077464(u32 *arg0) {
    u32 temp_r3;
    temp_r3 = *arg0;
    if (temp_r3 & 1) {
        return 1;
    }
    return (temp_r3 & 2) ? 1 : 0;
}

u8 *TWindowSubSymbolChat__sub_80077480(s32 i) {
    E_80077480 *e = &get_card_window__17TWindowSubComCardFUi(0xFFFF)[i];
    return ((X_80077480 *)e)->sub;
}

}
