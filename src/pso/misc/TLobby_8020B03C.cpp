#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32 arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv();

extern u32 TLobby__map_set_file_buffer;
extern s32 TLobby__map_set_file_buffer_size;

void free_data_60F0__6TLobbyFv(void) {
    if ((u32) TLobby__map_set_file_buffer != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__map_set_file_buffer);
        TLobby__map_set_file_buffer = 0U;
        TLobby__map_set_file_buffer_size = 0;
    }
}

extern u32 TLobby__map_set_file_buffer;
extern s32 TLobby__map_set_file_buffer_size;

s32 init_handle__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
    TLobby__map_set_file_buffer = temp_r3;
    if (temp_r3 != 0U) {
        TLobby__map_set_file_buffer_size = arg0;
        return 1;
    }
    TLobby__map_set_file_buffer = 0U;
    return 0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK get_player_name_copy_buffer();
M2C_UNK copy_name(M2C_UNK *);
s32 strncmp(M2C_UNK, M2C_UNK *, M2C_UNK);
extern s32 map_set_object_id_counter;
extern s32 TLobby__next_enemy_set_actor_id;
extern s32 map_object_id_counter;
extern s32 map_set_enemy_id_counter;
extern s32 TLobby__map_set_file_buffer_size;
extern M2C_UNK lbl_805DC620;
extern M2C_UNK lbl_805DC624;

void clear_map_set_data(void) {
    map_set_object_id_counter = 0;
    TLobby__next_enemy_set_actor_id = 0;
    map_object_id_counter = 0;
    map_set_enemy_id_counter = 0;
    TLobby__map_set_file_buffer_size = 0;
    M2C_UNK temp_r3 = get_player_name_copy_buffer();
    if (strncmp(temp_r3, &lbl_805DC620, 0x10) == 0) {
        copy_name(&lbl_805DC624);
    }
}

}

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
void close_gsl_archive(void);
void open_gsl_archive(s32);
s32 load_all_floor_enemy_sets__6TLobbyFv(void);
s32 load_all_floor_object_sets__6TLobbyFv(void);
void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32);
extern RecoveredGlobal_8020B118_lbl_8044BBF0 lbl_8044BBF0;
extern RecoveredGlobal_8020B118_lbl_8044BC04 lbl_8044BC04;
extern s32 lbl_805D60D8;
extern s32 lbl_805D60DC;
extern s32 map_set_object_id_counter;
extern s32 TLobby__next_enemy_set_actor_id;
extern s32 map_object_id_counter;
extern s32 map_set_enemy_id_counter;
extern s32 TLobby__map_set_file_buffer_size;
extern s16 TLobby__data_805D6134;
void load_set_gsl_files__6TLobbyFv(void);
extern s32 TLobby__data_80513CC8[];
s32 sum_floor_enemy_counts__6TLobbyFv(void);
extern s32 TLobby__data_80513C80[];
s32 TLobby__sub_8020B308(void);
extern struct Floor_8020B260 TLobby__floor_enemy_group_table[];
s32 set_room_group_flags__6TLobbyFissi(s32 floor, s16 room, s16 group, s32 bits);
extern struct Floor_8020B260 TLobby__floor_enemy_group_table[];
s32 set_flags_on_matching_entries__6TLobbyFissi(s32 arg0, s16 arg1, s16 arg2, s32 arg3);
}

extern "C" {

void load_set_gsl_files__6TLobbyFv(void) {
    lbl_805D60D8 = 0;
    lbl_805D60DC = 0;
    map_set_object_id_counter = 0;
    TLobby__next_enemy_set_actor_id = 0;
    map_object_id_counter = 0;
    map_set_enemy_id_counter = 0;
    TLobby__map_set_file_buffer_size = 0;
    TLobby__data_805D6134 = 0;
    if (init_handle__6TLobbyFi(0x8000) != 0) {
        open_gsl_archive((s32) &lbl_8044BBF0.value);
        if (load_all_floor_object_sets__6TLobbyFv() == 0) {
            close_gsl_archive();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        close_gsl_archive();
        open_gsl_archive((s32) &lbl_8044BC04.value);
        if (load_all_floor_enemy_sets__6TLobbyFv() == 0) {
            close_gsl_archive();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        close_gsl_archive();
        free_data_60F0__6TLobbyFv();
        TLobby__data_805D6134 |= 1;
    }
}

s32 set_flags_on_matching_entries__6TLobbyFissi(s32 arg0, s16 arg1, s16 arg2, s32 arg3) {
    Grp_8020B1E4 *g = &((Grp_8020B1E4 *)&TLobby__floor_enemy_group_table)[arg0];
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

s32 set_room_group_flags__6TLobbyFissi(s32 floor, s16 room, s16 group, s32 bits) {
    struct Floor_8020B260 *t = &TLobby__floor_enemy_group_table[floor];
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

s32 sum_floor_enemy_counts__6TLobbyFv(void) {
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
