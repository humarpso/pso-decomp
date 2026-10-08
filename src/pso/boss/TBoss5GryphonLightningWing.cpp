#include <dolphin/mtx.h>
#include "pso/TBoss5GryphonLightningWing.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80351DA8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#include <stddef.h>

#pragma opt_lifetimes off
struct Stack_80351A80 {
    M2C_UNK sp8;
    u8 trailing_storage[0x8];
};

struct Vec_80351C18 { f32 x, y, z; };

struct Pt_80351C18 { Vec_80351C18 v; f32 w; };

struct Wing_80351C18 {
    s32 x0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1C[0x48 - 0x1C];
    Pt_80351C18 pts[4];
    u8 pad88[8];
    s32 n;
    s32 pad94;
    s32 x98;
    s32 x9C;
};

extern "C" {
void fn_80351DA8(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVecterUnder(M2C_UNK *, s32);
s32 __nw__7TObjectFUl(int);
extern const f32 lbl_805D8D48;
s32 spawn_lightning_wing__12TBoss8DragonFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 queue_destruction__7TObjectFv(void *);
s32 play_sound_effect(int, void *, int, int);
M2C_UNK get_wing_position__26TBoss5GryphonLightningWingFii(s32, M2C_UNK *);
s32 update_wing_segments(void *);
s32 spawn_gryphon_lightning(void *);
void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0);
extern const f32 lbl_805DFED4;
void run_task__26TBoss5GryphonLightningWingFv(u8 *arg0);
extern s32 lbl_805D55A0;
s32 get_filtered_event_theme__6TLobbyFv(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss5GryphonLightning__ct(f32);
extern u8 __vt__26TBoss5GryphonLightningWing[];
extern s32 lbl_805D4368;
extern const f32 lbl_805DFED8;
s32 __ct__26TBoss5GryphonLightningWingFv(int arg0, void *arg1, void *a, void *mid, void *b, void *arg5, void *arg6);
}

extern "C" {

void TLobby__sub_80351DF8(void);
void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0);
u8 is_lobby_event_active(void);
void render__26TBoss5GryphonLightningWingFv(void);
M2C_UNK TBoss8Dragon__sub_80063FB8(s32, M2C_UNK *, f32);
s32 get_instance_count__12TBoss8DragonFv();
M2C_UNK get_wing_position__26TBoss5GryphonLightningWingFii(s32, M2C_UNK *);

extern f32 lbl_805DFED0;

void apply_lightning_effect__26TBoss5GryphonLightningWingFi(s32 arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    temp_r3 = get_instance_count__12TBoss8DragonFv();
    if (temp_r3 != 0) {
        get_wing_position__26TBoss5GryphonLightningWingFii(arg0, &sp8);
        TBoss8Dragon__sub_80063FB8(temp_r3, &sp8, lbl_805DFED0);
    }
}

void render__26TBoss5GryphonLightningWingFv(void) {  }

#pragma push
#pragma opt_common_subs off
void run_task__26TBoss5GryphonLightningWingFv(u8 *arg0) {
    Stack_80351A80 stack;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x94) / (f32) M2C_FIELD(arg0, s32 *, 0x9C));
    if (M2C_FIELD(arg0, f32 *, 0x88) > lbl_805DFED4) {
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DFED4;
    }
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x94) / (f32) M2C_FIELD(arg0, s32 *, 0x98));
    if (M2C_FIELD(arg0, f32 *, 0x8C) > lbl_805DFED4) {
        M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DFED4;
    }
    update_wing_segments((void *) (arg0));
    apply_lightning_effect__26TBoss5GryphonLightningWingFi((s32)((void *) (arg0)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) == (s32) M2C_FIELD(arg0, s32 *, 0x98)) {
        get_wing_position__26TBoss5GryphonLightningWingFii((s32)((void *) (arg0)), (M2C_UNK *)((void *) (&stack.sp8)));
        play_sound_effect((int) (0x40032516), (void *) (&stack.sp8), (int) (0), (int) (0));
    }
    spawn_gryphon_lightning((void *) (arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) >= (s32) M2C_FIELD(arg0, s32 *, 0x9C)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

TBoss5GryphonLightningWing::~TBoss5GryphonLightningWing() {}
s32 __ct__26TBoss5GryphonLightningWingFv(int arg0, void *arg1, void *a, void *mid, void *b, void *arg5, void *arg6) {
    s32 i;
    TBoss5GryphonLightning__ct(lbl_805DFED8);
    ((Wing_80351C18 *)arg0)->vt = __vt__26TBoss5GryphonLightningWing;
    ((Wing_80351C18 *)arg0)->x0 = lbl_805D4368;
    ((Wing_80351C18 *)arg0)->n = 3;
    ((Wing_80351C18 *)arg0)->x98 = (s32)arg5;
    ((Wing_80351C18 *)arg0)->x9C = (s32)arg5 + (s32)arg6;
    VecCopy__FP3VecPC3Vec(&((Wing_80351C18 *)arg0)->pts[0], a);
    VecCopy__FP3VecPC3Vec(&((Wing_80351C18 *)arg0)->pts[((Wing_80351C18 *)arg0)->n - 1], b);
    for (i = 1; i < ((Wing_80351C18 *)arg0)->n - 1; i++) {
        ((Wing_80351C18 *)arg0)->pts[i].v.x = ((Vec_80351C18 *)mid)->x;
        ((Wing_80351C18 *)arg0)->pts[i].v.y = ((Vec_80351C18 *)mid)->y;
        ((Wing_80351C18 *)arg0)->pts[i].v.z = ((Vec_80351C18 *)mid)->z;
    }
    return arg0;
}

s32 spawn_lightning_wing__12TBoss8DragonFiiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Vec position;
    f32 ground_height;
    s32 allocation;
    s32 effect;
    u8* collision;
    VecCopy__FP3VecPC3Vec(&position, (void*)arg3);
    collision = csnVecterUnder((M2C_UNK*)&position, 0x16EF);
    if (collision == NULL) {
        position.y = lbl_805D8D48;
    } else {
        ground_height = M2C_FIELD(M2C_FIELD(collision, u8**, 4), f32*, 4);
        if (ground_height > lbl_805D8D48) {
            position.y = lbl_805D8D48;
        } else {
            position.y = ground_height;
        }
    }
    allocation = __nw__7TObjectFUl(0xA0);
    effect = allocation;
    if (effect != 0) {
        effect = __ct__26TBoss5GryphonLightningWingFv((int)(allocation), (void *)((void*)arg0), (void *)((void*)arg1), (void *)((void*)arg2), (void *)(&position), (void *)((void*)arg4), (void *)((void*)arg5));
    }
    return effect;
}

void fn_80351DA8(s32 arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    Stack_80351DA8 stack;
    stack.sp8 = M2C_FIELD(arg2, f32 *, 0);
    stack.spC = M2C_FIELD(arg1, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg2, f32 *, 8);
    spawn_lightning_wing__12TBoss8DragonFiiiiii((s32)(arg0), (s32)((s32) arg1), (s32)((s32) &stack.sp8), (s32)((s32) arg2), (s32)(arg3), (s32)(arg4));
}

void TLobby__sub_80351DF8(void) {  }

s32 get_filtered_event_theme__6TLobbyFv(void) {
    switch (lbl_805D55A0) {
    case 1: case 3: case 4: case 5: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
        return lbl_805D55A0;
    }
    return 0;
}

u8 is_lobby_event_active(void) {
    return (u8) (get_filtered_event_theme__6TLobbyFv() != 0);
}

}
