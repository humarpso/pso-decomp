#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 create__10TBoss6RockFPv(s32);
extern s32 TBoss6Rock__data_80543778[];
extern u32 TBoss6Rock__data_805D6EF0;
extern u32 TBoss6Rock__data_805D6EF4;
extern int TBoss6Rock__data_805D6EF8;
void TBoss6Rock__sub_80354A50(s32 arg0);
void *dispatch_shared_handler_a__6TLobbyFPv(s32);
u32 load_resource_from_descriptor(u32, s32, void *, s32, s32, s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 load_gvm_texture_file(void *);
void TBoss6Rock__sub_80354188(void);
extern u8 lbl_80479298[];
extern u8 lbl_804F1250[];
extern s32 TBoss6Rock__data_80543778[];
extern u32 TBoss6Rock__data_805D6EF0;
extern u32 TBoss6Rock__data_805D6EF4;
extern s32 lbl_805D6EFC;
void TBoss6Rock__sub_80354B18(void);
}

extern "C" {

void TBoss6Rock__sub_80354A44(void);
void free_data__10TBoss6RockFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

    extern int TBoss6Rock__data_805D6EF8;
void TBoss6Rock__sub_80354A44(void) { TBoss6Rock__data_805D6EF8 = 0; }

extern u32 TBoss6Rock__data_805D6EF0;
extern u32 TBoss6Rock__data_805D6EF4;

void TBoss6Rock__sub_80354A50(s32 arg0) {
    s32 i;
    if (TBoss6Rock__data_805D6EF0 == 0 || TBoss6Rock__data_805D6EF4 == 0) {
        return;
    }
    (*(s32 *)&TBoss6Rock__data_805D6EF8) = arg0;
    for (i = 0; i < 0x20; i++) {
        TBoss6Rock__data_80543778[i] = create__10TBoss6RockFPv(i);
    }
}

void free_data__10TBoss6RockFv(void) {
    if ((u32) TBoss6Rock__data_805D6EF0 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss6Rock__data_805D6EF0, 1);
        TBoss6Rock__data_805D6EF0 = 0U;
    }
    if ((u32) TBoss6Rock__data_805D6EF4 != 0U) {
        TLobby__sub_803DA16C((void*)TBoss6Rock__data_805D6EF4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TBoss6Rock__data_805D6EF4);
        TBoss6Rock__data_805D6EF4 = 0U;
    }
}
void TBoss6Rock__sub_80354B18(void) {
    u32 r;
    s32 i;
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = load_resource_from_descriptor(r, 5, lbl_804F1250, 0, 0, 0);
    }
    TBoss6Rock__data_805D6EF0 = r;
    TBoss6Rock__data_805D6EF4 = load_gvm_texture_file(lbl_80479298);
    if (TBoss6Rock__data_805D6EF0 == 0 || TBoss6Rock__data_805D6EF4 == 0) {
        return;
    }
    TBoss6Rock__sub_80354188();
    for (i = 0; i < 0x20; i++) {
        TBoss6Rock__data_80543778[i] = 0;
    }
    lbl_805D6EFC = (s32)*(f32 *)((u8 *)dispatch_shared_handler_a__6TLobbyFPv(0x2C) + 0xC);
    if (lbl_805D6EFC < 1) {
        lbl_805D6EFC = 0x14;
    }
}

}
