#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029CD0C_lbl_8046598C { char value[0x13]; };
typedef char RecoveredGlobal_8029CD0C_lbl_8046598C_size[sizeof(RecoveredGlobal_8029CD0C_lbl_8046598C) == 0x13 ? 1 : -1];

struct RecoveredGlobal_8029CD0C_lbl_804DC534 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8029CD0C_lbl_804DC534_size[sizeof(RecoveredGlobal_8029CD0C_lbl_804DC534) == 0x10 ? 1 : -1];

extern "C" {
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
M2C_UNK add_entry__11TMotorcycleFsiiff(int, int, int, f32, f32);
extern RecoveredGlobal_8029CD0C_lbl_8046598C lbl_8046598C;
extern RecoveredGlobal_8029CD0C_lbl_804DC534 lbl_804DC534;
extern u32 TOGrassJungle__data_805D65D8;
extern u32 TOGrassJungle__data_805D65DC;
extern const f32 lbl_805DDD28;
extern const f32 lbl_805DDD2C;
void TOGrassJungle__sub_8029CD0C(void);
}

extern "C" {

void *TOGrassJungle__create(void *arg0);
void release_static_instance__13TOGrassJungleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *TOGrassJungle__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern void *tl_05;

void *TOGrassJungle__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TOGrassJungle__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOGrassJungle__data_805D65D8;
extern u32 TOGrassJungle__data_805D65DC;

void release_static_instance__13TOGrassJungleFv(void) {
    if ((u32) TOGrassJungle__data_805D65DC != 0U) {
        TLobby__sub_803DA16C((void*)TOGrassJungle__data_805D65DC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOGrassJungle__data_805D65DC);
        TOGrassJungle__data_805D65DC = 0U;
    }
    if ((u32) TOGrassJungle__data_805D65D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOGrassJungle__data_805D65D8, 1);
        TOGrassJungle__data_805D65D8 = 0U;
    }
}
void TOGrassJungle__sub_8029CD0C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DC534.value, 0, 0, 0));
    }
    (*(u8 * *)&TOGrassJungle__data_805D65D8) = (unsigned char *) ((void *) var_r0);
    (*(u8 * *)&TOGrassJungle__data_805D65DC) = TLanguage__sub_801E4874((s32) &lbl_8046598C.value);
    add_entry__11TMotorcycleFsiiff((int) (0x3F), (int) (TObjFish__sub_8001EDC4((*(u8 * *)&TOGrassJungle__data_805D65D8), 0)), (int) ((*(u8 * *)&TOGrassJungle__data_805D65DC)), (f32) (lbl_805DDD28), (f32) (lbl_805DDD2C));
}

}
