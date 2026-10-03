#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801571D8_lbl_804AF960 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801571D8_lbl_804AF960_size[sizeof(RecoveredGlobal_801571D8_lbl_804AF960) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80157280___vt__14TOAirconCave02 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_801571D8_lbl_804AF960 lbl_804AF960;
extern u32 TOAirconCave02__data_805D5888;
void TOAirconCave02__sub_801571D8(void);
s32 init_map_object_base(void *, void *);
extern M2C_UNK __vt__14TOAirconCave02[];
extern s32 lbl_805D2E94;
extern u32 TOAirconCave02__data_805D5888;
extern const f32 lbl_805DB2C0;
extern const f32 lbl_805DB2C4;
u8 *TOAirconCave02__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__14TOAirconCave02Fv(void *arg0, s16 arg1);
void release_static_resource__14TOAirconCave02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern u32 TOAirconCave02__data_805D5888;

void release_static_resource__14TOAirconCave02Fv(void) {
    if ((u32) TOAirconCave02__data_805D5888 != 0U) {
        TLobby__sub_8001FE7C((void*)TOAirconCave02__data_805D5888, 1);
        TOAirconCave02__data_805D5888 = 0U;
    }
}

extern M2C_UNK __vt__14TOAirconCave02[];

void TOAirconCave02__sub_801571D8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804AF960.value, 0, 0, 0));
    }
    (*(s32 *)&TOAirconCave02__data_805D5888) = var_r0;
}

void *__dt__14TOAirconCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOAirconCave02;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80157280___vt__14TOAirconCave02_size[sizeof(RecoveredGlobal_80157280___vt__14TOAirconCave02) == 0x38 ? 1 : -1];
u8 *TOAirconCave02__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80157280___vt__14TOAirconCave02 *)&__vt__14TOAirconCave02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2E94;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOAirconCave02__data_805D5888), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOAirconCave02__data_805D5888), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB2C0;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB2C4;
    return arg0;
}

}
