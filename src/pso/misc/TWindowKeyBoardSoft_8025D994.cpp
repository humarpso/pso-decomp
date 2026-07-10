#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next__19TWindowKeyBoardSoftFPv(void *arg0);
void update__19TWindowKeyBoardSoftFPv(void *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025D338(void *, void *);
s32 TWindowKeyBoardSoft__sub_8025D378(void *, void *);
M2C_UNK fn_803E6868(void *, void *);
M2C_UNK fn_803E689C(void *, void *);

void select_next__19TWindowKeyBoardSoftFPv(void *arg0) {
    struct { u8 _pad[0x100]; } sp108;
    struct { u8 _pad[0x100]; } sp8;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            fn_803E6868(&sp8, &sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) > (s32) M2C_FIELD(arg0, s32 *, 0xAC)) {
                M2C_FIELD(arg0, s32 *, 0xA8) = 1;
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, &sp8) == 0);
        TWindowKeyBoardSoft__sub_8025D338(arg0, &sp8);
    }
}

void update__19TWindowKeyBoardSoftFPv(void *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x10)) {
        do {
            fn_803E689C(sp8, sp108);
            M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg0, s32 *, 0xAC);
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, sp8) == 0);
        TWindowKeyBoardSoft__sub_8025D338(arg0, sp8);
    }
}

}
