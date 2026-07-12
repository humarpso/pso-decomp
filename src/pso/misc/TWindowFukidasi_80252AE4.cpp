#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK release_slot__11TWindowCtrlFPv(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK fn_802443F0(void *, M2C_UNK);
M2C_UNK TWindowFukidasi__sub_80252C48(void *);
s32 TWindowFukidasi__sub_80252C78(M2C_UNK *);

extern M2C_UNK lbl_804CF0B8[];

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF0B8;
        if (TWindowFukidasi__sub_80252C78((M2C_UNK *)arg0) != 0) {
            TWindowFukidasi__sub_80252C48(arg0);
            release_slot__11TWindowCtrlFPv(arg0 + 0x73);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        fn_802443F0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
