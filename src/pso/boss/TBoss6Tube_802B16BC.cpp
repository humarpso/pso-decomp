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
extern u8 boss06_tube_dat_resource_descriptor[];
extern u32 boss6_tube_bml_resource;
extern u32 boss6_tube_texture_list;
void load_resources__10TBoss6TubeFv(void);
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

extern u32 boss6_tube_bml_resource;
extern u32 boss6_tube_texture_list;

void free_resources__10TBoss6TubeFv(void) {
    if ((u32) boss6_tube_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)boss6_tube_bml_resource, 1);
        boss6_tube_bml_resource = 0U;
    }
    if ((u32) boss6_tube_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss6_tube_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(boss6_tube_texture_list);
        boss6_tube_texture_list = 0U;
    }
    reset_state__10TBoss6TubeFv();
}
void load_resources__10TBoss6TubeFv(void) {
    s32 r;
    reset_state__10TBoss6TubeFv();
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = load_resource_from_descriptor(r, 5, boss06_tube_dat_resource_descriptor, 0, 0, 0);
    }
    boss6_tube_bml_resource = r;
    boss6_tube_texture_list = load_gvm_texture_file(lbl_80470A68);
    if (boss6_tube_bml_resource != 0 && boss6_tube_texture_list != 0) {
        return;
    }
}

}
