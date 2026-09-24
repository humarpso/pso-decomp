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

extern "C" {
u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0);
s32 TWindowSubSymbolChat__sub_80077464();
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
void TWindowSubSymbolChat__sub_800772D8(u8 *arg0, s32 arg1, s32 arg2);
    extern int lbl_805D4E50;
void TWindowSubSymbolChat__sub_800772D8(u8 *arg0, s32 arg1, s32 arg2);
void TWindowSubSymbolChat__sub_800772D8(u8 *arg0, s32 arg1, s32 arg2);
int TWindowSubSymbolChat__sub_8007728C(void);
void TWindowSubSymbolChat__sub_800772D8(u8 *arg0, s32 arg1, s32 arg2);
    extern int lbl_805D4E50;
int TWindowSubSymbolChat__sub_8007728C(void);
void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
int TWindowSubSymbolChat__sub_800771E4(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0, void* a4 = 0, void* a5 = 0, void* a6 = 0);
int TWindowSubSymbolChat__sub_800771E4(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6);
int TWindowSubSymbolChat__sub_800771C4(void);
int TWindowSubSymbolChat__sub_800771C4(void);
int TWindowSubSymbolChat__sub_800771B0(void);
int TWindowSubSymbolChat__sub_800771B0(void);
int TWindowSubSymbolChat__sub_8007714C(void);
int TWindowSubSymbolChat__sub_8007714C(void);
int TWindowSubSymbolChat__sub_80077108(void* a0 = 0, void* a1 = 0);
int TWindowSubSymbolChat__sub_80077108(void* a0, void* a1);
int TWindowSubSymbolChat__sub_800770D0(void);
int TWindowSubSymbolChat__sub_800770D0(void);
int TWindowSubSymbolChat__sub_80077098(void);
int TWindowSubSymbolChat__sub_80077098(void);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1);
void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1);
int TWindowSubSymbolChat__sub_80076FE0(void* p);
M2C_UNK strncpy(void *, void *, int);
void TWindowSubSymbolChat__sub_80076FEC(u8 *arg0, void *arg1);
s32 TLobby__sub_80076F48(void *, void *);
s32 send_symbol_chat__20TWindowSubSymbolChatFPv(void *);
s32 TWindowSubSymbolChat__sub_80077704(void *);
extern s32 lbl_805D53A0;
void TWindowSubSymbolChat__sub_80076F88(s32 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_800773BC_lbl_80438830 lbl_80438830;
void TWindowSubSymbolChat__sub_800773BC(s32 arg0);
E_80077480 *get_card_window__17TWindowSubComCardFUi(u32 id);
u8 *TWindowSubSymbolChat__sub_80077480(s32 i);
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

void TWindowSubSymbolChat__sub_80076F88(s32 *arg0) {
    G_SymbolChat_6x07 packet;
    s32 temp_r4;
    TWindowSubSymbolChat__sub_80077704((void *) (&packet.header));
    temp_r4 = ((s32)((int)TWindowSubSymbolChat__sub_80077480((s32)((void *)((void *) (*arg0))))));
    packet.client_id = lbl_805D53A0;
    TLobby__sub_80076F48((void *) (&packet.data[0]), (void *) (temp_r4 + 0x1C));
    send_symbol_chat__20TWindowSubSymbolChatFPv((void *) (&packet.header));
}

int TWindowSubSymbolChat__sub_80076FE0(void* p) { return (*(u32*)((char*)p + 0x1c) >> 9) & 0x1; }

void TWindowSubSymbolChat__sub_80076FEC(u8 *arg0, void *arg1) {
    strncpy((void *) (arg0 + 4), arg1, (int) (0x16));
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void TWindowSubSymbolChat__sub_80077034(u8 *arg0, s32 arg1) {
    s32 var_r4;
    var_r4 = arg1;
    if (var_r4 != 0) {
        var_r4 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (var_r4 << 9));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void TWindowSubSymbolChat__sub_8007706C(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFE1F);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (arg1 << 5));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

int TWindowSubSymbolChat__sub_80077098(void) { return 0; }

int TWindowSubSymbolChat__sub_800770D0(void) { return 0; }

int TWindowSubSymbolChat__sub_80077108(void* a0, void* a1) { return 0; }

int TWindowSubSymbolChat__sub_8007714C(void) { return 0; }

int TWindowSubSymbolChat__sub_800771B0(void) { return 0; }

int TWindowSubSymbolChat__sub_800771C4(void) { return 0; }

int TWindowSubSymbolChat__sub_800771E4(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) { return 0; }

void add__20TWindowSubSymbolChatFPviiiii(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp;
    temp = TWindowSubSymbolChat__sub_80077108((void*)((void*)((void*)(arg0))), (void*)((void*)((void*)(0))));
    if (temp < 0xC) {
        TWindowSubSymbolChat__sub_800771E4((void*)((void*)((void*)(arg0))), (void*)((void*)((void*)(temp))), (void*)((void*)((void*)(arg1))), (void*)((void*)((void*)(arg2))), (void*)((void*)((void*)(arg3))), (void*)((void*)((void*)(arg4))), (void*)((void*)((void*)(arg5))));
        *arg0 |= 1;
    }
}

int TWindowSubSymbolChat__sub_8007728C(void) { return 0; }

void TWindowSubSymbolChat__sub_800772D8(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFE0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | (arg2 * 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | arg1);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 1);
}

void refresh_parts__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_80077098(); }

void update_layout__20TWindowSubSymbolChatFPv(void* p) { get_instance__20TWindowSubSymbolChatFv(p); TWindowSubSymbolChat__sub_800770D0(); }

void update_symbol_chat_result__20TWindowSubSymbolChatFv(void * _w0) { lbl_805D4E50 = ((int)TWindowSubSymbolChat__sub_80077480((s32)((void *)(_w0)))); }

void update_selected_symbol__20TWindowSubSymbolChatFPv(void *arg0) {
    if (is_initialized__20TWindowSubSymbolChatFPv() != 0) {
        TWindowSubSymbolChat__sub_800773BC((s32)(((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 5U) & 0xF));
    }
}

typedef char RecoveredGlobal_800773BC_lbl_80438830_size[sizeof(RecoveredGlobal_800773BC_lbl_80438830) == 0x24 ? 1 : -1];
void TWindowSubSymbolChat__sub_800773BC(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 9)) {
        TBoss3Volopt__sub_8022675C(M2C_FIELD(&lbl_80438830.value, M2C_UNK *, (arg0 * 4)), 0U, 0, 0);
    }
}

u8 *get_symbol_chat_data__20TWindowSubSymbolChatFPv(u8 *arg0) {
    if (TWindowSubSymbolChat__sub_80077464() == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCC);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == 0) {
        return get_message_10__20TWindowSubStatusDispFPv(0xCD);
    }
    return arg0 + 4;
}
u8 *TWindowSubSymbolChat__sub_80077480(s32 i) {
    E_80077480 *e = &get_card_window__17TWindowSubComCardFUi(0xFFFF)[i];
    return ((X_80077480 *)e)->sub;
}

}
