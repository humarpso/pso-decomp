#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8004CBC0_lbl_80485448 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Obj_8004CD08 { u8 pad0[0x1C]; u16 id; u8 pad1e[0xE]; s16 f2c; u8 pad2e[0x352]; s32 f380; };

struct Sub_8004CD08 { s16 x; u8 pad2[4]; s16 id; s16 f8; u8 pada[0x42]; };

struct Params_8004CD08 { void *owner; Sub_8004CD08 sub; };

struct D_8004CB28 {
    s16 a0, a2, a4;
    u16 a6;
    s16 a8, aa, ac, ae;
    u8 pad10[0x30];
};

struct Arg_8004CB28 { void *owner; D_8004CB28 d; };

struct S_8004CB28 {
    u8 pad0[0x1c];
    u16 f1c;
    u8 pad1e[0x0e];
    s16 f2c;
    u8 pad2e[0x352];
    s32 f380;
};

typedef struct Vec_8004C940 {
    f32 x, y, z;
} Vec_8004C940;

typedef struct Obj_8004C940 {
    u8 pad0[0x2D4];
    u16 f2d4;
    u16 f2d6;
    u8 pad2d8[0x380 - 0x2D8];
    s32 f380;
    u8 pad384[0x39C - 0x384];
    Vec_8004C940 pos;
    s32 f3a8;
} Obj_8004C940;

extern "C" {
void queue_destruction__7TObjectFv(void *);
u8 * create_demo1__14TBoss4DarkFalzFPvPvPv(void *, void *, void *);
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16);
s32 TBoss4DarkFalz__sub_8004BA70();
extern RecoveredGlobal_8004CBC0_lbl_80485448 lbl_80485448;
extern u32 TBoss4DarkFalz__data_805D4D5C;
void TBoss4DarkFalz__sub_8004CBC0(u8 *arg0);
extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern u32 TBoss4DarkFalz__data_805D4D5C;
void TBoss4DarkFalz__sub_8004B4F0(void *dst, void *src);
s32 create__11TBoss4Type1Fi(void *params);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
void TBoss4DarkFalz__sub_8004CD08(Obj_8004CD08 *self);
void TBoss4DarkFalz__sub_8004B20C(void *, s32);
void TBoss4DarkFalz__sub_8004B4F0(void *dst, void *src);
void *create__11TBoss4Type2Fi(void *);
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16);
extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern u32 TBoss4DarkFalz__data_805D4D60;
void TBoss4DarkFalz__sub_8004CB28(S_8004CB28 *o);
Vec_8004C940 *VecCopy__FP3VecPC3Vec(Vec_8004C940 *, Vec_8004C940 *);
void obj_setArrS16_FC(void *, s32, u16);
void queue_destruction__7TObjectFv(void *);
s32 TBoss4DarkFalz__sub_8004BA70();
void TBoss4DarkFalz__sub_8004D92C(void *, u16 *, u16 *, u16 *);
void create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *, Vec_8004C940 *, s32, s32);
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(u16);
s32 TLobby__sub_8022743C();
void TNpcPlayer__sub_803D97B4(Vec_8004C940 *);
extern u32 TBoss4DarkFalz__data_805D4D60;
extern s32 lbl_805D5550;
extern const f32 lbl_805D8948;
extern const f32 lbl_805D894C;
void TBoss4DarkFalz__sub_8004C940(Obj_8004C940 *arg0);
}

extern "C" {

void TBoss4DarkFalz__sub_8004C93C(void);
void TBoss4DarkFalz__sub_8004CA80(void);
void TBoss4DarkFalz__sub_8004CBBC(void);
void TBoss4DarkFalz__sub_8004CE90(void);
void check_timeout__14TBoss4DarkFalzFi(s32 arg0);
void request_action_7__14TBoss4DarkFalzFi(s32 arg0);
void request_action_9__14TBoss4DarkFalzFi(s32 arg0);
void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0);
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0);
void start_effect__14TBoss4DarkFalzFPv(void *arg0);
void update_parts__14TBoss4DarkFalzFPv(void* p);
void update_parts__14TBoss4DarkFalzFi(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
s32 TBoss4DarkFalz__sub_8004B1BC(s32, s32);
s32 TBoss4DarkFalz__sub_8004B3BC(s32);
int TBoss4DarkFalz__sub_8004B77C(void*);
int TBoss4DarkFalz__sub_8004BA18(void*);
s32 TBoss4DarkFalz__sub_8004BA70();
s32 TBoss4DarkFalz__sub_8004D990();
s32 TLobby__sub_8022743C();
s32 TOTrapAncient01__sub_80226578(s32, s32, s32, s32, s32);
s32 get_phase__14TBoss4DarkFalzFPv(u32);
s32 get_state__14TBoss4DarkFalzFPv(u32);
s32 is_timer_expired__14TBoss4DarkFalzFPv();

void TBoss4DarkFalz__sub_8004C93C(void) {  }

#pragma fp_contract on
void TBoss4DarkFalz__sub_8004C940(Obj_8004C940 *arg0) {
    u16 arr[4];
    Vec_8004C940 v;
    s32 flag;
    s32 i;
    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    if (TBoss4DarkFalz__data_805D4D60 != 0) {
        VecCopy__FP3VecPC3Vec(&v, VecCopy__FP3VecPC3Vec(&arg0->pos, (Vec_8004C940 *)(TBoss4DarkFalz__data_805D4D60 + 0x38)));
        v.y = lbl_805D8948;
        TNpcPlayer__sub_803D97B4(&v);
        arg0->pos.x -= lbl_805D894C * v.x;
        arg0->pos.z -= lbl_805D894C * v.z;
        arg0->pos.y = lbl_805D8948;
        arg0->f3a8 = *(s32 *)(TBoss4DarkFalz__data_805D4D60 + 0x60);
    } else {
        arg0->pos.x = arg0->pos.y = arg0->pos.z = lbl_805D8948;
        arg0->f3a8 = 0;
    }
    flag = 0;
    if (lbl_805D5550 != 0) {
        flag = 1;
    }
    create_demo2__14TBoss4DarkFalzFPvPvPvPv(arg0, &arg0->pos, arg0->f3a8, flag);
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x35);
    if (TBoss4DarkFalz__data_805D4D60 != 0) {
        TBoss4DarkFalz__sub_8004D92C((void *)TBoss4DarkFalz__data_805D4D60, &arg0->f2d6, &arg0->f2d4, arr);
        queue_destruction__7TObjectFv((void *)TBoss4DarkFalz__data_805D4D60);
        TBoss4DarkFalz__data_805D4D60 = 0;
        for (i = 0; i < 4; i++) {
            obj_setArrS16_FC(arg0, i, arr[i]);
        }
    }
    arg0->f380 = 0x118;
}

void TBoss4DarkFalz__sub_8004CA80(void) {  }

extern u32 TBoss4DarkFalz__data_805D4D60;

void request_action_9__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D60 == 0U) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 3) || (get_phase__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D60) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(9));
    }
}

void update_parts__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA18((void*)(p)); TBoss4DarkFalz__sub_8004B77C((void*)(p)); }

void TBoss4DarkFalz__sub_8004CB28(S_8004CB28 *o) {
    Arg_8004CB28 a;
    o->f380 = o->f380 - 1;
    if (o->f380 < 0) {
        a.owner = o;
        TBoss4DarkFalz__sub_8004B4F0(&a.d, TBoss4DarkFalz__data_804FF1E8);
        a.d.a8 = 1;
        a.d.a0 = o->f2c + 0x1FF;
        a.d.a6 = o->f1c + 0x1FF;
        (*(void * *)&TBoss4DarkFalz__data_805D4D60) = create__11TBoss4Type2Fi(&a);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x34);
        TBoss4DarkFalz__sub_8004B20C(o, 8);
    }
}

void TBoss4DarkFalz__sub_8004CBBC(void) {  }

typedef char RecoveredGlobal_8004CBC0_lbl_80485448_size[sizeof(RecoveredGlobal_8004CBC0_lbl_80485448) == 0xC ? 1 : -1];
void TBoss4DarkFalz__sub_8004CBC0(u8 *arg0) {
    TBoss4DarkFalz__sub_8004BA70();
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) != NULL) {
        create_demo1__14TBoss4DarkFalzFPvPvPv(arg0, (u8 *)((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C)) + 0x38, M2C_FIELD((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C), u8 **, 0x60));
    } else {
        create_demo1__14TBoss4DarkFalzFPvPvPv(arg0, &lbl_80485448.value, NULL);
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x33U);
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) != NULL) {
        queue_destruction__7TObjectFv((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C));
        (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12C;
}

void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0) {
    if (TBoss4DarkFalz__sub_8004D990() > 0) {
        TOTrapAncient01__sub_80226578((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x20), (s32)(2));
    }
}

extern u32 TBoss4DarkFalz__data_805D4D5C;

void request_action_7__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D5C == 0U) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 3) || (get_state__14TBoss4DarkFalzFPv(TBoss4DarkFalz__data_805D4D5C) == 4) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(7));
    }
}

void TBoss4DarkFalz__sub_8004CD08(Obj_8004CD08 *self) {
    Params_8004CD08 params;
    params.owner = self;
    TBoss4DarkFalz__sub_8004B4F0(&params.sub, TBoss4DarkFalz__data_804FF1E8);
    params.sub.f8 = 1;
    params.sub.x = self->f2c + 0x200;
    params.sub.id = self->id + 0x200;
    TBoss4DarkFalz__data_805D4D5C = create__11TBoss4Type1Fi(&params);
    self->f380 = 0;
    TBoss4DarkFalz__sub_8004BA18((void*)(self));
    TBoss4DarkFalz__sub_8004B77C((void*)(self));
}

void TBoss4DarkFalz__sub_8004CE90(void) {  }
void start_effect__14TBoss4DarkFalzFPv(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    TBoss3Volopt__sub_8022675C(0x4003A80B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0) {
    TOTrapAncient01__sub_80226578((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x18), (s32)(2));
}
void check_timeout__14TBoss4DarkFalzFi(s32 arg0) {
    if ((is_timer_expired__14TBoss4DarkFalzFPv() != 0) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        TBoss4DarkFalz__sub_8004B1BC((s32)(arg0), (s32)(5));
    }
}
void update_parts__14TBoss4DarkFalzFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AD0C, 0, 0, 0);
    TBoss4DarkFalz__sub_8004BA18((void*)(arg0));
    TBoss4DarkFalz__sub_8004B77C((void*)(arg0));
    TBoss4DarkFalz__sub_8004B3BC(arg0);
}

}
