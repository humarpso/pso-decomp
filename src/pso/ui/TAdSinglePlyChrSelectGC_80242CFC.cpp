#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_slots__23TAdSinglePlyChrSelectGCFv(void);
void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80243070(M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8037DD44(s32, M2C_UNK);

    extern const float lbl_805DCA04;
void reset_state__23TAdSinglePlyChrSelectGCFPv(void* a0) { *(unsigned char*)((char*)a0 + 0x0) = 0; *(unsigned char*)((char*)a0 + 0x1) = 0; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DCA04; *(float*)((char*)a0 + 0x8) = lbl_805DCA04; *(float*)((char*)a0 + 0xc) = lbl_805DCA04; *(short*)((char*)a0 + 0x10) = 0; *(short*)((char*)a0 + 0x12) = 0; *(int*)((char*)a0 + 0x14) = 0; }

void init_slots__23TAdSinglePlyChrSelectGCFv(void) {
    s32 var_r31;

    TAdSinglePlyChrSelectGC__sub_80243070(2);
    var_r31 = 0;
    do {
        TAdSinglePlyChrSelectGC__sub_8037DD44(var_r31, 0);
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
