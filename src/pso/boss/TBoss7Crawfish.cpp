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

extern "C" {
extern const f32 TBoss7Crawfish__data_805DF0D8;
s32 TBoss7Crawfish__sub_80308AA8(u8 *arg0);
s32 TObjEneDellBiter__sub_80087350(void *, int);
extern const f32 TBoss7Crawfish__data_805DF0D8;
void TBoss7Crawfish__sub_80308910(u8 *arg0);
s32 TLobby__sub_8002AFD4(void *, void *, int);
void TBoss7Crawfish__sub_80308B38(s32 arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
extern RecoveredGlobal_80308840_lbl_8047559C lbl_8047559C;
extern RecoveredGlobal_80308840_main_task main_task;
extern const f32 lbl_805DF0CC;
extern const f32 lbl_805DF0D0;
extern const f32 lbl_805DF0D4;
s32 TBoss7Crawfish__sub_80308840(u8 *arg0);
}

extern "C" {

s32 TBoss7Crawfish__sub_80308688(void *arg0);
void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1);
int TBoss7Crawfish__sub_80308BEC(void* p);
void check_band_and_destroy__14TBoss7CrawfishFi(s32 arg0);
void free_child__14TBoss7CrawfishFPv(void* p);
void render__14TBoss7CrawfishFv(void* p);
void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
int TBoss7Crawfish__sub_80308F8C(void*, int);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TOHangerMachine01__sub_803D9C00(void*);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
int TObjChip__sub_803D8AE4(void*, void*, void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
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

void TBoss7Crawfish__sub_803087D4(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x38, 0, 0);
}

void spawn_effect__14TBoss7CrawfishFii(s32 arg0, s32 arg1) {
    TBoss3Volopt__sub_8022675C(arg1, arg0 + 0x38, 0, 0);
}

typedef char RecoveredGlobal_80308840_lbl_8047559C_size[sizeof(RecoveredGlobal_80308840_lbl_8047559C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80308840_main_task_size[sizeof(RecoveredGlobal_80308840_main_task) == 0x34 ? 1 : -1];
s32 TBoss7Crawfish__sub_80308840(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(&main_task.value) & 0x20) {
        if (lbl_805DF0CC < TObjPlayer__sub_80141CF8(&lbl_8047559C.value, arg0 + 0x38)) {
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
    TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0x20D));
    TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0x20E));
}

s32 TBoss7Crawfish__sub_80308AA8(u8 *arg0) {
    return TBoss7Crawfish__data_805DF0D8 == M2C_FIELD(arg0, f32 *, 0x354);
}

void render__14TBoss7CrawfishFv(void* p) { if (TBoss7Crawfish__sub_80308840((u8 *)(p)) != 0) { notify_fish_if_valid__10TObjPlayerFUi(*(void**)((char*)p + 0x24)); set_global_flag__10TObjPlayerFv(); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjChip__sub_803D8AE4((void*)0, *(void**)((char*)p + 0x5c), *(void**)((char*)p + 0x60), *(void**)((char*)p + 0x64)); TBoss7Tentacle__sub_803D9BA0((char*)p + 0x68); draw__16TObjEneRe7BeruraFPv(p); TObjPlayer__sub_803D9B78(); clear_global_state__10TObjPlayerFv(); } }

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
