#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1);
f32 fn_8013157C(s32, s32);
s32 fn_801A2340(s32, f32, f32);

extern s32 lbl_805D4DF0;

s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        return 1;
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029B174
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK set_indexed_flags(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f64 lbl_80465410;

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((arg1 != NULL) && ((s16) *arg1 == 1)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        if (arg2 == 0) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - 1);
            set_indexed_flags((M2C_UNK)arg0, 0, 8);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC));
                M2C_FIELD(arg0, u32 *, 0xDC) = 0U;
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029B324
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TODoorJungleMain__create(void *arg0);
void *TODoorJungleMain__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TODoorJungleMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TODoorJungleMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029B370
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_resources__16TODoorJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;

void free_static_resources__16TODoorJungleMainFv(void) {
    if ((u32) lbl_805D65BC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65BC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65BC);
        lbl_805D65BC = 0U;
    }
    if ((u32) TODoorJungleMain__data_805D65B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorJungleMain__data_805D65B8, 1);
        TODoorJungleMain__data_805D65B8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029B8A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__16TODoorJungleMain[];

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorJungleMain;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
