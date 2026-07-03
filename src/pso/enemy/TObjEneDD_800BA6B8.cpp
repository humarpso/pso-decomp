#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEneDD__sub_800BA6D0(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
int TObjEneDD__sub_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void TObjEneDD__sub_800BA728(void* p, void* a1);
int TObjEneDD__sub_800BA6B8(void* p);
int TObjEneDD__sub_800BA6C4(void* p);

int TObjEneDD__sub_800BA6B8(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int TObjEneDD__sub_800BA6C4(void* p) { return (*(u32*)((char*)p + 0x890) >> 6) & 0x1; }
u8 TObjEneDD__sub_800BA6D0(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((arg0 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02040800)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
void TObjEneDD__sub_800BA728(void* p, void* a1) { TObjEneDD__sub_800BA754(a1, (char*)p + 0x2fc, p); }

}
