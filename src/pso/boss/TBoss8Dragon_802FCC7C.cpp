#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
int fn_802FBBFC(void*, void*);
void set_state_22__12TBoss8DragonFPv(void* p);
void TBoss8Dragon__sub_802FCD00(void);
void TBoss8Dragon__sub_802FCD04(void);
void TBoss8Dragon__sub_802FCD08(void);
void TBoss8Dragon__sub_802FCD0C(void);

void store_position__12TBoss8DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x434);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
