#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802ABADC();
s32 fn_802AB2B8(void *, s32);
int fn_802AACEC(void*);
int fn_802AC86C(void*, void*);
void fn_802B0770(void* p);
void fn_802B08F0(void* p);
int fn_802ABCDC(void*);
int fn_802AC4D8(void);
int fn_802AC678(void*);
void fn_802B085C(void* p);
void fn_802B0808(void);

void fn_802B0770(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)4); } }
int fn_802B07B0(void) { return 0; }
void fn_802B0808(void) {  }
void fn_802B080C(s32 arg0) {
    if ((fn_802ABADC() == 0) || (fn_802AACEC((void*)(arg0)) != 0)) {
        fn_802AC86C((void*)(arg0), (void*)(3));
    }
}
void fn_802B085C(void* p) { fn_802AC678(p); fn_802AC4D8(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; fn_802ABCDC(p); }
void fn_802B08A4(void *arg0) {
    s32 temp_r0;

    fn_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x1F4) {
        fn_802AB2B8(arg0, 2);
    }
}
void fn_802B08F0(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)2); } }

}
