#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

struct Stack_80308B38 {
    s32 sp8;
    u8 pad_C[0x2];
    s16 spE;
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80308840_lbl_8047559C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80308840_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Vec_803086A8 { f32 x; f32 y; f32 z; };

struct Msg_803086A8 { void *p; s32 one; Vec_803086A8 pos; s32 id; };

struct Slot_803086A8 { u32 a; s32 b; };

struct Obj_803086A8 { u8 pad[0x3A4]; s32 count; Slot_803086A8 slots[4]; };

struct VBase_18_405891 { char pad[0x18]; };
struct VObj_18_405891 : VBase_18_405891 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual s32 m18(s32, f32);
    virtual void m19();
    virtual M2C_UNK m20(s32, f32);
    virtual M2C_UNK m21(s32, s32 *, s32, M2C_UNK, M2C_UNK);
};

struct Pair_8030895C { s32 id; f32 v; };
struct Stack_8030895C {
    s32 sp8;
    f32 spC;
    s32 sp10;
    f32 sp14;
};

extern "C" {
s32 obj_isState2_324(int);
s32 TBoss7Crawfish__sub_80308AA8(u8 *arg0);
int rand(void);
extern M2C_UNK lbl_804755A8;
extern s32 lbl_805D5550;
extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF0E0;
extern const f32 lbl_805DF0E4;
extern const f32 lbl_805DF0E8;

}

extern "C" {
extern const f32 TBoss7Crawfish__data_805DF0D8;
s32 TBoss7Crawfish__sub_80308AA8(u8 *arg0);
s32 spawn_particle_effect(void *, int);
extern const f32 TBoss7Crawfish__data_805DF0D8;
void TBoss7Crawfish__sub_80308910(u8 *arg0);
s32 TLobby__sub_8002AFD4(void *, void *, int);
void TBoss7Crawfish__sub_80308B38(s32 arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
f32 horizontal_distance_squared(void *, void *);
extern RecoveredGlobal_80308840_lbl_8047559C lbl_8047559C;
extern RecoveredGlobal_80308840_main_task main_task;
extern const f32 lbl_805DF0CC;
extern const f32 lbl_805DF0D0;
extern const f32 lbl_805DF0D4;
s32 TBoss7Crawfish__sub_80308840(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_is_hit_receivable(u32);
M2C_UNK apply_status_effect__10TObjPlayerFi(void *);
M2C_UNK reset_global_table();
s32 get_instance__16TObjOnlineEndingFv();
Slot_803086A8 *get_attack_entry__16TObjOnlineEndingFi(s32);
M2C_UNK TBoss7Crawfish__sub_8030895C(void *, void *);
void TBoss7Crawfish__sub_803086A8(Obj_803086A8 *o);
}

extern "C" {

s32 TBoss7Crawfish__sub_80308688(void *arg0);
void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1);
int TBoss7Crawfish__sub_80308BEC(void* p);
void check_band_and_destroy__14TBoss7CrawfishFi(s32 arg0);
void free_child__14TBoss7CrawfishFPv(void* p);
void render__14TBoss7CrawfishFv(void* p);
void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
int TBoss7Crawfish__sub_80308F8C(void*, int);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK play_persistent_sound(s32, s32, s32, M2C_UNK, M2C_UNK);
int rotate_matrix_yxz(void*, void*, void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
int clear_global_state__10TObjPlayerFv(void);
int draw__16TObjEneRe7BeruraFPv(void*);
f32 get_health__14TBoss7CrawfishFPv(s32);
int notify_fish_if_valid__10TObjPlayerFUi(void*);
s32 objInBand__FP7GameObjf(s32, f32);
int queue_destruction__7TObjectFv(void*);
int set_global_flag__10TObjPlayerFv(void);

extern f32 lbl_805DF0C8;

s32 TBoss7Crawfish__sub_80308688(void *arg0) {
    return (u32) __cntlzw((u32) (lbl_805DF0C8 < M2C_FIELD(arg0, f32 *, 0x38))) >> 5;
}

void TBoss7Crawfish__sub_803086A8(Obj_803086A8 *o) {
    Msg_803086A8 msg;
    s32 i;
    Slot_803086A8 *e;
    s32 j;
    reset_global_table();
    msg.p = (u8 *)o + 0x374;
    msg.one = 1;
    VecCopy__FP3VecPC3Vec(&msg.pos, (u8 *)o + 0x38);
    msg.id = M2C_FIELD(o, s32 *, 0x60);
    apply_status_effect__10TObjPlayerFi(&msg);
    for (i = 0; i != get_instance__16TObjOnlineEndingFv(); i++) {
        if ((u32)o->count < 4) {
            e = get_attack_entry__16TObjOnlineEndingFi(i);
            for (j = 0; j != o->count; j++) {
                if (o->slots[j].a == e->a && o->slots[j].b == e->b) {
                    break;
                }
            }
            if (j == o->count && obj_is_hit_receivable(e->a) != 0) {
                o->slots[o->count].a = e->a;
                o->slots[o->count].b = e->b;
                o->count++;
                TBoss7Crawfish__sub_8030895C(o, e);
            }
        }
    }
    reset_global_table();
}

void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1) {
    play_persistent_sound(arg1, arg0, arg0 + 0x38, 0, 0);
}

void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1) {
    play_sound_effect(arg1, arg0 + 0x38, 0, 0);
}

typedef char RecoveredGlobal_80308840_lbl_8047559C_size[sizeof(RecoveredGlobal_80308840_lbl_8047559C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80308840_main_task_size[sizeof(RecoveredGlobal_80308840_main_task) == 0x34 ? 1 : -1];
s32 TBoss7Crawfish__sub_80308840(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(&main_task.value) & 0x20) {
        if (lbl_805DF0CC < horizontal_distance_squared(&lbl_8047559C.value, arg0 + 0x38)) {
            return 0;
        }
        goto block_5;
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DF0D0, lbl_805DF0D4) == 0) {
        return 0;
    }
block_5:
    return 1;
}

void free_child__14TBoss7CrawfishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x3cc) != 0) { queue_destruction__7TObjectFv((void*)(*(void**)((char*)p + 0x3cc))); *(int*)((char*)p + 0x3cc) = 0; } }

void TBoss7Crawfish__sub_80308910(u8 *arg0) {
    Vec position;
    position.x = M2C_FIELD(arg0, f32 *, 0x38);
    position.y = TBoss7Crawfish__data_805DF0D8;
    position.z = M2C_FIELD(arg0, f32 *, 0x40);
    spawn_particle_effect((void *) (&position.x), (int) (0x20D));
    spawn_particle_effect((void *) (&position.x), (int) (0x20E));
}

#define arg0 ((s32)arg0_)
#define arg1 ((u8 *)arg1_)
M2C_UNK TBoss7Crawfish__sub_8030895C(void *arg0_, void *arg1_) {
    Pair_8030895C p;

    u8 *temp_r31;

    if (arg1 != NULL) {
        temp_r31 = (u8 *)(M2C_FIELD(arg1, u8 **, 0));
        if (TBoss7Crawfish__sub_80308AA8((u8 *)arg0_) != 0) {
            if (((VObj_18_405891 *)(temp_r31))->m18(arg0, TBoss7Crawfish__data_805DF0DC) != 0) {
                ((VObj_18_405891 *)(temp_r31))->m20(arg0, TBoss7Crawfish__data_805DF0DC);
            }
        } else if (obj_isState2_324((int) (temp_r31)) == 0) {
            if ((s32) lbl_805D5550 == 3) {
                if ((lbl_805DF0E0 * (f32) rand()) <= lbl_805DF0E4) {
                    p.id = 0x10;
                } else {
                    p.id = 0x10;
                }
            } else {
                p.id = 0x12;
            }
            p.v = lbl_805DF0E8;
            {
                Pair_8030895C q = p;
                ((VObj_18_405891 *)(temp_r31))->m21(arg0, (s32 *)&q, M2C_FIELD(M2C_FIELD(arg1, u8 **, 0), s32 *, 0xA4) + (M2C_FIELD(arg1, s32 *, 4) * 0x2C), -1, -1);
            }
        }
    }
}
#undef arg0
#undef arg1

s32 TBoss7Crawfish__sub_80308AA8(u8 *arg0) {
    return TBoss7Crawfish__data_805DF0D8 == M2C_FIELD(arg0, f32 *, 0x354);
}

void render__14TBoss7CrawfishFv(void* p) { if (TBoss7Crawfish__sub_80308840((u8 *)(p)) != 0) { notify_fish_if_valid__10TObjPlayerFUi(*(void**)((char*)p + 0x24)); set_global_flag__10TObjPlayerFv(); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_yxz((void*)0, *(void**)((char*)p + 0x5c), *(void**)((char*)p + 0x60), *(void**)((char*)p + 0x64)); TBoss7Tentacle__sub_803D9BA0((char*)p + 0x68); draw__16TObjEneRe7BeruraFPv(p); pop_matrix(); clear_global_state__10TObjPlayerFv(); } }

extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 lbl_805DF0EC;

void TBoss7Crawfish__sub_80308B38(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80308B38, sp8) == 0x0) ? 1 : -1];
    typedef char spE_offset[(offsetof(Stack_80308B38, spE) == 0x6) ? 1 : -1];
    Stack_80308B38 stack;
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (1)) != 0) {
        stack.sp8 = 0;
        stack.spE = 0;
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&stack.sp8), (int) (0));
    }
}

void check_band_and_destroy__14TBoss7CrawfishFi(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0EC) != 0) {
        TBoss7Crawfish__sub_80308910((u8 *)(arg0));
    }
    if (TBoss7Crawfish__data_805DF0D8 == get_health__14TBoss7CrawfishFPv(arg0)) {
        queue_destruction__7TObjectFv((void*)(arg0));
    }
}

int TBoss7Crawfish__sub_80308BEC(void* p) { return TBoss7Crawfish__sub_80308F8C(p, 5); }

}
