#include "types.h"
struct Ent_8020A768 { s16 a; s16 b; u8 pad[0x48 - 4]; };

struct Name_8020A768 { char s[0x20]; };

struct Ent_8020A834 { s16 a; s16 b; u8 pad[0x44 - 4]; };

struct Name_8020A834 { char s[0x20]; };

extern "C" {
s32 read_disc_file(Name_8020A768 *, void *);
void replace_file_extension__6TLobbyFPvPvPv(Name_8020A768 *, s32, const void *);
s32 get_player_floor__6TLobbyFi(s32);
void bswap_enemy_set_row(Ent_8020A768 *);
void reserve_enemy_set_actor_ids(Ent_8020A768 *, s32, s32);
void init_floor_enemy_count__6TLobbyFiPvUi(s32, Ent_8020A768 *, s32);
extern u8 lbl_8044BBA8[];
extern Ent_8020A768 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 load_enemy_set_file(s32 arg0, s32 arg1);
s32 read_disc_file(Name_8020A768 *, void *);
void replace_file_extension__6TLobbyFPvPvPv(Name_8020A768 *, s32, const void *);
s32 get_player_floor__6TLobbyFi(s32);
void swap_object_row_endian(Ent_8020A834 *);
void TLobby__sub_8020AA94(Ent_8020A834 *, s32, s32);
void TLobby__sub_8020B3E4(s32, Ent_8020A834 *, s32);
extern u8 lbl_8044BBB0[];
extern Ent_8020A768 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 load_object_set_file(s32 arg0, s32 arg1);
}

extern "C" {

s32 load_enemy_set_file(s32 arg0, s32 arg1) {
    Name_8020A768 name;
    s32 size;
    Ent_8020A768 *p;
    s32 n;
    s32 i;
    s32 floor;
    replace_file_extension__6TLobbyFPvPvPv(&name, arg1, lbl_8044BBA8);
    size = read_disc_file(&name, TLobby__data_805D60F0);
    if (size < 0) {
        return 0;
    }
    if (size > TLobby__data_805D60F4) {
        return 0;
    }
    p = TLobby__data_805D60F0;
    n = size / sizeof(Ent_8020A768);
    for (i = 0; i < n; i++, p++) {
        bswap_enemy_set_row(p);
        p->b = 0;
    }
    floor = get_player_floor__6TLobbyFi(arg0);
    reserve_enemy_set_actor_ids(TLobby__data_805D60F0, n, floor);
    init_floor_enemy_count__6TLobbyFiPvUi(arg0, TLobby__data_805D60F0, size);
    return 1;
}
s32 load_object_set_file(s32 arg0, s32 arg1) {
    Name_8020A834 name;
    s32 size;
    Ent_8020A834 *p;
    s32 n;
    s32 i;
    s32 floor;
    replace_file_extension__6TLobbyFPvPvPv((Name_8020A768 *)(&name), (s32)(arg1), (const void *)(lbl_8044BBB0));
    size = read_disc_file((Name_8020A768 *)(&name), (void *)((*(Ent_8020A834 * *)&TLobby__data_805D60F0)));
    if (size < 0) {
        return 0;
    }
    if (size > TLobby__data_805D60F4) {
        return 0;
    }
    p = (*(Ent_8020A834 * *)&TLobby__data_805D60F0);
    n = size / sizeof(Ent_8020A834);
    for (i = 0; i < n; i++, p++) {
        swap_object_row_endian(p);
        p->b = 0;
    }
    floor = get_player_floor__6TLobbyFi(arg0);
    TLobby__sub_8020AA94((*(Ent_8020A834 * *)&TLobby__data_805D60F0), n, floor);
    TLobby__sub_8020B3E4(arg0, (*(Ent_8020A834 * *)&TLobby__data_805D60F0), size);
    return 1;
}

}
