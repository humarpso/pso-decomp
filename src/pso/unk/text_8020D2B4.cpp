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

struct Ent_8020D5AC { s32 a; void *fn; f32 range; s32 d; };

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
s32 TObjPlayer__sub_803D97F0(u32);
s32 TObjPlayer__sub_803D9B78(void);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
extern RecoveredGlobal_8020D2B4_lbl_8058D490 lbl_8058D490;
void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2);
s32 TObjPlayer__sub_800196EC();
s32 assign_display_objects__6TLobbyFPvi(int, int);
s32 assign_objects_to_slots__6TLobbyFPvi(int, int);
extern RecoveredGlobal_8020D6F0_TLobby__data_80513AD0 TLobby__data_80513AD0;
extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D610C;
extern s32 TLobby__data_805D6114;
extern s32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
void TLobby__sub_8020D6F0(u8 *arg0);
void *TScene__sub_80203600(s32 room);
void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2);
void TLobby__sub_8020D36C(SpawnRecord_8020D36C *rows, s32 count);
void *TScene__sub_80203600(s32 room);
void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2);
void TLobby__sub_8020D3F0(Rec_8020D3F0 *arr, s32 n);
s32 TLobby__sub_8020CF40(void *, void *);
s32 TLobby__sub_8020D474(void *arg0, int arg1, int arg2);
s32 get_instance__11TCameraCtrlFv();
f32 fn_801315A0(void *, void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern Obj_8020D4E8 *lbl_805D4DF0;
s32 TLobby__sub_8020D4E8(void *arg0, void *arg1, f32 farg0);
s32 get_player_count__10TObjPlayerFv();
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_801C2614();
s32 get_global_state__14TOKeyMachine01Fv();
u8 *TLobby__sub_8020CFEC(void *, void *);
s32 TLobby__sub_8020D4E8(void *arg0, void *arg1, f32 farg0);
extern Ent_8020D5AC *TLobby__data_804C1ED8[];
extern s32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
void TLobby__sub_8020D5AC(void *arg0);
}

extern "C" {

void TLobby__sub_8020D6D0(void* p);

void TLobby__sub_8020D2B4(s32 arg0, u8 *arg1, u8 *arg2) {
    TObjPlayer__sub_803D97F0((u32) &lbl_8058D490.value);
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(arg2, f32 *, 4)), (f32) (M2C_FIELD(arg2, f32 *, 8)), (f32) (M2C_FIELD(arg2, f32 *, 0xC)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x18)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x10)));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg2, s32 *, 0x14)));
    TCameraCtrl__sub_803D8934((int) (0), (void *) (arg0), (void *) (arg0));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + M2C_FIELD(arg2, s32 *, 0x10));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg2, s32 *, 0x14));
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + M2C_FIELD(arg2, s32 *, 0x18));
}

void TLobby__sub_8020D36C(SpawnRecord_8020D36C *rows, s32 count) {
    SpawnRecord_8020D36C *row;
    void *cached_room;
    s16 cached_id = -1;
    s32 i;
    for (i = 0; i < count; i++) {
        row = &rows[i];
        if (cached_id != row->room) {
            cached_room = TScene__sub_80203600(row->room);
            cached_id = row->room;
        }
        if (cached_room) {
            TLobby__sub_8020D2B4((s32)&row->position, (u8 *)&row->angles, (u8 *)cached_room);
        }
    }
}

void TLobby__sub_8020D3F0(Rec_8020D3F0 *arr, s32 n) {
    Rec_8020D3F0 *p;
    void *sec;
    s16 key;
    s32 i;
    key = -1;
    i = 0;
    for (; i < n; i++) {
        p = &arr[i];
        if (key != p->key) {
            sec = TScene__sub_80203600(p->key);
            key = p->key;
        }
        if (sec != NULL) {
            TLobby__sub_8020D2B4((s32)p->a, p->b, (u8 *)sec);
        }
    }
}

s32 TLobby__sub_8020D474(void *arg0, int arg1, int arg2) {
    Out_8020D474 o;
    Rec_8020D474 *p;
    s32 i;
    s32 r;
    p = (Rec_8020D474 *)arg1;
    for (i = 0; i < arg2; i++, p++) {
        if (p->id != -1) {
            r = TLobby__sub_8020CF40(p, &o);
            if (r >= 0) {
                p->id = r;
            } else {
                p->id = -1;
            }
        }
    }
}

s32 TLobby__sub_8020D4E8(void *arg0, void *arg1, f32 farg0) {
    s32 n;
    s32 i;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        if (lbl_805D4DF0 != NULL) {
            n = get_instance__11TCameraCtrlFv();
            for (i = 0; i < n; i++) {
                if (fn_801315A0(arg1, &lbl_805D4DF0->ents[i]) < farg0) {
                    return 1;
                }
            }
        }
    } else if (lbl_805D4DF0 != NULL && fn_801315A0(arg1, &lbl_805D4DF0->single) < farg0) {
        return 1;
    }
    return 0;
}

void TLobby__sub_8020D5AC(void *arg0) {
    Ent_8020D5AC *tbl;
    Rec_8020D5AC *p;
    s32 i;
    u8 *obj;
    tbl = TLobby__data_804C1ED8[get_global_state__14TOKeyMachine01Fv()];
    if (tbl == NULL) {
        return;
    }
    if (get_player_count__10TObjPlayerFv() != 0 && TCameraCtrl__sub_8006B368() != 0 && TLobby__sub_801C2614() == 0) {
        return;
    }
    p = (Rec_8020D5AC *)TLobby__data_805D611C;
    for (i = 0; i < TLobby__data_805D6120; i++, p++) {
        if (p->id != -1 && !(p->flags & 2) && !(p->flags & 8)
            && TLobby__sub_8020D4E8(arg0, p->data, tbl[p->id].range) == 1) {
            p->s8 = 0xFFFF;
            p->s4 = -1;
            obj = TLobby__sub_8020CFEC(arg0, p);
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

void TLobby__sub_8020D6D0(void* p) { TLobby__sub_8020D5AC((void *)(p)); }
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_8020D6F0_TLobby__data_80513AD0_size[sizeof(RecoveredGlobal_8020D6F0_TLobby__data_80513AD0) == 0x1B0 ? 1 : -1];
void TLobby__sub_8020D6F0(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r30;
    temp_r3 = TObjPlayer__sub_800196EC();
    TLobby__data_805D60FC = temp_r3;
    temp_r30 = (u8 *)&TLobby__data_80513AD0.value + (temp_r3 * 0x18);
    if (!(M2C_FIELD(temp_r30, s32 *, 8) & 2)) {
        TLobby__sub_8020D3F0((Rec_8020D3F0 *)((int) (TLobby__data_805D610C)), (s32)((int) (M2C_FIELD(temp_r30, s32 *, 0))));
        M2C_FIELD(temp_r30, s32 *, 8) = (s32) (M2C_FIELD(temp_r30, s32 *, 8) | 2);
    }
    if (!(M2C_FIELD(temp_r30, s32 *, 0xC) & 4)) {
        TLobby__sub_8020D36C((SpawnRecord_8020D36C *)((int) (TLobby__data_805D6114)), (s32)((int) (M2C_FIELD(temp_r30, s32 *, 4))));
        M2C_FIELD(temp_r30, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r30, s32 *, 0xC) | 4);
    }
    if (M2C_FIELD(temp_r30, s32 *, 8) & 2) {
        assign_objects_to_slots__6TLobbyFPvi((int) (TLobby__data_805D610C), (int) (M2C_FIELD(temp_r30, s32 *, 0)));
    }
    if (M2C_FIELD(temp_r30, s32 *, 0xC) & 4) {
        assign_display_objects__6TLobbyFPvi((int) (TLobby__data_805D6114), (int) (M2C_FIELD(temp_r30, s32 *, 4)));
    }
    if ((s32) TLobby__data_805D6120 > 0) {
        TLobby__sub_8020D3F0((Rec_8020D3F0 *)((int) (TLobby__data_805D611C)), (s32)((int) (TLobby__data_805D6120)));
        TLobby__sub_8020D474((void *)((void *) (arg0)), (int)((int) (TLobby__data_805D611C)), (int)((int) (TLobby__data_805D6120)));
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}
#pragma pop

}
