#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32);
};

struct List_802370D8 { u32 items[32]; s32 count; };

struct Obj_802370D8 : VObj_18_1a504b {
    void *source;
};

extern "C" {
u16 obj_getField1c(u32);
void queue_destruction__7TObjectFv(void *);
s32 is_valid_and_active__10TObjPlayerFUi(u32);
List_802370D8 *TObjPlayer__sub_80236780(void *, u32);
List_802370D8 *TObjPlayer__sub_802367AC(void *, u32);
void fn_802370D8(Obj_802370D8 *arg0);
}

extern "C" {

void fn_802370D8(Obj_802370D8 *arg0) {
    List_802370D8 *list;
    s32 i;
    if (M2C_FIELD(arg0, u32 *, 0xDC) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (obj_getField1c(M2C_FIELD(arg0, u32 *, 0x1C)) < 4) {
        list = TObjPlayer__sub_802367AC(arg0, M2C_FIELD(arg0, u32 *, 0x1C));
    } else {
        list = TObjPlayer__sub_80236780(arg0, M2C_FIELD(arg0, u32 *, 0x1C));
    }
    for (i = 0; i < list->count; i++) {
        if (is_valid_and_active__10TObjPlayerFUi(list->items[i]) != 0) {
            arg0->m5(list->items[i]);
        }
    }
}

}
