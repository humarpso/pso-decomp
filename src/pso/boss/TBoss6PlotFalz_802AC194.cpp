#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8004AA04 { s32 count; u8 pad[0xC]; void **items; };

#include <stddef.h>
#include "pso/boss/TBoss4DarkFalz.h"
struct Stack_8004B084 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B084 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Stack_8004B0F8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B0F8 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Obj_8004B16C { u8 pad[0x1C]; u16 id; };

struct Msg_8004B16C { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_8004B1BC { u8 pad[0x1C]; u16 id; };

struct Msg_8004B1BC { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_802AC1D8 { s32 count; s32 pad4; s32 x; s32 y; u32 *list; };

typedef struct Rec_8004AA80 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004AA80;

typedef struct Obj_8004AA80 {
    s32 count;
    u8 pad4[0x8 - 0x4];
    s32 f8;
    s32 fc;
    s32 *items;
} Obj_8004AA80;

struct Vec_802AC3E8 { f32 x, y, z; };

struct Sub_802AC3E8 { u8 pad[0x18]; s32 flags; };

struct Obj_802AC3E8 { u8 pad[0x38]; Vec_802AC3E8 pos; u8 pad2[0xA4 - 0x44]; Sub_802AC3E8 *sub; };

extern "C" {
void destroy_buffer_pair(void *p, s32 flag);
int free__11TOBoss4RockFUi(void *p);
void TBoss6PlotFalz__sub_802AC25C(Obj_8004AA04 *self);
void *get_player_data__10TObjPlayerFi(s32 i);
extern s32 lbl_805D586C;
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
void refresh_equipment_slot__10TObjPlayerFv(void *p);
void TBoss6PlotFalz__sub_802AC4D8(void *self);
void scroll_strip_uvs(u32, s16, s16);
void TBoss6PlotFalz__sub_802AC1D8(Obj_802AC1D8 *o, s32 dx, s32 dy);
s32 get_bml_model(s32, s32);
int get_fish_count__8TObjFishFv(void);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 alloc_tables__6TLobbyFPvii(s32, s32, s32);
s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void TBoss6PlotFalz__sub_802AC2D8(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32 i);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK subtract_vector(void *, void *);
f32 xyz_distance(void *, void *);
extern u8 lbl_8047059C[];
extern u8 lbl_804705B4[];
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DE0CC;
extern const f32 lbl_805DE0D0;
extern const f32 lbl_805DE0D4;
void TBoss6PlotFalz__sub_802AC3E8(void);
}

extern "C" {

void update_active_flag__14TBoss6PlotFalzFv(void);
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D66F8;

void update_active_flag__14TBoss6PlotFalzFv(void) {
    lbl_805D66F8 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        lbl_805D66F8 = 1;
    }
}

void TBoss6PlotFalz__sub_802AC1D8(Obj_802AC1D8 *o, s32 dx, s32 dy) {
    s32 j;
    s32 i;
    i = 0;
    j = 0;
    o->x += dx;
    o->y += dy;
    for (; i < o->count; i++, j += 4) {
        u32 e = *(u32 *)((u8 *)o->list + j);
        if (e != 0) {
            scroll_strip_uvs(e, o->x, o->y);
        }
    }
}

void TBoss6PlotFalz__sub_802AC25C(Obj_8004AA04 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->items[i] != 0) {
            destroy_buffer_pair(self->items[i], 1);
            self->items[i] = 0;
        }
    }
    free__11TOBoss4RockFUi(self->items);
    self->items = 0;
}
typedef char MemberActionStorage_8004B084_size[sizeof(MemberActionStorage_8004B084) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
typedef char MemberActionStorage_8004B0F8_size[sizeof(MemberActionStorage_8004B0F8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];

void TBoss6PlotFalz__sub_802AC2D8(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2) {
    s32 h;
    s32 i;
    Rec_8004AA80 *r;
    s32 t;
    s32 p;
    s32 j;
    h = get_fish_count__8TObjFishFv();
    if (h == 0 || arg1 == NULL || arg2 < 1) {
        return;
    }
    arg0->count = arg2;
    arg0->items = NULL;
    arg0->items = alloc_buffer__11TOBoss4RockFPv(arg0->count * 4);
    arg0->f8 = 0;
    arg0->fc = 0;
    for (j = 0; j < arg0->count; j++) {
        arg0->items[j] = 0;
    }
    for (i = 0; i < arg0->count; i++) {
        r = &arg1[i];
        t = collect_and_count__12TBoss3VoloptFUii(get_bml_model(h, r->a), r->b);
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
        if (p != 0) {
            p = alloc_tables__6TLobbyFPvii(p, t, r->c);
        }
        arg0->items[i] = p;
    }
}

void TBoss6PlotFalz__sub_802AC3E8(void) {
    Vec_802AC3E8 v;
    s32 i;
    Obj_802AC3E8 *p;
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = (Obj_802AC3E8 *)get_player_data__10TObjPlayerFi(i);
        if (p != NULL && p->sub != NULL && (p->sub->flags & 0x20000)
            && !(xyz_distance(lbl_804705B4, &p->pos) > lbl_805DE0CC)
            && !(xyz_distance(lbl_8047059C, &p->pos) <= lbl_805DE0D0)) {
            VecCopy__FP3VecPC3Vec(&v, &p->pos);
            subtract_vector(&v, lbl_804705B4);
            vec3_add_to(&v, lbl_8047059C);
            v.y = lbl_805DE0D4;
            VecCopy__FP3VecPC3Vec(&p->pos, &v);
            refresh_collision_body_centers(p);
        }
    }
}

void TBoss6PlotFalz__sub_802AC4D8(void *self) {
    s32 i;
    void *p;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            if (get_field_3e0__12TBoss3VoloptFPv(p) == 0x1f) {
                refresh_equipment_slot__10TObjPlayerFv(p);
            }
        }
    }
}

}
