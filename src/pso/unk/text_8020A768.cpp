#include "types.h"
struct Ent_8020A768 { s16 a; s16 b; u8 pad[0x48 - 4]; };

struct Name_8020A768 { char s[0x20]; };

struct Ent_8020A834 { s16 a; s16 b; u8 pad[0x44 - 4]; };

struct Name_8020A834 { char s[0x20]; };

extern "C" {
s32 TLobby__sub_800F9DF4(Name_8020A768 *, void *);
void TLobby__sub_801317E4(Name_8020A768 *, s32, const void *);
s32 get_player_floor__6TLobbyFi(s32);
void TLobby__sub_802080C0(Ent_8020A768 *);
void TLobby__sub_8020A9C4(Ent_8020A768 *, s32, s32);
void TLobby__sub_8020B374(s32, Ent_8020A768 *, s32);
extern u8 lbl_8044BBA8[];
extern Ent_8020A768 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 TLobby__sub_8020A768(s32 arg0, s32 arg1);
s32 TLobby__sub_800F9DF4(Name_8020A768 *, void *);
void TLobby__sub_801317E4(Name_8020A768 *, s32, const void *);
s32 get_player_floor__6TLobbyFi(s32);
void TLobby__sub_802081AC(Ent_8020A834 *);
void TLobby__sub_8020AA94(Ent_8020A834 *, s32, s32);
void TLobby__sub_8020B3E4(s32, Ent_8020A834 *, s32);
extern u8 lbl_8044BBB0[];
extern Ent_8020A768 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 TLobby__sub_8020A834(s32 arg0, s32 arg1);
}

extern "C" {

s32 TLobby__sub_8020A768(s32 arg0, s32 arg1) {
    Name_8020A768 name;
    s32 size;
    Ent_8020A768 *p;
    s32 n;
    s32 i;
    s32 floor;
    TLobby__sub_801317E4(&name, arg1, lbl_8044BBA8);
    size = TLobby__sub_800F9DF4(&name, TLobby__data_805D60F0);
    if (size < 0) {
        return 0;
    }
    if (size > TLobby__data_805D60F4) {
        return 0;
    }
    p = TLobby__data_805D60F0;
    n = size / sizeof(Ent_8020A768);
    for (i = 0; i < n; i++, p++) {
        TLobby__sub_802080C0(p);
        p->b = 0;
    }
    floor = get_player_floor__6TLobbyFi(arg0);
    TLobby__sub_8020A9C4(TLobby__data_805D60F0, n, floor);
    TLobby__sub_8020B374(arg0, TLobby__data_805D60F0, size);
    return 1;
}
s32 TLobby__sub_8020A834(s32 arg0, s32 arg1) {
    Name_8020A834 name;
    s32 size;
    Ent_8020A834 *p;
    s32 n;
    s32 i;
    s32 floor;
    TLobby__sub_801317E4((Name_8020A768 *)(&name), (s32)(arg1), (const void *)(lbl_8044BBB0));
    size = TLobby__sub_800F9DF4((Name_8020A768 *)(&name), (void *)((*(Ent_8020A834 * *)&TLobby__data_805D60F0)));
    if (size < 0) {
        return 0;
    }
    if (size > TLobby__data_805D60F4) {
        return 0;
    }
    p = (*(Ent_8020A834 * *)&TLobby__data_805D60F0);
    n = size / sizeof(Ent_8020A834);
    for (i = 0; i < n; i++, p++) {
        TLobby__sub_802081AC(p);
        p->b = 0;
    }
    floor = get_player_floor__6TLobbyFi(arg0);
    TLobby__sub_8020AA94((*(Ent_8020A834 * *)&TLobby__data_805D60F0), n, floor);
    TLobby__sub_8020B3E4(arg0, (*(Ent_8020A834 * *)&TLobby__data_805D60F0), size);
    return 1;
}

}
