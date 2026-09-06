#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_80236378(void *, int, void *, void *);
void TObjPlayer__sub_80236728(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_802364D8(void *, int, void *, void *);
void TObjPlayer__sub_80236754(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80236154(void *, int, void *, void *);
void TObjPlayer__sub_80236780(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80236290(void *, int, void *, void *);
void TObjPlayer__sub_802367AC(u8 *arg0, s32 arg1);
}

extern "C" {

void* get_pos_ptr__10TObjPlayerFPv(void* p);
s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0);
s32 TObjPlayer__sub_80019570();

s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (TObjPlayer__sub_80019570()) {
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_80236728(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236378((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xE8)), (void *) (arg0 + 0xBC), (void *) (arg1));
}

void TObjPlayer__sub_80236754(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_802364D8((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xE8)), (void *) (arg0 + 0xBC), (void *) (arg1));
}

void TObjPlayer__sub_80236780(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236154((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xdc)), (void *) (arg0 + 0xb0), (void *) (arg1));
}

void TObjPlayer__sub_802367AC(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_80236290((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xdc)), (void *) (arg0 + 0xb0), (void *) (arg1));
}

void* get_pos_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x78; }

}
