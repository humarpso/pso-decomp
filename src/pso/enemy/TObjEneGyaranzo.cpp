#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_800D3BA0_800D3B38 { char pad[0xC]; };
struct VObj_800D3BA0_800D3B38 : Base_800D3BA0_800D3B38 {
    virtual void m0(s32);
};

void * create__15TObjEneGyaranzoFPv(void *arg0);
void free_static_instances__15TObjEneGyaranzoFv(void);
M2C_UNK TLobby__sub_8001FE7C(u32, s32);
void *TObjControl__ct(void *, void *);
void *TObjEneGyaranzo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__15TObjEneGyaranzoFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x45C);
    if (o2 != NULL) {
        o2 = TObjEneGyaranzo__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D51FC;

extern struct VObj_800D3BA0_800D3B38 *lbl_805D5208;

void free_static_instances__15TObjEneGyaranzoFv(void) {
    if (lbl_805D51FC != 0U) {
        TLobby__sub_8001FE7C(lbl_805D51FC, 1);
        lbl_805D51FC = 0U;
    }
    if (lbl_805D5208 != 0) {
        if (lbl_805D5208 != 0) {
            lbl_805D5208->m0(1);
        }
        lbl_805D5208 = 0;
    }
}

}
