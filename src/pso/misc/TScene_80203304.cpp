#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tbl_8020335C { s32 v[8]; };

extern "C" {
M2C_UNK *resolve_indirect_object_record(M2C_UNK arg0, u8 *arg1);
M2C_UNK *TScene__sub_80203324(M2C_UNK arg0, u8 *arg1);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern struct Tbl_8020335C lbl_8044A874;
s32 TContainerAncient01__sub_8020335C(void);
}

extern "C" {

    extern int TScene__data_805D5FF4;

M2C_UNK *resolve_indirect_object_record(M2C_UNK arg0, u8 *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x1C) & 0x200) {
        return (long *) (*M2C_FIELD(arg1, M2C_UNK **, 0));
    }
    return M2C_FIELD(arg1, M2C_UNK **, 0);
}

M2C_UNK *TScene__sub_80203324(M2C_UNK arg0, u8 *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0xC) & 0x200) {
        return (long *) (*M2C_FIELD(arg1, M2C_UNK **, 0));
    }
    return M2C_FIELD(arg1, M2C_UNK **, 0);
}

void set_instance__6TSceneFi(int a0) { TScene__data_805D5FF4 = a0; }

    extern int TScene__data_805D5FF0;
void set_active_scene__6TSceneFi(int a0) { TScene__data_805D5FF0 = a0; }

    extern int TScene__data_805D5FEC;
void set_id__6TSceneFi(int a0) { TScene__data_805D5FEC = a0; }
s32 TContainerAncient01__sub_8020335C(void) {
    struct Tbl_8020335C t = lbl_8044A874;
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 i;
    for (i = 0; t.v[i] != -1;) {
        if (state == t.v[i++]) {
            return 1;
        }
    }
    return 0;
}

}
