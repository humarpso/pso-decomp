#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_80095DD0(u8 *arg0);
void fn_80095DF4(u8 *arg0);
}

extern "C" {

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe7Berura__vt26(void);
int TObjEneRe7Berura__vt60(void);
void TObjEneRe7Berura__vt61(void* p);
void *create__16TObjEneRe7BeruraFPv(void *arg0);
void destroy_children__16TObjEneRe7BeruraFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe7Berura__sub_80095328(void *);
void TObjEneRe7Berura__sub_800955E0(void *);
void TObjEneRe7Berura__vt59(void);
void __construct_array(void *, void *, void *, int, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void free__11TOBoss4RockFUi(void*);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p);

int TObjEneRe7Berura__vt60(void) { return 0; }

void TObjEneRe7Berura__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneRe7Berura__vt26(void) {  }

extern M2C_UNK __vt__16TObjEneRe7Berura[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D2988;

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneRe7Berura;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 984));
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    __construct_array((void *)((char *)arg0 + 1096), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2988;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneRe7Berura__sub_80095328(arg0);
    TObjEneRe7Berura__sub_800955E0(arg0);
    return arg0;
}

extern u32 TObjEneRe7Berura__data_805D4F64;
extern u32 lbl_805D4F80;
extern u32 lbl_805D4F8C;
extern u32 lbl_805D4FA0;

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        destroy_buffer_pair((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) TObjEneRe7Berura__data_805D4F64 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRe7Berura__data_805D4F64, 1);
        TObjEneRe7Berura__data_805D4F64 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneRe7Berura__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

void fn_80095DD0(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 &= 0xFFFFFFF7;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 &= 0xFFFFFFF7;
}

void fn_80095DF4(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 |= 8;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 |= 8;
}

}
