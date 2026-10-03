#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80191730_lbl_804B7C60 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80191730_lbl_804B7C60_size[sizeof(RecoveredGlobal_80191730_lbl_804B7C60) == 0x10 ? 1 : -1];

struct RecoveredGlobal_801917E8_lbl_804B7CA0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801917E8___vt__9TObjHashi {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80191730_lbl_804B7C60 lbl_804B7C60;
extern u32 TObjHashi__data_805D5C10;
void TObjHashi__sub_80191730(void);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjHashiBase__ct(void *, s32);
extern RecoveredGlobal_801917E8_lbl_804B7CA0 lbl_804B7CA0;
extern M2C_UNK __vt__9TObjHashi[];
extern s32 lbl_805D3378;
extern u32 TObjHashi__data_805D5C10;
u8 *TObjHashi__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void *TObjHashi__create(void *arg0);
void *__dt__9TObjHashiFv(void *arg0, s16 arg1);
void unload_static_data__9TObjHashiFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__13TObjHashiBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjHashi__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjHashi__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjHashi__data_805D5C10;

void unload_static_data__9TObjHashiFv(void) {
    if ((u32) TObjHashi__data_805D5C10 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashi__data_805D5C10, 1);
        TObjHashi__data_805D5C10 = 0U;
    }
}

extern M2C_UNK __vt__9TObjHashi[];

void TObjHashi__sub_80191730(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B7C60.value, 0, 0, 0));
    }
    (*(s32 *)&TObjHashi__data_805D5C10) = var_r0;
}

void *__dt__9TObjHashiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjHashi;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__13TObjHashiBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801917E8_lbl_804B7CA0_size[sizeof(RecoveredGlobal_801917E8_lbl_804B7CA0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_801917E8___vt__9TObjHashi_size[sizeof(RecoveredGlobal_801917E8___vt__9TObjHashi) == 0x38 ? 1 : -1];
u8 *TObjHashi__ct(u8 *arg0, s32 arg1, s32 _w2) {
    TObjHashiBase__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801917E8___vt__9TObjHashi *)&__vt__9TObjHashi).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3378;
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((*(u8 * *)&TObjHashi__data_805D5C10), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TObjHashi__data_805D5C10), 0);
    init_collision_body_parts(arg0, (s32) &lbl_804B7CA0.value, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    return arg0;
}

}
