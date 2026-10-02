#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80191340_lbl_804B7C90 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80191340_lbl_804B7C90_size[sizeof(RecoveredGlobal_80191340_lbl_804B7C90) == 0x10 ? 1 : -1];

struct RecoveredGlobal_801913F8_lbl_804B7D24 { M2C_UNK value; u8 remaining[0x54]; };
typedef char RecoveredGlobal_801913F8_lbl_804B7D24_size[sizeof(RecoveredGlobal_801913F8_lbl_804B7D24) == 0x58 ? 1 : -1];

struct RecoveredGlobal_801913F8___vt__16TObjHashiVersus2 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_801913F8___vt__16TObjHashiVersus2_size[sizeof(RecoveredGlobal_801913F8___vt__16TObjHashiVersus2) == 0x38 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80191340_lbl_804B7C90 lbl_804B7C90;
extern u32 TObjHashiVersus2__data_805D5C18;
void TObjHashiVersus2__sub_80191340(void);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjHashiBase__ct(void *, s32);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
u8 TODoorAncient08__sub_80229220(int);
extern RecoveredGlobal_801913F8_lbl_804B7D24 lbl_804B7D24;
extern M2C_UNK __vt__16TObjHashiVersus2[];
extern s32 lbl_805D3380;
extern u32 TObjHashiVersus2__data_805D5C18;
extern const f32 lbl_805DBE20;
u8 *TObjHashiVersus2__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void *TObjHashiVersus2__create(void *arg0);
void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1);
void free_static_data__16TObjHashiVersus2Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__13TObjHashiBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjHashiVersus2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjHashiVersus2__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjHashiVersus2__data_805D5C18;

void free_static_data__16TObjHashiVersus2Fv(void) {
    if ((u32) TObjHashiVersus2__data_805D5C18 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashiVersus2__data_805D5C18, 1);
        TObjHashiVersus2__data_805D5C18 = 0U;
    }
}

extern M2C_UNK __vt__16TObjHashiVersus2[];

void TObjHashiVersus2__sub_80191340(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B7C90.value, 0, 0, 0));
    }
    (*(s32 *)&TObjHashiVersus2__data_805D5C18) = var_r0;
}

void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjHashiVersus2;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__13TObjHashiBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjHashiVersus2__ct(u8 *arg0, s32 arg1, s32 _w2) {
    TObjHashiBase__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801913F8___vt__16TObjHashiVersus2 *)&__vt__16TObjHashiVersus2).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3380;
    if (TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x68));
    }
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBE20;
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((*(u8 * *)&TObjHashiVersus2__data_805D5C18), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TObjHashiVersus2__data_805D5C18), 0);
    init_collision_body_parts(arg0, (s32) &lbl_804B7D24.value, 2);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
