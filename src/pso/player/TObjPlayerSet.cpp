#include "types.h"
#include "pso/player/TObjPlayerSet.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80195720___vt__13TObjPlayerSet {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
u8 * __ct__12TQuestThreadFv(void *, s32, s32);
s32 destroy_board__17TQuestThreadBoardFv();
void *__nw__7TObjectFUl(int);
s32 set_parent__7TObjectFP7TObject(int, int);
extern s32 tl_00;
u8 *TObjQuestCol2__vt14(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
u8 * construct_world_actor_base(void *);
extern s32 __vt__13TObjPlayerSet[];
extern s32 TObjPlayer__player_set_class_name;
extern const f32 lbl_805DBEF0;
u8 *TObjPlayerSet__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjQuestCol2__create(void *arg0);
void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1);
void *TObjQuestCol2__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void TObjPlayerSet::render() {  }
void TObjPlayerSet::run_task() {  }

extern void *tl_06;

void *TObjPlayerSet::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjPlayerSet__ct((u8 *)(o), (s32)(tl_06), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__13TObjPlayerSet[];

void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjPlayerSet;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *quest_collision_task_root;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80195720___vt__13TObjPlayerSet_size[sizeof(RecoveredGlobal_80195720___vt__13TObjPlayerSet) == 0x38 ? 1 : -1];
u8 *TObjPlayerSet__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80195720___vt__13TObjPlayerSet *)&__vt__13TObjPlayerSet).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjPlayer__player_set_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    if (*(f32 *)((s8 *)arg0 + 0x68) < lbl_805DBEF0) {
        *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DBEF0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x84) < 0) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0;
    }
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}
#pragma pop

void *TObjQuestCol2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestCol2__ct(o, quest_collision_task_root, arg0);
    }
    return o;
}
u8 *TObjQuestCol2__vt14(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    u8 *var_r31;
    destroy_board__17TQuestThreadBoardFv();
    var_r31 = (u8 *)(NULL);
    if ((u32) *(u32 *)((s8 *)arg0 + 0xBC) != 0U) {
        temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x194))));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__12TQuestThreadFv(temp_r3, (s32) *(u32 *)((s8 *)arg0 + 0xBC), *(s32 *)((s8 *)arg0 + 0xB0)));
        }
        var_r31 = (u8 *)(var_r0);
        if (var_r0 != NULL) {
            set_parent__7TObjectFP7TObject((int) (var_r0), (int) (tl_00));
        }
    }
    return var_r31;
}

}
