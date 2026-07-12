#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
void TLobby__sub_803361FC(void);

int TLobby__sub_8033612C(void) { return 0; }
void set_flag_and_clear_download__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
}

}
