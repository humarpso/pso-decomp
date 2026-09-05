#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss4Type2__vt2(void *arg0);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
extern f32 lbl_805D8BB0;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type2__vt2(void *arg0);
M2C_UNK TBoss4Type2__sub_80056F90(void *, int, int);
void TBoss4Type2__vt1(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK TBoss4Type2__sub_80056A54(void *);
M2C_UNK TBoss4Type2__sub_80056B3C(void *, int, int);
M2C_UNK TBoss4Type2__sub_80056F90(void *, int, int);
s32 TBoss4Type2__sub_80057224(void *);
extern const f32 lbl_805D8BE4;
void TBoss4Type2__sub_80056998(u8 *arg0);
M2C_UNK TBoss4Type2__sub_80056FEC(void *, int);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
void TBoss4Type2__vt3(u8 *arg0);
}

extern "C" {

void TBoss4Type2__sub_80057578(void* p);
void TBoss4Type2__sub_80058208(void);
void TBoss4Type2__sub_8005820C(void);
void TBoss4Type2__sub_80058210(void);
void TBoss4Type2__sub_80058214(void);
void TBoss4Type2__sub_80058218(void);
void TBoss4Type2__sub_8005821C(void);
void TBoss4Type2__sub_80058220(void);
void TBoss4Type2__vt0(void *arg0);
void TBoss4Type3__vt40(void* p);
void TBoss4Type3__vt41(void *arg0);
int TBoss4Type3__vt43(void);
int TBoss4Type3__vt44(void);
int TBoss4Type3__vt45(void);
void advance_afterimage__11TBoss4Type2FPv(u8 *arg0);
void apply_resta_heal__11TBoss4Type2FPv(void *arg0);
f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0);
s32 create__11TBoss4Type2Fi(s32 arg0);
void init_hanger__11TBoss4Type2FPv(void* p);
void init_state__11TBoss4Type2FPv(u8 *arg0);
void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss4Type2__ct(s32, s32, s32);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
int TBoss4Type2__sub_80057270(void*);
void TBoss4Type2__vt4(void* p);
void TBoss4Type2__vt5(void);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type3__sub_80059F64(void *, M2C_UNK);
f32 TBoss8Dragon__sub_803D64DC(s32);
int TOHangerMachine01__sub_803D9C00(void*);
s32 TObjControl__ct(s32, s32);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
f32 TTecResta__sub_802394B0(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK, void *);
int end_effect_render__13TParticleCtrlFv(void);
M2C_UNK fn_80052420(u16, s32);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);
int toggle_particle_effect__10TObjPlayerFv(void*);

void TBoss4Type2__vt3(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss4Type2__sub_80056FEC((void *)(arg0), (int) (2));
        return;
    }
    TBoss4Type2__sub_80057048((void *)((void *)(arg0)), (M2C_UNK)((int) (9)));
}

void TBoss4Type2__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048(arg0, 1);
    }
}

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt1(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        TBoss4Type2__sub_80056F90((void *) (arg0), (int) (4), (int) (TBoss4Type2__sub_80057224(arg0)));
    }
}

void TBoss4Type2__vt0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

void apply_resta_heal__11TBoss4Type2FPv(void *arg0) {
    s16 temp_r31;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x2B0);
    temp_r31 = M2C_FIELD(temp_r4, s16 *, 2);
    fn_80052420(M2C_FIELD(arg0, u16 *, 0x3C4), (temp_r31 / 5) + (s32) TTecResta__sub_802394B0(M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x37, temp_r4), s32 *, 0x1C)));
}

extern const f32 lbl_805D8BF4;
extern const f32 lbl_805D8BF8;

void TBoss4Type2__sub_80056998(u8 *arg0) {
    s32 temp_r3;
    s32 var_r4;
    s32 var_r5;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3E0) < 3) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4)) {
        TBoss4Type2__sub_80056F90((void *)((void *) (arg0)), (int)((int) (4)), (int)((void *) (TBoss4Type2__sub_80057224((void *)((void *) (arg0))))));
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) < lbl_805D8BE4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x424);
        var_r5 = temp_r3 + 1;
        var_r4 = temp_r3;
        if (var_r5 < temp_r3) {
            var_r4 = var_r5;
            var_r5 = temp_r3;
        }
        if (var_r4 < 9) {
            var_r4 = 9;
        }
        if (var_r5 > 0xC) {
            var_r5 = 0xC;
        }
        TBoss4Type2__sub_80056B3C((void *) (arg0), (int) (var_r4), (int) (var_r5));
        return;
    }
    TBoss4Type2__sub_80056A54((void *) (arg0));
}

void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8BF8);
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8BF4 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8BF8);
}

extern const f32 TBoss4Type2__data_805D8BD8;
extern const f32 lbl_805D8BFC;
extern const f32 lbl_805D8C00;

f32 compute_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8BFC * (TBoss4Type2__data_805D8BD8 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8C00 * farg0)));
}

void init_hanger__11TBoss4Type2FPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270(p); TObjPlayer__sub_803D9B78(); end_effect_render__13TParticleCtrlFv(); }

extern const f32 lbl_805D8C18;

void advance_afterimage__11TBoss4Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C18);
}

void TBoss4Type2__sub_80057578(void* p) { init_hanger__11TBoss4Type2FPv((void*)(p)); }

void set_state3_unless_2or3__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if ((temp_r0 != 3) && (temp_r0 != 2)) {
        TBoss4Type2__sub_80057048(arg0, 3);
    }
}

extern const f32 TBoss4Type2__data_805D8BD8;

void init_state__11TBoss4Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) TBoss4Type2__data_805D8BD8;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    TBoss3Volopt__sub_8022675C(0x4003B723, arg0 + 0x38, 0, 1, arg0);
}

extern s32 tl_04;

s32 create__11TBoss4Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x474);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type2__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void TBoss4Type2__sub_80058208(void) {  }
void TBoss4Type2__sub_8005820C(void) {  }
void TBoss4Type2__sub_80058210(void) {  }
void TBoss4Type2__sub_80058214(void) {  }
void TBoss4Type2__sub_80058218(void) {  }
void TBoss4Type2__sub_8005821C(void) {  }
void TBoss4Type2__sub_80058220(void) {  }

int TBoss4Type3__vt45(void) { return 0; }
int TBoss4Type3__vt44(void) { return 0; }
int TBoss4Type3__vt43(void) { return 0; }

extern const f32 lbl_805D8C3C;

void TBoss4Type3__vt41(void *arg0) {
    s32 temp_r0;

    u16 v = M2C_FIELD(arg0, u16 *, 0x3BA);
    if ((v != 0xFFFF) && (TBoss4Type3__sub_8005254C(v) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFF;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFF;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3BC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3BC);
        if ((temp_r0 >= 5) || ((temp_r0 >= 2) && (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D8C3C))) {
            TBoss4Type3__sub_80059F64(arg0, 9);
            return;
        }
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

void TBoss4Type3__vt40(void* p) { *(s32*)((char*)p + 0x52c) = 0; *(s32*)((char*)p + 0x398) = 147; }

}
