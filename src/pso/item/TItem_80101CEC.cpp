#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80101CFC { char pad[0x18]; };
struct VObj_80101CFC : Base_80101CFC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(void *);
};

extern "C" {

void TItem__sub_80101CEC(void);
void TItem__sub_80101CF0(void);
void TItem__sub_80101CF4(void);
void TItem__sub_80101CF8(void);
s32 copy_to_item_data__5TItemFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010B848(void *, s8);
M2C_UNK TItemData__sub_8010C498(void *);
M2C_UNK TItemData__sub_8010C638(void *, u16);
M2C_UNK init__9TItemDataFv(void *);

void TItem__sub_80101CEC(void) {  }
void TItem__sub_80101CF0(void) {  }
void TItem__sub_80101CF4(void) {  }
void TItem__sub_80101CF8(void) {  }

struct TItemDataX_80101cfc;

s32 copy_to_item_data__5TItemFPvPv(void *arg0, void *arg1) {
    struct TItemDataX_80101cfc *item = (struct TItemDataX_80101cfc *)arg1;
    struct VObj_80101CFC *o = (struct VObj_80101CFC *)arg0;
    if (item != NULL) {
        init__9TItemDataFv(item);
        M2C_FIELD(item, u8 *, 0) = (u8) M2C_FIELD(o, u8 *, 0xEC);
        M2C_FIELD(item, u8 *, 1) = (u8) M2C_FIELD(o, u8 *, 0xED);
        M2C_FIELD(item, u8 *, 2) = (u8) M2C_FIELD(o, u8 *, 0xEE);
        M2C_FIELD(item, s32 *, 0xC) = (s32) M2C_FIELD(o, s32 *, 0xD8);
        o->m16(item);
        if (M2C_FIELD(o, s32 *, 0xDC) & 0x100) {
            TItemData__sub_8010C638(item, M2C_FIELD(o, u16 *, 0xE8));
        }
        if (M2C_FIELD(o, s32 *, 0xDC) & 0x400) {
            TItemData__sub_8010C498(item);
            TItemData__sub_8010B848(item, (s8) M2C_FIELD(o, u8 *, 0xEA));
        }
        return 1;
    }
    return 0;
}

}
