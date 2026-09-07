#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80267704_lbl_804D0604 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
extern RecoveredGlobal_80267704_lbl_804D0604 lbl_804D0604;
void TAdVIConfigGC__sub_80267704(s32 arg0);
}

extern "C" {

void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *);
M2C_UNK init_display__20TWindowSubStatusDispFPvii(s32, s32, s32);

void add_status_disp_entry__6TLobbyFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        init_display__20TWindowSubStatusDispFPvii(get_array_entry__20TWindowSubStatusDispFPvi(arg0), arg1, arg2);
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}
typedef char RecoveredGlobal_80267704_lbl_804D0604_size[sizeof(RecoveredGlobal_80267704_lbl_804D0604) == 0x14 ? 1 : -1];
void TAdVIConfigGC__sub_80267704(s32 arg0) {
    M2C_FIELD(&lbl_804D0604.value, s32 *, 0x10) = arg0;
}

}
