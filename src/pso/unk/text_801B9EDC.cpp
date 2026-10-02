#include "types.h"
struct Cmd_801B9EDC { u16 hdr; u16 id; void *item; };

struct L_801BA0F0 { u16 f0; s16 f2; s32 f4; s32 f8; };

typedef struct Msg_801BA060 {
    u8 pad0[2];
    u16 slot;
    s32 c;
    s32 d;
} Msg_801BA060;

typedef struct Player_801BA060 {
    u8 pad0[0xD00];
    void *inv;
} Player_801BA060;

struct VBase_801B9F40 { char pad[0x18]; };

struct VObj_801B9F40 : VBase_801B9F40 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16();
    virtual void m17(s32);
    virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22();
    virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26();
    virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30();
    virtual s8 m31();
};

struct Player_801B9F40 { u8 pad[0xD04]; u8 slots[4]; };

extern "C" {
s32 obj_isState2_324(void *obj);
void init_cmd_6x26__10TObjPlayerFPv(void *cmd);
u16 obj_getField1c(void *obj);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *self, void *item);
s32 obj_isState2_324(void *obj);
u16 obj_getField1c(void *obj);
s32 check_switch_available__6TLobbyFPvi(void);
void init_command__10TObjPlayerFPv(void *);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2);
Player_801BA060 *get_player_by_client_id(u16);
void bswap_body_dwords5__10TObjPlayerFPv(void *);
void copy_pair_fields4__10TObjPlayerFPvPv(void *, void *);
void init_command__10TObjPlayerFPv(void *);
u32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv();
s32 validate_6x25_equip_item(void *);
void handle_6x25_equip_item(void *arg0);
s32 TLobby__sub_800822E8(void *, int);
void set_animation__10TObjPlayerFPvs(void *, s16);
s32 is_state_ec1_ed3__10TObjPlayerFPv(void *);
s16 unequip_by_field326__10TObjPlayerFPv(void *);
void unequip_item__10TObjPlayerFiPv(void *, void *);
void TObjPlayer__sub_801BF8EC(void *, s32, void *);
void *get_slot_value__10TObjPlayerFPvi(void *, s32);
void equip_item_to_slot__10TObjPlayerFPvPvi(void *self, void *item, s32 slot);
}

extern "C" {

void send_6x26_unequip_item__10TObjPlayerFPvPv(void *self, void *item) {
    if (self == 0 || obj_isState2_324(self) == 0) {
        Cmd_801B9EDC cmd;
        init_cmd_6x26__10TObjPlayerFPv(&cmd);
        cmd.id = obj_getField1c(self);
        cmd.item = item;
        bswap_body_dwords4_and_send__10TObjPlayerFPv(&cmd);
        TObjPlayer__sub_801B9634(self);
    }
}

void equip_item_to_slot__10TObjPlayerFPvPvi(void *self, void *item, s32 slot) {
    Player_801B9F40 *p = (Player_801B9F40 *)self;
    void *cur;
    if (is_state_ec1_ed3__10TObjPlayerFPv(item) != 0) {
        if (slot < 9 || slot > 12) {
            slot = 9;
        }
        ((VObj_801B9F40 *)item)->m17((s8)slot);
    } else {
        slot = ((VObj_801B9F40 *)item)->m31();
    }
    cur = get_slot_value__10TObjPlayerFPvi(p->slots, slot);
    if (cur == NULL) {
        TObjPlayer__sub_801BF8EC(p->slots, slot, item);
        ((VObj_801B9F40 *)item)->m18();
    } else if (cur != item) {
        unequip_item__10TObjPlayerFiPv(self, cur);
        TObjPlayer__sub_801BF8EC(p->slots, slot, item);
        ((VObj_801B9F40 *)item)->m18();
    }
    if (TLobby__sub_800822E8(self, 2) != 0) {
        set_animation__10TObjPlayerFPvs(self, unequip_by_field326__10TObjPlayerFPv(self));
    }
}

void handle_6x25_equip_item(void *arg0) {
    Msg_801BA060 m;
    Player_801BA060 *p;
    void *o;
    init_command__10TObjPlayerFPv(&m);
    copy_pair_fields4__10TObjPlayerFPvPv(&m, arg0);
    bswap_body_dwords5__10TObjPlayerFPv(&m);
    if (validate_6x25_equip_item(&m) != 0) {
        p = get_player_by_client_id(m.slot);
        if ((p != NULL) && (start_inventory_update__10TObjPlayerFPvi(p->inv, m.c) != 0U) && ((o = get_owner_if_alive__10TObjPlayerFPv()) != NULL)) {
            equip_item_to_slot__10TObjPlayerFPvPvi((void *)(p), (void *)(o), (s32)(m.d));
        }
    }
}

void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2) {
    L_801BA0F0 sp8;
    if (check_switch_available__6TLobbyFPvi() != 0 && (arg0 == 0 || obj_isState2_324(arg0) == 0)) {
        init_command__10TObjPlayerFPv(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        bswap_body_dwords5_and_send__10TObjPlayerFPv(&sp8);
    }
}

}
