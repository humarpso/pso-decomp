#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_80445974[];
extern char lbl_80445988[];
extern const char *fe_obj321_hashi_model_names[2];
extern BmlResourceDescriptor TObjHashiVersus2__resource_descriptor;
extern const char *fe_obj321_hashi_motion_names[1];
}
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
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern u32 TObjHashiVersus2__resource_bundle;
void load_shared_resource__16TObjHashiVersus2Fv(void);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TObjHashiBase__ct(void *, s32);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
u8 is_current_floor_switch_set(int);
extern RecoveredGlobal_801913F8_lbl_804B7D24 TObjHashiVersus2__collision_body_parts;
extern M2C_UNK __vt__16TObjHashiVersus2[];
extern s32 lbl_805D3380;
extern u32 TObjHashiVersus2__resource_bundle;
extern const f32 lbl_805DBE20;
u8 *TObjHashiVersus2__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void *TObjHashiVersus2__create(void *arg0);
void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1);
void free_static_data__16TObjHashiVersus2Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
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

extern u32 TObjHashiVersus2__resource_bundle;

void free_static_data__16TObjHashiVersus2Fv(void) {
    if ((u32) TObjHashiVersus2__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashiVersus2__resource_bundle, 1);
        TObjHashiVersus2__resource_bundle = 0U;
    }
}

extern M2C_UNK __vt__16TObjHashiVersus2[];

void load_shared_resource__16TObjHashiVersus2Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TObjHashiVersus2__resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TObjHashiVersus2__resource_bundle) = var_r0;
}

void *__dt__16TObjHashiVersus2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjHashiVersus2;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
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
    if (is_current_floor_switch_set((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - M2C_FIELD(arg0, f32 *, 0x68));
    }
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBE20;
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((*(u8 * *)&TObjHashiVersus2__resource_bundle), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TObjHashiVersus2__resource_bundle), 0);
    init_collision_body_parts(arg0, (s32) &TObjHashiVersus2__collision_body_parts.value, 2);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *fe_obj321_hashi_model_names[2] = { lbl_80445974, NULL };
BmlResourceDescriptor TObjHashiVersus2__resource_descriptor = { lbl_80445988, fe_obj321_hashi_model_names, fe_obj321_hashi_motion_names, 1, 0 };
__declspec(section ".sdata") const char *fe_obj321_hashi_motion_names[1] = { NULL };
}
