#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss2DeRolLe__sub_80034FD8(void);

void backup_pos__13TBoss2DeRolLeFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2DeRolLe__sub_80034FD8(void) {  }

}
