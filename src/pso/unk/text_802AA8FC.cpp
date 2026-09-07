#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AA934_lbl_804DDFC0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA934_lbl_804DDFC0_size[sizeof(RecoveredGlobal_802AA934_lbl_804DDFC0) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802AA9DC___vt__12TOMekaFish00 { M2C_UNK value; u8 remaining[0x3C]; };

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802AA934_lbl_804DDFC0 lbl_804DDFC0;
extern u32 TOMekaFish00__data_805D66D8;
void TOMekaFish00__sub_802AA934(void);
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TODragonfly__ct(void *);
s32 rand__11TOBoss4RockFv(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern M2C_UNK __vt__12TOMekaFish00[];
extern s32 lbl_805D3E40;
extern u32 TOMekaFish00__data_805D66D8;
extern const f32 lbl_805DE068;
extern const f32 lbl_805DE06C;
extern const f32 lbl_805DE070;
extern const f32 lbl_805DE074;
extern const f32 lbl_805DE078;
extern const f32 lbl_805DE07C;
extern const f32 lbl_805DE080;
extern const f32 lbl_805DE084;
u8 *TOMekaFish00__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1);
s32 is_phase_reached__14TBoss6PlotFalzFv(void);
void release_static_instance__12TOMekaFish00Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
s32 get_phase__8TObjFishFPv(void*);

extern u32 TOMekaFish00__data_805D66D8;

void release_static_instance__12TOMekaFish00Fv(void) {
    if ((u32) TOMekaFish00__data_805D66D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish00__data_805D66D8, 1);
        TOMekaFish00__data_805D66D8 = 0U;
    }
}

extern M2C_UNK __vt__12TOMekaFish00[];

void TOMekaFish00__sub_802AA934(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DDFC0.value, 0, 0, 0));
    }
    (*(s32 *)&TOMekaFish00__data_805D66D8) = var_r0;
}

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMekaFish00;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TBoss6PlotFalz__data_805D66EC;

#pragma push
#pragma fp_contract on
u8 *TOMekaFish00__ct(u8 *arg0, s32 arg1) {
    TODragonfly__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802AA9DC___vt__12TOMekaFish00 *)&__vt__12TOMekaFish00).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E40;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, s32 *, 0xBC) = TObjFish__sub_8001ED9C((*(u8 * *)&TOMekaFish00__data_805D66D8), 0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xBC), u32 *, 4) - lbl_805DE068);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DE06C;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DE070;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) ((lbl_805DE074 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) + lbl_805DE068);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (lbl_805DE078 * (lbl_805DE07C / (lbl_805DE080 / M2C_FIELD(arg0, f32 *, 0xF4))));
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (lbl_805DE078 * (lbl_805DE07C * (lbl_805DE084 * (f32) rand__11TOBoss4RockFv())));
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) ((lbl_805DE074 * (f32) M2C_FIELD(arg0, s32 *, 0x88)) + lbl_805DE068);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xFC)));
    return arg0;
}
#pragma pop

s32 is_phase_reached__14TBoss6PlotFalzFv(void) {
    u32 p = TBoss6PlotFalz__data_805D66EC;
    if (!p) {
        return 0;
    }
    return get_phase__8TObjFishFPv((void*)TBoss6PlotFalz__data_805D66EC) >= 7 ? 1 : 0;
}

}
