#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjMapWarpAncient__ct(u8 *arg0);
void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1);
void free_globals__18TObjMapWarpAncientFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);
M2C_UNK TObjMapWarp__ct();
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
s32 register_warp__19TObjGoalWarpAncientFPv(int);
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);

extern M2C_UNK __vt__18TObjMapWarpAncient[];

void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjMapWarpAncient;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TObjMapWarpAncient[];
extern s32 lbl_805D31E8;
extern const f32 lbl_805DBAC4;

u8 *TObjMapWarpAncient__ct(u8 *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjMapWarpAncient;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31E8;
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBAC4;
    M2C_FIELD(arg0, s32 *, 0x100) = TObjGoalWarpAncient__sub_8017D2D4(2);
    M2C_FIELD(arg0, s32 *, 0x104) = TObjGoalWarpAncient__sub_8017D2D4(0);
    M2C_FIELD(arg0, s32 *, 0x108) = TObjGoalWarpAncient__sub_8017D2D4(4);
    M2C_FIELD(arg0, s32 *, 0x10C) = register_warp_object__19TObjGoalWarpAncientFPv(2);
    M2C_FIELD(arg0, s32 *, 0x110) = register_warp_object__19TObjGoalWarpAncientFPv(0);
    M2C_FIELD(arg0, s32 *, 0x114) = register_warp_object__19TObjGoalWarpAncientFPv(4);
    M2C_FIELD(arg0, s32 *, 0x118) = register_warp__19TObjGoalWarpAncientFPv(1);
    return arg0;
}

extern u32 lbl_805D5AF0;
extern s32 lbl_805D5AF4;

void free_globals__18TObjMapWarpAncientFv(void) {
    free_if_valid__10TObjPlayerFi(lbl_805D5AF4);
    lbl_805D5AF4 = 0;
    if ((u32) lbl_805D5AF0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AF0, 1);
        lbl_805D5AF0 = 0U;
    }
}

}
