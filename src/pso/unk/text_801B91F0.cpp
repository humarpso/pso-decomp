#include "types.h"
struct VBase_801B91F0 { char pad[0x18]; };

struct VObj_801B91F0 : VBase_801B91F0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33();
    virtual s32 m34();
};

struct Inv_801B91F0 {
    u8 pad0[0x1C];
    s16 count;
};

struct Player_801B91F0 {
    u8 pad0[0xD00];
    Inv_801B91F0 *inv;
};

typedef struct Vec_801B92EC { f32 x, y, z; } Vec_801B92EC;

struct Obj_801B92EC {
    u8 pad0[0x38];
    Vec_801B92EC pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
};

extern "C" {
s32 lookup_item_def__9TItemDataFPv(u8 *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(Inv_801B91F0 *, u8 *);
s32 get_item_use_result__9TItemDataFPv(u8 *);
VObj_801B91F0 *get_owner_if_alive__10TObjPlayerFPv();
s32 copy_and_register_item_data__11TItemObjectFPv(VObj_801B91F0 *);
s32 get_item_type_or_default__9TItemListFPv(u8 *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(Player_801B91F0 *self, u8 *item);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
f32 TObjPlayer__sub_803D89C0(Vec_801B92EC *, Vec_801B92EC *);
extern const Vec_801B92EC lbl_80446F2C;
extern const f32 TObjPlayer__data_805DC278;
extern const f32 TObjPlayer__data_805DC2BC;
bool is_target_in_facing_cone__10TObjPlayerFPvPv(Obj_801B92EC *self, Vec_801B92EC *target);
}

extern "C" {

s32 can_inventory_accept_item__10TObjPlayerFPvPv(Player_801B91F0 *self, u8 *item) {
    s32 max;
    s32 n;
    VObj_801B91F0 *owner;
    if (lookup_item_def__9TItemDataFPv(item) != 0) {
        if (item[0] == 4) {
            return 1;
        }
        if (set_mode_and_refresh_object__10TObjPlayerFPvi(self->inv, item) == 0) {
            if (self->inv->count >= 30) {
                return 0;
            }
            return get_item_use_result__9TItemDataFPv(item);
        }
        owner = get_owner_if_alive__10TObjPlayerFPv();
        if (owner == NULL) {
            return 0;
        }
        n = copy_and_register_item_data__11TItemObjectFPv(owner);
        n -= owner->m34();
        max = get_item_type_or_default__9TItemListFPv(item);
        return (n < max) ? 0 : n;
    }
    return self->inv->count < 30;
}
#pragma push
#pragma fp_contract on
bool is_target_in_facing_cone__10TObjPlayerFPvPv(Obj_801B92EC *self, Vec_801B92EC *target) {
    Vec_801B92EC to;
    Vec_801B92EC fwd = lbl_80446F2C;
    f32 x;
    f32 z;
    f32 dot;
    fwd.x = TBoss8Dragon__sub_803D64C0(self->angle);
    fwd.y = TObjPlayer__data_805DC278;
    fwd.z = TBoss8Dragon__sub_803D64DC(self->angle);
    x = TObjPlayer__data_805DC2BC * TBoss8Dragon__sub_803D64C0(self->angle + 0x8000) + self->pos.x;
    z = TObjPlayer__data_805DC2BC * TBoss8Dragon__sub_803D64DC(self->angle + 0x8000) + self->pos.z;
    to.x = target->x - x;
    to.y = TObjPlayer__data_805DC278;
    to.z = target->z - z;
    update_scale__15TObjBoss2TunnelFPv(&to);
    dot = TObjPlayer__sub_803D89C0(&fwd, &to);
    return !(dot < TBoss8Dragon__sub_803D64DC(0x1555));
}
#pragma pop

}
