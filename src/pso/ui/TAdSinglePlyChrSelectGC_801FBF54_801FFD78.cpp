#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802012AC();
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern s32 *lbl_805D5F6C;
extern s32 lbl_805D5F9C;
s32 TAdSinglePlyChrSelectGC__sub_801FFE44(s32 arg0);
}

extern "C" {

void create_instance__23TAdSinglePlyChrSelectGCFv(void);
void game_state_load(void);
s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
int TAdSinglePlyChrSelectGC__sub_801FFDB8(s32);
int TAdSinglePlyChrSelectGC__sub_801FFDFC(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200998();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200B28();
s32 TAdSinglePlyChrSelectGC__sub_80201204(s32 *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802C3AC0(void *);
M2C_UNK TLobby__sub_801F494C(M2C_UNK);
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memcpy(void *, s32, M2C_UNK);

s32 init_windows__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_801FFDFC(arg0 + 4);
    TAdSinglePlyChrSelectGC__sub_801FFDB8(arg0 + 0xD2C4);
    return arg0;
}

extern s32 *lbl_805D5F6C;

#pragma push
#pragma fp_contract on
s32 TAdSinglePlyChrSelectGC__sub_801FFE44(s32 arg0) {
    u32 temp_r31;
    u32 temp_r3;
    memcpy((void *)((*(u32 * *)&lbl_805D5F6C)), (s32)(lbl_805D5F9C + 0x2048), (M2C_UNK)(0x11C));
    temp_r31 = *(*(u32 * *)&lbl_805D5F6C);
    *(*(u32 * *)&lbl_805D5F6C) = 0U;
    temp_r3 = ((u32)TAdSinglePlyChrSelectGC__sub_80201204((s32 *)((*(u32 * *)&lbl_805D5F6C)), (M2C_UNK)(0x11C)));
    if (temp_r3 != temp_r31) {
        if (arg0 == 0) {
            TAdSinglePlyChrSelectGC__sub_802012AC();
        }
        return 0;
    }
    return 1;
}
#pragma pop

void create_instance__23TAdSinglePlyChrSelectGCFv(void) {
    *lbl_805D5F6C = 0;
    *lbl_805D5F6C = TAdSinglePlyChrSelectGC__sub_80201204(lbl_805D5F6C, 0x11C);
    TAdSinglePlyChrSelectGC__sub_80200998();
}

extern s32 lbl_805D5544;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *const lbl_805D5F64;

void game_state_load(void) {
    memcpy(lbl_805D5F60, TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), 0x41C);
    memcpy(lbl_805D5F64, TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), 0x2370);
    TLobby__sub_801F494C(0);
    if (get_game_mode__23TAdSinglePlyChrSelectGCFv() == 0) {
        if (check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) {
            TAdSinglePlyChrSelectGC__sub_80200B28();
        } else {
            void *a = lbl_805D5F60;
            void *b;
            if (((u8) M2C_FIELD(a, u8 *, 0) == 0) && ((s32) M2C_FIELD(a, s32 *, 0x36C) == 0) && ((b = lbl_805D5F64, (s32) M2C_FIELD(b, s32 *, 0x248)) == 0) && ((s32) M2C_FIELD(b, s32 *, 0x24C) == 0)) {
                TAdSinglePlyChrSelectGC__sub_802C3AC0(a);
            }
        }
    }
    M2C_FIELD(lbl_805D5F60, s8 *, 3) = (s8) lbl_805D5544;
}

}
