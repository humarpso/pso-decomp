#include "types.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss6Demo15_TYPE2_WAIT.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/object/TObjFish.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TNowLoading.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 play_persistent_sound(int, void *, void *, int, int);
void *TObjFish__sub_8034029C(void *, void *);
int TObjPlayer__sub_8033FDB0(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void fn_80340040(void *);

void TBoss6Demo15_TYPE2_WAIT::render() { TObjPlayer__sub_8033FDB0(this); }

extern s32 lbl_804EFB78[];

void TBoss6Demo15_TYPE2_WAIT::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    if (((TObjEneDD *)arg0)->query_teammate_state() == 0) {
        ((TBoss6Demo15_TYPE2_WAIT *)arg0)->advance_offset();
        VecCopy((Vec *)(arg0 + 0x4C), (const Vec *)(arg0 + 0x40));
        ((TBoss6Demo15_TYPE2_WAIT *)arg0)->sub_8033FE30();
        temp_r3 = (u8 *)(this->m_20);
        if (temp_r3 != NULL) {
            ((TNowLoading *)temp_r3)->copy_pos((u8 *)&this->m_40);
        }
        ((TBoss6Demo15_TYPE2_WAIT *)arg0)->check_any_player_near();
        play_persistent_sound((int) (0x4003A126), (void *) (arg0), (void *) (arg0 + 0x40), (int) (0), (int) (0));
        if (((TObjFish *)(*(u8 * *)&this->unk_1C))->get_phase() != 4) {
            queue_destruction__7TObjectFv(arg0);
        }
    }
}

void *TBoss6Demo15_TYPE2_WAIT::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 * *)&(*(u32 *)((u8 *)this + 0x18)) = lbl_804EFB78;
        if (*(void * *)&this->m_20 != NULL) { TBoss4Type2::request_destroy((u32)(*(void * *)&this->m_20)); *(s32 *)&this->m_20 = 0; }
        fn_80340040(this);
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

void *TObjFish::alloc(void *arg0) {
    void *o = __nw__7TObjectFUl(0x88);
    if (o != NULL) {
        o = TObjFish__sub_8034029C(o, arg0);
    }
    return o;
}

}
