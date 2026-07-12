#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32 arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv();

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

void free_data_60F0__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D60F0 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D60F0);
        TLobby__data_805D60F0 = 0U;
        TLobby__data_805D60F4 = 0;
    }
}

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

s32 init_handle__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D60F0 = temp_r3;
    if (temp_r3 != 0U) {
        TLobby__data_805D60F4 = arg0;
        return 1;
    }
    TLobby__data_805D60F0 = 0U;
    return 0;
}

}
