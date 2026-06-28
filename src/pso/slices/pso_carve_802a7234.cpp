#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_802A7318(void* p);
void TObjSeabedSuisoBrakable__vt17(void);

void TObjSeabedSuisoBrakable__vt17(void) {  }
int fn_802A7238(void) { return 0; }
int fn_802A7260(void* a0 = 0) { return 0; }
int fn_802A7278(void* a0 = 0) { return 0; }
s32 fn_802A7290(void *arg0) {
    if (fn_802A7260((void*)(M2C_FIELD(arg0, s32 *, 4))) != 0) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}
s32 fn_802A72D4(s32 *arg0) {
    if (fn_802A7278((void*)(*arg0)) != 0) {
        return *arg0;
    }
    return 0;
}
void fn_802A7318(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
