#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjCityAreaWarp__vt18(void* p);
void render__16TObjCityAreaWarpFv(void* p);

int is_main_phase_15__9TObjEneDDFv(void*);
int do_warp__16TObjCityAreaWarpFPv(void*);

int TObjCityAreaWarp__vt18(void* p) { return do_warp__16TObjCityAreaWarpFPv(p); }
void render__16TObjCityAreaWarpFv(void* p) { if (is_main_phase_15__9TObjEneDDFv(p) != 0) { do_warp__16TObjCityAreaWarpFPv(p); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x80185AC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityAreaWarp__vt17(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s16 TLobby__data_805D5CE8;

void TObjCityAreaWarp__vt17(void) {
    TBoss3Volopt__sub_8022675C(0x40003205, 0, 0, 0);
    TLobby__data_805D5CE8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185B58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase80185B58 { char pad[0x18]; };
struct VObj80185B58 : VBase80185B58 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void do_warp__16TObjCityAreaWarpFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void do_warp__16TObjCityAreaWarpFPv(u8 *arg0) {
    if (((VObj80185B58 *) arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x18), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x34), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185C7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityAreaWarp__vt13(void *arg0, s16 arg1);

M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, s16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

void TObjCityAreaWarp__vt13(void *arg0, s16 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, arg1);
        TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TAdSinglePlyChrSelectGC__sub_80132F2C(9, 0x24), 0xA, 0, -1);
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185D14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjCityAreaWarpFPv(void *arg0);
void *__dt__16TObjCityAreaWarpFv(void *arg0, s16 arg1);
void *TObjCityAreaWarp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjCityAreaWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjCityAreaWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__16TObjCityAreaWarp[];

void *__dt__16TObjCityAreaWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityAreaWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80185DB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityAreaWarp__ct(void *arg0);
void TObjAreaWarp__ct(void *);

extern const f32 lbl_805DBC8C;
extern M2C_UNK __vt__16TObjCityAreaWarp[];
extern const f32 lbl_805DBC90;
extern void *lbl_805D32AC;

void *TObjCityAreaWarp__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityAreaWarp;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D32AC;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DBC8C;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBC90;
    M2C_FIELD(arg0, u32 *, 0xBC) = 15;
    return arg0;
}

}
#endif
#endif
