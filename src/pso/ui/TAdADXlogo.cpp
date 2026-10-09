#include "pso/TAdADXlogo.h"
TAdADXlogo::~TAdADXlogo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLogo__sub_80019A28(void);
void TLogo__sub_80019A2C(void);
void *__ct__10TAdADXlogoFv(void *arg0);
int TObject__sub_80019A60(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init_fade__6TLobbyFPvPvPv(void *, void *, void *);

extern M2C_UNK __vt__10TAdADXlogo[];
extern void *lbl_805D2600;
extern u32 TAdADXlogo__state;
extern u32 lbl_805D49D0;
extern void *tl_00;
extern M2C_UNK destroy__10TAdADXlogoFv[];

void *__ct__10TAdADXlogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TAdADXlogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2600;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TAdADXlogo__state = 0;
    lbl_805D49D0 = 0;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init_fade__6TLobbyFPvPvPv(o, tl_00, destroy__10TAdADXlogoFv);
    }
    return arg0;
}

void TLogo__sub_80019A28(void) {  }

    extern int lbl_805D49C8;
void TLogo__sub_80019A2C(void) { lbl_805D49C8 = TObject__sub_80019A60(); }

}
