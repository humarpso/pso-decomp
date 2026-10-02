#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80322994___vt__13TBoss6Kakusan { M2C_UNK value; u8 remaining[0x14]; };

struct V3_80322644 { f32 x; f32 y; f32 z; };

struct Obj_80322644 { u8 pad[0x30]; V3_80322644 pos; };

struct Vec_803226C0 { f32 x, y, z; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6Type1__sub_80322AE0(s32 arg0, u8 *arg1, u8 *arg2, s16 arg3, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
u32 create_particle_emitter(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern M2C_UNK __vt__13TBoss6Kakusan[];
extern s32 lbl_805D4160;
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF53C;
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 lbl_805DF52C;
extern const f32 lbl_805DF530;
extern const f32 lbl_805DF534;
s32 TBoss6Kakusan__sub_80322644(Obj_80322644 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void copy_vec3__11TBoss4Type2FPvPv(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 query_teammate_state__9TObjEneDDFPv();
void direction_to_rotation_xz(void *, void *, void *);
u32 get_player_by_client_id(s32);
s32 is_active__14TBoss6PlotFalzFPv();
void TBoss6Kakusan__sub_80322438(u8 *arg0);
int TBoss6Kakusan__sub_8032263C(void);
void TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern s32 lbl_805D6C28;
extern u8 lbl_805D6C2C;
extern s32 lbl_805D6C30;
extern u8 lbl_805D6C34;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF538;
s32 TBoss6Kakusan__sub_80322644(Obj_80322644 *arg0);
void run_task__13TBoss6KakusanFv(u8 *arg0);
}

extern "C" {

int TBoss6Kakusan__sub_8032263C(void);
void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1);
void render__13TBoss6KakusanFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void render__15TAdLdQuestPrtGCFv(void);
void request_destroy__11TBoss4Type2FUi(void *);

int TBoss6Kakusan__sub_8032263C(void) { return 0; }

s32 TBoss6Kakusan__sub_80322644(Obj_80322644 *arg0) {
    if (arg0->pos.y < lbl_805DF52C || arg0->pos.y > lbl_805DF530) {
        return 1;
    }
    V3_80322644 v = arg0->pos;
    v.y = TBoss6Kakusan__data_805DF518;
    return TBoss6Kakusan__sub_803D8BD8(&v) > lbl_805DF534;
}

void render__13TBoss6KakusanFv(void) {  }

extern M2C_UNK __vt__13TBoss6Kakusan[];

void run_task__13TBoss6KakusanFv(u8 *arg0) {
    Vec_803226C0 v;
    Vec_803226C0 w;
    Vec_803226C0 b;
    Vec_803226C0 a;
    f32 speed;
    u8 *pl;
    if (check_demo_mode__10TObjPlayerFv() != 0) return;
    if (query_teammate_state__9TObjEneDDFPv() != 0) return;
    VecCopy__FP3VecPC3Vec(arg0 + 0x48, arg0 + 0x30);
    if ((s8)lbl_805D6C2C == 0) {
        lbl_805D6C28 = 7;
        lbl_805D6C2C = 1;
    }
    if ((s8)lbl_805D6C34 == 0) {
        lbl_805D6C30 = 0x25;
        lbl_805D6C34 = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) >= lbl_805D6C28 && M2C_FIELD(arg0, s32 *, 0x2C) <= lbl_805D6C30) {
        speed = TBoss6Kakusan__sub_803D8BD8(arg0 + 0x3C);
        if (!(speed <= TBoss6Kakusan__data_805DF51C)) {
            pl = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x20));
            if (is_active__14TBoss6PlotFalzFPv() != 0) {
                VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
                v.y += lbl_805DF538;
                TBoss6Type1__sub_803D9370(&v, arg0 + 0x30);
                if (!(TBoss6Kakusan__sub_803D8BD8(&v) <= TBoss6Kakusan__data_805DF51C)) {
                    TNpcPlayer__sub_803D97B4(&v);
                    v.x *= M2C_FIELD(arg0, f32 *, 0x28);
                    v.y *= M2C_FIELD(arg0, f32 *, 0x28);
                    v.z *= M2C_FIELD(arg0, f32 *, 0x28);
                    VecCopy__FP3VecPC3Vec(&w, arg0 + 0x3C);
                    TNpcPlayer__sub_803D97B4(&w);
                    TBoss4Zako__sub_803D8910(&v, &w);
                    if (!(TBoss6Kakusan__sub_803D8BD8(&v) <= TBoss6Kakusan__data_805DF51C)) {
                        TNpcPlayer__sub_803D97B4(&v);
                        v.x *= speed;
                        v.y *= speed;
                        v.z *= speed;
                        VecCopy__FP3VecPC3Vec(arg0 + 0x3C, &v);
                    }
                }
            }
        }
    }
    TBoss4Zako__sub_803D8910(arg0 + 0x30, arg0 + 0x3C);
    if (M2C_FIELD(arg0, void **, 0x54) != NULL) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x54), arg0 + 0x30);
        VecCopy__FP3VecPC3Vec(&a, arg0 + 0x30);
        TBoss6Type1__sub_803D9370(&a, arg0 + 0x48);
        direction_to_rotation_xz(&a, &b.x, &b.z);
        *(s32 *)&b.y = 0;
        copy_vec3__11TBoss4Type2FPvPv(M2C_FIELD(arg0, void **, 0x54), &b);
    }
    if (TBoss6Kakusan__sub_80322644((Obj_80322644 *)arg0) != 0 || ((int (*)(void *))TBoss6Kakusan__sub_8032263C)(arg0) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TBoss6Kakusan__sub_80322438(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) += 1;
}

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TBoss6Kakusan;
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0) {
    f32 temp_f2;
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80322994___vt__13TBoss6Kakusan *)&__vt__13TBoss6Kakusan).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4160;
    M2C_FIELD(arg0, s16 *, 0x20) = arg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    if (M2C_FIELD(arg0, f32 *, 0x24) <= TBoss6Kakusan__data_805DF518) {
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3C), (void *) (arg3));
    if (TBoss6Kakusan__sub_803D8BD8((void *) (arg0 + 0x3C)) <= TBoss6Kakusan__data_805DF51C) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x30), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x48), (void *) (arg0 + 0x30));
    temp_f2 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2B), f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) temp_f2;
    if (TBoss6Kakusan__data_805DF518 == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x14;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 0x10);
    if (M2C_FIELD(arg0, f32 *, 0x28) < TBoss6Kakusan__data_805DF518) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) TBoss6Kakusan__data_805DF518;
    }
    M2C_FIELD(arg0, u32 *, 0x54) = create_particle_emitter((void *) (arg0 + 0x30), (int) (0x214));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
#pragma pop

u8 *TBoss6Type1__sub_80322AE0(s32 arg0, u8 *arg1, u8 *arg2, s16 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x58));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TBoss6Kakusan__ct((u8 *)(temp_r3), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3, farg0));
    }
    return var_r0;
}

}
