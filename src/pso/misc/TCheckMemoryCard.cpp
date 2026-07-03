#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8033C4E0 { char pad[0x18]; };
struct VObj_8033C4E0 : Base_8033C4E0 { virtual void m0(int); };

extern "C" {

void *__dt__16TCheckMemoryCardFv(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK __vt__16TCheckMemoryCard[];

void *__dt__16TCheckMemoryCardFv(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TCheckMemoryCard;
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((VObj_8033C4E0 *)temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0x30) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
