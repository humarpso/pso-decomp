#include "pso/object/ObjectFactoryTables.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020D2B4_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_8020D2B4_lbl_8058D490_size[sizeof(RecoveredGlobal_8020D2B4_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_8020D6F0_TLobby__data_80513AD0 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

typedef struct SpawnVector_8020D36C { f32 x, y, z; } SpawnVector_8020D36C;

typedef struct SpawnAngles_8020D36C { u32 x, y, z; } SpawnAngles_8020D36C;

typedef struct SpawnRecord_8020D36C {
    s16 type;
    u16 flags;
    u16 index;
    s16 children;
    u16 reserved;
    u16 actor_id;
    s16 room;
    s16 wave;
    u32 secondary_wave;
    SpawnVector_8020D36C position;
    SpawnAngles_8020D36C angles;
    f32 parameters[5];
    s16 integers[4];
} SpawnRecord_8020D36C;

struct Rec_8020D3F0 { u8 p0[0xC]; s16 key; u8 p1[2]; u8 a[0xC]; u8 b[0x28]; };

struct Out_8020D474 { u8 data[0x18]; };

struct Rec_8020D474 { s16 id; u8 pad[0x42]; };

struct Ent_8020D4E8 { u8 d[0xC]; };

struct Obj_8020D4E8 { u8 p0[0xD4]; Ent_8020D4E8 ents[13]; u8 p1[0x8]; Ent_8020D4E8 single; };

typedef ObjectFactoryEntry Ent_8020D5AC;

struct Rec_8020D5AC {
    s16 id;
    s16 flags;
    s16 s4;
    s16 s6;
    u16 s8;
    s16 sA;
    s16 sC;
    s16 sE;
    u8 data[0x30];
    void *obj;
};

extern "C" {
s32 push_matrix_from(u32);
s32 pop_matrix(void);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
extern RecoveredGlobal_8020D2B4_lbl_8058D490 identity_matrix;
void apply_room_transform(s32 arg0, u8 *arg1, u8 *arg2);
s32 get_current_floor();
s32 assign_display_objects__6TLobbyFPvi(int, int);
s32 assign_objects_to_slots__6TLobbyFPvi(int, int);
extern RecoveredGlobal_8020D6F0_TLobby__data_80513AD0 TLobby__floor_enemy_group_table;
extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D610C;
extern s32 TLobby__data_805D6114;
extern s32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
void apply_floor_set_rows__11TSetManagerFPv(u8 *arg0);
void *find_scene_room_by_id(s32 room);
void apply_room_transform(s32 arg0, u8 *arg1, u8 *arg2);
void apply_room_transform_to_enemy_rows(SpawnRecord_8020D36C *rows, s32 count);
void *find_scene_room_by_id(s32 room);
void apply_room_transform(s32 arg0, u8 *arg1, u8 *arg2);
void apply_room_transform_to_object_rows(Rec_8020D3F0 *arr, s32 n);
s32 find_set_factory_index(void *, void *);
s32 resolve_set_row_factory_indices(void *arg0, int arg1, int arg2);
s32 get_instance__11TCameraCtrlFv();
f32 xyz_distance_squared(void *, void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern Obj_8020D4E8 *camera_ctrl_instance;
s32 is_within_camera_distance(void *arg0, void *arg1, f32 farg0);
s32 get_player_count__10TObjPlayerFv();
s32 is_quest_active();
s32 TLobby__sub_801C2614();
s32 get_global_state__14TOKeyMachine01Fv();
u8 *call_area_set_factory(void *, void *);
s32 is_within_camera_distance(void *arg0, void *arg1, f32 farg0);
extern s32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
void spawn_decorations_in_range(void *arg0);
}

extern "C" {

void update_decoration_spawning__11TSetManagerFPv(void* p);

void apply_room_transform(s32 arg0, u8 *arg1, u8 *arg2) {
    push_matrix_from((u32) &identity_matrix.value);
    translate_matrix((int) (0), (f32) (M2C_FIELD(arg2, f32 *, 4)), (f32) (M2C_FIELD(arg2, f32 *, 8)), (f32) (M2C_FIELD(arg2, f32 *, 0xC)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x18)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x10)));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x14)));
    matrix_mult_vec((int) (0), (void *) (arg0), (void *) (arg0));
    pop_matrix();
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg2, s32 *, 0x10));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg2, s32 *, 0x14));
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg2, s32 *, 0x18));
}

void apply_room_transform_to_enemy_rows(SpawnRecord_8020D36C *rows, s32 count) {
    SpawnRecord_8020D36C *row;
    void *cached_room;
    s16 cached_id = -1;
    s32 i;
    for (i = 0; i < count; i++) {
        row = &rows[i];
        if (cached_id != row->room) {
            cached_room = find_scene_room_by_id(row->room);
            cached_id = row->room;
        }
        if (cached_room) {
            apply_room_transform((s32)&row->position, (u8 *)&row->angles, (u8 *)cached_room);
        }
    }
}

void apply_room_transform_to_object_rows(Rec_8020D3F0 *arr, s32 n) {
    Rec_8020D3F0 *p;
    void *sec;
    s16 key;
    s32 i;
    key = -1;
    i = 0;
    for (; i < n; i++) {
        p = &arr[i];
        if (key != p->key) {
            sec = find_scene_room_by_id(p->key);
            key = p->key;
        }
        if (sec != NULL) {
            apply_room_transform((s32)p->a, p->b, (u8 *)sec);
        }
    }
}

s32 resolve_set_row_factory_indices(void *arg0, int arg1, int arg2) {
    Out_8020D474 o;
    Rec_8020D474 *p;
    s32 i;
    s32 r;
    p = (Rec_8020D474 *)arg1;
    for (i = 0; i < arg2; i++, p++) {
        if (p->id != -1) {
            r = find_set_factory_index(p, &o);
            if (r >= 0) {
                p->id = r;
            } else {
                p->id = -1;
            }
        }
    }
}

s32 is_within_camera_distance(void *arg0, void *arg1, f32 farg0) {
    s32 n;
    s32 i;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (camera_ctrl_instance != NULL) {
            n = get_instance__11TCameraCtrlFv();
            for (i = 0; i < n; i++) {
                if (xyz_distance_squared(arg1, &camera_ctrl_instance->ents[i]) < farg0) {
                    return 1;
                }
            }
        }
    } else if (camera_ctrl_instance != NULL && xyz_distance_squared(arg1, &camera_ctrl_instance->single) < farg0) {
        return 1;
    }
    return 0;
}

void spawn_decorations_in_range(void *arg0) {
    Ent_8020D5AC *tbl;
    Rec_8020D5AC *p;
    s32 i;
    u8 *obj;
    tbl = floor_object_factory_tables[get_global_state__14TOKeyMachine01Fv()];
    if (tbl == NULL) {
        return;
    }
    if (get_player_count__10TObjPlayerFv() != 0 && is_quest_active() != 0 && TLobby__sub_801C2614() == 0) {
        return;
    }
    p = (Rec_8020D5AC *)TLobby__data_805D611C;
    for (i = 0; i < TLobby__data_805D6120; i++, p++) {
        if (p->id != -1 && !(p->flags & 2) && !(p->flags & 8)
            && is_within_camera_distance(arg0, p->data, tbl[p->id].creation_distance_squared) == 1) {
            p->s8 = 0xFFFF;
            p->s4 = -1;
            obj = call_area_set_factory(arg0, p);
            if (obj != NULL) {
                p->obj = obj;
                M2C_FIELD(obj, s16 *, 0x28) = p->sC;
                M2C_FIELD(obj, void **, 0x80) = p;
                p->flags |= 2;
            } else {
                p->obj = NULL;
                p->flags |= 8;
            }
        }
    }
}

void update_decoration_spawning__11TSetManagerFPv(void* p) { spawn_decorations_in_range((void *)(p)); }
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_8020D6F0_TLobby__data_80513AD0_size[sizeof(RecoveredGlobal_8020D6F0_TLobby__data_80513AD0) == 0x1B0 ? 1 : -1];
void apply_floor_set_rows__11TSetManagerFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r30;
    temp_r3 = get_current_floor();
    TLobby__data_805D60FC = temp_r3;
    temp_r30 = (u8 *)&TLobby__floor_enemy_group_table.value + (temp_r3 * 0x18);
    if (!(M2C_FIELD(temp_r30, s32 *, 8) & 2)) {
        apply_room_transform_to_object_rows((Rec_8020D3F0 *)((int) (TLobby__data_805D610C)), (s32)((int) (M2C_FIELD(temp_r30, s32 *, 0))));
        M2C_FIELD(temp_r30, s32 *, 8) = (s32) (M2C_FIELD(temp_r30, s32 *, 8) | 2);
    }
    if (!(M2C_FIELD(temp_r30, s32 *, 0xC) & 4)) {
        apply_room_transform_to_enemy_rows((SpawnRecord_8020D36C *)((int) (TLobby__data_805D6114)), (s32)((int) (M2C_FIELD(temp_r30, s32 *, 4))));
        M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) | 4);
    }
    if (M2C_FIELD(temp_r30, s32 *, 8) & 2) {
        assign_objects_to_slots__6TLobbyFPvi((int) (TLobby__data_805D610C), (int) (M2C_FIELD(temp_r30, s32 *, 0)));
    }
    if (M2C_FIELD(temp_r30, s32 *, 0xC) & 4) {
        assign_display_objects__6TLobbyFPvi((int) (TLobby__data_805D6114), (int) (M2C_FIELD(temp_r30, s32 *, 4)));
    }
    if ((s32) TLobby__data_805D6120 > 0) {
        apply_room_transform_to_object_rows((Rec_8020D3F0 *)((int) (TLobby__data_805D611C)), (s32)((int) (TLobby__data_805D6120)));
        resolve_set_row_factory_indices((void *)((void *) (arg0)), (int)((int) (TLobby__data_805D611C)), (int)((int) (TLobby__data_805D6120)));
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}
#pragma pop

}
