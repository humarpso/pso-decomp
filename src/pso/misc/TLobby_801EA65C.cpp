#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_or_create_handle__6TLobbyFv(void);
u32 TQuestVmDownLoadServer__sub_800FA8A4();
u32 TQuestVmDownLoadServer__sub_800FA8C4();

extern u32 TLobby__data_805D5EC4;

void get_or_create_handle__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = TQuestVmDownLoadServer__sub_800FA8A4();
    TLobby__data_805D5EC4 = temp_r3;
    if (temp_r3 == 0U) {
        TLobby__data_805D5EC4 = TQuestVmDownLoadServer__sub_800FA8C4();
    }
}

}
