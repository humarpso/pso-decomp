#include "types.h"
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
    virtual M2C_UNK m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

typedef struct Pkt_801B8344 {
    u8 cmd;
    u8 size;
    u16 client;
    u8 item[0x14];
    u8 pad18;
    s8 f19;
    u8 pad1A[0x1C - 0x1A];
} Pkt_801B8344;

extern "C" {
u8 *lookup_inventory_item__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK TItemData__sub_8010C740(void *, int);
M2C_UNK TItemData__sub_8010CCB0(void *);
s32 is_volopt_phase_final__10TObjPlayerFv();
u32 TObjPlayer__sub_801B8E68(int, int);
s32 get_player_by_client_id(int);
M2C_UNK TObjPlayer__sub_801BE9A8(int);
M2C_UNK set_flag_20000__10TObjPlayerFi(int);
M2C_UNK set_equip_slot_entry(void *, void *, int);
M2C_UNK bswap_cmd_item_data__10TObjPlayerFi(void *);
M2C_UNK copy__10TObjPlayerFPvPv(void *, void *);
M2C_UNK init_pkt_6x2B__10TObjPlayerFPv(void *);
u32 get_slot_value__10TObjPlayerFPvi(void *, void *);
s32 validate_6x2B_create_inventory_item(void *);
void handle_6x2B_create_inventory_item(s32 arg0);
}

extern "C" {

s32 query_state_if_present__10TObjPlayerFPv(void *arg0);
s32 run_state_query__10TObjPlayerFPvi(void *);

s32 query_state_if_present__10TObjPlayerFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0xD00);
    if (temp_r3 == NULL) {
        return 0;
    }
    return run_state_query__10TObjPlayerFPvi(temp_r3);
}
void handle_6x2B_create_inventory_item(s32 arg0) {
    Pkt_801B8344 pkt;
    s32 player;
    s32 kind;
    u8 *item;
    init_pkt_6x2B__10TObjPlayerFPv(&pkt);
    copy__10TObjPlayerFPvPv(&pkt, (void *)arg0);
    bswap_cmd_item_data__10TObjPlayerFi(&pkt);
    if (validate_6x2B_create_inventory_item(&pkt) != 0) {
        player = get_player_by_client_id(pkt.client);
        if ((player != 0) && (is_volopt_phase_final__10TObjPlayerFv() == 0)) {
            if ((u32)(pkt.size * 4) == 0x18) {
                kind = 0;
                TItemData__sub_8010C740(pkt.item, 0);
            } else {
                kind = 2;
                TItemData__sub_8010C740(pkt.item, 2);
            }
            TItemData__sub_8010CCB0(pkt.item);
            item = lookup_inventory_item__10TObjPlayerFPv((M2C_UNK *)pkt.item);
            if ((item != NULL) && (TObjPlayer__sub_801B8E68(player, (int)item) != 0U) && (kind == 2) && (pkt.f19 != 0) && (get_slot_value__10TObjPlayerFPvi((void *)(player + 0xD04), (void *)(((VObj_18 *)item)->m31())) == 0U)) {
                set_equip_slot_entry((void *)(player + 0xD04), (void *)(((VObj_18 *)item)->m31()), (int)item);
                set_flag_20000__10TObjPlayerFi(player);
                ((VObj_18 *)item)->m18();
                TObjPlayer__sub_801BE9A8(player);
            }
        }
    }
}

}
