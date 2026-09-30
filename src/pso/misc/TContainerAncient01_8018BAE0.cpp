#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Param_8018BB64 { s32 a; s32 b; s32 c; s32 d; };

struct Res_8018BB64 { u8 pad[0x430]; s32 x430; };

extern "C" {
s32 TObjFish__sub_8001EDB0(u32, int);
s32 TObjFish__sub_8001EDC4(u32, int);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TContainerAncient01__sub_8020335C();
void spawn_attack__16TObjEneMe3StelthFsiiiff(s16, s32, s32, Param_8018BB64 *, f32, f32);
extern Param_8018BB64 lbl_80445084[];
extern u8 lbl_804B6D88[];
extern u8 lbl_804B6DB0[];
extern s32 lbl_8050DC68[];
extern u32 TContainerAncient01__data_805D5B90;
extern const f32 TContainerAncient01__data_805DBD14;
extern const f32 TContainerAncient01__data_805DBD20;
void TContainerAncient01__sub_8018BB64(void);
}

extern "C" {

void *create__19TContainerAncient01FPv(void *arg0);
void release_static_resource__19TContainerAncient01Fv(void);
void *TContainerAncient01__ct(void *, void *, void *);
void TLobby__sub_8001FE7C(void*, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__19TContainerAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x370);
    if (o != NULL) {
        o = TContainerAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TContainerAncient01__data_805D5B90;

void release_static_resource__19TContainerAncient01Fv(void) {
    if ((u32) TContainerAncient01__data_805D5B90 != 0U) {
        TLobby__sub_8001FE7C((void*)TContainerAncient01__data_805D5B90, 1);
        TContainerAncient01__data_805D5B90 = 0U;
    }
}
void TContainerAncient01__sub_8018BB64(void) {
    void *p;
    TContainerAncient01__data_805D5B90 = 0;
    if (TContainerAncient01__sub_8020335C() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B6DB0, 0, 0, 0);
        }
        lbl_8050DC68[0] = 0x230;
        TContainerAncient01__data_805D5B90 = (u32)p;
        lbl_8050DC68[1] = 0x231;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B6D88, 0, 0, 0);
        }
        lbl_8050DC68[0] = 0x45;
        TContainerAncient01__data_805D5B90 = (u32)p;
        lbl_8050DC68[1] = 0x46;
    }
    Param_8018BB64 prm = lbl_80445084[0];
    prm.a = ((Res_8018BB64 *)TContainerAncient01__data_805D5B90)->x430;
    spawn_attack__16TObjEneMe3StelthFsiiiff(0x3B, TObjFish__sub_8001EDC4(TContainerAncient01__data_805D5B90, 0),
                                            TObjFish__sub_8001EDB0(TContainerAncient01__data_805D5B90, 0), &prm,
                                            TContainerAncient01__data_805DBD20, TContainerAncient01__data_805DBD14);
}

}
