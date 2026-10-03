#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Player_802AAE78 { u8 pad[0x32C]; s16 f32c; };

struct VBase_18_a328de { char pad[0x18]; };

struct VObj_18_a328de : VBase_18_a328de {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual M2C_UNK m73();
};

extern "C" {
extern u16 lbl_80540B28[];
u16 TBoss6PlotFalz__sub_802AAE48(s32 i);
Player_802AAE78 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
extern u16 lbl_80540B28[];
extern s32 lbl_805D586C;
s32 TBoss6PlotFalz__sub_802AAE78(void);
s32 obj_isState2_324(void *);
s16 obj_getS16_32C(void *);
M2C_UNK TObjPlayer__sub_801B1E54(int, s32, s16);
u8 *get_player_by_client_id(s32);
M2C_UNK calc_photon_blast_charge__10TObjPlayerFv(void *, s32);
s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AAD84(s32 arg0, u32 arg1);
}

extern "C" {

s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
s32 is_state_1f__14TBoss6PlotFalzFUi();

s32 TBoss6PlotFalz__sub_802AAD84(s32 arg0, u32 arg1) {
    u32 v;
    u8 *p;
    s32 hp;
    u16 id;
    id = arg0;
    v = arg1;
    if (id == 0xFFFF || (p = get_player_by_client_id(id)) == NULL || is_active__14TBoss6PlotFalzFPv(p) == 0) {
        return 0;
    }
    hp = obj_getS16_32C(p);
    if ((u32)hp < v) {
        v = hp;
    }
    if (obj_isState2_324(p) != 0) {
        return v;
    }
    hp -= v;
    TObjPlayer__sub_801B1E54(0xFFFF, arg0, hp);
    calc_photon_blast_charge__10TObjPlayerFv(p, v);
    ((VObj_18_a328de *)p)->m73();
    return v;
}

u16 TBoss6PlotFalz__sub_802AAE48(s32 i) {
    if (i < 0 || i >= 4) return 0xFFFF;
    return lbl_80540B28[i];
}

s32 TBoss6PlotFalz__sub_802AAE78(void) {
    s32 vals[4];
    s32 i;
    s32 j;
    s32 n;
    Player_802AAE78 *p;
    s32 t;
    s32 k;
    u16 s;
    for (i = 0; i < 4; i++) {
        lbl_80540B28[i] = 0xFFFF;
        vals[i] = -1;
    }
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && is_active__14TBoss6PlotFalzFPv(p) != 0 && p->f32c != 0) {
            lbl_80540B28[n] = obj_getField1c(p);
            vals[n] = p->f32c;
            n++;
        }
    }
    for (i = 2; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            k = j + 1;
            if (vals[j] < vals[k]) {
                t = vals[j];
                vals[j] = vals[k];
                vals[k] = t;
                s = lbl_80540B28[j];
                lbl_80540B28[j] = lbl_80540B28[k];
                lbl_80540B28[k] = s;
            }
        }
    }
    return n;
}

s32 is_active__14TBoss6PlotFalzFPv(void *arg0) {
    if ((is_state_1f__14TBoss6PlotFalzFUi() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000800)) {
        return 1;
    }
    return 0;
}

}
