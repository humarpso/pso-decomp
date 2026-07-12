#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8021D584 { char pad[0x18]; };
struct VObj_8021D584 : Base_8021D584 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

extern "C" {

M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);

void TShopEquipmentSequence__sub_8021D584(void *arg0) {
    struct VObj_8021D584 *o = (struct VObj_8021D584 *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        TQuestListVM__sub_80073DC4(arg0, 2);
    }
}

}
