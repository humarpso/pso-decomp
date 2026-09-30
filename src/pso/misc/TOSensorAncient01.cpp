#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 { M2C_UNK value; u8 remaining[0x6C]; };

struct Model_80175D0C { u8 pad[0xC]; s32 c; };

struct Obj_80175D0C { u8 pad[0x42C]; Model_80175D0C *model; };

struct Buf_80175D0C { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
M2C_UNK init_switch_id__5TOKeyFPv(void *);
s32 TOSensor__ct(void *);
extern M2C_UNK __vt__17TOSensorAncient01[];
extern s32 lbl_805D3148;
extern u32 lbl_805D5A88;
extern const f32 lbl_805DB990;
extern const f32 lbl_805DB998;
extern const f32 lbl_805DB9A8;
extern const f32 lbl_805DB9AC;
u8 *TOSensorAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_804429E8[];
extern u8 lbl_80442A00[];
extern u8 lbl_80442A18[];
extern u8 lbl_804B41F0[];
extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;
extern s32 lbl_805D5A90;
extern s32 lbl_805D5A94;
extern s32 lbl_805D5A98;
extern s32 lbl_805D5A9C;
void TOSensorAncient01__sub_80175D0C(void);
}

extern "C" {

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1);
void *create__17TOSensorAncient01FPv(void *arg0);
void destroy__17TOSensorAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__8TOSensorFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void *create__17TOSensorAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSensorAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;

void destroy__17TOSensorAncient01Fv(void) {
    if ((void *) lbl_805D5A8C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0xC));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 8));
        if ((void *) lbl_805D5A8C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A8C);
            lbl_805D5A8C = NULL;
        }
    }
    if ((u32) lbl_805D5A88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A88, 1);
        lbl_805D5A88 = 0U;
    }
}

extern M2C_UNK __vt__17TOSensorAncient01[];

void TOSensorAncient01__sub_80175D0C(void) {
    void *p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = TLobby__sub_80020004(p, 1, lbl_804B41F0, 0, 0, 0);
    }
    lbl_805D5A88 = (u32)p;
    lbl_805D5A8C = alloc_buffer__11TOBoss4RockFPv(0x10);
    ((Buf_80175D0C *)lbl_805D5A8C)->b = ((Obj_80175D0C *)lbl_805D5A88)->model->c;
    ((Buf_80175D0C *)lbl_805D5A8C)->a = TLanguage__sub_801E4874(lbl_804429E8);
    ((Buf_80175D0C *)lbl_805D5A8C)->d = TLanguage__sub_801E4874(lbl_80442A00);
    ((Buf_80175D0C *)lbl_805D5A8C)->c = TLanguage__sub_801E4874(lbl_80442A18);
    lbl_805D5A90 = 0;
    lbl_805D5A94 = 0;
    lbl_805D5A98 = 0;
    lbl_805D5A9C = 0;
}

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorAncient01;
        __dt__8TOSensorFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
u8 *TOSensorAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    TOSensor__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 *)&__vt__17TOSensorAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3148;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    } else if (temp_r0 >= 2) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    }
    M2C_FIELD(arg0, u8 **, 0x34) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A88), u8 **, 0x42C), void **, 8));
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A88), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB998);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB998;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB9A8;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (lbl_805DB9AC + M2C_FIELD(arg0, f32 *, 0x68));
    if (M2C_FIELD(arg0, f32 *, 0xCC) < lbl_805DB990) {
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB990;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = 0x78;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB990;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    return arg0;
}
#pragma pop

}
