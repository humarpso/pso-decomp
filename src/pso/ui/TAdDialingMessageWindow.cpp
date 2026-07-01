#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8036A248 { char pad[0x18]; };
struct VObj_8036A248 : Base_8036A248 { virtual void m0(int); };

extern "C" {

void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__23TAdDialingMessageWindow[];

void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdDialingMessageWindow;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24));
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x28);
        if ((temp_r3 != NULL) && (temp_r3 != NULL)) {
            ((VObj_8036A248 *)temp_r3)->m0(1);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
