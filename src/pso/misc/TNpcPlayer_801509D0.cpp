#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_state__10TNpcPlayerFPv(void *arg0);

M2C_UNK TNpcPlayer__sub_80150050(void *);
M2C_UNK reset_fields_8c__10TNpcPlayerFPv(s32);

void init_state__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r0;

    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74));
    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {
    case 0:
        TNpcPlayer__sub_80150050(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    case 1:
        return;
    }
}

}
