#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_8019DA54_8019D964 { char pad[0x18]; };
struct VObj_8019DA54_8019D964 : Base_8019DA54_8019D964 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *TObjWarpBase__vt0(void *arg0, s16 arg1);
void TObjWarpBase__vt12(void *arg0);
void free_globals__12TObjWarpBaseFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TWindow__close(u32);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK fn_8019DD24(s32, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void TObjWarpBase__vt12(void *arg0) {
    u32 temp_r3;

    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0xB0);
    if (temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xB8));
        if (temp_r3 != 0U) {
            fn_8019DD24(temp_r3 + 0x550, 4);
        }
        M2C_FIELD(arg0, u16 *, 0xB8) = 0xFFFFU;
    }
}

extern M2C_UNK __vt__12TObjWarpBase[];

void *TObjWarpBase__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_8019DA54_8019D964 *o = (struct VObj_8019DA54_8019D964 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpBase;
        o->m12();
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D5C78;
extern u32 lbl_805D5C7C;

void free_globals__12TObjWarpBaseFv(void) {
    if ((u32) lbl_805D5C7C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C7C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C7C);
        lbl_805D5C7C = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D5C78, 1);
    lbl_805D5C78 = 0;
}

}
