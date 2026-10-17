#include "pso/TAdADXlogo.h"
TAdADXlogo::~TAdADXlogo() {}

#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLogo__sub_80019A28(void);
void TLogo__sub_80019A2C(void);
void *__ct__10TAdADXlogoFv(void *arg0);
int get_logo_texture_e_handle(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__10TAdADXlogo[];
extern void *lbl_805D2600;
extern u32 TAdADXlogo__state;
extern u32 lbl_805D49D0;
extern void *tl_00;
extern s32 destroy__10TAdADXlogoFv[];

void *__ct__10TAdADXlogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TAdADXlogo;
    *(void * *)&((TAdADXlogo *)arg0)->m_name = lbl_805D2600;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    TAdADXlogo__state = 0;
    lbl_805D49D0 = 0;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        ((TLobby *)o)->init_fade(tl_00, destroy__10TAdADXlogoFv);
    }
    return arg0;
}

void TLogo__sub_80019A28(void) {  }

    extern int lbl_805D49C8;
void TLogo__sub_80019A2C(void) { lbl_805D49C8 = get_logo_texture_e_handle(); }

}
