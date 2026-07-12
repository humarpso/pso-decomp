#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);
extern s32 lbl_805D622C;
extern s32 lbl_805D6230;

struct Base_8021D524 { char pad[0x18]; };
struct VObj_8021D524 : Base_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

void TShopEquipmentSequence__sub_8021D524(void *arg0) {
    if (arg0 != NULL) {
        ((VObj_8021D524 *)arg0)->m4(0x1B, 1);
        TQuestListVM__sub_80073DC4(arg0, 8);
        lbl_805D622C = 0x1A;
        lbl_805D6230 = 2;
    }
}

}
