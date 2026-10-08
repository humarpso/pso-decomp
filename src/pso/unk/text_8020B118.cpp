#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020B118_lbl_8044BBF0 { char value[0x13]; };
typedef char RecoveredGlobal_8020B118_lbl_8044BBF0_size[sizeof(RecoveredGlobal_8020B118_lbl_8044BBF0) == 0x13 ? 1 : -1];

struct RecoveredGlobal_8020B118_lbl_8044BC04 { char value[0x12]; };
typedef char RecoveredGlobal_8020B118_lbl_8044BC04_size[sizeof(RecoveredGlobal_8020B118_lbl_8044BC04) == 0x12 ? 1 : -1];

struct Entry_8020B260 { s16 a; s16 flags; s16 room; s16 group; };

struct Floor_8020B260 { s32 count; u8 pad[0xC]; struct Entry_8020B260 *entries; u8 pad2[4]; };

struct Ent_8020B1E4 { u8 pad[2]; s16 f2; s16 f4; s16 f6; };

struct Grp_8020B1E4 { u8 pad[4]; s32 count; u8 pad2[0xC]; Ent_8020B1E4 *ents; };

extern "C" {
void TItemDrop__sub_800FDDF4(void);
void TItemDrop__sub_800FDE7C(s32);
s32 load_all_floor_enemy_sets__6TLobbyFv(void);
s32 load_all_floor_object_sets__6TLobbyFv(void);
void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32);
extern RecoveredGlobal_8020B118_lbl_8044BBF0 lbl_8044BBF0;
extern RecoveredGlobal_8020B118_lbl_8044BC04 lbl_8044BC04;
extern s32 lbl_805D60D8;
extern s32 lbl_805D60DC;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s32 TLobby__data_805D60F4;
extern s16 TLobby__data_805D6134;
void load_set_gsl_files__6TLobbyFv(void);
extern s32 TLobby__data_80513CC8[];
s32 TLobby__sub_8020B2DC(void);
extern s32 TLobby__data_80513C80[];
s32 TLobby__sub_8020B308(void);
extern struct Floor_8020B260 TLobby__data_80513AD0[];
s32 TLobby__sub_8020B260(s32 floor, s16 room, s16 group, s32 bits);
extern struct Floor_8020B260 TLobby__data_80513AD0[];
s32 TLobby__sub_8020B1E4(s32 arg0, s16 arg1, s16 arg2, s32 arg3);
}

extern "C" {

void load_set_gsl_files__6TLobbyFv(void) {
    lbl_805D60D8 = 0;
    lbl_805D60DC = 0;
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    TLobby__data_805D60F4 = 0;
    TLobby__data_805D6134 = 0;
    if (init_handle__6TLobbyFi(0x8000) != 0) {
        TItemDrop__sub_800FDE7C((s32) &lbl_8044BBF0.value);
        if (load_all_floor_object_sets__6TLobbyFv() == 0) {
            TItemDrop__sub_800FDDF4();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        TItemDrop__sub_800FDDF4();
        TItemDrop__sub_800FDE7C((s32) &lbl_8044BC04.value);
        if (load_all_floor_enemy_sets__6TLobbyFv() == 0) {
            TItemDrop__sub_800FDDF4();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        TItemDrop__sub_800FDDF4();
        free_data_60F0__6TLobbyFv();
        TLobby__data_805D6134 |= 1;
    }
}

s32 TLobby__sub_8020B1E4(s32 arg0, s16 arg1, s16 arg2, s32 arg3) {
    Grp_8020B1E4 *g = &((Grp_8020B1E4 *)&TLobby__data_80513AD0)[arg0];
    Ent_8020B1E4 *e;
    s32 n = 0;
    s32 i;
    if (g->count > 0) {
        e = g->ents;
        if (e != 0) {
            for (i = 0; i < g->count; i++, e++) {
                if (e->f4 == arg1 && e->f6 == arg2) {
                    n++;
                    e->f2 |= arg3;
                }
            }
        }
    }
    return n;
}

s32 TLobby__sub_8020B260(s32 floor, s16 room, s16 group, s32 bits) {
    struct Floor_8020B260 *t = &TLobby__data_80513AD0[floor];
    s32 n = 0;
    struct Entry_8020B260 *e;
    s32 i;
    if (t->count > 0) {
        e = t->entries;
        if (e != NULL) {
            for (i = 0; i < t->count; i++, e++) {
                if (e->room == room && e->group == group) {
                    e->flags |= bits;
                    n++;
                }
            }
        }
    }
    return n;
}

s32 TLobby__sub_8020B2DC(void) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 18; i++) sum += TLobby__data_80513CC8[i];
    return sum;
}
s32 TLobby__sub_8020B308(void) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 18; i++) sum += TLobby__data_80513C80[i];
    return sum;
}

}
