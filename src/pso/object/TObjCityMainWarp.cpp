#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase80185EC8_80185EC8 { char pad[0x18]; };
struct VObj80185EC8_80185EC8 : VBase80185EC8_80185EC8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Base_80186030_80185EC8 { char pad[0x18]; };
struct VObj_80186030_80185EC8 : Base_80186030_80185EC8 {
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
};

extern "C" {

void TObjCityMainWarp__sub_80186634(void);
void TObjCityMainWarp__vt12(void* p);
s32 TObjCityMainWarp__vt14(s32 arg0);
void TObjCityMainWarp__vt16(void *arg0);
void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1);
void clear_active_bit__16TObjCityMainWarpFv(void);
void *create__16TObjCityMainWarpFPv(void *arg0);
void render__16TObjCityMainWarpFv(u8 *arg0);
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_8030A7B0();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
void *TObjCityMainWarp__ct(void *, void *, void *);
s32 TObjCityMainWarp__sub_80186A3C();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
int TObjWarpBase__vt12(void*);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
int clear_flag__11TWindowCtrlFv(void);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 is_warp_enabled__12TObjAreaWarpFi(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC98;

void render__16TObjCityMainWarpFv(u8 *arg0) {
    if (((VObj80185EC8_80185EC8 *) arg0)->m8(lbl_805DBC80, lbl_805DBC98) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

s32 TObjCityMainWarp__vt14(s32 arg0) {
    if ((TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 0)) {
        return 0;
    }
    return is_warp_enabled__12TObjAreaWarpFi(arg0);
}

void TObjCityMainWarp__vt16(void *arg0) {
    struct VObj_80186030_80185EC8 *o = (struct VObj_80186030_80185EC8 *)arg0;
    o->m15();
}

void TObjCityMainWarp__vt12(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); } }

extern void *tl_05;

void *create__16TObjCityMainWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x154);
    if (o != NULL) {
        o = TObjCityMainWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TObjCityMainWarp[];

void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityMainWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjCityMainWarp__data_805D5B50;

void TObjCityMainWarp__sub_80186634(void) { TObjCityMainWarp__data_805D5B50 = 0; }

void clear_active_bit__16TObjCityMainWarpFv(void) {
    s32 temp_r3;

    temp_r3 = TObjCityMainWarp__sub_80186A3C();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 &= ~(1 << temp_r3);
    }
}

}
