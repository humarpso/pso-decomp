#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *TMainCursor__sub_8013DFD4(void *);
s32 TObjPlayer__sub_801C6DAC(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_cursor__11TMainCursorFPvs(void *, int);
M2C_UNK set_target__11TMainCursorFPvi(int, int);

extern M2C_UNK lbl_804A7278[];

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A7278;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) &&((u32) M2C_FIELD(TMainCursor__sub_8013DFD4(arg0 + 0x1C), u32 *, 0x424) != 0U)) {
            set_target__11TMainCursorFPvi((int) (M2C_FIELD(TMainCursor__sub_8013DFD4(arg0 + 0x1C), s32 *, 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
