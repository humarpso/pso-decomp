#include "types.h"

struct RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw { s32 value; u8 remaining[0x148]; };
typedef char RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw_size[sizeof(RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw) == 0x14C ? 1 : -1];

struct Ent_8008D68C { void *obj; u32 x4; s16 a; s16 b; s16 c; s16 d; };

struct V_8008D700 { f32 x, y, z; };

struct O_8008D700 { u8 pad0[0x30]; u32 flags; u8 pad34[0x378]; f32 f3ac; f32 f3b0; f32 f3b4; u8 pad3b8[4]; f32 f3bc; };

struct Obj_8008D79C { u8 pad0[0x388]; s32 flags; u8 pad38C[0x3B8 - 0x38C]; s32 f3B8; f32 f3BC; };

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEneBalClaw__vt60(u8 *arg0);
void add_flags_2e4__10TObjPlayerFPvUi(void *, s32);
void clear_attack_flag__18TObjEneBalClawClawFPv(void* p);
u8 * init_vtable_and_field18__10TObjPlayerFPv(void *);
u8 * TObjEnemyCustom__ct(void *);
extern s32 __vt__14TObjEneBalClaw[];
extern s32 lbl_805D2968;
extern const f32 lbl_805D960C;
u8 *TObjEneBalClaw__ct(u8 *arg0);
extern Ent_8008D68C lbl_8048EC1C[];
extern s32 balclaw_last_shared_update_frame;
extern s32 actor_frame_tick;
void TObjPlayer__sub_8023DEE0(void *obj, s32 a, s32 b, u16 c);
void TObjEneBalClaw__sub_8008D68C(void);
void render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
extern V_8008D700 lbl_80439B34;
extern f32 lbl_805D9600;
extern const f32 lbl_805D9604;
void render_scaled__14TObjEneBalClawFPvi(O_8008D700 *arg0, s32 arg1);
f32 sin_table_lookup(s32);
extern const f32 lbl_805D9608;
void update_wobble__14TObjEneBalClawFPv(Obj_8008D79C *arg0);
}

extern "C" {

void TObjEneBalClawClaw__sub_8008DC14(void);
int TObjEneBalClaw__vt28(void);
void TObjEneBalClaw__vt57(void);
void TObjEneBalClaw__vt59(void);
void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1);
void clear_attack_flag__18TObjEneBalClawClawFPv(void* p);
void release_global_805D4F20__14TObjEneBalClawFv(void);
void update_claw_angle__14TObjEneBalClawFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void TObjPlayer__sub_800A05B8(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);

extern f32 lbl_805D9600;

void TObjEneBalClaw__sub_8008D68C(void) {
    s32 i;
    if (balclaw_last_shared_update_frame != actor_frame_tick) {
        balclaw_last_shared_update_frame = actor_frame_tick;
        for (i = 0; i < 7; i++) {
            Ent_8008D68C *e = &lbl_8048EC1C[i];
            TObjPlayer__sub_8023DEE0(e->obj, e->a, e->b, e->c);
        }
    }
}

void render_scaled__14TObjEneBalClawFPvi(O_8008D700 *arg0, s32 arg1) {
    f32 a;
    f32 t;
    if (!(arg0->flags & 0x800) && arg1 != 0) {
        a = arg0->f3ac;
        t = lbl_805D9600 - (lbl_805D9604 * ((arg0->f3b4 + arg0->f3bc) - a)) * (lbl_805D9600 / (arg0->f3b0 - a));
        V_8008D700 v = lbl_80439B34;
        v.x = t;
        v.y = t;
        v.z = t;
        render_with_position_override__10TObjPlayerFPvPvi(arg0, &v, 0);
    }
}

void update_wobble__14TObjEneBalClawFPv(Obj_8008D79C *arg0) {
    if (arg0->flags & 0x20000) {
        arg0->f3B8 = arg0->f3B8 + 0x200;
        arg0->f3BC = lbl_805D9608 * sin_table_lookup(arg0->f3B8);
        return;
    }
    arg0->f3BC = (arg0->f3BC - 0.2f > 0.0f) ? arg0->f3BC - 0.2f : 0.0f;
}

void update_claw_angle__14TObjEneBalClawFPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x800)) {
        temp_r4 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFF9);
        if (*(s32 *)((s8 *)arg0 + 0x388) & 0x10000) {
            temp_f1 = *(f32 *)((s8 *)arg0 + 0x3B4);
            temp_f0 = *(f32 *)((s8 *)arg0 + 0x3B0);
            if (temp_f1 < temp_f0) {
                *(f32 *)((s8 *)arg0 + 0x3B4) = (f32) (temp_f1 + lbl_805D9600);
                return;
            }
            *(f32 *)((s8 *)arg0 + 0x3B4) = temp_f0;
            temp_r3 = *(void **)((s8 *)arg0 + 0xA4);
            *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 4);
            return;
        }
        temp_f1_2 = *(f32 *)((s8 *)arg0 + 0x3B4);
        temp_f0_2 = *(f32 *)((s8 *)arg0 + 0x3AC);
        if (temp_f1_2 > temp_f0_2) {
            *(f32 *)((s8 *)arg0 + 0x3B4) = (f32) (temp_f1_2 - lbl_805D9600);
            return;
        }
        *(f32 *)((s8 *)arg0 + 0x3B4) = temp_f0_2;
        temp_r3_2 = *(void **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)temp_r3_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x18) | 2);
    }
}

extern u32 lbl_805D4F20;

void TObjEneBalClaw__vt60(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 1);
}

void release_global_805D4F20__14TObjEneBalClawFv(void) {
    if ((u32) lbl_805D4F20 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4F20, 1);
        lbl_805D4F20 = 0U;
    }
}

extern s32 __vt__14TObjEneBalClaw[];

void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjEneBalClaw;
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x390, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneBalClaw__ct(u8 *arg0) {
    TObjEnemyCustom__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw *)&__vt__14TObjEneBalClaw).value;
    init_vtable_and_field18__10TObjPlayerFPv(arg0 + 0x390);
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2968;
    add_flags_2e4__10TObjPlayerFPvUi(arg0, 8);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000);
    *(s32 *)((s8 *)arg0 + 0x3B8) = 0;
    *(f32 *)((s8 *)arg0 + 0x3BC) = (f32) lbl_805D960C;
    clear_attack_flag__18TObjEneBalClawClawFPv((void*)(arg0));
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x20000);
    return arg0;
}

void TObjEneBalClaw__vt59(void) {  }
void TObjEneBalClaw__vt57(void) {  }
int TObjEneBalClaw__vt28(void) { return 0; }
void clear_attack_flag__18TObjEneBalClawClawFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfffeffff; }
void TObjEneBalClawClaw__sub_8008DC14(void) {  }

}
