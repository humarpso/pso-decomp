#include "types.h"
#include "pso/boss/TUnk_804E4BF0.h"

extern "C" {
s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1);
void clear_boss8_dragon_leader_part(void);
    extern void* boss8_dragon_leader_part;
void clear_boss8_dragon_leader_part(void);
void TBoss8Dragon__sub_802F3C74(void);
void TBoss8Dragon__sub_802F3C74(void);
void *__nw__7TObjectFUl(int);
void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1);
void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void __ct__7TObjectFP7TObject(void *);
extern s32 lbl_804E4BF0[];
extern void *boss8_dragon_leader_part;
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
extern s32 lbl_804E4BF0[];
extern void *boss8_dragon_leader_part;
void run_task__13TUnk_804E4BF0Fv(void);
void run_task__13TUnk_804E4BF0Fv(void);
void render__13TUnk_804E4BF0Fv(void);
void render__13TUnk_804E4BF0Fv(void);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4);
}

extern "C" {

}
extern "C" {

#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern "C" {
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(s32 arg0, u32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    if ((arg3 < 0) || (arg3 > 5)) {
        return 0;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg4), (void *) (arg0 + 0x1C));
    *(s16 *)((s8 *)arg4 + 0) = TBoss8Dragon__sub_802F3C94((void *)((void *) (arg0)), (s32)((void *) (arg3)));
    *(s16 *)((s8 *)arg4 + 2) = 0;
    *(s16 *)((s8 *)arg4 + 6) = ((TBoss8Dragon *)arg0)->get_part_count_plus((s32)((void *) (arg3)));
    if (arg1 != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg4 + 0x10), (void *) (arg1));
    }
    *(s32 *)((s8 *)arg4 + 0x20) = arg2;
    return 1;
}
}

void TUnk_804E4BF0::render() {  }

void TUnk_804E4BF0::run_task() {  }

void *TUnk_804E4BF0::dt(s16 arg1) {
    if (this != NULL) {
        (*(s32 * *)((u8 *)this + 0x18)) = lbl_804E4BF0;
        if (boss8_dragon_leader_part == this) {
            boss8_dragon_leader_part = NULL;
        }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

void *TUnk_804E4BF0::ct(void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(this);
    (*(s32 * *)((u8 *)this + 0x18)) = lbl_804E4BF0;
    if (boss8_dragon_leader_part == NULL) {
        boss8_dragon_leader_part = this;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *)((char *)this + 28), arg2);
    return this;
}

void * TBoss8Dragon__sub_802F3C24(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x5C);
    if (o != NULL) {
        o = ((TUnk_804E4BF0 *)o)->ct((void *)(arg0), (void *)(arg1));
    }
    return o;
}

void TBoss8Dragon__sub_802F3C74(void) {  }

void clear_boss8_dragon_leader_part(void) { boss8_dragon_leader_part = 0; }

u16 TBoss8Dragon::get_part_count_plus(s32 arg1) {
    return (u16) (this->m_22 + arg1);
}

s32 TBoss8Dragon__sub_802F3C94(void *arg0, s32 arg1) {
    return *(s16 *)((s8 *)arg0 + 0x1C) + arg1;
}

}
