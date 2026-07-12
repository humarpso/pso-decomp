#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_8012C950(void *arg0, s16 arg1);
void TObjPlayer__sub_8012C9A8(u32 arg0);
s32 TObjPlayer__sub_8012C9D8(u8 *arg0);
M2C_UNK TAdRicoRing__sub_8001BEE8(s32, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A5340[];

void *TObjPlayer__sub_8012C950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5340;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_8012C9A8(u32 arg0) {
    if (arg0 != 0U) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x1F8, 2);
    }
}

s32 TObjPlayer__sub_8012C9D8(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1F8, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}
