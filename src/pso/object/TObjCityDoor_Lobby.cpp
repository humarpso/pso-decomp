#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__dt__18TObjCityDoor_LobbyFPvs(u8 *arg0, s16 arg1);
u32 TObjMapCsn__sub_8007A728();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK fn_80140E38(u32, void *);
M2C_UNK destroy_particle__13TParticleCtrlFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804B5A00[];

u8 *__dt__18TObjCityDoor_LobbyFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A00;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x250) != 0) && (TObjMapCsn__sub_8007A728() != 0U)) {
            fn_80140E38(TObjMapCsn__sub_8007A728(), arg0 + 0x90);
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
