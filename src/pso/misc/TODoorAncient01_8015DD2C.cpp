#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_ancient_door_base__15TODoorAncient01FPvs(void *arg0, s16 arg1);
void destroy_key_base__5TOKeyFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804B0BB8[];

void *destroy_ancient_door_base__15TODoorAncient01FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B0BB8;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
