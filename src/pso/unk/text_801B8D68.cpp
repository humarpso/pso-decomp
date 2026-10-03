#include "types.h"
struct Cmd_801B8DE8 { u8 hdr[2]; s16 id; s32 a; s32 b; };

struct L_801B8D68 { u16 f0; u16 f2; s32 f4; s32 f8; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual M2C_UNK m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual s32 m34();
    virtual void m35();
    virtual void m36(s32);
};

struct Item_801B8E68 { u32 w[7]; };

extern "C" {
s32 is_volopt_phase_final__10TObjPlayerFv(void);
s32 obj_isState2_324(void *obj);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
s16 obj_getField1c(void *obj);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B8DE8(void *obj, s32 a, s32 b);
s32 is_volopt_phase_final__10TObjPlayerFv(void);
void dispatch_action__10TObjPlayerFPvii(void *, s32, s32);
s32 get_player_by_client_id(s32);
void bswap_body_dwords3__10TObjPlayerFPv(void *);
void copy_pair_fields3__10TObjPlayerFPvPv(void *, void *);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
s32 validate_6x29_delete_inventory_item(void *);
void handle_6x29_delete_inventory_item(void *arg0);
M2C_UNK add_meseta__10TObjPlayerFl(void *, void *);
s16 obj_getField1c(void *obj);
s32 copy_item_data_and_process__5TItemFPv(void *);
M2C_UNK set_mode__5TItemFPvc(void *, int);
M2C_UNK set_owner_client__5TItemFPvUs(void *, s16);
M2C_UNK copy_to_item_data__5TItemFPvPv(void *, void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
M2C_UNK TObjPlayer__sub_801B0124(void *, void *);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, int);
s32 can_pickup_item_by_id__10TObjPlayerFii(void *, void *);
s32 TObjPlayer__sub_801C1AC8(void *);
M2C_UNK TObjPlayer__sub_801C1B0C(void *, int);
s32 set_mode_and_refresh_object__10TObjPlayerFPvi(void *, void *);
VObj_18 *get_owner_if_alive__10TObjPlayerFPv(s32);
M2C_UNK set_field_1c__10TObjPlayerFPvi(void *, void *);
void *__ct__9TItemListFv(void *, s32);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
void *pickup_item__10TObjPlayerFv(u8 *arg0, u8 *arg1);
}

extern "C" {

void handle_6x29_delete_inventory_item(void *arg0) {
    L_801B8D68 sp8;
    init_cmd_6x29__10TObjPlayerFPv(&sp8);
    copy_pair_fields3__10TObjPlayerFPvPv(&sp8, arg0);
    bswap_body_dwords3__10TObjPlayerFPv(&sp8);
    if (validate_6x29_delete_inventory_item(&sp8) != 0) {
        s32 p = get_player_by_client_id(sp8.f2);
        if (p != 0 && is_volopt_phase_final__10TObjPlayerFv() == 0) {
            dispatch_action__10TObjPlayerFPvii((void *)p, sp8.f4, sp8.f8);
        }
    }
}

void TObjPlayer__sub_801B8DE8(void *obj, s32 a, s32 b) {
    Cmd_801B8DE8 cmd;
    if (is_volopt_phase_final__10TObjPlayerFv() != 0) {
        return;
    }
    if (obj != 0 && obj_isState2_324(obj) != 0) {
        return;
    }
    init_cmd_6x29__10TObjPlayerFPv(&cmd);
    cmd.id = obj_getField1c(obj);
    cmd.a = a;
    cmd.b = b;
    bswap_body_dwords3_and_send__10TObjPlayerFPv(&cmd);
    TObjPlayer__sub_801B9634(obj);
}
void *pickup_item__10TObjPlayerFv(u8 *arg0, u8 *arg1) {
    u32 sp8[5];
    s32 id;
    void *o;
    void *list;
    s32 n;
    VObj_18 *owner;
    u8 *inv;
    s16 idx;
    if (arg1 == NULL) {
        return 0;
    }
    if (get_field_ec__12TOSwitchItemFPv(arg1) == 4) {
        add_meseta__10TObjPlayerFl(arg0, (void *)copy_item_data_and_process__5TItemFPv(arg1));
        TObjPlayer__sub_801B0124(arg0, (void *)copy_item_data_and_process__5TItemFPv(arg1));
        ((VObj_18 *)arg1)->m27();
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x52802);
        return 0;
    }
    if (can_pickup_item_by_id__10TObjPlayerFii(arg0, arg1) == 0) {
        return 0;
    }
    ((void (*)(void *))TObjPlayer__sub_801C1B0C)(arg1);
    list = 0;
    switch (get_field_ec__12TOSwitchItemFPv(arg1)) {
    case 0:
    case 1:
    case 2:
        o = __nw__7TObjectFUl(0x20);
        if (o != NULL) {
            o = __ct__9TItemListFv(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
        }
        list = o;
        break;
    case 3:
        if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
            copy_to_item_data__5TItemFPvPv(arg1, &sp8);
            id = set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(arg0, u8 **, 0xD00), &sp8);
            if (id == 0) {
                o = __nw__7TObjectFUl(0x20);
                if (o != NULL) {
                    o = __ct__9TItemListFv(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
                }
                list = o;
                break;
            }
            n = ((VObj_18 *)arg1)->m34();
            if (n == 0) {
                n = 1;
            }
            owner = get_owner_if_alive__10TObjPlayerFPv(id);
            if (owner != NULL) {
                owner->m36(n);
            }
            ((VObj_18 *)arg1)->m27();
            return 0;
        }
        o = __nw__7TObjectFUl(0x20);
        if (o != NULL) {
            o = __ct__9TItemListFv(o, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), s32 *, 0x1C4));
        }
        list = o;
        break;
    }
    if (list != NULL) {
        set_field_1c__10TObjPlayerFPvi(list, arg1);
        inv = M2C_FIELD(arg0, u8 **, 0xD00);
        TObjPlayer__sub_801C1B0C(arg1, M2C_FIELD(inv, s16 *, 0x1C)++);
        set_mode__5TItemFPvc(arg1, 1);
        set_parent__7TObjectFP7TObject(arg1, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD00), void **, 0x1C8));
        set_owner_client__5TItemFPvUs(arg1, obj_getField1c(arg0));
        return list;
    }
    return 0;
}

}
