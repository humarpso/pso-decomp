#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestListVM__sub_80218790(void *arg0);
void TQuestListVM__sub_802187EC(void *arg0);
M2C_UNK fn_8001EE48(M2C_UNK *);
s32 fn_8001EEF4();
M2C_UNK fn_8007EB08();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_8044BF20[];

void TQuestListVM__sub_80218790(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23BC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (fn_8001EEF4() == 0) {
        fn_8001EE48(lbl_8044BF20);
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK lbl_8044BF20[];

void TQuestListVM__sub_802187EC(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23B8);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (fn_8001EEF4() == 0) {
        fn_8001EE48(lbl_8044BF20);
    }
    fn_8007EB08();
    queue_destruction__7TObjectFv(arg0);
}

}
