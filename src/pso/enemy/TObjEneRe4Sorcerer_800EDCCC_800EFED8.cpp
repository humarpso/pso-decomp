#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss3Volopt__sub_800F059C(void);
void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe4Sorcerer__vt26(void);
void TObjEneRe4Sorcerer__vt61(void* p);
void *create__18TObjEneRe4SorcererFPv(void *arg0);
void free_bits__18TObjEneRe4SorcererFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK TObjEneRe4Bit__sub_800EDAB0();
void TObjEneRe4Sorcerer__sub_800EFE30(void *);
void TObjEneRe4Sorcerer__sub_800F0118(void *);
void TObjEneRe4Sorcerer__vt59(void);
void TObjPlayer__sub_8004433C(void *);
void __construct_array(void *, void *, void *, int, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void TObjEneRe4Sorcerer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 9) { TObjEneDD__sub_800BBA18(p, (void*)9); } }
void TObjEneRe4Sorcerer__vt26(void) {  }

extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D2AF0;

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 1048));
    __construct_array((void *)((char *)arg0 + 1140), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe4Sorcerer__sub_800EFE30(arg0);
    TObjEneRe4Sorcerer__sub_800F0118(arg0);
    return arg0;
}

extern u32 lbl_805D52E0;
extern u32 TObjEneRe4Sorcerer__data_805D52F4;

void free_bits__18TObjEneRe4SorcererFv(void) {
    if ((u32) TObjEneRe4Sorcerer__data_805D52F4 != 0U) {
        destroy_buffer_pair((void*)TObjEneRe4Sorcerer__data_805D52F4, 1);
        TObjEneRe4Sorcerer__data_805D52F4 = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) lbl_805D52E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52E0, 1);
        lbl_805D52E0 = 0U;
    }
}

extern void *tl_04;

void *create__18TObjEneRe4SorcererFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4F0);
    if (o != NULL) {
        o = TObjEneRe4Sorcerer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void TBoss3Volopt__sub_800F059C(void) {  }

}
