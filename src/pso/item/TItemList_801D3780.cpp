#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801D401C_lbl_804C4498 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_801D401C_lbl_804C4498_size[sizeof(RecoveredGlobal_801D401C_lbl_804C4498) == 0x18 ? 1 : -1];

struct RecoveredGlobal_801D39C8_lbl_804C4468 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D3BD4_lbl_804C4480 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_801D3E20 { f32 x, y, z; };

struct Body_801D3E20 { void *colliders; s32 count; Vec_801D3E20 position; s32 facing; };

struct Actor_801D3E20 {
    u8 pad[0x30];
    u32 flags;
    u8 pad34[4];
    Vec_801D3E20 pos;
    u8 pad44[0x1c];
    s32 facing;
    u8 pad64[0x40];
    void *colliders;
    s32 count;
};

struct Search_801D3F3C {
    u8 pad[0x1d];
    s8 ring;
    s8 sample;
    s8 count;
    u8 pad20[8];
    u32 heading;
    s32 step;
    u32 angle;
    f32 radius;
};

typedef s32 M2C_UNK;
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804C4498[];
extern const f32 lbl_805DC3D4;
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
s32 check_player_action_allowed(void);
s32 fn_801D4270(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD21C(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_801D41B4(int);
M2C_UNK TItemList__sub_801D5884(void *, int);
u8 *TItemList__sub_801D58E4(void *);
extern M2C_UNK lbl_804C4468[];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
M2C_UNK TItemList__sub_801D5884(void *, int);
extern M2C_UNK lbl_804C4480[];
u8 *TItemList__sub_801D3BD4(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5);
s32 get_lobby_flag__6TLobbyFv(void);
s32 get_enemy_count__9TObjEneDDFv(void);
s32 get_game_mode__6TLobbyFv(void);
Actor_801D3E20 *get_player_data__10TObjPlayerFi(s32 i);
f32 TObjPlayer__sub_80141CF8(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *TObjPlayer__sub_80155C54(Body_801D3E20, Body_801D3E20);
extern const f32 lbl_805DC3D0;
void *TItemList__sub_801D3E20(void *self, Body_801D3E20 *s);
extern const f32 lbl_805DC3C8;
s32 TItemList__sub_801D3F3C(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TItemList__sub_801D3C38();
void TItemList__sub_801D588C(void *, int);
void TItemList__sub_801D59A0(void *, int);
void TItemList__sub_801D5A70(void *);
void TItemList__sub_801D3A80(u8 *arg0);
}

extern "C" {

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3);
void *TItemList__sub_801D3B64(void *arg0, s16 arg1);
void *TItemList__sub_801D3FC4(void *arg0, s16 arg1);
void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3);
void *destroy__9TItemListFPvs(void *arg0, s16 arg1);
M2C_UNK TItemList__sub_801D59E8(void *, s32);
M2C_UNK TItemList__sub_801D5A28(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_07;

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D39C8((u8 *)(o), (s32)(tl_07), (s32)(arg0), (u8 *)(arg1), (s32)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4468[];

void *destroy__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4468;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern void *tl_07;

typedef char RecoveredGlobal_801D39C8_lbl_804C4468_size[sizeof(RecoveredGlobal_801D39C8_lbl_804C4468) == 0x18 ? 1 : -1];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5) {
    u8 *temp_r3;
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D39C8_lbl_804C4468 *)&lbl_804C4468).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *) (arg0), (int) (1));
    TItemList__sub_801D3F3C((void *)((void *) (arg0)));
    if (check_player_action_allowed() != 0) {
        temp_r3 = (u8 *)(TItemList__sub_801D58E4(arg0));
        if (fn_801D4270(M2C_FIELD(temp_r3, s32 *, 4)) != 0) {
            fn_801D41B4((int) (M2C_FIELD(temp_r3, s32 *, 4)));
            if (TAdSinglePlyChrSelectGC__sub_801FD21C() != 0) {
                queue_destruction__7TObjectFv((void *) (arg0));
                return arg0;
            }
            M2C_FIELD(arg0, s32 *, 0x50) = 1;
            goto block_5;
        }
    }
block_5:
    return arg0;
}

void TItemList__sub_801D3A80(u8 *arg0) {
    switch (TItemList__sub_801D3C38()) {
    case 0:
        return;
    case 1:
        TItemList__sub_801D59A0(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D5A70(arg0);
        break;
    case 2:
        TItemList__sub_801D588C(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        break;
    }
    queue_destruction__7TObjectFv(arg0);
}

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D3BD4((u8 *)(o), (u8 *)(tl_07), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4480[];

void *TItemList__sub_801D3B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4480;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C4498[];

typedef char RecoveredGlobal_801D3BD4_lbl_804C4480_size[sizeof(RecoveredGlobal_801D3BD4_lbl_804C4480) == 0x18 ? 1 : -1];
u8 *TItemList__sub_801D3BD4(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5) {
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D3BD4_lbl_804C4480 *)&lbl_804C4480).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *)(arg0), (int)(0U));
    TItemList__sub_801D3F3C((void *)(arg0));
    return arg0;
}

void *TItemList__sub_801D3E20(void *self, Body_801D3E20 *s) {
    s32 end = get_lobby_flag__6TLobbyFv();
    s32 i;
    for (i = get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv(); i < end; i++) {
        Actor_801D3E20 *a = get_player_data__10TObjPlayerFi(i);
        if (a != 0 && a->colliders != 0 && !(a->flags & 0x800)) {
            if (lbl_805DC3D0 > TObjPlayer__sub_80141CF8(&s->position, &a->pos)) {
                Body_801D3E20 b;
                void *r;
                b.colliders = a->colliders;
                b.count = a->count;
                VecCopy__FP3VecPC3Vec(&b.position, &a->pos);
                b.facing = a->facing;
                r = TObjPlayer__sub_80155C54(*s, b);
                if (r != 0) {
                    return r;
                }
            }
        }
    }
    return 0;
}

s32 TItemList__sub_801D3F3C(void *arg0) {
    Search_801D3F3C *s = (Search_801D3F3C *)arg0;
    s->sample = 0;
    if (s->ring == 0) {
        s->count = 1;
    } else {
        s->count = s->ring * 4;
    }
    s->step = 0x10000 / s->count;
    s->angle = s->heading;
    s->radius = lbl_805DC3C8 * s->ring;
}

void *TItemList__sub_801D3FC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4498;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D401C_lbl_804C4498 *)&lbl_804C4498).value;
    if (arg2 == NULL) {
        M2C_FIELD(arg0, u16 *, 0x20) = 0xFFFFU;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x20) = obj_getField1c(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) get_stat_by_key_state__10TObjPlayerFPv(arg2);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 0x60);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg3);
    M2C_FIELD(arg0, s8 *, 0x1C) = arg4;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}

}
