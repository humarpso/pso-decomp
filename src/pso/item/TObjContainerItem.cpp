#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80189BE0_lbl_804B63BC {
    M2C_UNK value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_80189BE0___vt__17TObjContainerItem {
    M2C_UNK value;
    u8 remaining[0x148];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 fn_8018A150(void *, void *, void *);
s32 get_container_param(int);
extern RecoveredGlobal_80189BE0_lbl_804B63BC lbl_804B63BC;
extern M2C_UNK __vt__17TObjContainerItem[];
extern s32 lbl_805D32EC;
u8 *TObjContainerItem__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjContainerItem__vt78(void *arg0);
void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1);
void *create__17TObjContainerItemFPv(void *arg0);
void spawn_item__17TObjContainerItemFPvi(u8 *arg0, s32 arg1);
M2C_UNK TLobby__sub_8010567C(s32, void *, s32, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

void TObjContainerItem__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

extern void *tl_05;

void *create__17TObjContainerItemFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerItem__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__17TObjContainerItem[];

void *__dt__17TObjContainerItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjContainerItem;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80189BE0_lbl_804B63BC_size[sizeof(RecoveredGlobal_80189BE0_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_80189BE0___vt__17TObjContainerItem_size[sizeof(RecoveredGlobal_80189BE0___vt__17TObjContainerItem) == 0x14C ? 1 : -1];
u8 *TObjContainerItem__ct(u8 *arg0, s32 arg1, s32 arg2) {
    fn_8018A150((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80189BE0___vt__17TObjContainerItem *)&__vt__17TObjContainerItem).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32EC;
    M2C_FIELD(arg0, s32 *, 0x34) = get_container_param((int) (1));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B63BC.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B63BC.value, f32 *, 4));
    return arg0;
}

void spawn_item__17TObjContainerItemFPvi(u8 *arg0, s32 arg1) {
    TLobby__sub_8010567C(arg1, arg0 + 0x38, M2C_FIELD(arg0, s32 *, 0x360), arg0);
}

}
