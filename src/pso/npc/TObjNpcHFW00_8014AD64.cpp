#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__12TObjNpcHFW00Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcHFW00__data_805D57A8;
extern u32 TObjNpcHFW00__data_805D57AC;

void free_resources__12TObjNpcHFW00Fv(void) {
    if ((u32) TObjNpcHFW00__data_805D57AC != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHFW00__data_805D57AC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHFW00__data_805D57AC);
        TObjNpcHFW00__data_805D57AC = 0U;
    }
    if ((u32) TObjNpcHFW00__data_805D57A8 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHFW00__data_805D57A8);
        TObjNpcHFW00__data_805D57A8 = 0U;
    }
}

}
