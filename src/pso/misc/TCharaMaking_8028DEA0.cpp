#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0);
M2C_UNK TLobby__sub_803DA16C(void *);

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8B8) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 1)) {
            TLobby__sub_803DA16C(arg0 + 0xA1C);
        }
        M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA24) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 2)) {
            TLobby__sub_803DA16C(arg0 + 0xB88);
        }
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB90) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 4)) {
            TLobby__sub_803DA16C(arg0 + 0xCF4);
        }
        M2C_FIELD(arg0, s32 *, 0xB90) = 0;
    }
}

}
