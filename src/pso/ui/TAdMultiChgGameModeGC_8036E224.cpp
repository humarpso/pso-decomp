#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8036E224(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E26C(void* p);
int TWindow__close(void*);

void TAdMultiChgGameModeGC__sub_8036E224(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close((void*)(temp_r3));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E26C((void*)(arg0));
}

void TAdMultiChgGameModeGC__sub_8036E26C(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x34))); *(int*)((char*)p + 0x34) = 0; } }

}
