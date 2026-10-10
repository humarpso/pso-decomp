#include "pso/TAdSEGAlogo.h"

TAdSEGAlogo::~TAdSEGAlogo() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__11TAdSEGAlogoFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init_fade__6TLobbyFPvPvPv(void *, void *, void *);
void init_logo_state__23TAdSinglePlyChrSelectGCFi(int);

extern M2C_UNK __vt__11TAdSEGAlogo[];
extern void *TAdSEGAlogo__class_name;
extern u32 TAdSEGAlogo__state;
extern u32 sega_logo_done_flag;
extern void *tl_00;
extern M2C_UNK request_destroy__11TAdSEGAlogoFv[];

void *__ct__11TAdSEGAlogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TAdSEGAlogo;
    M2C_FIELD(arg0, void **, 0x0) = TAdSEGAlogo__class_name;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
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
