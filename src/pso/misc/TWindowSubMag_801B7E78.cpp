#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801B7EB8 { char pad[0x18]; };

struct VObj_801B7EB8 : VBase_801B7EB8 {
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
    virtual void m27();
    virtual void m28();
    virtual void m29();
};

struct Pkt_801B7EB8 {
    u8 hdr[2];
    u16 client;
    s32 item;
};

extern "C" {
u8 *get_player_by_client_id(u16);
M2C_UNK bswap_cmd_u32__10TObjPlayerFi(void *);
M2C_UNK copy_field_4__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TObjPlayer__sub_801C0E40(void *);
u32 start_inventory_update__10TObjPlayerFPvi(int, int);
u8 *get_owner_if_alive__10TObjPlayerFPv();
s32 validate_6x27_use_item(void *);
void handle_6x27_use_item(s32 arg0);
}

extern "C" {

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2);
int fn_801B7E14(void*);
int TObjPlayer__sub_801B8DE8(void*, void*, void*);

void feed_mag__13TWindowSubMagFPvPvPv(void* p, void* a1, void* a2) { fn_801B7E14(p); TObjPlayer__sub_801B8DE8(p, a2, (void*)1); }
void handle_6x27_use_item(s32 arg0) {
    Pkt_801B7EB8 pkt;
    u8 *temp_r3;
    u8 *temp_r3_2;
    TObjPlayer__sub_801C0E40((void *) (&pkt));
    copy_field_4__10TObjPlayerFPvPv((void *) (&pkt), (void *) (arg0));
    bswap_cmd_u32__10TObjPlayerFi((void *) (&pkt));
    if (validate_6x27_use_item((void *) (&pkt)) != 0) {
        temp_r3 = get_player_by_client_id(pkt.client);
        if ((temp_r3 != NULL) && (start_inventory_update__10TObjPlayerFPvi((int) (M2C_FIELD(temp_r3, s32 *, 0xD00)), (int) (pkt.item)) != 0U)) {
            temp_r3_2 = get_owner_if_alive__10TObjPlayerFPv();
            if (temp_r3_2 != NULL) {
                ((VObj_801B7EB8 *)temp_r3_2)->m29();
            }
        }
    }
}

}
