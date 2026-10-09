#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

extern "C" {

void dispatch_by_index__6TLobbyFi(s32 arg0);
s32 get_option_state__6TLobbyFv(void);
int render__6TLobbyFv(void* p);
M2C_UNK clear_serial_buffer__22TAdEnterSerialAccessGCFv();
M2C_UNK clear_state();
int get_instance__15TAdPlayerLoadGCFv(void*);
s32 get_option_field_C__17TWindowOptionCtrlFv();
M2C_UNK store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32, s32, s32);

void *__nw__7TObjectFUl(int);
void *TAdScrollWinGC__ct(void *, s32, s32, void *);
s32 strncpy(void *, s32, s32);
extern u8 lbl_8050AEB8[];
extern s32 TLobby__data_805D5594;
extern void *lbl_805D55F8;
extern s32 tl_window;
void on_game_player_add__6TLobbyFiii();
void handle_game_join__6TLobbyFPv();

extern s32 TLobby__protocol_instance;

void dispatch_by_index__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 0;
    }
    switch (var_r3) {
    case 0:
        clear_state();
        return;
    case 1:
        store_serial_access_key__22TAdEnterSerialAccessGCFiii(TLobby__protocol_instance + 0x3F8A, TLobby__protocol_instance + 0x3F9B, TLobby__protocol_instance + 0x3F3A);
        return;
    case 2:
        clear_serial_buffer__22TAdEnterSerialAccessGCFv();
        return;
    }
}

void open_scroll_text_window__6TLobbyFi(s32 arg0) {
    void *obj;
    if (lbl_805D55F8 == 0) {
        strncpy(lbl_8050AEB8, arg0, 0x1000);
        lbl_8050AEB8[0xFFF] = 0;
        obj = __nw__7TObjectFUl(0x54);
        if (obj != 0) {
            obj = TAdScrollWinGC__ct(obj, tl_window, 2, lbl_8050AEB8);
        }
        lbl_805D55F8 = obj;
    }
    TLobby__data_805D5594 = 0x1A;
}

int render__6TLobbyFv(void* p) { return get_instance__15TAdPlayerLoadGCFv(p); }

struct E_80134B58 { u8 d[0x11C]; };
struct In_80134B58 { u32 type; u8 rest[0x118]; };
extern E_80134B58 lbl_80509D5C[];
void copy_player_record__6TLobbyFPvPv(u8 *, u8 *);
void copy_player_records__6TLobbyFPvi(In_80134B58 *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        if (arg0[i].type > 0xC) {
            return;
        }
        copy_player_record__6TLobbyFPvPv((u8 *)&lbl_80509D5C[arg0[i].type], (u8 *)&arg0[i]);
    }
}

struct M2CCopy_100 { u8 bytes[0x100]; };
void copy_player_record__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    *(M2CCopy_100 *)((s32) arg0 + 4) = *(const M2CCopy_100 *)((s32) arg1 + 4);
    M2C_FIELD(arg0, u16 *, 0x104) = (u16) M2C_FIELD(arg1, u16 *, 0x104);
    M2C_FIELD(arg0, u16 *, 0x106) = (u16) M2C_FIELD(arg1, u16 *, 0x106);
    M2C_FIELD(arg0, u16 *, 0x108) = (u16) M2C_FIELD(arg1, u16 *, 0x108);
    M2C_FIELD(arg0, u16 *, 0x10A) = (u16) M2C_FIELD(arg1, u16 *, 0x10A);
    M2C_FIELD(arg0, u16 *, 0x10C) = (u16) M2C_FIELD(arg1, u16 *, 0x10C);
    M2C_FIELD(arg0, u16 *, 0x10E) = (u16) M2C_FIELD(arg1, u16 *, 0x10E);
    M2C_FIELD(arg0, u16 *, 0x110) = (u16) M2C_FIELD(arg1, u16 *, 0x110);
    M2C_FIELD(arg0, u16 *, 0x112) = (u16) M2C_FIELD(arg1, u16 *, 0x112);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) M2C_FIELD(arg1, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) M2C_FIELD(arg1, s32 *, 0x118);
}

struct Ent_80134C44 { u8 pad[4]; u32 key; u32 val; };
struct Obj_80134C44 { u8 pad0; u8 count; u8 pad2[2]; Ent_80134C44 e[1]; };
void* get_player_by_client_id(s32);
void get_or_create_lobby_font__10TObjPlayerFPvi(void*, int);
void TLobby__sub_80134C44(Obj_80134C44 *o) {
    Ent_80134C44 *e = o->e;
    s32 i;
    for (i = 0; i < o->count; i++, e++) {
        s32 j;
        for (j = 0; j < 12; j++) {
            u8 *p = (u8*)get_player_by_client_id(j);
            if (p != NULL && *(u32*)(p + 0xDB0) == e->key) {
                get_or_create_lobby_font__10TObjPlayerFPvi(p, (u8)e->val);
            }
        }
    }
}

extern s32 TLobby__net_session_mode;

s32 get_option_state__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_option_field_C__17TWindowOptionCtrlFv();
    switch (temp_r3) {
    case 0:
        return TLobby__net_session_mode;
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return 0;
    }
}

void install_game_join_handlers__6TLobbyFv(void) {
    *(void (**)())(TLobby__protocol_instance + 0xBC04) = handle_game_join__6TLobbyFPv;
    *(void (**)())(TLobby__protocol_instance + 0xBC18) = on_game_player_add__6TLobbyFiii;
}

}
