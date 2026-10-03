#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_8004A574 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x1c];
    u8 v38[4];
    f32 f3c;
    u8 pad40[0x6c];
    s32 fac;
    u8 padb0[8];
    f32 fb8;
    s32 fbc;
};

struct VBase_8004A0AC { u8 pad[0x18]; };

struct VObj_8004A0AC : VBase_8004A0AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_8004A0AC : VObj_8004A0AC {
    u8 pad1c[0x38 - 0x1c];
    f32 f38;
    f32 f3c;
    f32 f40;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xb8 - 0x64];
    f32 fb8;
};

struct Vec_8004A1CC { f32 x, y, z; };

struct Pair_8004A1CC { s32 a; f32 b; };

struct VBase_8004A1CC { u8 pad[0x18]; };

struct BP_8004A1CC : VBase_8004A1CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(s32, Pair_8004A1CC *, s32, s32, s32);
    u8 pad1c[0x30 - 0x1c];
    u32 f30;
    u8 pad34[4];
    Vec_8004A1CC pos;
    u8 pad44[0x308 - 0x44];
    u8 f308[4];
};

struct Flags_8004A1CC { u8 pad[0x18]; u32 f18; };

struct Self_8004A1CC {
    u8 pad0[0x38];
    Vec_8004A1CC pos;
    u8 pad44[0xa4 - 0x44];
    Flags_8004A1CC *fa4;
    u8 pada8[4];
    s32 state;
    u8 padb0[4];
    s32 timer;
    u8 padb8[4];
    s32 fbc;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TObjPlayer__sub_8013153C(void *, void *);
void init_collision_body_parts(void *, void *, s32);
void TObjPlayer__sub_801569F4(void *, s32);
extern u8 lbl_80484B38[];
extern M2C_UNK __vt__16TObjVoloptPillar[];
extern u8 lbl_804FEE68[];
extern s32 lbl_805D2760;
extern s32 tl_04;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88E4;
extern const f32 lbl_805D88E8;
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2);
void toggle_particle_effect__10TObjPlayerFv();
void TObjPlayer__sub_800F09E8(s32);
void TObjLight__sub_80134098();
void TObjLight__sub_80134194(void *);
void end_effect_render__13TParticleCtrlFv();
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void rotate_matrix_x(s32, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void draw_chunk_object(s32);
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;
extern const f32 lbl_805D88B8;
extern const f32 lbl_805D88BC;
extern const f32 lbl_805D88C0;
extern const f32 lbl_805D88C4;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88CC;
void render__16TObjVoloptPillarFv(Obj_8004A0AC *arg0);
s32 obj_is_hit_receivable(void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void queue_destruction__7TObjectFv();
BP_8004A1CC *get_battle_param__10TObjPlayerFi(s32);
s32 TObjVoloptPillar__sub_80048118(s32);
f32 TBoss3Volopt__sub_8004812C(s32);
void TBoss3Volopt__sub_8004885C(void *, Vec_8004A1CC *, s32, s32, s32, f32, f32);
void fn_80049FD8(void *);
void set_shake_preset__11TCameraCtrlFi(s32);
void init_all_slots__10TObjPlayerFv(void *);
void check_object_collisions__10TObjPlayerFPv(void *);
void play_sound_effect(s32, void *, s32, s32);
void *__nw__7TObjectFUl(u32);
void TCameraCtrl__sub_803D8934(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void subtract_vector(void *, void *);
void push_matrix_from(void *);
void pop_matrix();
extern Pair_8004A1CC lbl_80436734[];
extern Vec_8004A1CC lbl_8043673C[];
extern const f64 lbl_80436798[];
extern u8 lbl_804FEE68[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805D88BC;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88D0;
extern const f32 lbl_805D88D4;
extern const f32 lbl_805D88D8;
extern const f32 lbl_805D88DC;
extern const f32 lbl_805D88E0;
void run_task__16TObjVoloptPillarFv(Self_8004A1CC *self);
}

extern "C" {

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1);
void cache_target_values__16TObjVoloptPillarFv(void);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;

#pragma fp_contract on
void render__16TObjVoloptPillarFv(Obj_8004A0AC *arg0) {
    f32 s;
    if (arg0->m8(lbl_805D88B8, lbl_805D88BC) != 0) {
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        post_translate_matrix(&arg0->f38);
        set_global_param__8TObjFishFi(lbl_805D4D40);
        draw_chunk_object(lbl_805D4D38);
        pop_matrix();
        push_matrix();
        translate_matrix(0, arg0->f38, arg0->fb8, arg0->f40);
        set_global_param__8TObjFishFi(lbl_805D4D44);
        draw_chunk_object(lbl_805D4D3C);
        pop_matrix();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        s = lbl_805D88C4 * (TObjVoloptPillar__data_805D88C8 - arg0->f3c) + lbl_805D88C0;
        push_matrix();
        translate_matrix(0, arg0->f38, lbl_805D88CC, arg0->f40);
        rotate_matrix_y(0, arg0->f60);
        rotate_matrix_x(0, -0x4000);
        scale_matrix(0, s, s, s);
        TObjPlayer__sub_800F09E8(0);
        pop_matrix();
    }
}

void run_task__16TObjVoloptPillarFv(Self_8004A1CC *self) {
    s32 i;
    BP_8004A1CC *bp;
    s32 ang;
    void *p;
    switch (self->state) {
    case 0:
        self->timer = TObjVoloptPillar__sub_80048118(5);
        self->state = 1;
    case 1:
        if (--self->timer <= 0) {
            fn_80049FD8(self);
            self->state = 2;
        }
        break;
    case 2:
        self->pos.y += lbl_805D88D0;
        if (self->pos.y <= lbl_805D88D4) {
            self->timer = 0xF;
            self->state = 3;
            {
                Flags_8004A1CC *fl = self->fa4;
                fl->f18 |= 2;
                init_all_slots__10TObjPlayerFv(fl);
            }
            check_object_collisions__10TObjPlayerFPv(self);
            if (self->fa4->f18 & 0x80000) {
                for (i = 0; i < 0x10; i++) {
                    bp = get_battle_param__10TObjPlayerFi(i);
                    if (bp == NULL) {
                        break;
                    }
                    if (obj_is_hit_receivable(bp) != 0) {
                        Pair_8004A1CC tmp = lbl_80436734[0];
                        tmp.b = TObjVoloptPillar__sub_80048118(1);
                        {
                            Pair_8004A1CC arg = tmp;
                            bp->m21(self->fbc, &arg, 0, -1, -1);
                        }
                        if (!(bp->f30 & 0x04000000)) {
                            push_matrix_from(lbl_8058D490);
                            {
                                Vec_8004A1CC v = bp->pos;
                                subtract_vector(&v, lbl_804FEE68);
                                ang = lbl_80436798[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
                                {
                                    Vec_8004A1CC w = lbl_8043673C[0];
                                    w.x = TBoss3Volopt__sub_8004812C(2);
                                    rotate_matrix_y(0, ang);
                                    TCameraCtrl__sub_803D8934(0, &w, bp->f308);
                                }
                            }
                            pop_matrix();
                        }
                    }
                }
            }
            self->fa4->f18 &= ~1;
            {
                Vec_8004A1CC pos = self->pos;
                pos.y = lbl_805D88D8;
                p = __nw__7TObjectFUl(0x48);
                if (p != NULL) {
                    TBoss3Volopt__sub_8004885C(p, &pos, 0x11E, 0xF, 0, lbl_805D88DC, lbl_805D88BC);
                }
            }
            set_shake_preset__11TCameraCtrlFi(1);
            play_sound_effect(0x4003AD09, &self->pos, 0, 0);
        }
        break;
    case 3:
        if (--self->timer <= 0) {
            self->state = 4;
        }
        break;
    case 4:
        self->pos.y += lbl_805D88E0;
        if (self->pos.y >= TObjVoloptPillar__data_805D88C8) {
            queue_destruction__7TObjectFv();
        }
        break;
    }
}

void cache_target_values__16TObjVoloptPillarFv(void) {
    lbl_805D4D38 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x178);
    lbl_805D4D40 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x17C);
    lbl_805D4D3C = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x158);
    lbl_805D4D44 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x15C);
}

extern M2C_UNK __vt__16TObjVoloptPillar[];

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjVoloptPillar;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2) {
    f32 d;
    TObjPlayer__sub_801569F4(o, tl_04);
    o->vt = ((u8 *)&__vt__16TObjVoloptPillar);
    o->f0 = lbl_805D2760;
    init_collision_body_parts(o, lbl_80484B38, 1);
    VecCopy__FP3VecPC3Vec(o->v38, pos);
    d = TObjPlayer__sub_8013153C(o->v38, lbl_804FEE68);
    if (d < lbl_805D88E4) {
        o->f3c = TObjVoloptPillar__data_805D88C8;
    } else {
        o->f3c = TObjVoloptPillar__data_805D88C8 - lbl_805D88E8 * (d - lbl_805D88E4);
    }
    o->fb8 = o->f3c;
    o->fac = 0;
    o->fbc = arg2;
    return o;
}
#pragma pop

}
