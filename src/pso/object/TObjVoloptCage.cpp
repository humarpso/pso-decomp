#include "types.h"
#include "pso/misc/TQuestColCtrl_8003F3BC.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjVoloptCage.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8004938C___vt__14TObjVoloptCage { s32 value; u8 remaining[0x14C]; };
typedef char RecoveredGlobal_8004938C___vt__14TObjVoloptCage_size[sizeof(RecoveredGlobal_8004938C___vt__14TObjVoloptCage) == 0x150 ? 1 : -1];

typedef struct Obj_80049430 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    s16 f1c;
    u8 pad1e[0x28 - 0x1e];
    s16 f28;
    s16 f2a;
    s16 f2c;
    u8 pad2e[0x30 - 0x2e];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    f32 pos[1];
    f32 f3c;
    u8 pad40[0x80 - 0x40];
    s32 f80;
    u8 pad84[0x326 - 0x84];
    s16 f326;
    u8 pad328[0x338 - 0x328];
    u16 f338;
    u8 pad33a[0x374 - 0x33a];
    s32 f374;
    u8 pad378[0x390 - 0x378];
    s32 f390;
} Obj_80049430;

extern "C" {
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
s32 TObjVoloptCage__sub_800C76F0(void *);
s32 submit_cursor_candidate(void *, int);
s32 is_locally_controlled__10TObjPlayerFPv();
void obj_clear_flag30_20000(void *arg0);
void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
void *get_player_by_client_id(s32 i);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8004938C___vt__14TObjVoloptCage __vt__14TObjVoloptCage;
u8 *__dt__14TObjVoloptCageFv(u8 *arg0, s16 arg1);
void TObjEnemyCustom__ct();
void init_collision_body_parts(void *, void *, int);
extern u8 volopt_cage_collision_body_desc[];
extern s32 lbl_805D2758;
extern u8 *lbl_805D4CE4;
extern s32 lbl_805D4D18;
extern s32 TObjVoloptCage__texture_list;
extern const f32 lbl_805D8884;
extern const f32 lbl_805D8888;
Obj_80049430 *TObjVoloptCage__ct(Obj_80049430 *arg0, Obj_80049430 *arg1, u16 arg2, s16 arg3, s16 arg4);
void TLobby__sub_80049568(void);
void obj_set_flag_20000(void *arg0);
s32 update_breakup__14TObjVoloptCageFv();
s32 update_collision_state__14TObjVoloptCageFv();
s32 sub_80049000__14TObjVoloptCageFv();
s32 obj_setFlags30(void *, s32);
s32 update_capture__14TObjVoloptCageFv();

void TObjVoloptCage::update_state() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
    case 7:
        sub_80049000__14TObjVoloptCageFv();
        return;
    case 1:
        update_capture__14TObjVoloptCageFv();
        return;
    case 4:
        update_collision_state__14TObjVoloptCageFv();
        return;
    case 5:
        update_breakup__14TObjVoloptCageFv();
        return;
    }
}

    extern int boss3_volopt_cage_flag;

void TObjVoloptCage::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() == 1) {
        TObjVoloptCage__sub_800C76F0((void *) (arg0));
        return;
    }
    if ((s16) this->mode != 7) {
        if (this->has_flag_0x800() != 0) {
            this->vfunc_63();
        } else if (this->test_flag30_512() != 0) {
            this->vfunc_62();
        }
    }
    if ((s16) this->mode != (s32) *(s32 *)&this->next_action) {
        if ((s32) *(s32 *)&this->state != -1) {
            *(s32 *)&this->state = -1;
            update_state();
        }
        this->mode = (s16) *(s32 *)&this->next_action;
        *(s32 *)&this->state = 0;
    }
    update_state();
    ((TObjEnemy *)arg0)->update_prev_position();
    copy_position__20TBoss3VoloptHiraisinFi((s32)(arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
}

u8 *__dt__14TObjVoloptCageFv(u8 *arg0, s16 arg1) {
    s32 player;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TObjVoloptCage.value;
        player = (s32)get_player_by_client_id((((TObjVoloptCage *)arg0)->targetId));
        if ((player != 0) && (is_locally_controlled__10TObjPlayerFPv() != 0)) {
            if (((TLobby *)player)->check_player_flag1() != 0) {
                TObjPlayer::send_code_45_1((int) (player));
            }
            obj_clear_flag30_20000((void *)((int) (player)));
        }
        clear_volopt_cage_flag();
        free_collision_body_parts((void *) (arg0));
        __dt__15TObjEnemyCustomFv((arg0), (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

Obj_80049430 *TObjVoloptCage__ct(Obj_80049430 *arg0, Obj_80049430 *arg1, u16 arg2, s16 arg3, s16 arg4) {
    u8 *p;
    TObjEnemyCustom__ct();
    arg0->vt = &__vt__14TObjVoloptCage.value;
    arg0->f0 = lbl_805D2758;
    arg0->f338 = arg2;
    p = (u8 *)get_player_by_client_id(arg0->f338);
    if (p != NULL) {
        VecCopy((Vec *)arg0->pos, (const Vec *)(p + 0x38));
    } else {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    init_collision_body_parts(arg0, volopt_cage_collision_body_desc, 1);
    arg0->f1c = arg3;
    arg0->f2c = arg4;
    arg0->f80 = 0;
    arg0->f28 = arg1->f28;
    arg0->f2a = arg1->f2a;
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    ((TObjEneLappy *)arg0)->set_param(0x2E);
    arg0->f3c = lbl_805D8884;
    ((TUnk_804806E8 *)arg0)->recalc_combat_stats((void *)lbl_805D4D18, (void *)0, (void *)0, (f32)lbl_805D8888, (f32)lbl_805D8888);
    arg0->flags |= 0x40000 | 0x8000;
    arg0->flags &= ~0xA00;
    arg0->f374 = 7;
    arg0->f326 = 7;
    TObjVoloptCage__texture_list = *(s32 *)(*(u8 **)(lbl_805D4CE4 + 0x42C) + 0x12C);
    arg0->f390 = 0;
    return arg0;
}

void TLobby__sub_80049568(void) { boss3_volopt_cage_flag = 1; }

void obj_set_flag_20000(void *arg0) {
    obj_setFlags30(arg0, 0x20000);
}

void obj_clear_flag30_20000(void *arg0) {
    ((TUnk_804B9870 *)arg0)->obj_clearFlags30(0x20000);
}

}
