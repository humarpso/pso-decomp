#include "pso/TAdSEGAlogo.h"

TAdSEGAlogo::~TAdSEGAlogo() {}

#include "types.h"

extern "C" {

void *__ct__11TAdSEGAlogoFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init_fade__6TLobbyFPvPvPv(void *, void *, void *);
void init_logo_state__23TAdSinglePlyChrSelectGCFi(int);

extern s32 __vt__11TAdSEGAlogo[];
extern void *TAdSEGAlogo__class_name;
extern u32 TAdSEGAlogo__state;
extern u32 sega_logo_done_flag;
extern void *tl_00;
extern s32 request_destroy__11TAdSEGAlogoFv[];

void *__ct__11TAdSEGAlogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TAdSEGAlogo;
    *(void **)((s8 *)arg0 + 0x0) = TAdSEGAlogo__class_name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    TAdSEGAlogo__state = 0;
    sega_logo_done_flag = 0;
    init_logo_state__23TAdSinglePlyChrSelectGCFi(0);
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init_fade__6TLobbyFPvPvPv(o, tl_00, request_destroy__11TAdSEGAlogoFv);
    }
    return arg0;
}

}
