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
void reserve_enemy_set_actor_ids(struct SpawnRecord_8020A9C4 *, s32, s32);
void init_floor_enemy_count__6TLobbyFiPvUi(s32, Ent_8020A768 *, s32);
extern u8 lbl_8044BBA8[];
extern Ent_8020A768 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 load_enemy_set_file(s32 arg0, s32 arg1);
s32 read_disc_file(Name_8020A768 *, void *);
void replace_file_extension__6TLobbyFPvPvPv(Name_8020A768 *, s32, const void *);
s32 get_player_floor__6TLobbyFi(s32);
void swap_object_row_endian(Ent_8020A834 *);
void assign_object_ids__6TLobbyFPviPv(struct Rec_8020AA94 *, s32, void *);
void load_object_set_entries__6TLobbyFiPvUi(s32, Ent_8020A834 *, s32);
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
    reserve_enemy_set_actor_ids((struct SpawnRecord_8020A9C4 *)TLobby__data_805D60F0, n, floor);
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
    assign_object_ids__6TLobbyFPviPv((struct Rec_8020AA94 *)(*(Ent_8020A834 * *)&TLobby__data_805D60F0), n, (void *)floor);
    load_object_set_entries__6TLobbyFiPvUi(arg0, (*(Ent_8020A834 * *)&TLobby__data_805D60F0), size);
    return 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_name(M2C_UNK *);
M2C_UNK advance_enemy_id_counter(u16);
M2C_UNK advance_object_id_counter(u16);
M2C_UNK load_enemy_set_file(s32, s32);
M2C_UNK load_object_set_file(s32, s32);
M2C_UNK free_data_60F0__6TLobbyFv();
s32 init_handle__6TLobbyFi(M2C_UNK);
extern s32 lbl_805D60D8;
extern s32 lbl_805D60DC;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s16 TLobby__data_805D6134;
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;
extern M2C_UNK lbl_805DC620;
extern M2C_UNK lbl_805DC624;

void load_map_set_data(s32 arg0, s32 arg1) {
    lbl_805D60D8 = 0;
    lbl_805D60DC = 0;
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    copy_name(&lbl_805DC620);
    TLobby__data_805D6134 = 0;
    if (init_handle__6TLobbyFi(0x8000) != 0) {
        load_object_set_file(arg0, arg1);
        load_enemy_set_file(arg0, arg1);
        advance_object_id_counter((u16) TLobby__data_805D60E8);
        TLobby__data_805D6148 = TLobby__data_805D60E0;
        advance_enemy_id_counter((u16) TLobby__data_805D60EC);
        TLobby__data_805D614C = TLobby__data_805D60E4;
        free_data_60F0__6TLobbyFv();
        TLobby__data_805D6134 |= 1;
    }
    copy_name(&lbl_805DC624);
}

}

#include "types.h"
struct SpawnRecord_8020A9C4 {
    s16 type;
    u16 flags;
    s16 index;
    s16 children;
    u16 reserved;
    s16 actor_id;
    u8 pad[0x48 - 0xC];
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_8020AA94 {
    u8 pad0[4];
    s16 f4;
    u8 pad6[2];
    s16 f8;
    u8 padA[0x44 - 0xA];
};

extern "C" {
s32 get_enemy_factory_child_count(s32, SpawnRecord_8020A9C4 *);
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60EC;
void reserve_enemy_set_actor_ids(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_8020C030(void *, Rec_8020AA94 *);
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E8;
void assign_object_ids__6TLobbyFPviPv(Rec_8020AA94 *arg0, s32 arg1, void *arg2);
}

extern "C" {

void reserve_enemy_set_actor_ids(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2) {
    SpawnRecord_8020A9C4 *r;
    s32 i;
    s32 n;
    for (i = 0; i < arg1; i++) {
        r = &arg0[i];
        r->actor_id = TLobby__data_805D60EC++ + 0x1000;
        r->index = TLobby__data_805D60E4++;
        if (r->children > 0) {
            TLobby__data_805D60E4 += r->children;
            TLobby__data_805D60EC += r->children;
        } else {
            n = get_enemy_factory_child_count(arg2, r);
            if (n > 0) {
                TLobby__data_805D60E4 += n;
                TLobby__data_805D60EC += n;
                r->children = n;
            }
        }
    }
}
void assign_object_ids__6TLobbyFPviPv(Rec_8020AA94 *arg0, s32 arg1, void *arg2) {
    s32 i;
    s32 r;
    for (i = 0; i < arg1; i++) {
        arg0[i].f8 = TLobby__data_805D60E8++ + 0x4000;
        arg0[i].f4 = TLobby__data_805D60E0++;
        r = TLobby__sub_8020C030(arg2, &arg0[i]);
        if (r >= 0) {
            TLobby__data_805D60E0 += r;
            TLobby__data_805D60E8 += r;
        }
    }
}

}
