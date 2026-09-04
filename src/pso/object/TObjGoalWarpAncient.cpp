#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjGoalWarpAncient__sub_8017D2D4(void* a0);
s32 get_instance__19TObjGoalWarpAncientFv(void);
void register_warp__19TObjGoalWarpAncientFPv(void* a0);
void register_warp_object__19TObjGoalWarpAncientFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5AF0;
void register_warp_object__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001EDB0((void*)(lbl_805D5AF0), a0); }

extern s32 lbl_805D5AF4;

s32 get_instance__19TObjGoalWarpAncientFv(void) {
    return lbl_805D5AF4;
}

    extern int lbl_805D5AF0;
void register_warp__19TObjGoalWarpAncientFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D5AF0), a0); }

    extern int lbl_805D5AF0;
void TObjGoalWarpAncient__sub_8017D2D4(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5AF0), a0); }

}
