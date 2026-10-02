#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct Obj_80056F38 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; };

struct Obj_80056F90 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; u8 pad3b4[0x10]; u16 f3c4; };

struct Obj_80056FEC { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[8]; s32 f3ac; s32 f3b0; u8 pad3b4[0x10]; u16 f3c4; };

struct Obj_80057224 { u8 pad[0x3A0]; s32 f3a0; };

struct S_800578E8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x42c - 0x398];
    void *ptr[8];
    void *f44c;
};

struct S_80058224 {
    u8 pad0[0x398];
    s32 f398;
    u8 pad39c[0x3b8 - 0x39c];
    u16 f3b8;
    u16 f3ba;
};

struct S_800582B4 {
    u8 pad0[0x398];
    s32 f398;
    u8 pad39c[0x3b8 - 0x39c];
    u16 f3b8;
    u16 f3ba;
};

typedef s32 M2C_UNK;
struct Vec_8005676C { f32 x, y, z; };

struct Zanzo_8005676C {
    Vec_8005676C pos;
    s32 f0c;
    s32 f10;
    s32 f14;
    s32 f18;
    f32 f1c;
    f32 f20;
    f32 f24;
    s32 f28;
};

struct Row_8005676C {
    s32 a;
    s32 b;
    s32 c[2];
};

struct Obj_8005676C {
    u8 pad0[0x38];
    Vec_8005676C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x390 - 0x64];
    s32 f390;
    u8 pad394[0x3c8 - 0x394];
    s32 f3c8;
    u8 pad3cc[0x3d0 - 0x3cc];
    f32 f3d0;
};

struct Vec_8005683C { f32 x, y, z; };

struct Bishi_8005683C {
    s32 f0;
    s16 id;
    s16 f6;
    s16 f8;
    s16 id2;
    s16 f0c;
    u8 pad0e[6];
    Vec_8005683C pos;
    u8 pad2c[0x20];
};

struct Ofs_8005683C { f32 x, z; };

struct Obj_8005683C {
    u8 pad0[0x38c];
    s32 f38c;
};

struct Obj_80056A54 {
    u8 pad0[0x32c];
    s16 f32c;
    u8 pad32e[0x3ec - 0x32e];
    s32 f3ec;
};

struct Grid_80056A54 {
    f32 x, y, z;
};

struct Row_80057270 {
    s32 a;
    s32 b;
    s32 c[2];
};

struct Obj_80057270 {
    u8 pad0[0x390];
    s32 f390;
    u8 pad394[0x3c0 - 0x394];
    f32 f3c0;
    u8 pad3c4[0x3c8 - 0x3c4];
    s32 f3c8;
    u8 pad3cc[0x3d0 - 0x3cc];
    f32 f3d0;
    u8 pad3d4[0x3e4 - 0x3d4];
    s32 f3e4;
    u8 pad3e8[0x3f0 - 0x3e8];
    f32 f3f0;
    f32 f3f4;
    u8 pad3f8[0x44c - 0x3f8];
    s32 f44c;
};

struct Vec_80056C30 { f32 x, y, z; };

struct O_80056C30 {
    u8 pad0[0x38];
    Vec_80056C30 pos;
};

extern "C" {
void TBoss4Type2__vt2(void *arg0);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
extern f32 lbl_805D8BB0;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type2__vt2(void *arg0);
void TBoss4Type2__vt1(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK TBoss4Type2__sub_80056B3C(void *, int, int);
extern const f32 lbl_805D8BE4;
void TBoss4Type2__sub_80056998(u8 *arg0);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
void TBoss4Type2__vt3(u8 *arg0);
u8 * create_yutai__11TBoss4Type3FPvPvPv(void *, void *, void *);
void TBoss4Type3__vt43(u8 *arg0);
extern RecoveredGlobal_80054530_lbl_80485EC8 TBoss4Type2__data_804867C8;
extern const f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type2__sub_800573AC(u8 *arg0, s32 arg1);
extern RecoveredGlobal_80054530_lbl_80485EC8 TBoss4Type2__data_804867C8;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 lbl_805D8C0C;
extern const f32 lbl_805D8C14;
void TBoss4Type2__sub_800573D8(u8 *arg0);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80056F38(Obj_80056F38 *self, s32 arg1, s32 arg2);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
extern const f32 lbl_805D8BF0;
s32 TBoss4Type2__sub_80057224(Obj_80057224 *self);
void fn_8004AA04(void *);
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
void __dt__9TObjEnemyFv(void *, s32);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
extern u8 lbl_80486924[];
S_800578E8 *TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag);
void TBoss4Type3__sub_80059ABC(void *, u16);
void TBoss4Type3__sub_8005A398(void *, s32);
void spawn_effect__11TBoss4Type3Fsss(s32, s32, s32);
void TBoss4Type3__vt45(S_80058224 *o);
s32 TBoss4Type3__sub_8005254C(u16);
void TBoss4Type3__sub_800599F4(void *, s32, s32);
void TBoss4Type3__vt44(S_800582B4 *o);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001ED9C(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, s32);
void create_zanzo__11TBoss4Type2FPvPv(void *, void *);
extern s32 lbl_804867C0[];
extern RecoveredGlobal_80054530_lbl_80485EC8 TBoss4Type2__data_804867C8;
extern const f32 TBoss4Type2__data_805D8BAC;
extern f32 lbl_805D8BB0;
void TBoss4Type2__sub_8005676C(Obj_8005676C *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32 i);
u16 obj_getField1c(void *);
s32 TBoss4DarkFalz__sub_8004AF5C(s32, s16 *, s16 *);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK create__11TBoss4BishiFi(void *);
extern Ofs_8005683C lbl_804868EC[];
extern u8 TBoss4DarkFalz__data_804FF1E8[];
extern s32 lbl_805D586C;
void TBoss4Type2__sub_8005683C(Obj_8005683C *arg0);
s32 TBoss4Type3__sub_8004AE60(void *);
s32 TBoss4Type2__sub_800522CC(s32 n, f32 *w, s32 *t);
void set_grid_pos__11TBoss4Type2FPvPv(void *arg0, void *arg1);
void TBoss4Type2__sub_80056F38(Obj_80056F38 *self, s32 arg1, s32 arg2);
void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1);
extern u8 __vt__11TBoss4Type2[];
void TBoss4Type2__sub_80056A54(Obj_80056A54 *arg0);
s32 TObjFish__sub_8001ED9C(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, s32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern s32 lbl_804867C0[];
extern RecoveredGlobal_80054530_lbl_80485EC8 TBoss4Type2__data_804867C8;
extern s32 some_id_805c6f74;
extern const f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type2__sub_80057270(Obj_80057270 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *get_player_data__10TObjPlayerFi(s32 i);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TBoss4Type3__sub_8005254C(u16);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TObjPlayer__sub_803E1A58(Vec_80056C30 *, Vec_80056C30 *);
extern const f64 TBoss4Type2__data_80437750;
extern s32 lbl_805D586C;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 lbl_805D8BE8;
extern const f32 lbl_805D8BEC;
extern const f32 lbl_805D8BF0;
void TBoss4Type2__sub_80056C30(O_80056C30 *self, Vec_80056C30 *out);
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
void TBoss4Type2__vt4(void* p);
void TBoss4Type2__vt5(void);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type3__sub_80059F64(void *, M2C_UNK);
f32 TBoss8Dragon__sub_803D64DC(s32);
int TOHangerMachine01__sub_803D9C00(void*);
s32 TObjControl__ct(s32, s32);
int rotate_matrix_y(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
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
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)((void *)(arg0)), (s32)((int) (2)));
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

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt1(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *) (arg0)), (s32)((int) (4)), (s32)((int) (TBoss4Type2__sub_80057224((Obj_80057224 *)(arg0)))));
    }
}

void TBoss4Type2__vt0(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

void TBoss4Type2__sub_8005676C(Obj_8005676C *arg0) {
    Zanzo_8005676C z;
    s32 i;
    VecCopy__FP3VecPC3Vec(&z.pos, &arg0->pos);
    z.f0c = arg0->f60;
    z.f1c = arg0->f3d0;
    z.f20 = lbl_805D8BB0;
    z.f24 = TBoss4Type2__data_805D8BAC;
    z.f28 = 10;
    for (i = 0; i < 2; i++) {
        z.f10 = TObjFish__sub_8001EDB0(arg0->f390, lbl_804867C0[i]);
        z.f14 = TObjFish__sub_8001EDC4(arg0->f390, lbl_804867C0[i]);
        z.f18 = TObjFish__sub_8001ED9C(arg0->f390, ((Row_8005676C *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i]);
        create_zanzo__11TBoss4Type2FPvPv(arg0, &z);
    }
}

void TBoss4Type2__sub_8005683C(Obj_8005683C *arg0) {
    Bishi_8005683C b;
    s32 i;
    s32 j;
    u8 *pl;
    TBoss4DarkFalz__sub_8004B4F0(&b.id, TBoss4DarkFalz__data_804FF1E8);
    b.f0 = arg0->f38c;
    b.f0c = 1;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (pl != 0 && TBoss4Type3__sub_8005254C(obj_getField1c(pl)) != 0) {
            for (j = 0; j < 3; j++) {
                if (TBoss4DarkFalz__sub_8004AF5C(arg0->f38c, &b.id, &b.id2) != 0) {
                    VecCopy__FP3VecPC3Vec(&b.pos, pl + 0x38);
                    b.pos.x += lbl_804868EC[j].x;
                    b.pos.z += lbl_804868EC[j].z;
                    create__11TBoss4BishiFi(&b);
                }
            }
        }
    }
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
        TBoss4Type2__sub_80056F90((Obj_80056F90 *)((void *)((void *) (arg0))), (s32)((int)((int) (4))), (s32)((int)((void *) (TBoss4Type2__sub_80057224((Obj_80057224 *)((void *)((void *) (arg0))))))));
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
    TBoss4Type2__sub_80056A54((Obj_80056A54 *)((void *) (arg0)));
}

void TBoss4Type2__sub_80056A54(Obj_80056A54 *arg0) {
    u8 *tbl = __vt__11TBoss4Type2;
    Grid_80056A54 grid;
    s32 r;
    s32 id;
    id = TBoss4Type3__sub_8004AE60(arg0);
    if (arg0->f32c <= arg0->f3ec && (u16)id != 0xFFFF) {
        r = TBoss4Type2__sub_800522CC(4, (f32 *)(tbl + 0x544), (s32 *)(tbl + 0x554));
    } else {
        r = TBoss4Type2__sub_800522CC(3, (f32 *)(tbl + 0x564), (s32 *)(tbl + 0x570));
    }
    switch (r) {
    case 6:
    case 7:
        TBoss4Type2__sub_80056C30((O_80056C30 *)(arg0), (Vec_80056C30 *)(&grid));
        set_grid_pos__11TBoss4Type2FPvPv(arg0, &grid);
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, r);
        break;
    case 13:
        TBoss4Type2__sub_80056F38((Obj_80056F38 *)arg0, r, id);
        break;
    default:
        TBoss4Type2__sub_80056FEC((Obj_80056FEC *)arg0, r);
        break;
    }
}

#pragma push
#pragma opt_propagation off
void TBoss4Type2__sub_80056C30(O_80056C30 *self, Vec_80056C30 *out) {
    s32 a1;
    O_80056C30 *found;
    s32 i;
    O_80056C30 *p;
    f32 best;
    f32 d;
    f32 s;
    s32 ang;
    s32 b;
    Vec_80056C30 res;
    best = TBoss4Type2__data_805D8BAC;
    found = NULL;
    for (i = 0; i < lbl_805D586C; i++) {
        p = (O_80056C30 *)get_player_data__10TObjPlayerFi(i);
        if (p == NULL) {
            continue;
        }
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        {
            Vec_80056C30 v = p->pos;
            v.y = TBoss4Type2__data_805D8BAC;
            d = TObjPlayer__sub_803E1A58(&v, &self->pos);
            if (d <= lbl_805D8BE8 && d > best) {
                best = d;
                found = p;
                VecCopy__FP3VecPC3Vec(&res, &v);
            }
        }
    }
    if (found != NULL) {
        VecCopy__FP3VecPC3Vec(out, &res);
        return;
    }
    s = lbl_805D8BEC * calc_boss4_scale__10TObjPlayerFi(self);
    a1 = (s32)(TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv(-self->pos.x, -self->pos.z));
    b = (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self));
    ang = b + a1;
    ang -= 0x6000;
    out->x = s * TBoss8Dragon__sub_803D64C0(ang);
    out->y = TBoss4Type2__data_805D8BAC;
    out->z = s * TBoss8Dragon__sub_803D64DC(ang);
}
#pragma pop

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

typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

void TBoss4Type2__sub_80056F38(Obj_80056F38 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((arg2 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056F90(Obj_80056F90 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((arg2 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

void TBoss4Type2__sub_80056FEC(Obj_80056FEC *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | (((self->f3a0 >> 12) & 0xF) << 4) | (((self->f3a0 >> 12) & 0xF) << 8) | ((self->f3ac & 0xF) << 12) | ((self->f3b0 & 0xF) << 16) | ((self->f3c4 & 0xF) << 20));
    }
}

s32 TBoss4Type2__sub_80057224(Obj_80057224 *self) {
    return (s32)(lbl_805D8BF0 * calc_boss4_scale__10TObjPlayerFi(self)) + 0x2000 + self->f3a0;
}

void TBoss4Type2__sub_80057270(Obj_80057270 *arg0) {
    s32 i;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 2; i++) {
        set_global_param__8TObjFishFi(TObjFish__sub_8001EDB0(arg0->f390, lbl_804867C0[i]));
        switch (i) {
        case 1:
            some_id_805c6f74 |= 0x20000;
            TObjEneRe4Sorcerer__sub_801E3F1C(TBoss4Type2__data_805D8BAC, arg0->f3c0);
            TObjFish__sub_800E3074(arg0->f44c);
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(arg0->f390, lbl_804867C0[i]),
                TObjFish__sub_8001ED9C((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i])),
                arg0->f3d0);
            clear_render_callback__8TObjFishFv(arg0->f44c);
            some_id_805c6f74 &= ~0x20000;
            break;
        default:
            TBoss6PlotFalz__sub_802AC008(arg0->f3f0, arg0->f3f4);
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(arg0->f390, lbl_804867C0[i]),
                TObjFish__sub_8001ED9C((s32)(arg0->f390), (s32)(((Row_80057270 *)&TBoss4Type2__data_804867C8)[arg0->f3c8].c[i])),
                arg0->f3d0);
            update_camera_target__14TBoss6PlotFalzFv();
            break;
        }
    }
    clear_global_state__10TObjPlayerFv();
    arg0->f3e4 = 0;
}

void TBoss4Type2__sub_800573AC(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3c8) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
        M2C_FIELD(arg0, s32 *, 0x3dc) = (s32) M2C_FIELD(((u8 *)(&TBoss4Type2__data_804867C8.value) + (arg1 << 0x4)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8005455C_lbl_80485EC8_size[sizeof(RecoveredGlobal_8005455C_lbl_80485EC8) == 0x1E0 ? 1 : -1];
void TBoss4Type2__sub_800573D8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3d8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3d0) + M2C_FIELD(arg0, f32 *, 0x3d4));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3dc);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3d0);
        if (temp_f1 >= lbl_805D8C0C) {
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) (temp_f1 - lbl_805D8C0C);
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3d0) >= lbl_805D8C14) {
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) lbl_805D8C14;
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3d0) >= lbl_805D8C14) {
            M2C_FIELD(arg0, s32 *, 0x3c8) = (s32) M2C_FIELD(((u8 *)&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__data_804867C8).value + (M2C_FIELD(arg0, s32 *, 0x3c8) << 0x4)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x3dc) = (s32) M2C_FIELD(&(*(RecoveredGlobal_8005455C_lbl_80485EC8 *)&TBoss4Type2__data_804867C8).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3c8) << 0x4));
            M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
            M2C_FIELD(arg0, s32 *, 0x3d8) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3d0);
    if ((temp_f1_2 < TBoss4Type2__data_805D8BAC) || (temp_f1_2 >= lbl_805D8C0C)) {
        M2C_FIELD(arg0, f32 *, 0x3d0) = (f32) TBoss4Type2__data_805D8BAC;
    }
}
#pragma pop

void init_hanger__11TBoss4Type2FPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); TBoss4Type2__sub_80057270((Obj_80057270 *)(p)); pop_matrix(); end_effect_render__13TParticleCtrlFv(); }

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

S_800578E8 *TBoss4Type2__sub_800578E8(S_800578E8 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80486924;
        fn_8004AA04(o->f378);
        for (i = 0; i < 8; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        init_state_1__8TObjFishFPv(o->f44c);
        o->f44c = 0;
        TObjEneGibbles__sub_80156720(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

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

void TBoss4Type3__vt45(S_80058224 *o) {
    u16 id = o->f3ba;
    if (id == 0xFFFF) {
        TBoss4Type3__sub_8005A398(o, 1);
        return;
    }
    TBoss4Type3__sub_80059ABC(o, id);
    if (o->f398 == 0x31) {
        spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16)o->f3ba);
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
    }
    if (--o->f398 < 0) {
        TBoss4Type3__sub_8005A398(o, 1);
    }
}

extern const f32 lbl_805D8C3C;

void TBoss4Type3__vt44(S_800582B4 *o) {
    if (TBoss4Type3__sub_8005254C(o->f3ba) == 0) {
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
        TBoss4Type3__sub_800599F4(o, 0, 2);
        return;
    }
    if (o->f398 == 0) {
        o->f3b8 = 0xFFFF;
        o->f3ba = 0xFFFF;
        TBoss4Type3__sub_800599F4(o, 0, 2);
    }
}

void TBoss4Type3__vt43(u8 *arg0) {
    create_yutai__11TBoss4Type3FPvPvPv(arg0, (void *)1, (void *) M2C_FIELD(arg0, u16 *, 0x3BA));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

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
