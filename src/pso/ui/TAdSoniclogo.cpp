#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLogo__sub_8001C360(void);
void TLogo__sub_8001C364(void);
void *__ct__12TAdSoniclogoFv(void *arg0);
int TObject__sub_80019A60(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init_fade__6TLobbyFPvPvPv(void *, void *, void *);
void init_logo_state__23TAdSinglePlyChrSelectGCFi(int);

extern M2C_UNK __vt__12TAdSoniclogo[];
extern void *lbl_805D2628;
extern u32 TAdSoniclogo__data_805D4A4C;
extern u32 lbl_805D4A50;
extern void *tl_00;
extern M2C_UNK request_destroy__12TAdSoniclogoFv[];

void *__ct__12TAdSoniclogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdSoniclogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2628;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TAdSoniclogo__data_805D4A4C = 0;
    lbl_805D4A50 = 0;
    init_logo_state__23TAdSinglePlyChrSelectGCFi(1);
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init_fade__6TLobbyFPvPvPv(o, tl_00, request_destroy__12TAdSoniclogoFv);
    }
    return arg0;
}

void TLogo__sub_8001C360(void) {  }

    extern int lbl_805D4A48;
void TLogo__sub_8001C364(void) { lbl_805D4A48 = TObject__sub_80019A60(); }

}
