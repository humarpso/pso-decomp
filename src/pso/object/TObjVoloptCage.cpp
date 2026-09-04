#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80049568(void);
void obj_clear_flag30_20000(void *arg0);
void obj_set_flag_20000(void *arg0);
void update_state__14TObjVoloptCageFPv(void *arg0);
M2C_UNK TObjVoloptCage__sub_80048CDC();
M2C_UNK TObjVoloptCage__sub_80048E80();
M2C_UNK TObjVoloptCage__sub_80049000();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK update_capture__14TObjVoloptCageFPv();

void update_state__14TObjVoloptCageFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 7:
        TObjVoloptCage__sub_80049000();
        return;
    case 1:
        update_capture__14TObjVoloptCageFPv();
        return;
    case 4:
        TObjVoloptCage__sub_80048E80();
        return;
    case 5:
        TObjVoloptCage__sub_80048CDC();
        return;
    }
}

    extern int lbl_805D4C3C;
void TLobby__sub_80049568(void) { lbl_805D4C3C = 1; }

void obj_set_flag_20000(void *arg0) {
    obj_setFlags30(arg0, 0x20000);
}

void obj_clear_flag30_20000(void *arg0) {
    obj_clearFlags30(arg0, 0x20000);
}

}
