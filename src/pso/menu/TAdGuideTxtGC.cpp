#include "pso/TAdGuideTxtGC.h"

TAdGuideTxtGC::~TAdGuideTxtGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802b1a70_802B1990 { char pad[0x18]; };
struct VObj_802b1a70_802B1990 : Base_802b1a70_802B1990 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct TAdGuideTxtGC_802B19E8 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    void *a[2];
    void *b[2];
    u8 pad2c[0x3C - 0x2C];
    s32 c[2];
};

extern "C" {
void create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, int, f32);
void __ct__7TObjectFP7TObject(void *);
extern void *__vt__13TAdGuideTxtGC[];
extern s32 lbl_805D3EA0;
extern s32 lbl_805DE290;
extern const f32 lbl_805DE294;
TAdGuideTxtGC_802B19E8 *__ct__13TAdGuideTxtGCFv(TAdGuideTxtGC_802B19E8 *o);
}

extern "C" {

void reset__15TLobby_802D2F7CFPv(u8 *arg0);

#pragma push
#pragma opt_common_subs off
TAdGuideTxtGC_802B19E8 *__ct__13TAdGuideTxtGCFv(TAdGuideTxtGC_802B19E8 *o) {
    u32 i;
    __ct__7TObjectFP7TObject(o);
    o->vt18 = __vt__13TAdGuideTxtGC;
    o->f0 = lbl_805D3EA0;
    for (i = 0; i < 2; i++) {
        o->a[i] = &lbl_805DE290;
        o->b[i] = &lbl_805DE290;
        o->c[i] = 0;
    }
    create_draw_line_ctrl__13TAdMcSelectGCFiif(o, 9, lbl_805DE294);
    return o;
}
#pragma pop

void reset__15TLobby_802D2F7CFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x28));
    ((VObj_802b1a70_802B1990 *)temp_r3)->m7();
    M2C_FIELD(arg0, s8 *, 0x1C) = 7;
}

}
