#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2);
void TObjEneMorfos__sub_8033471C(void *);
void TObjEneMorfos__sub_80334D74(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__13TObjEneMorfos[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
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

}
