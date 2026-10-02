#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8005FCE4 { u8 pad[0x4c0]; u32 flags; };

struct Vec_8005FBC4 { f32 x, y, z; };

struct Shot_8005FBC4 { f32 v[3]; };

struct Obj_8005FBC4 {
    u8 pad0[0x38];
    Vec_8005FBC4 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x474 - 0x64];
    Vec_8005FBC4 vel;
    s32 f480;
    u8 pad484[0x4c0 - 0x484];
    s32 flags;
    u8 pad4c4[0x4e4 - 0x4c4];
    s32 f4e4;
};

typedef s32 M2C_UNK;
struct VBase_80062550 { char pad[0x18]; };

struct VObj_80062550 : VBase_80062550 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93();
    virtual void m94();
};

struct Vec_80062550 { f32 x, y, z; };

struct Tgt_80062550 {
    u8 pad0[4];
    s32 f4;
    s32 f8;
    f32 fc;
    f32 f10;
};

struct Obj_80062550 {
    u8 pad0[0x38];
    Vec_80062550 pos;
    u8 pad44[0xb8 - 0x44];
    s16 fb8;
    u8 padba[0x490 - 0xba];
    s32 f490;
    u8 pad494[0x4bc - 0x494];
    Tgt_80062550 *f4bc;
};

struct VBase_80060F4C { char pad[0x18]; };

struct VObj_80060F4C : VBase_80060F4C {
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
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
};

struct Obj_80060F4C {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0xB8 - 0x64];
    s16 fb8;
    u8 padba[0x4C0 - 0xBA];
    u32 flags;
};

extern "C" {
extern const f32 lbl_805D8D5C;
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg);
void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
u8 *TObjEneDD__sub_800BAE74(u8 *arg0, u8 *arg1);
void calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
extern f32 lbl_80437DF4[];
extern f32 lbl_80437E04[];
extern f32 lbl_80437E14[];
extern const f32 lbl_805D8D5C;
void TBoss8Dragon__sub_8005FBC4(Obj_8005FBC4 *arg0);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0);
void TBoss8Dragon__sub_80063EF4(s32 arg0);
void reset_float_3c__12TBoss8DragonFPv(void *a0);
void set_flag_4e4__12TBoss8DragonFPv(void *p);
M2C_UNK advance_animation_playback(void *);
extern const f64 lbl_80437EB0[];
void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1);
void update_periodic_effect__12TBoss8DragonFPv(void *arg0);
void scale_size__12TBoss8DragonFPvfff(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void update_heading__12TBoss8DragonFPvi(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005FA78(void *arg0, s32 arg1, f32 farg0);
void TBoss8Dragon__sub_8006426C(void *);
void TBoss8Dragon__sub_80064828(void *);
void reset_angle__12TBoss8DragonFPv(void *);
void clear_timer__12TBoss8DragonFPv(void *);
void TBoss8Dragon__sub_80064DB8(void *);
void update_velocity__9TObjEneDDFPv(void *);
f32 get_speed_or_default__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D74;
extern const f32 lbl_805D8D88;
extern const f32 lbl_805D8DA4;
extern const f32 lbl_805D8DE4;
extern const f32 lbl_805D8E04;
extern const f32 lbl_805D8E08;
extern const f32 lbl_805D8E10;
extern const f32 lbl_805D8E14;
void TBoss8Dragon__sub_80060F4C(Obj_80060F4C *arg0, s32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_8005FB90(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
}

void TBoss8Dragon__sub_8005FBC4(Obj_8005FBC4 *arg0) {
    Shot_8005FBC4 shot;
    Vec_8005FBC4 v;
    f32 len;
    if (arg0->flags & 0x10) {
        arg0->pos.y += arg0->vel.y;
        arg0->f60 += arg0->f480;
        v.x = arg0->vel.x;
        v.y = lbl_805D8D5C;
        v.z = arg0->vel.z;
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        calc_shot_position__9TObjEneDDFPvPvfff(arg0, &shot, v.x, v.z, len);
        TObjEneDD__sub_800BAE74((u8 *)arg0, (u8 *)&shot);
    } else {
        arg0->pos.x += arg0->vel.x;
        arg0->pos.y += arg0->vel.y;
        arg0->pos.z += arg0->vel.z;
        arg0->f60 += arg0->f480;
    }
    if (!(arg0->flags & 0x20)) {
        scale_size__12TBoss8DragonFPvfff(arg0, lbl_80437DF4[arg0->f4e4], lbl_80437E04[arg0->f4e4], lbl_80437E14[arg0->f4e4]);
    }
}

void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg) {
    switch (msg) {
    case 4:
        self->flags |= 0x80;
        queue_destruction__7TObjectFv(self);
        break;
    case 5:
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        return;
    }
}

void TBoss8Dragon__sub_80060F4C(Obj_80060F4C *arg0, s32 arg1) {
    f32 speed;
    f32 scale;
    f32 depth;
    f32 v;
    s32 ang;
    switch (arg1) {
    case 4:
        arg0->fb8 = 0xB;
        ((VObj_80060F4C *)arg0)->m94();
        clear_timer__12TBoss8DragonFPv(arg0);
        reset_angle__12TBoss8DragonFPv(arg0);
        arg0->flags |= 0x30;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        advance_animation_playback(arg0);
        TBoss8Dragon__sub_80064DB8(arg0);
        update_velocity__9TObjEneDDFPv(arg0);
        TBoss8Dragon__sub_8006426C(arg0);
        TBoss8Dragon__sub_80064828(arg0);
        v = get_speed_or_default__10TObjPlayerFPv(arg0);
        if (v < lbl_805D8E10 || v >= lbl_805D8DE4) {
            depth = lbl_805D8E04;
            ang = 0;
            speed = lbl_805D8D5C;
            scale = lbl_805D8DA4;
        } else {
            depth = lbl_805D8E04;
            ang = 0xD0;
            speed = lbl_805D8D88;
            scale = lbl_805D8E08;
        }
        if (objInBand__FP7GameObjf(arg0, lbl_805D8D74) != 0) {
            ang += 0x500;
            speed += lbl_805D8E14;
        }
        scale_size__12TBoss8DragonFPvfff(arg0, scale, depth, depth);
        TBoss8Dragon__sub_8005FA78(arg0, arg0->f60, speed);
        update_heading__12TBoss8DragonFPvi(arg0, ang);
        return;
    case 5:
        arg0->flags &= ~0x30;
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

void TBoss8Dragon__sub_80062550(Obj_80062550 *arg0, s32 arg1) {
    s32 ofs;
    s32 ang;
    s32 a;
    Tgt_80062550 *t;
    switch (arg1) {
    case 4:
        arg0->fb8 = 4;
        ((VObj_80062550 *)arg0)->m94();
        set_flag_4e4__12TBoss8DragonFPv(arg0);
        reset_float_3c__12TBoss8DragonFPv(arg0);
        arg0->f490 = 0;
        return;
    case 8:
        update_periodic_effect__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        advance_animation_playback(arg0);
        TBoss8Dragon__sub_80063EF4((s32)arg0);
        ofs = 0x4000;
        if (arg0->pos.x * arg0->pos.x + arg0->pos.z * arg0->pos.z > arg0->f4bc->f10 * arg0->f4bc->f10) {
            ofs = 0x5000;
        }
        a = (s32)(lbl_80437EB0[0] * get_ad_end_text_start__10TObjPlayerFv(arg0->pos.x, arg0->pos.z));
        t = arg0->f4bc;
        ang = a - ofs;
        if (t->f8 > 0) {
            ang = a + ofs;
        }
        TBoss8Dragon__sub_8005FA78(arg0, ang, t->fc);
        update_heading__12TBoss8DragonFPvi(arg0, arg0->f4bc->f4);
        break;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 9: return;
    case 10: return;
    case 11: return;
    }
}

}
