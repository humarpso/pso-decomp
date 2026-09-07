#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80123904_lbl_804A1B40 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80123950(u8 *arg0);
u8 * TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_80123904_lbl_804A1B40 lbl_804A1B40;
u8 *TObjPlayer__sub_80123904(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

typedef char RecoveredGlobal_80123904_lbl_804A1B40_size[sizeof(RecoveredGlobal_80123904_lbl_804A1B40) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_80123904(u8 *arg0, u8 *arg1, s32 _w2) {
    TObjPlayer__sub_80120D50(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A1B40.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x800201);
    return arg0;
}

u8 *TObjPlayer__sub_80123950(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80123904((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
