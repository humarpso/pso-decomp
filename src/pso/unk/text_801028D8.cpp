#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_801028D8 { char pad[0x18]; };

struct TItem_801028D8 : VBase_18_801028D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32);
};

extern "C" {
void obj_setFlags30(void *, u32);
void fn_8002B630(void *, void *);
void assign_item_id__6TLobbyFPv(void *);
void apply_item_flags__10TObjPlayerFPvi(void *, void *);
void TObjPlayer__sub_8010043C(void *, s32);
void set_mode__5TItemFPvc(void *, s32);
void TItem__sub_80101BE4(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
void set_item_count__6TLobbyFPvs(void *, s32);
void TItem__sub_801031C0(void *);
s8 TItemData__sub_8010B8B0(void *);
s32 is_rare_item__9TItemDataFPv(void *);
s32 clamp_s32__10TObjPlayerFiii(s32, s32, s32);
void initialize_linked_object_reference(void *, void *);
void construct_collider_proxy__10TObjPlayerFPv(void *, void *);
extern u8 lbl_8043DF68[];
extern u8 lbl_8043DF94[];
extern void *__vt__5TItem[];
extern s32 lbl_805D2B60;
extern u32 lbl_805D5438;
u8 *TItem__ct(u8 *self, void *parent, u8 *item);
}

extern "C" {

u8 *TItem__ct(u8 *self, void *parent, u8 *item) {
    construct_collider_proxy__10TObjPlayerFPv(self, parent);
    M2C_FIELD(self, void **, 0x18) = __vt__5TItem;
    M2C_FIELD(self, s32 *, 0) = lbl_805D2B60;
    obj_setFlags30(self, 0x80000000);
    fn_8002B630(self + 0xAC, lbl_8043DF68);
    TItem__sub_801031C0(self + 0x98);
    initialize_linked_object_reference(self, self + 0xAC);
    M2C_FIELD(self, u16 *, 0xE4) = 0xFFFF;
    M2C_FIELD(self, s32 *, 0xD8) = M2C_FIELD(item, s32 *, 0xC);
    M2C_FIELD(self, s32 *, 0xDC) = 0;
    M2C_FIELD(self, s16 *, 0xE6) = 0;
    M2C_FIELD(self, s32 *, 0xE0) = 0;
    M2C_FIELD(self, u8 *, 0xEC) = item[0];
    M2C_FIELD(self, u8 *, 0xED) = item[1];
    M2C_FIELD(self, u8 *, 0xEE) = item[2];
    M2C_FIELD(self, s32 *, 0xF0) = 0;
    M2C_FIELD(self, s32 *, 0xF4) = 0;
    M2C_FIELD(self, s16 *, 0xE8) = 0;
    apply_item_flags__10TObjPlayerFPvi(self, item);
    M2C_FIELD(self, s8 *, 0xEA) = TItemData__sub_8010B8B0(item);
    if (is_rare_item__9TItemDataFPv(item) != 0) {
        TObjPlayer__sub_8010043C(self, 4);
    } else {
        TObjPlayer__sub_8010043C(self, lbl_8043DF94[clamp_s32__10TObjPlayerFiii(get_field_ec__12TOSwitchItemFPv(self), 0, 4)]);
    }
    if (lbl_805D5438 != 0) {
        ((TItem_801028D8 *)self)->m5(lbl_805D5438);
        set_item_count__6TLobbyFPvs(self, 0xFFFF);
        set_mode__5TItemFPvc(self, 0);
    } else {
        set_mode__5TItemFPvc(self, 3);
    }
    assign_item_id__6TLobbyFPv(self);
    TItem__sub_80101BE4(self);
    return self;
}

}
