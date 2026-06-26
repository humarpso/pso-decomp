#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80100D68(void *arg0);
void fn_80101CFC(void *, void *);
void fn_8010C738(void *);
void fn_80100DA4(void *arg0);
void fn_80104394(void *);
int fn_80100D10(void* p);
void fn_80100D94(void* p, u8 v);
void fn_80100D9C(void* p, u8 v);

int fn_80100CC8(void) { return 0; }
int fn_80100D10(void* p) { return *(u16*)((char*)p + 0x4) & 0x400; }
int fn_80100D1C(void) { return 0; }
void fn_80100D68(void *arg0) {
    M2C_UNK sp8[4];

    fn_80101CFC(arg0, &sp8);
    fn_8010C738(&sp8);
}
void fn_80100D94(void* p, u8 v) { *(u8*)((char*)p + 0xee) = v; }
void fn_80100D9C(void* p, u8 v) { *(u8*)((char*)p + 0xed) = v; }
void fn_80100DA4(void *arg0) {
    M2C_UNK sp8[4];

    fn_80101CFC(arg0, &sp8);
    fn_80104394(&sp8);
}

}
