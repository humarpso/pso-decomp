#include "types.h"
#include "pso/item/TItem_80101CEC.h"
#include "pso/item/TItemData.h"
#include "pso/item/TItem.h"

struct Base_80101CFC { char pad[0x18]; };
struct VObj_80101CFC : Base_80101CFC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(void *);
};

extern "C" {

s32 init__9TItemDataFv(void *);

void TItem__sub_80101CEC(void) {  }
void TItem__sub_80101CF0(void) {  }
void TItem__sub_80101CF4(void) {  }
void TItem__sub_80101CF8(void) {  }

struct TItemDataX_80101cfc;

s32 TItem::copy_to_item_data(void *arg1) {
    struct TItemDataX_80101cfc *item = (struct TItemDataX_80101cfc *)arg1;
    struct VObj_80101CFC *o = (struct VObj_80101CFC *)this;
    if (item != NULL) {
        init__9TItemDataFv(item);
        *(u8 *)((s8 *)item + 0) = (u8) *(u8 *)((s8 *)o + 0xEC);
        *(u8 *)((s8 *)item + 1) = (u8) *(u8 *)((s8 *)o + 0xED);
        *(u8 *)((s8 *)item + 2) = (u8) *(u8 *)((s8 *)o + 0xEE);
        *(s32 *)((s8 *)item + 0xC) = (s32) *(s32 *)((s8 *)o + 0xD8);
        o->m16(item);
        if (*(s32 *)((s8 *)o + 0xDC) & 0x100) {
            ((TItemData *)item)->set_packed_value(*(u16 *)((s8 *)o + 0xE8));
        }
        if (*(s32 *)((s8 *)o + 0xDC) & 0x400) {
            ((TItemData *)item)->set_wrapped();
            ((TItemData *)item)->set_present_color((s8) *(u8 *)((s8 *)o + 0xEA));
        }
        return 1;
    }
    return 0;
}

}
