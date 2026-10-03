#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 load_resource_from_descriptor(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 load_gvm_texture_file(void *);
M2C_UNK reset_state__10TBoss6TubeFv();
extern u8 lbl_80470A68[];
extern u8 lbl_804DE888[];
extern u32 lbl_805D6718;
extern u32 lbl_805D671C;
void TBoss6Tube__sub_802B1760(void);
}

extern "C" {

void *create__10TBoss6TubeFPv(void *arg0);
void free_resources__10TBoss6TubeFv(void);
void *TBoss6Tube__ct(void *, void *);
M2C_UNK reset_state__10TBoss6TubeFv();
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void *create__10TBoss6TubeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TBoss6Tube__ct(o, arg0);
    }
    return o;
}

extern u32 lbl_805D6718;
extern u32 lbl_805D671C;

void free_resources__10TBoss6TubeFv(void) {
    if ((u32) lbl_805D6718 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6718, 1);
        lbl_805D6718 = 0U;
    }
    if ((u32) lbl_805D671C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D671C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D671C);
        lbl_805D671C = 0U;
    }
    reset_state__10TBoss6TubeFv();
}
void TBoss6Tube__sub_802B1760(void) {
    s32 r;
    reset_state__10TBoss6TubeFv();
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = load_resource_from_descriptor(r, 5, lbl_804DE888, 0, 0, 0);
    }
    lbl_805D6718 = r;
    lbl_805D671C = load_gvm_texture_file(lbl_80470A68);
    if (lbl_805D6718 != 0 && lbl_805D671C != 0) {
        return;
    }
}

}
