#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneBm9Mericarol__sub_802D073C(void);
void TObjEneBm9Mericarol__sub_802D093C(void);
void TObjEneBm9Mericarol__sub_802D0940(void);
void TObjEneBm9Mericarol__sub_802D09AC(void);
void TObjEneBm9Mericarol__sub_802D0A2C(void);
void TObjPlayer__sub_802D14B4(u8 *arg0);
void change_state__19TObjEneBm9MericarolFPv(void *arg0);
void *create__19TObjEneBm9MericarolFPv(void *arg0);
void free_shared_instances__19TObjEneBm9MericarolFv(void);
s32 get_phase__19TObjEneBm9MericarolFPv(void* p);
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0);
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0);
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm9Mericarol__ct(void *, void *, void *);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_802D1C84();

int TObjEneBm9Mericarol__sub_802D073C(void) { return 0; }

s32 get_phase__19TObjEneBm9MericarolFPv(void* p) { return *(s32*)((char*)p + 0x45c); }

s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        TObjEneDD__sub_800BBA18(arg0, 8);
        return 1;
    }
    return 0;
}
void TObjEneBm9Mericarol__sub_802D093C(void) {  }
void TObjEneBm9Mericarol__sub_802D0940(void) {  }
void update_shadow_height__19TObjEneBm9MericarolFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void TObjEneBm9Mericarol__sub_802D09AC(void) {  }
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        if (M2C_FIELD(arg0, s32 *, 0x438) & 0x20) {
            TBoss8Dragon__sub_800BB780();
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void change_state__19TObjEneBm9MericarolFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xB) && (temp_r0 != 0xC)) {
        TObjEneDD__sub_800BBA18(arg0, 0xB);
    }
}
void TObjEneBm9Mericarol__sub_802D0A2C(void) {  }

extern u32 lbl_805D6860;
extern u32 lbl_805D6864;
extern u32 lbl_805D6868;

void free_shared_instances__19TObjEneBm9MericarolFv(void) {
    if ((u32) lbl_805D6864 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6864, 1);
        lbl_805D6864 = 0U;
    }
    if ((u32) lbl_805D6860 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6860, 1);
        lbl_805D6860 = 0U;
    }
    fn_802D1C84();
    if ((u32) lbl_805D6868 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6868, 1);
        lbl_805D6868 = 0U;
    }
}

extern void *tl_04;

void *create__19TObjEneBm9MericarolFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4B0);
    if (o != NULL) {
        o = TObjEneBm9Mericarol__ct(o, tl_04, arg0);
    }
    return o;
}

void TObjPlayer__sub_802D14B4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10C) != 0) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xD8, 0, 0);
    }
}

}
