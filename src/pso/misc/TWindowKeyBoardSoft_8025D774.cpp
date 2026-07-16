#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
s32 TWindowKeyBoardSoft__sub_803E676C(void *, void *);

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];
    s32 temp_r3;
    u8 *temp_r5;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        temp_r3 = TWindowKeyBoardSoft__sub_803E676C((void *) (sp8), (void *) (sp108));
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = temp_r3;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2) = (u8) M2C_FIELD(arg0, s32 *, 0xA8);
            temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA0));
            M2C_FIELD(arg0, void **, 0xA0) = (void *) (temp_r5 - ((s8) M2C_FIELD(temp_r5, u8 *, 0) + 3));
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xA0), u8 *, 2);
            TWindowKeyBoardSoft__sub_8025CF50((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xA8)), (int) (temp_r5));
        }
    }
}

}
