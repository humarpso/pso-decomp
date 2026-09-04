#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2);
int TObjEneMorfos__sub_80334884(void);
int TObjEneMorfos__sub_803348F0(void);
void TObjEneMorfos__vt26(void);
void TObjEneMorfos__vt59(void);
void TObjEneMorfos__vt61(void* p);
s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2);
void *create__13TObjEneMorfosFPv(void *arg0);
void unload_static_data__13TObjEneMorfosFv(void);
s32 TBoss4Type2__sub_80141FA8(s32);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneMorfosArm__sub_8033542C();
void TObjEneMorfos__sub_8033471C(void *);
void TObjEneMorfos__sub_80334D74(void *);
void __construct_array(void *, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

int TObjEneMorfos__sub_80334884(void) { return 0; }
int TObjEneMorfos__sub_803348F0(void) { return 0; }

void TObjEneMorfos__vt59(void) {  }

void TObjEneMorfos__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneMorfos__vt26(void) {  }

extern M2C_UNK __vt__13TObjEneMorfos[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D4230;

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMorfos;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1004));
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1032));
    __construct_array((void *)((char *)arg0 + 1060), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4230;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneMorfos__sub_8033471C(arg0);
    TObjEneMorfos__sub_80334D74(arg0);
    M2C_FIELD(arg0, u32 *, 0x494) = 0;
    return arg0;
}

extern u32 TObjEneMorfos__data_805D6D14;

void unload_static_data__13TObjEneMorfosFv(void) {
    TObjEneMorfosArm__sub_8033542C();
    if ((u32) TObjEneMorfos__data_805D6D14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMorfos__data_805D6D14, 1);
        TObjEneMorfos__data_805D6D14 = 0U;
    }
}

extern void *tl_04;

void *create__13TObjEneMorfosFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneMorfos__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

}
