#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802CD5C0 { char pad[0xC]; };
struct VObj_802CD5C0 : Base_802CD5C0 {
    virtual void m0(int);
};

extern "C" {

void * create__15TObjEneMe1GiGueFPv(void *arg0);
void delete_barrier__15TObjEneMe1GiGueFv(void);
void *TObjControl__ct(void *, void *);
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC0();
void *TObjEneMe1GiGue__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8001FE7C(M2C_UNK, M2C_UNK);
M2C_UNK fn_802CE4E8();

extern void *tl_04;

void * create__15TObjEneMe1GiGueFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x458);
    if (o2 != NULL) {
        o2 = TObjEneMe1GiGue__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneMe1GiGue__data_805D6838;
extern void *TObjEneMe1GiGue__data_805D683C;

void delete_barrier__15TObjEneMe1GiGueFv(void) {
    TObjEneMe1GiGueBarrier__sub_80325CC0();
    fn_802CE4E8();
    if (TObjEneMe1GiGue__data_805D683C != NULL) {
        if (TObjEneMe1GiGue__data_805D683C != NULL) {
            ((VObj_802CD5C0*)TObjEneMe1GiGue__data_805D683C)->m0(1);
        }
        TObjEneMe1GiGue__data_805D683C = NULL;
    }
    if (TObjEneMe1GiGue__data_805D6838 != 0U) {
        TLobby__sub_8001FE7C(TObjEneMe1GiGue__data_805D6838, 1);
        TObjEneMe1GiGue__data_805D6838 = 0U;
    }
}

}
