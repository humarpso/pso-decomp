#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOFenceAncient01__sub_80166A44(void *arg0, s16 arg1);
void *init_fields__16TOFenceAncient01FPv(void *arg0);
void TOKey__sub_80158534(void *, int);
void __dl__7TObjectFPv(void *);
void fn_8015858C(void *);

extern M2C_UNK lbl_804B1B80[];

void *TOFenceAncient01__sub_80166A44(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
        TOKey__sub_80158534(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804B1B80[];

void *init_fields__16TOFenceAncient01FPv(void *arg0) {
    fn_8015858C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B1B80;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xD0) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    return arg0;
}

}
