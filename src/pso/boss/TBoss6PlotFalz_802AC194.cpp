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

extern "C" {
void destroy_buffer_pair(void *p, s32 flag);
int free__11TOBoss4RockFUi(void *p);
void TBoss6PlotFalz__sub_802AC25C(Obj_8004AA04 *self);
void *get_player_data__10TObjPlayerFi(s32 i);
extern s32 lbl_805D586C;
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
void TObjPlayer__sub_801B0FF4(void *p);
void TBoss6PlotFalz__sub_802AC4D8(void *self);
void TObjPlayer__sub_800F5BC0(u32, s16, s16);
void TBoss6PlotFalz__sub_802AC1D8(Obj_802AC1D8 *o, s32 dx, s32 dy);
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
            TObjPlayer__sub_800F5BC0(e, o->x, o->y);
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
void TBoss6PlotFalz__sub_802AC4D8(void *self) {
    s32 i;
    void *p;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            if (get_field_3e0__12TBoss3VoloptFPv(p) == 0x1f) {
                TObjPlayer__sub_801B0FF4(p);
            }
        }
    }
}

}
