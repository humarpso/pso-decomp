#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TObjBoss8DemoRoomFv(void);
M2C_UNK fn_80141F1C();
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);

extern void *lbl_805D7010;

void render__17TObjBoss8DemoRoomFv(void) {
    fn_803DA798(M2C_FIELD(M2C_FIELD(lbl_805D7010, void **, 0x42C), s32 *, 0xC));
    fn_803D9B2C();
    fn_803E46BC(M2C_FIELD(M2C_FIELD(lbl_805D7010, void **, 0x42C), s32 *, 8));
    fn_80141F1C();
    fn_803D9B78();
}

}
