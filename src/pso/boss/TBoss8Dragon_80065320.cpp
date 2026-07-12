#include "types.h"

extern "C" {

void TBoss8Dragon__sub_80065360(void);
void TBoss8Dragon__sub_80065364(void);
void TBoss8Dragon__sub_80065368(void);
void TBoss8Dragon__sub_8006536C(void);
void shift_position_history__12TBoss8DragonFi(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void shift_position_history__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x3C0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss8Dragon__sub_80065360(void) {  }
void TBoss8Dragon__sub_80065364(void) {  }
void TBoss8Dragon__sub_80065368(void) {  }
void TBoss8Dragon__sub_8006536C(void) {  }

}
