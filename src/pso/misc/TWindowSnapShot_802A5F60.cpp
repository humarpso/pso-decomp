#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802A5C7C(void *);
s32 fn_802A5CB8(void *);
s32 fn_802A5CC4(void *, s32);
s32 TWindowSnapShot__sub_802A5D68(void *);
s32 TWindowSnapShot__sub_802A5DC0(void *, s32);
s32 TWindowSnapShot__sub_802A5E28();
int TObjChip__vt8(void*, void*);
int TWindowSnapShot__sub_802A5D28(void*);
int TWindowSnapShot__sub_802A5E84(void*);
int TWindowSnapShot__sub_802A6044(void);
void TWindowSnapShot__sub_802A604C(void* p, s32 v);
s32 TWindowSnapShot__sub_802A6054(void* p);
void fn_802A6070(void* p, s32 v);
void fn_802A6078(void* p, s32 v);
int fn_802A6080(void);

void TWindowSnapShot__sub_802A5F60(void* p) { TWindowSnapShot__sub_802A5D28(p); TWindowSnapShot__sub_802A5E84(p); }
s32 TWindowSnapShot__sub_802A5F94(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        TWindowSnapShot__sub_802A604C((void*)(arg0), 3);
        return 0;
    }
    if (TWindowSnapShot__sub_802A5E28() == 0) {
        return 0;
    }
    if (TWindowSnapShot__sub_802A5D68(arg0) == 0) {
        return 0;
    }
    if (TWindowSnapShot__sub_802A5DC0(arg0, arg1) == 0) {
        return 0;
    }
    fn_802A5CB8(arg0);
    fn_802A5C7C(arg0);
    fn_802A5CC4(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    return 1;
}
int TWindowSnapShot__sub_802A6044(void) { return 32; }
void TWindowSnapShot__sub_802A604C(void* p, s32 v) { *(s32*)((char*)p + 0x18) = v; }
s32 TWindowSnapShot__sub_802A6054(void* p) { return *(s32*)((char*)p + 0xc); }

}
