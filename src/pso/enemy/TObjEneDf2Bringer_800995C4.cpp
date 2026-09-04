#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__vt26(void);
void TObjEneDf2Bringer__vt61(void* p);
void *create__17TObjEneDf2BringerFPv(void *arg0);
void free_resources__17TObjEneDf2BringerFv(void);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneDf2Bringer__sub_800994F8(void *);
void TObjEneDf2Bringer__sub_80099800(void *);
void TObjEneDf2Bringer__vt59(void);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009A7A0();
void __construct_array(void *, void *, void *, int, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void destroy_buffer_pair(void*, int);
void init_object__9TObjEneDDFPv(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);

void TObjEneDf2Bringer__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 10) { TObjEneDD__sub_800BBA18(p, (void*)10); } }
void TObjEneDf2Bringer__vt26(void) {  }

extern M2C_UNK __vt__17TObjEneDf2Bringer[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern void *lbl_805D29A0;

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    TObjEneDf2Bringer__sub_80099800(arg0);
    return arg0;
}

extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern u32 TObjEneDf2Bringer__data_805D4FC8;
extern u32 TObjEneDf2Bringer__data_805D4FCC;

void free_resources__17TObjEneDf2BringerFv(void) {
    TObjEneMe1CanadinLeader__sub_8009A7A0();
    if ((u32) TObjEneDf2Bringer__data_805D4FCC != 0U) {
        destroy_buffer_pair((void*)TObjEneDf2Bringer__data_805D4FCC, 1);
        TObjEneDf2Bringer__data_805D4FCC = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FC8 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDf2Bringer__data_805D4FC8, 1);
        TObjEneDf2Bringer__data_805D4FC8 = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDf2Bringer__data_805D4FB8, 1);
        TObjEneDf2Bringer__data_805D4FB8 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneDf2BringerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C8);
    if (o != NULL) {
        o = TObjEneDf2Bringer__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

}
