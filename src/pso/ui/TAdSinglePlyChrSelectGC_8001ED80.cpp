#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001ED88(void* p);
s32 get_global_state__23TAdSinglePlyChrSelectGCFv(void);
int fn_8001ED90(void* p);

extern s32 system_save_payload;

s32 get_global_state__23TAdSinglePlyChrSelectGCFv(void) {
    return system_save_payload;
}

s32 TLobby__sub_8001ED88(void* p) { return *(s32*)((char*)p + 0x428); }

}
