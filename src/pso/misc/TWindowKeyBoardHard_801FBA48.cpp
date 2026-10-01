#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 TObjPlayer__sub_803D99F8(void *, void *);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
s32 TOSignCave03__sub_803DB510(int);
void fn_801FBA6C(u8 *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
void render_tick__Fv();
void TAdSinglePlyChrSelectGC__sub_801FCD74();
s32 TAdSinglePlyChrSelectGC__sub_801FBEF4(s32 arg0);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C134(void *, void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C264(void *);
void TAdSinglePlyChrSelectGC__sub_8007C378(void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C48C(void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 TAdSinglePlyChrSelectGC__sub_80202A68(void *);
void TAdSinglePlyChrSelectGC__sub_80202A74(void *, s32);
void TAdSinglePlyChrSelectGC__sub_80202C68(void *, void *);
void *TAdSinglePlyChrSelectGC__sub_8020310C(void *);
extern u8 lbl_8051381C[];
extern s32 lbl_80513910[];
void TAdSinglePlyChrSelectGC__sub_801FBC3C(void *arg0);
}

extern "C" {

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

int is_card_flag_set__19TWindowKeyBoardHardFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 1); }
void fn_801FBA6C(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *var_r30;
    var_r30 = (u8 *)(arg0);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        TObjPlayer__sub_803D9B2C();
        if (!(temp_r31 & 1)) {
            TOHangerMachine01__sub_803D9C00((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            TObjPlayer__sub_803D99F8((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            TBoss7Tentacle__sub_803D9BA0((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 0x100000)) {
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
        }
        if (!(temp_r31 & 8)) {
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(var_r30, s32 *, 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r3 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r3 != NULL) {
                fn_801FBA6C(temp_r3);
            }
        }
        TObjPlayer__sub_803D9B78();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

void TAdSinglePlyChrSelectGC__sub_801FBC3C(void *arg0) {
    void *a;
    void *b;
    a = alloc__23TAdSinglePlyChrSelectGCFPv(0x194B0);
    if (a != 0) {
        a = TAdSinglePlyChrSelectGC__sub_8020310C(a);
    }
    b = alloc__23TAdSinglePlyChrSelectGCFPv(0x194B0);
    if (b != 0) {
        b = TAdSinglePlyChrSelectGC__sub_8020310C(b);
    }
    TAdSinglePlyChrSelectGC__sub_80202C68(a, arg0);
    TAdSinglePlyChrSelectGC__sub_8007C48C(lbl_8051381C, lbl_80513910[1]);
    TAdSinglePlyChrSelectGC__sub_8007C264(lbl_8051381C);
    TAdSinglePlyChrSelectGC__sub_8007C134(lbl_8051381C, a, b, 0x194B0);
    TAdSinglePlyChrSelectGC__sub_80202C68(arg0, b);
    TAdSinglePlyChrSelectGC__sub_80202A74(b, 1);
    TAdSinglePlyChrSelectGC__sub_80202A74(a, 1);
    TAdSinglePlyChrSelectGC__sub_8007C48C(lbl_8051381C, lbl_80513910[0]);
    TAdSinglePlyChrSelectGC__sub_8007C0CC(lbl_8051381C, arg0, 0x194B0);
    TAdSinglePlyChrSelectGC__sub_8007C48C(lbl_8051381C, TAdSinglePlyChrSelectGC__sub_80202A68(arg0));
    TAdSinglePlyChrSelectGC__sub_8007C378(lbl_8051381C, arg0, 0x194AC);
}

s32 TAdSinglePlyChrSelectGC__sub_801FBEF4(s32 arg0) {
    while (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) {
        if (TAdPlayerLoadGC__sub_801E1E38(arg0) != 1) {
            return 0;
        }
        TAdSinglePlyChrSelectGC__sub_801FCD74();
        render_tick__Fv();
    }
    return 1;
}

}
