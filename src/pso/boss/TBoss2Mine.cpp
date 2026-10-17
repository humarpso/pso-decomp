#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/boss/TBoss2Mine.h"

extern "C" {

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
void TBoss2Mine__sub_80038D84(void);
int TBoss2Mine__sub_80038D88(void* p);
void init__10TBoss2MineFPvi(u8 *arg0, s32 arg1);
s32 TObjEneDD__ct(void *, s32);
int TObjPlayer__sub_800F0928(void*);
s32 get_instance__13TBoss2DeRolLeFv(void);

extern void *__vt__10TBoss2Mine[];
extern s32 TBoss2Mine__name;

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_r3;

    TObjEneDD__ct(arg0, arg1);
    *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__10TBoss2Mine;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss2Mine__name;
    temp_r3 = get_instance__13TBoss2DeRolLeFv();
    if (temp_r3 != 0) {
        ((TObjEneDD *)arg0)->init_common_from((u8 *)temp_r3);
    }
    *(s16 *)&((TBoss2Mine *)arg0)->m_1c = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    init__10TBoss2MineFPvi((u8 *)arg0, arg4);
    return arg0;
}

void TBoss2Mine__sub_80038D84(void) {  }
int TBoss2Mine__sub_80038D88(void* p) { return TObjPlayer__sub_800F0928(p); }
void TBoss2Mine::apply_poison_status() {  }
void TBoss2Mine::apply_paralysis() {  }
void TBoss2Mine::apply_slow_status() {  }
void TBoss2Mine::apply_confusion_status() {  }
void TBoss2Mine::apply_movement_ailment(s32) {  }
void TBoss2Mine::apply_shock_status() {  }
void TBoss2Mine::clear_harmful_statuses() {  }
void TBoss2Mine::apply_attack_stat_status(void *) {  }
void TBoss2Mine::apply_defense_stat_status(void *) {  }

}
