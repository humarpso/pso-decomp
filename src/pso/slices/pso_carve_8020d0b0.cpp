#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

u8 *fn_8020B354();
s32 fn_8020B468(s32);
u8 *fn_8020D054(void *);
extern s32 lbl_805D6140;

void fn_8020D0B0(s32 arg0) {
    s16 temp_r3;
    s16 temp_r0;
    s32 count;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = fn_8020B354();
    count = fn_8020B468(arg0);
    for (i = 0; i < count; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = fn_8020D054(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *) temp_r3_2)->m4(lbl_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
