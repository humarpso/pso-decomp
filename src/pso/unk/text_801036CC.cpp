#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80103748 { char pad[0x18]; };
struct VObj_80103748 : Base_80103748 {
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
};

extern "C" {
extern s32 lbl_805D5420;
s32 TLobby__sub_8010385C(s32 arg0);
s32 TLobby__sub_80103B44(s32 arg0);
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
u16 TLobby__sub_80103AD4(void);
}

extern "C" {

void *TLobby__sub_80101AB0(s32);
M2C_UNK TLobby__sub_80103BFC(s32, s32);
M2C_UNK bswap_player_packet__6TLobbyFPv();

void handle_6x63_destroy_floor_item(void *arg0) {
    struct VObj_80103748 *o;

    bswap_player_packet__6TLobbyFPv();
    TLobby__sub_80103BFC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
    o = (struct VObj_80103748 *)TLobby__sub_80101AB0(M2C_FIELD(arg0, s32 *, 4));
    if (o != NULL) {
        o->m27();
    }
}
s32 TLobby__sub_8010385C(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x12) && ((s32) M2C_FIELD(lbl_805D5420, M2C_UNK *, (arg0 * 4)) < 0x32)) {
        return 0;
    }
    return 1;
}

u16 TLobby__sub_80103AD4(void) {
    s32 temp_r0;
    if ((s32) lbl_805D5428 != 0) {
        temp_r0 = lbl_805D5428 - 1;
        lbl_805D5428 = temp_r0;
        return M2C_FIELD((lbl_805D5424 + (temp_r0 * 2)), u16 *, 0);
    }
    return 0xFFFFU;
}

s32 TLobby__sub_80103B44(s32 arg0) {
    if (((s32) M2C_FIELD(lbl_805D5420, M2C_UNK *, (arg0 * 4)) < 0xC0) && (arg0 < 0x12)) {
        return 1;
    }
    return 0;
}

}
