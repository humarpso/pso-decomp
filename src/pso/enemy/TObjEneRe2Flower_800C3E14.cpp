#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe2Flower__sub_800C3E14(void);
void TObjEneRe2Flower__sub_800C3EA4(void);
void *create__16TObjEneRe2FlowerFPv(void *arg0);
void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1);
void destroy_instance__16TObjEneRe2FlowerFv(void);
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0);
void update_state__16TObjEneRe2FlowerFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void * a0 = 0);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void TObjEneGibbles__sub_80156720(void *);
void *TObjEneRe2Flower__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_800C4D44();
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 begin_state_242__16TObjEneRe2FlowerFPv(void);
void queue_destruction__7TObjectFv(void *);

void TObjEneRe2Flower__sub_800C3E14(void) {  }
void update_state__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 9) {
        if (temp_r0 == 8) {
            begin_state_242__16TObjEneRe2FlowerFPv();
            TBoss8Dragon__sub_800BB780(arg0);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 9);
    }
}
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void TObjEneRe2Flower__sub_800C3EA4(void) {  }

extern M2C_UNK lbl_804931FC[];

void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804931FC;
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3F4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D5174;

void destroy_instance__16TObjEneRe2FlowerFv(void) {
    TObjPlayer__sub_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe2FlowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjEneRe2Flower__ct(o, tl_04, arg0);
    }
    return o;
}

}
