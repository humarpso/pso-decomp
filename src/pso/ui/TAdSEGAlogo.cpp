#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__11TAdSEGAlogoFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init_fade__6TLobbyFPvPvPv(void *, void *, void *);
void TAdSinglePlyChrSelectGC__sub_8033A904(int);

extern M2C_UNK __vt__11TAdSEGAlogo[];
extern void *lbl_805D2620;
extern u32 TAdSEGAlogo__data_805D4A3C;
extern u32 lbl_805D4A40;
extern void *tl_00;
extern M2C_UNK TAdSEGAlogo__sub_8001BF74[];

void *__ct__11TAdSEGAlogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TAdSEGAlogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2620;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TAdSEGAlogo__data_805D4A3C = 0;
    lbl_805D4A40 = 0;
    TAdSinglePlyChrSelectGC__sub_8033A904(0);
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init_fade__6TLobbyFPvPvPv(o, tl_00, TAdSEGAlogo__sub_8001BF74);
    }
    return arg0;
}

}
