#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss1Dragon__sub_8002966C(void);
void TBoss1Dragon__sub_80029670(void);
void TBoss1Dragon__sub_80029674(void);
void TBoss1Dragon__sub_80029678(void);

void TBoss1Dragon__sub_8002962C(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x430);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss1Dragon__sub_8002966C(void) {  }
void TBoss1Dragon__sub_80029670(void) {  }
void TBoss1Dragon__sub_80029674(void) {  }
void TBoss1Dragon__sub_80029678(void) {  }

}
