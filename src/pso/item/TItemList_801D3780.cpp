#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801D401C_lbl_804C4498 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_801D401C_lbl_804C4498_size[sizeof(RecoveredGlobal_801D401C_lbl_804C4498) == 0x18 ? 1 : -1];

struct RecoveredGlobal_801D39C8_lbl_804C4468 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D3BD4_lbl_804C4480 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804C4498[];
extern const f32 lbl_805DC3D4;
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
s32 check_player_action_allowed(void);
s32 fn_801D4270(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD21C(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TItemList__sub_801D3F3C(void *);
M2C_UNK fn_801D41B4(int);
M2C_UNK TItemList__sub_801D5884(void *, int);
u8 *TItemList__sub_801D58E4(void *);
extern M2C_UNK lbl_804C4468[];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5);
M2C_UNK TItemList__sub_801D3F3C(void *);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
M2C_UNK TItemList__sub_801D5884(void *, int);
extern M2C_UNK lbl_804C4480[];
u8 *TItemList__sub_801D3BD4(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5);
}

extern "C" {

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3);
void *TItemList__sub_801D3B64(void *arg0, s16 arg1);
void *TItemList__sub_801D3FC4(void *arg0, s16 arg1);
void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3);
void *destroy__9TItemListFPvs(void *arg0, s16 arg1);
M2C_UNK TItemList__sub_801D59E8(void *, s32);
M2C_UNK TItemList__sub_801D5A28(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_07;

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D39C8((u8 *)(o), (s32)(tl_07), (s32)(arg0), (u8 *)(arg1), (s32)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4468[];

void *destroy__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4468;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern void *tl_07;

typedef char RecoveredGlobal_801D39C8_lbl_804C4468_size[sizeof(RecoveredGlobal_801D39C8_lbl_804C4468) == 0x18 ? 1 : -1];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5) {
    u8 *temp_r3;
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D39C8_lbl_804C4468 *)&lbl_804C4468).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *) (arg0), (int) (1));
    TItemList__sub_801D3F3C((void *) (arg0));
    if (check_player_action_allowed() != 0) {
        temp_r3 = (u8 *)(TItemList__sub_801D58E4(arg0));
        if (fn_801D4270(M2C_FIELD(temp_r3, s32 *, 4)) != 0) {
            fn_801D41B4((int) (M2C_FIELD(temp_r3, s32 *, 4)));
            if (TAdSinglePlyChrSelectGC__sub_801FD21C() != 0) {
                queue_destruction__7TObjectFv((void *) (arg0));
                return arg0;
            }
            M2C_FIELD(arg0, s32 *, 0x50) = 1;
            goto block_5;
        }
    }
block_5:
    return arg0;
}

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D3BD4((u8 *)(o), (u8 *)(tl_07), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4480[];

void *TItemList__sub_801D3B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4480;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C4498[];

typedef char RecoveredGlobal_801D3BD4_lbl_804C4480_size[sizeof(RecoveredGlobal_801D3BD4_lbl_804C4480) == 0x18 ? 1 : -1];
u8 *TItemList__sub_801D3BD4(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5) {
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D3BD4_lbl_804C4480 *)&lbl_804C4480).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *)(arg0), (int)(0U));
    TItemList__sub_801D3F3C(arg0);
    return arg0;
}

void *TItemList__sub_801D3FC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4498;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D401C_lbl_804C4498 *)&lbl_804C4498).value;
    if (arg2 == NULL) {
        M2C_FIELD(arg0, u16 *, 0x20) = 0xFFFFU;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x20) = obj_getField1c(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) get_stat_by_key_state__10TObjPlayerFPv(arg2);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 0x60);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg3);
    M2C_FIELD(arg0, s8 *, 0x1C) = arg4;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}

}
