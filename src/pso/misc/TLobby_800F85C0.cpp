#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_800F85C0(void *arg0, s16 arg1);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void set_value__15TWindowCtrlMainFii(void *, int);

extern M2C_UNK lbl_804999A0[];

void *TLobby__sub_800F85C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999A0;
        set_value__15TWindowCtrlMainFii(M2C_FIELD(arg0, void **, 0x24), 0);
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
