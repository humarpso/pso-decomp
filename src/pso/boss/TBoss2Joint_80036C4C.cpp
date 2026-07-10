#include "types.h"

extern "C" {

void update_position_history__11TBoss2JointFi(s32 arg0);
void TBoss2Joint__vt59(void);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void update_position_history__11TBoss2JointFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2Joint__vt59(void) {  }

}
