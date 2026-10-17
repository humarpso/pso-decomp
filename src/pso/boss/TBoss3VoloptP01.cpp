#include "types.h"
#include "pso/TTecZondeEff.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/boss/TBoss3VoloptP01.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/object/TObjMotion.h"

struct Obj_80042DE8; typedef struct Obj_80042DE8 Obj_80042DE8;
struct P_80042ED0;
struct S_8004301C;
extern "C" {
u8* get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void*);
void TObjPlayer__sub_80042ED0(P_80042ED0*,s32,s32);
void fn_80044330(void*);
void cast_tech_on_players__10TObjPlayerFPv(u8*);
s32 play_sound_effect(s32,s32,s32,s32);
void* __nw__7TObjectFUl(u32);
s32 subtract_vector(void*,void*);
void rotate_matrix_y(s32,s32);
void translate_matrix(s32,f32,f32,f32);
void pop_matrix(void);
void push_nearby_players__10TObjPlayerFPv(Obj_80042DE8*);
s32 obj_testFlags30(void*,s32);
s32 update_if_active__15TObjEneMe1GiGueFl(void*,s32);
s32 update_pulse_scale__15TBoss3VoloptP01FPv(S_8004301C*);
s32 fire_zonde_at_players__10TObjPlayerFPv(u8*);
void sub_80043758__15TBoss3VoloptP01Fv(u8*);
void reset_look_state__11TCameraCtrlFv(void*);
s32 advance_animation_playback(void*);
extern const char* TBoss3VoloptP01_class_name;
}
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss3VoloptMonitor.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TNowLoading.h"
#include "pso/misc/TTecFoie.h"
#include "pso/misc/TTecGiBarta.h"
#include "pso/misc/TTecGiZonde.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
struct S_80042B34 { s32 a; f32 b; };
struct V_80042ED0 { s32 a, b, c; };
#pragma readonly_strings on
extern "C" {
const char *TBoss3VoloptP01_class_name = "TBoss3VoloptP01";
__declspec(section ".rodata") V_80042ED0 lbl_80436630 = { 0, 0, 0 };
__declspec(section ".rodata") S_80042B34 lbl_8043663C[1] = { { 3, 0.0f } };
}
#define TObjPlayer__sub_80042ED0 ((s32 (*)(void*,int,void*))TObjPlayer__sub_80042ED0)
#define fn_80044330 ((s32 (*)(void*))fn_80044330)

struct Ent_80042974 { u16 id; s16 flag; s32 pad; };

struct List_80042974 { s32 count; Ent_80042974 ents[1]; };

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
extern s32 volopt_active_player_id;
extern s32 lbl_805D586C;
void cast_tech_on_players__10TObjPlayerFPv(u8 *arg0);
void cast_tech_on_players__10TObjPlayerFPv(u8 *arg0) {
    s32 sp8;
    s32 n;
    s32 i;
    u8 *p;
    s32 j;
    u8 *q;
    s32 k;
    TObjPlayer__sub_80042ED0(arg0, 0xC, &sp8);
    switch (volopt_active_player_id) {
    case 0:
        fn_80044330(arg0 + 0x3BC);
        n = 0;
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p != NULL && obj_getField1c(p) < 0x1000 && !(*(s32 *)((s8 *)p + 0x30) & 0x02000800)) {
                ((List_80042974 *)(arg0 + 0x3BC))->ents[n].id = obj_getField1c(p);
                ((List_80042974 *)(arg0 + 0x3BC))->ents[n].flag = 1;
                n++;
            }
        }
        ((List_80042974 *)(arg0 + 0x3BC))->count = n;
        if (n > 0) {
            ((TTecGiZonde *)arg0)->create((void *)(&sp8), (void *)(arg0 + 0x3BC), (void *)0x1D);
        }
        break;
    case 1:
        for (j = 0; j < lbl_805D586C; j++) {
            p = get_player_data__10TObjPlayerFi(j);
            if (p != NULL && obj_getField1c(p) < 0x1000 && !(*(s32 *)((s8 *)p + 0x30) & 0x02000800)) {
                TTecFoie::create_ex((void *)arg0, (void *)(&sp8), (void *)(p + 0x2FC), (void *)0x1D);
            }
        }
        break;
    case 2:
        for (k = 0; k < lbl_805D586C; k++) {
            q = get_player_data__10TObjPlayerFi(k);
            if (q != NULL && obj_getField1c(q) < 0x1000 && !(*(s32 *)((s8 *)q + 0x30) & 0x02000800)) {
                ((TTecGiBarta *)arg0)->create((void *)(&sp8), (void *)(q + 0x2FC), (void *)0x1D);
            }
        }
        break;
    }
}

}

#undef TObjPlayer__sub_80042ED0
#undef fn_80044330
#define TObjPlayer__sub_80042ED0 ((s32 (*)(void*,int,void*))TObjPlayer__sub_80042ED0)

struct Vec_80042B34 { f32 x, y, z; };
struct Pkt_80042B34 { u8 pad0[2]; u16 id; s16 kind; u8 pad6[6]; };

struct VBase_18_b27ba1 { char pad[0x18]; };
struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual s32 m21(void *, S_80042B34 *, s32, s32, s32);
};

extern "C" {

s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss3Volopt__sub_80040FCC(void *);
s32 fn_800443DC(void *, int);
u8 *find_entity_by_id(u16);
s32 play_sound_effect(s32, s32, s32, s32);
void *__nw__7TObjectFUl(u32);
s32 subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern S_80042B34 lbl_8043663C[];
extern u16 lbl_805D271A;
extern s32 tl_07;

s32 fire_zonde_at_players__10TObjPlayerFPv(u8 *arg0) {
    u8 *list[4];
    Vec_80042B34 pos;
    Vec_80042B34 d;
    s32 n;
    u8 *p;
    Vec_80042B34 *src;
    u8 *q;
    s32 i;
    s32 j;
    u8 *e;
    f32 len;
    void *obj;
    S_80042B34 s = lbl_8043663C[0];

    s.b = fn_800443DC(arg0, 0);
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL || obj_getField1c(p) >= 0x1000) {
            break;
        }
        if (!(*(s32 *)((s8 *)p + 0x30) & 0x02000800)) {
            list[n] = p;
            n++;
        }
    }
    if (n > 0) {
        TObjPlayer__sub_80042ED0(arg0, 0xC, &pos);
        for (j = 0; j < n; j++) {
            q = list[j];
            src = (Vec_80042B34 *)(q + 0x2FC);
            VecCopy__FP3VecPC3Vec(&d, src);
            subtract_vector(&d, &pos);
            len = normalize_vector(&d);
            obj = __nw__7TObjectFUl(0x260);
            if (obj != NULL) {
                ((TTecZondeEff *)obj)->construct((u8 *)tl_07, (u8 *)(&pos), (u8 *)(&d), (f32)len);
            }
            VecCopy__FP3VecPC3Vec(&pos, src);
            {
                S_80042B34 t = s;
                ((VObj_18_b27ba1 *)q)->m21(arg0, &t, 0, -1, -1);
            }
        }
        e = find_entity_by_id(lbl_805D271A);
        if (e != NULL) {
            Vec_80042B34 d2 = *(Vec_80042B34 *)(e + 0x38);
            subtract_vector(&d2, &pos);
            len = normalize_vector(&d2);
            obj = __nw__7TObjectFUl(0x260);
            if (obj != NULL) {
                ((TTecZondeEff *)obj)->construct((u8 *)tl_07, (u8 *)(&pos), (u8 *)(&d2), (f32)len);
            }
            if (TBoss3Volopt__sub_80040FCC(e) != 0) {
                Pkt_80042B34 pkt;
                ((TBoss3Volopt *)(&pkt))->set_type();
                pkt.id = *(u16 *)((s8 *)arg0 + 0x1C);
                pkt.kind = 2;
                ((TBoss3Volopt *)(&pkt))->finalize_and_send_60();
            }
        }
        play_sound_effect(0x4002A509, 0, 0, 0);
    }
    return n;
}

}

#undef TObjPlayer__sub_80042ED0
#define get_player_data__10TObjPlayerFi ((Obj_80042DE8* (*)(s32))get_player_data__10TObjPlayerFi)
#define obj_getField1c ((u16 (*)(void))obj_getField1c)
#define subtract_vector ((void (*)(Vec_80042DE8*,Vec_80042DE8*))subtract_vector)

struct P_80042ED0 {
    u8 pad0[0x38];
    f32 f38, f3c, f40;
    u8 pad44[0x1c];
    s32 f60;
    u8 pad64[0x5c];
    f32 fc0;
    u8 padc4[0x38c - 0xc4];
    f32 f38c;
};

struct E_80042ED0 { u8 b[0x30]; };

typedef struct Vec_80042DE8 {
    f32 x, y, z;
} Vec_80042DE8;

typedef struct Obj_80042DE8 {
    u8 pad0[0x38];
    Vec_80042DE8 pos;
} Obj_80042DE8;

extern "C" {
void matrix_mult_vec(s32, void *, s32);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix_from(void *);
void pop_matrix();
extern V_80042ED0 lbl_80436630;
extern u8 identity_matrix[];
extern E_80042ED0 *anim_model_matrix_array;
void TObjPlayer__sub_80042ED0(P_80042ED0 *o, s32 idx, s32 arg2);
void vec3_add_to(Vec_80042DE8 *, Vec_80042DE8 *);
void push_nearby_players__10TObjPlayerFPv(Obj_80042DE8 *self);
u8 TObjPlayer__sub_80042EC0(void *arg0);
s32 obj_testFlags30(void *, s32);
s32 update_if_active__15TObjEneMe1GiGueFl(void *, s32);

void TObjPlayer::set_target_id(s32 arg1) {
    if (obj_testFlags30(this, 0x800) == 0) {
        *(s32 *)&this->unk_388 = (s32) (*(s32 *)&this->unk_388 & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFl(this, 2);
        this->m_3a8 = arg1;
    }
}

void push_nearby_players__10TObjPlayerFPv(Obj_80042DE8 *self) {
    f32 r2;
    s32 i;
    Obj_80042DE8 *pl;
    r2 = (64.0f);
    for (i = 0; i < lbl_805D586C; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (pl == NULL || obj_getField1c() >= 0x1000) {
            break;
        }
        {
            Vec_80042DE8 v = pl->pos;
            subtract_vector(&v, &self->pos);
            if (v.x * v.x + v.z * v.z <= r2) {
                v.y = (0.0f);
                ((TObjGyaranzoMissile *)(&v))->scale_velocity((13.0f));
                vec3_add_to(&pl->pos, &v);
            }
        }
    }
}

u8 TObjPlayer__sub_80042EC0(void *arg0) {
    return (u8) (*(s16 *)((s8 *)arg0 + 0x326) == 0);
}
void TObjPlayer__sub_80042ED0(P_80042ED0 *o, s32 idx, s32 arg2) {
    push_matrix_from(identity_matrix);
    translate_matrix(0, o->f38, o->f3c + o->f38c, o->f40);
    rotate_matrix_y(0, o->f60);
    ((TObjEnemy *)o)->render_anim_model(o->fc0);
    pop_matrix();
    V_80042ED0 v = lbl_80436630;
    push_matrix_from(&anim_model_matrix_array[idx]);
    matrix_mult_vec(0, &v, arg2);
    pop_matrix();
}

#undef get_player_data__10TObjPlayerFi
#undef obj_getField1c
#undef subtract_vector
#define TObjPlayer__sub_80042ED0 ((s32 (*)(void*,int,void*))TObjPlayer__sub_80042ED0)
#define cast_tech_on_players__10TObjPlayerFPv ((s32 (*)(void*))cast_tech_on_players__10TObjPlayerFPv)
#define play_sound_effect ((s32 (*)(s32,void*,s32,s32))play_sound_effect)
#define __nw__7TObjectFUl ((void* (*)(int))__nw__7TObjectFUl)
#define rotate_matrix_y ((s32 (*)(s32,s32))rotate_matrix_y)
#define translate_matrix ((s32 (*)(s32,f32,f32,f32))translate_matrix)
#define pop_matrix ((s32 (*)(void))pop_matrix)
#define push_nearby_players__10TObjPlayerFPv ((s32 (*)(void*))push_nearby_players__10TObjPlayerFPv)
#define obj_testFlags30 ((s32 (*)(void*,int))obj_testFlags30)
#define update_if_active__15TObjEneMe1GiGueFl ((s32 (*)(void*,int))update_if_active__15TObjEneMe1GiGueFl)
#define update_pulse_scale__15TBoss3VoloptP01FPv ((s32 (*)(void*))update_pulse_scale__15TBoss3VoloptP01FPv)
#define fire_zonde_at_players__10TObjPlayerFPv ((s32 (*)(void*))fire_zonde_at_players__10TObjPlayerFPv)
#define sub_80043758__15TBoss3VoloptP01Fv ((void (*)(void*))sub_80043758__15TBoss3VoloptP01Fv)
#define TBoss3VoloptP01_class_name (*(s32 *)&TBoss3VoloptP01_class_name)

#define F(o,t,p) (*(t*)((u8*)(o)+(p)))
struct VBos_800430AC { char pad[0x18]; };

struct TBoss3VoloptP01_800430AC : VBos_800430AC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual s32 m53(s32);
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual s32 m60();
    virtual s32 m61();
};

struct VBase_18_62ff9d { char pad[0x18]; };

struct VObj_18_62ff9d : VBase_18_62ff9d {
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
    virtual s32 m56();
};

struct Obj_80043CAC { u8 pad0[0x326]; s16 state; };

struct Base_80043EA4 { char pad[0xC]; };

struct VObj_80043EA4 : Base_80043EA4 {
    virtual void m0(int);
};

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual s32 m79(s32);
};

struct RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 { s32 value; u8 remaining[0x148]; };

struct RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 {
    s32 value;
    u8 remaining[0x148];
};

struct RecoveredGlobal_80044174_lbl_804FEE68 {
    s32 value;
    u8 remaining[0x8];
};

struct O_800443BC { u16 a; u16 b; f32 c; };

typedef char RecoveredGlobal_80044174___vt__15TBoss3VoloptP01_size[sizeof(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01) == 0x14C ? 1 : -1];

typedef char RecoveredGlobal_80044174_lbl_804FEE68_size[sizeof(RecoveredGlobal_80044174_lbl_804FEE68) == 0xC ? 1 : -1];

struct VBase_80044038 { char pad[0x18]; };

struct VObj_80044038 : VBase_80044038 {
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
};

s32 reset_status_effect_row(void *);
void obj_setFlags30(void *, u32);
f32 fabs_float();
void queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
s32 register_object__6TLobbyFl(s32);
s32 dispatch_shared_handler_b__6TLobbyFl(s32);
s32 register_boss__6TLobbyFl(s32);
s32 TBoss3Volopt__sub_8003F398();
s32 link_photon__10TObjPlayerFUs(u16, s32);
s32 copy_position__20TBoss3VoloptHiraisinFi(void *, int, f32, f32);
void TBoss3VoloptP01__sub_80042F84(u8 *arg0);
s32 TBoss3VoloptP01__sub_80042FCC(u8 *arg0);
void reset_state__15TBoss3VoloptP01FPv(void *arg0);
void TBoss3VoloptP01__sub_800430D0(void *);
typedef struct { f32 x, y, z; } Vec_800430D0;
s32 play_persistent_sound(int, void *, void *, int, int);
void render__15TBoss3VoloptP01Fv(u8 *arg0);
void TBoss3VoloptP01__sub_80043CA8(void * _w0);
void run_task__15TBoss3VoloptP01Fv(u8 *arg0);
void * __dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1);
u8 * TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4);
u8 * TBoss3VoloptP01__sub_800442A0(u8 *arg0, s32 arg1, s32 arg2);
void fn_80044330(void* p);
void* fn_8004438C(void* p);
void reset_look_state__11TCameraCtrlFv(void *);
void set_mode__11TCameraCtrlFv(void *);
u8 * __ct__17TObjVoloptShutterFv(void *, s32);
u8 * create_particle_emitter(void *, s32);
s32 init_from_model__11TBreakUpMdlFl(s32, s32);
void __dt__15TObjEnemyCustomFv(void *, int);
u8 * TObjEnemyCustom__ct(void *);
void * collect_and_count__12TBoss3VoloptFUll(s32, s32);
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
s32 advance_animation_playback(void *);
void free_collision_body_parts(void *);
void init_collision_body_parts(void *, void *, s32);
s32 submit_cursor_candidate(void *, s32);
s32 minimap_render_dot(void *, s32, s32, s32);
void __dl__7TObjectFPv(void *);
void * __construct_array(void *, void *, void *, u32, u32);
s32 sin_table_lookup(s32);
f32 cos_table_lookup(int);
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 draw_chunk_model(s32);
s32 draw_chunk_object(void *);

extern RecoveredGlobal_80044174_lbl_804FEE68 boss3_volopt_spawn_pos;
extern void *boss3_volopt_resources;
extern s32 volopt_breakup_flag;
extern s32 volopt_p01_boss_stat_handle_a;
extern s32 volopt_p01_shared_handler_b;
extern s32 volopt_p01_object_handle;
extern s32 volopt_p01_shared_handler_handle;
extern void *TBoss3VoloptP01__resource_bundle;
extern s32 TBoss3VoloptP01__breakup_model;
extern void *lbl_805D4CC8;
extern u8 *volopt_p01_breakup_color_ptr;
extern void *tl_04;

extern "C" void vfunc_65__15TObjEnemyCustomFll();
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_63__15TObjEnemyCustomFv();
extern "C" void vfunc_62__15TObjEnemyCustomFv();
extern "C" void vfunc_61__15TObjEnemyCustomFv();
extern "C" void vfunc_58__15TObjEnemyCustomFv();
extern "C" void vfunc_28__15TObjEnemyCustomFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__13TUnk_804806E8Fl();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__13TUnk_804806E8Fv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void vfunc_18__13TUnk_804806E8FPUc();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void add_actor_exp__13TUnk_804806E8Fl();
extern "C" void apply_action_hold_status__13TUnk_804806E8Ff();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__15TObjEnemyCustomFv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void clear_all_status_effects__13TUnk_804806E8Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index__13TUnk_804806E8Fv();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame__13TUnk_804806E8Fl();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__13TUnk_804806E8Fv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y__13TUnk_804806E8Fv();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__13TUnk_804806E8Fv();
extern "C" void vfunc_60__15TObjEnemyCustomFv();
extern "C" void vfunc_59__15TObjEnemyCustomFv();
extern "C" void update_movement_status__13TUnk_804806E8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__13TUnk_804806E8Fv();
void *volopt_p01_action_table[24] = {
    (void *)0x10000, (void *)0xf, (void *)0x3f333333, (void *)0x0,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x1,
    (void *)0x20000, (void *)0x0, (void *)0x3f000000, (void *)0x4,
    (void *)0x20000, (void *)0x3, (void *)0x3fb33333, (void *)0x8,
    (void *)0x10000, (void *)0xf, (void *)0x3f800000, (void *)0x10,
    (void *)0x20002, (void *)0xc, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804841D0[7] = {
    (void *)0x43160000, (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000,
    (void *)0x0, (void *)0x1, (void *)0x0,
};
void *lbl_804841EC[11] = {
    (void *)0x0, (void *)0x41900000, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *volopt_p01_breakup_params[7] = {
    (void *)0x14, (void *)0x3d75c28f, (void *)0x3fc00000, (void *)0x3f666666,
    (void *)0x3df5c28f, (void *)0x3f0ccccd, (void *)0x3f000000,
};
void *__vt__15TBoss3VoloptP01[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__15TBoss3VoloptP01Fv, (void *)&run_task__15TBoss3VoloptP01Fv,
    (void *)&render__15TBoss3VoloptP01Fv, (void *)&render_actor_shadows_default, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};
#define volopt_p01_breakup_params ((u8 *)volopt_p01_breakup_params)
#define __vt__15TBoss3VoloptP01 ((s32 *)__vt__15TBoss3VoloptP01)

void TBoss3VoloptP01__sub_80042F84(u8 *arg0) {
    if (obj_testFlags30((void *)(arg0), (int)(0x04000800)) == 0) {
        update_if_active__15TObjEneMe1GiGueFl((void *) (arg0), (int) (9));
    }
}

#pragma push
#pragma opt_common_subs off
s32 TBoss3VoloptP01__sub_80042FCC(u8 *arg0) {
    u8 *temp_r4;
    *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (*(f32 *)((s8 *)arg0 + 0x38C) - (2.9333334f));
    if (*(f32 *)((s8 *)arg0 + 0x38C) <= (-4e+01f)) {
        *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (-4e+01f);
        *(s8 *)((s8 *)arg0 + 0x390) = 0;
        temp_r4 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xA4));
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFFE);
        return 1;
    }
    return 0;
}
#pragma pop

#undef TObjPlayer__sub_80042ED0
#undef cast_tech_on_players__10TObjPlayerFPv
#undef play_sound_effect
#undef __nw__7TObjectFUl
#undef rotate_matrix_y
#undef translate_matrix
#undef pop_matrix
#undef push_nearby_players__10TObjPlayerFPv
#undef obj_testFlags30
#undef update_if_active__15TObjEneMe1GiGueFl
#undef update_pulse_scale__15TBoss3VoloptP01FPv
#undef fire_zonde_at_players__10TObjPlayerFPv
#undef sub_80043758__15TBoss3VoloptP01Fv
#undef TBoss3VoloptP01_class_name
extern "C" {
struct S_8004301C { u8 pad0[0x38c]; f32 f38c; s8 f390; };

s32 update_pulse_scale__15TBoss3VoloptP01FPv(S_8004301C *o) {
    switch (o->f390) {
    case 0:
        o->f38c += (2.9333334f);
        if (o->f38c >= (4.0f)) {
            o->f390 = 1;
        }
        break;
    case 1: {
        f32 lim = (0.0f);
        o->f38c += (-0.6666667f);
        if (o->f38c <= lim) {
            o->f38c = lim;
            return 1;
        }
        break;
    }
    default:
        o->f390 = 0;
        break;
    }
    return 0;
}
}

#define TObjPlayer__sub_80042ED0 ((s32 (*)(void*,int,void*))TObjPlayer__sub_80042ED0)
#define cast_tech_on_players__10TObjPlayerFPv ((s32 (*)(void*))cast_tech_on_players__10TObjPlayerFPv)
#define play_sound_effect ((s32 (*)(s32,void*,s32,s32))play_sound_effect)
#define __nw__7TObjectFUl ((void* (*)(int))__nw__7TObjectFUl)
#define rotate_matrix_y ((s32 (*)(s32,s32))rotate_matrix_y)
#define translate_matrix ((s32 (*)(s32,f32,f32,f32))translate_matrix)
#define pop_matrix ((s32 (*)(void))pop_matrix)
#define push_nearby_players__10TObjPlayerFPv ((s32 (*)(void*))push_nearby_players__10TObjPlayerFPv)
#define obj_testFlags30 ((s32 (*)(void*,int))obj_testFlags30)
#define update_if_active__15TObjEneMe1GiGueFl ((s32 (*)(void*,int))update_if_active__15TObjEneMe1GiGueFl)
#define update_pulse_scale__15TBoss3VoloptP01FPv ((s32 (*)(void*))update_pulse_scale__15TBoss3VoloptP01FPv)
#define fire_zonde_at_players__10TObjPlayerFPv ((s32 (*)(void*))fire_zonde_at_players__10TObjPlayerFPv)
#define sub_80043758__15TBoss3VoloptP01Fv ((void (*)(void*))sub_80043758__15TBoss3VoloptP01Fv)
#define TBoss3VoloptP01_class_name (*(s32 *)&TBoss3VoloptP01_class_name)
void reset_state__15TBoss3VoloptP01FPv(void *arg0) {
    void *temp_r3;

    *(s8 *)((s8 *)arg0 + 0x390) = 0;
    *(f32 *)((s8 *)arg0 + 0x38C) = (f32) (-4e+01f);
    temp_r3 = *(void **)((s8 *)arg0 + 0xA4);
    *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 1);
}

#define F430D0(t, o) (*(t *)((s8 *)(arg0) + (o)))

void TBoss3VoloptP01__sub_800430D0(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    s32 s;

    ((TObjEnemyCustom *)arg0)->sub_8004292C();
    switch (F430D0(s32, 0x37C)) {
    case 0:
        F430D0(u8 *, 0x3AC) = NULL;
        if (F430D0(s32, 0x388) & 0x10000) {
            F430D0(s32, 0x37C) = F430D0(s32, 0x3A0);
            switch (F430D0(s32, 0x37C)) {
            case 2:
            case 3:
                F430D0(s16, 0xB8) = 5;
                break;
            case 5: {
                Vec_800430D0 v;
                TObjPlayer__sub_80042ED0(arg0, 5, &v);
                F430D0(u8 *, 0x3AC) = create_particle_emitter(&v, 0x11A);
                F430D0(s16, 0xB8) = 2;
                break;
            }
            case 6:
                F430D0(s16, 0xB8) = 2;
                advance_animation_playback(arg0);
                F430D0(f32, 0xC0) = (8.0f);
                F430D0(s32, 0x37C) = 7;
                break;
            }
        } else {
            s = F430D0(s16, 0x2B8) / 4;
            F430D0(s32, 0x394) = s;
            F430D0(s16, 0xB8) = 5;
            ((void (*)(void *, s32))reset_state__15TBoss3VoloptP01FPv)(arg0, s);
            F430D0(s32, 0x388) |= 0x10000;
            set_mode__11TCameraCtrlFv(F430D0(u8 *, 0x3B8));
            F430D0(s16, 0x33C) = 0x14;
            F430D0(s32, 0x3A0) = 1;
            F430D0(s32, 0x37C) = 1;
            push_nearby_players__10TObjPlayerFPv(arg0);
            F430D0(s16, 0x39C) = 0;
        }
        if (F430D0(s32, 0x3A8) != 0) {
            F430D0(s32, 0x388) |= 0x80000;
        } else {
            F430D0(s32, 0x388) &= ~0x80000;
        }
        advance_animation_playback(arg0);
        break;
    case 1:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        if (--F430D0(s16, 0x33C) <= 0) {
            play_sound_effect(0x4003A306, arg0 + 0x38, 0xA, 0);
            F430D0(s32, 0x37C) = 2;
        }
        break;
    case 2:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        if (update_pulse_scale__15TBoss3VoloptP01FPv(arg0) == 1) {
            F430D0(s32, 0x3A0) = 3;
            F430D0(s32, 0x37C) = 3;
        }
        break;
    case 3:
        advance_animation_playback(arg0);
        if (F430D0(s16, 0xB8) == 2) {
            if (F430D0(s32, 0x3A8) != 0) {
                F430D0(s32, 0x3A0) = 4;
                F430D0(s32, 0x37C) = 4;
            } else {
                F430D0(s32, 0x3A0) = 0xC;
                F430D0(s32, 0x37C) = 0xC;
                F430D0(s32, 0x388) &= ~0x10000;
                F430D0(s16, 0x398) = 0xAF;
            }
        }
        break;
    case 4: {
        Vec_800430D0 v;
        F430D0(s16, 0x398) = 0x19;
        TObjPlayer__sub_80042ED0(arg0, 5, &v);
        F430D0(u8 *, 0x3AC) = create_particle_emitter(&v, 0x11A);
        F430D0(s32, 0x3A0) = 5;
        F430D0(s32, 0x37C) = 5;
    }
    case 5:
        play_persistent_sound(0x4002B51E, arg0, arg0 + 0x38, 0, 0);
        if (--F430D0(s16, 0x398) <= 0) {
            if (F430D0(u8 *, 0x3AC) != NULL) {
                queue_destruction__7TObjectFv(F430D0(u8 *, 0x3AC));
                F430D0(u8 *, 0x3AC) = NULL;
            }
            F430D0(s32, 0x3A0) = 6;
            F430D0(s32, 0x37C) = 6;
        }
        break;
    case 6:
        advance_animation_playback(arg0);
        if (F430D0(f32, 0xC0) >= (8.0f)) {
            F430D0(s32, 0x37C) = 7;
        }
        break;
    case 7:
        if (F430D0(s32, 0x3A8) != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                cast_tech_on_players__10TObjPlayerFPv(arg0);
            } else {
                fire_zonde_at_players__10TObjPlayerFPv(arg0);
            }
            F430D0(s16, 0x39C)++;
        }
        F430D0(s32, 0x388) &= ~0x10000;
        F430D0(s16, 0x33C) = 0x78;
        F430D0(s32, 0x37C) = 8;
    case 8:
        F430D0(s16, 0x33C)--;
        if (F430D0(s16, 0x33C) <= 0) {
            F430D0(s32, 0x37C) = 9;
        }
        break;
    case 9:
        advance_animation_playback(arg0);
        if (F430D0(u32, 0xB4) != 4) {
            if (F430D0(s16, 0x39C) >= 2) {
                F430D0(s32, 0x37C) = 0xA;
            } else {
                F430D0(s32, 0x37C) = 4;
            }
        }
        break;
    case 10:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        play_sound_effect(0x4003A810, arg0 + 0x38, 0xA, 0);
        F430D0(s32, 0x37C) = 0xB;
    case 11:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        if (TBoss3VoloptP01__sub_80042FCC(arg0) == 1) {
            reset_look_state__11TCameraCtrlFv(F430D0(u8 *, 0x3B8));
            ((VObj_18_62ff9d *)(arg0))->m56();
            F430D0(s32, 0x388) &= ~0x80000;
        }
        break;
    case 12:
        if (--F430D0(s16, 0x398) <= 0) {
            F430D0(s32, 0x37C) = 0xA;
        }
        break;
    case -1:
        if (F430D0(u8 *, 0x3AC) != NULL) {
            queue_destruction__7TObjectFv(F430D0(u8 *, 0x3AC));
            F430D0(u8 *, 0x3AC) = NULL;
        }
        break;
    }
    submit_cursor_candidate(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    if (F430D0(s32, 0x37C) != -1) {
        F430D0(s32, 0x3A4) = F430D0(s32, 0x37C);
    }
}
#undef F430D0

#pragma push
#pragma fp_contract on
void TBoss3VoloptP01::run_state_machine() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    ((TObjEnemyCustom *)arg0)->sub_8004292C();
    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        this->m_b8 = 0;
        advance_animation_playback((void *) (arg0));
        this->m_3b0 = NULL;
        if (!(*(s32 *)&this->m_388 & 0x20000)) {
            this->m_39a = 0x96;
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 0x20000);
        }
        if (*(f32 *)((s8 *)arg0 + 0x38C) >= (0.0f)) {
            *(s32 *)&this->state = 2;
        } else {
            reset_state__15TBoss3VoloptP01FPv(arg0);
            set_mode__11TCameraCtrlFv(*(u8 * *)&this->m_3b8);
            push_nearby_players__10TObjPlayerFPv((void *) (arg0));
            *(s32 *)&this->state = 1;
        }
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFF7FFFF);
        break;
    case 1:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        if (update_pulse_scale__15TBoss3VoloptP01FPv((void *) (arg0)) == 1) {
            *(s32 *)&this->state = 2;
        }
        break;
    case 2:
        if ((void *) this->m_3b0 == NULL) {
            this->m_3b0 = create_particle_emitter((u8 *)&this->m_2fc, 0x21);
            ((TBoss4Type2 *)(this->m_3b0))->set_flags(0x40U);
        }
        *(s32 *)&this->state = 3;
    case 3:
        temp_r3 = (u8 *)(this->m_3b0);
        if (temp_r3 != NULL) {
            ((TNowLoading *)temp_r3)->copy_pos((u8 *)&this->m_2fc);
        }
        this->m_39a = (s16) (this->m_39a - 1);
        if ((s32) this->m_39a <= 0) {
            temp_r3_2 = (u8 *)(this->m_3b0);
            if (temp_r3_2 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_2);
                this->m_3b0 = NULL;
            }
            *(s32 *)&this->state = 4;
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFDFFFF);
        }
        break;
    case 4:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        if (TBoss3VoloptP01__sub_80042FCC((u8 *)((void *)((void *) (arg0)))) == 1) {
            reset_look_state__11TCameraCtrlFv(*(u8 * *)&this->m_3b8);
            this->vfunc_58();
        }
        break;
    case -1:
        temp_r3_3 = (u8 *)(this->m_3b0);
        if (temp_r3_3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_3);
            this->m_3b0 = NULL;
        }
        break;
    }
    submit_cursor_candidate((void *)((void *) (arg0)), (s32)((int) (-1)));
    minimap_render_dot((void *)((void *) (arg0 + 0x38)), (s32)((int) (-0x5DB4)), (s32)((int) (1)), (s32)((int) (0)));
}
#pragma pop

#undef TObjPlayer__sub_80042ED0
#undef cast_tech_on_players__10TObjPlayerFPv
#undef play_sound_effect
#undef __nw__7TObjectFUl
#undef rotate_matrix_y
#undef translate_matrix
#undef pop_matrix
#undef push_nearby_players__10TObjPlayerFPv
#undef obj_testFlags30
#undef update_if_active__15TObjEneMe1GiGueFl
#undef update_pulse_scale__15TBoss3VoloptP01FPv
#undef fire_zonde_at_players__10TObjPlayerFPv
#undef sub_80043758__15TBoss3VoloptP01Fv
#undef TBoss3VoloptP01_class_name
#define reset_look_state__11TCameraCtrlFv ((s32 (*)(int))reset_look_state__11TCameraCtrlFv)
#define advance_animation_playback ((s32 (*)(int))advance_animation_playback)

extern "C" {

void TBoss3VoloptP01::sub_80043758() {
    switch (*(s32 *)&this->state) {
    case 0:
        *(s32 *)&this->actorFlags |= 0x40000;
        this->m_b8 = 0;
        advance_animation_playback((int)((u8 *)this));
        *(f32 *)((s8 *)((u8 *)this) + 0x38C) = (-4e+01f);
        reset_look_state__11TCameraCtrlFv(*(s32 *)&this->m_3b8);
        *(s32 *)((s8 *)((u8 *)this) + 0x3A8) = 0;
        *(s32 *)&this->m_388 &= ~0x80000;
        *(s32 *)&this->state = 1;
        break;
    case 1:
        break;
    case -1:
        *(s32 *)&this->actorFlags &= ~0x40000;
        break;
    }
}

}

#undef reset_look_state__11TCameraCtrlFv
#undef advance_animation_playback
#define TObjPlayer__sub_80042ED0 ((s32 (*)(void*,int,void*))TObjPlayer__sub_80042ED0)
#define cast_tech_on_players__10TObjPlayerFPv ((s32 (*)(void*))cast_tech_on_players__10TObjPlayerFPv)
#define play_sound_effect ((s32 (*)(s32,void*,s32,s32))play_sound_effect)
#define __nw__7TObjectFUl ((void* (*)(int))__nw__7TObjectFUl)
#define rotate_matrix_y ((s32 (*)(s32,s32))rotate_matrix_y)
#define translate_matrix ((s32 (*)(s32,f32,f32,f32))translate_matrix)
#define pop_matrix ((s32 (*)(void))pop_matrix)
#define push_nearby_players__10TObjPlayerFPv ((s32 (*)(void*))push_nearby_players__10TObjPlayerFPv)
#define obj_testFlags30 ((s32 (*)(void*,int))obj_testFlags30)
#define update_if_active__15TObjEneMe1GiGueFl ((s32 (*)(void*,int))update_if_active__15TObjEneMe1GiGueFl)
#define update_pulse_scale__15TBoss3VoloptP01FPv ((s32 (*)(void*))update_pulse_scale__15TBoss3VoloptP01FPv)
#define fire_zonde_at_players__10TObjPlayerFPv ((s32 (*)(void*))fire_zonde_at_players__10TObjPlayerFPv)
#define sub_80043758__15TBoss3VoloptP01Fv ((void (*)(void*))sub_80043758__15TBoss3VoloptP01Fv)
#define TBoss3VoloptP01_class_name (*(s32 *)&TBoss3VoloptP01_class_name)
void TBoss3VoloptP01::update_breakup() {
    u8 *arg0 = (u8 *)this;
    u8 *p;
    switch (*(s32 *)&this->state) {
    case 0:
        ((TObjEnemyCustom *)arg0)->set_flags_30();
        *(s32 *)&this->actorFlags |= 0x44040000;
        *(s32 *)&this->actorFlags &= 0xDFFFFFFF;
        p = *(u8 * *)&this->m_a4;
        *(s32 *)((s8 *)p + 0x18) |= 0x1000;
        this->m_b8 = 4;
        *(s32 *)&this->state = 1;
        *(s16 *)&this->timer = 0x5A;
        TObjPlayer::spawn_effect_f8((s32)(arg0 + 0x2FC), (s32)(*(s16 *)&this->timer));
        if (*(s32 *)((s8 *)arg0 + 0x3A8) != 0) {
            volopt_breakup_flag = 1;
            link_photon__10TObjPlayerFUs(this->m_2d4, 0);
            TObjPlayer::set_grabbed_state(0x12C);
        }
        *(s32 *)&this->state = 1;
    case 1:
        advance_animation_playback(arg0);
        *(s16 *)&this->timer -= 1;
        if (*(s16 *)&this->timer < 0) {
            TBoss3Volopt::create_breakup_mdl((s32)TBoss3VoloptP01__breakup_model, (s32)volopt_p01_breakup_params, (s32)(this->texture_id), (s32)(arg0 + 0x2FC), (s32)(this->rotation_y));
            ((TObjPlayer *)(arg0 + 0x2FC))->trigger_dell_biter_events();
            *(s32 *)&this->m_388 |= 0x40000;
            play_sound_effect(0x4003AD07, (u8 *)&this->position, 0, 0);
            *(s32 *)&this->state = 2;
            *(s32 *)&this->actorFlags &= 0xFFFFF7FF;
        }
        break;
    case -1:
        return;
    case 2:
        break;
    }
    ((TObjPlayer *)arg0)->update_collisions();
}

void TBoss3VoloptP01::update_state() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFDFFDFF);
        this->referenceHp = (s16) this->hp;
        if ((s32) *(s32 *)((s8 *)arg0 + 0x3A8) != 0) {
            volopt_breakup_flag = 1;
            link_photon__10TObjPlayerFUs(this->m_2d4, 0);
            TObjPlayer::set_grabbed_state(0x12C);
        }
        if (TBoss3Volopt__sub_8003F398() != 0) {
            temp_r3 = *(s32 *)&this->m_388;
            if (temp_r3 & 0x10000) {
                *(s32 *)&this->m_388 = (s32) (temp_r3 & 0xFFFFFFFE);
                *(s32 *)&this->next_action = 2;
                this->mode = 2;
                *(s32 *)&this->state = (s32) this->m_3a4;
            } else if (temp_r3 & 0x20000) {
                *(s32 *)&this->m_388 = (s32) (temp_r3 & 0xFFFFFFFE);
                TBoss3VoloptP01__sub_80042F84((u8 *)(arg0));
            } else {
                play_sound_effect(0x4003A810, (u8 *)&this->position, 0xA, 0);
                *(s32 *)&this->state = 2;
            }
        } else {
            this->m_b8 = 3;
            *(s32 *)&this->state = 1;
        case 1:
            advance_animation_playback(arg0);
            if ((u32) *(u32 *)&this->m_b4 != 8U) {
                temp_r3_2 = *(s32 *)&this->m_388;
                if (temp_r3_2 & 0x10000) {
                    *(s32 *)&this->m_388 = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    this->vfunc_60();
                } else if (temp_r3_2 & 0x20000) {
                    *(s32 *)&this->m_388 = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    TBoss3VoloptP01__sub_80042F84((u8 *)(arg0));
                } else {
                    play_sound_effect(0x4003A810, (u8 *)&this->position, 0xA, 0);
                    *(s32 *)&this->state = 2;
                }
            }
        }
        break;
    case 2:
        if (TBoss3VoloptP01__sub_80042FCC((u8 *)((void *)(arg0))) == 1) {
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
            this->vfunc_58();
        }
        break;
    case -1:
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        break;
    }
    submit_cursor_candidate(arg0, -1);
    minimap_render_dot((u8 *)&this->position, -0x5DB4, 1, 0);
}

void render__15TBoss3VoloptP01Fv(u8 *arg0) {
    s32 temp_r3;

    if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x02000000) && (((TBoss3VoloptP01_800430AC*)arg0)->m8((4e+02f), (4e+01f)) != 0)) {
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0x24));
        select_actor_lighting(arg0);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        if (TObjPlayer::check_demo_mode() == 1) {
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_chunk_object(*(void **)((s8 *)arg0 + 0x34));
        } else {
            translate_matrix(0, *(f32 *)((s8 *)arg0 + 0x38), *(f32 *)((s8 *)arg0 + 0x3C) + *(f32 *)((s8 *)arg0 + 0x38C), *(f32 *)((s8 *)arg0 + 0x40));
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            temp_r3 = *(s32 *)((s8 *)arg0 + 0x388);
            if (temp_r3 & 0x40000) {
                draw_chunk_model(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)) + 4));
            } else {
                if (temp_r3 & 0x80000) {
                    sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x3B4));
                    *(s8 *)((s8 *)volopt_p01_breakup_color_ptr + 7) = (s8) ((255.0f) * fabs_float());
                    *(s8 *)((s8 *)volopt_p01_breakup_color_ptr + 4) = 0;
                    *(s8 *)((s8 *)volopt_p01_breakup_color_ptr + 5) = 0;
                } else {
                    *(s8 *)((s8 *)volopt_p01_breakup_color_ptr + 7) = 0;
                    *(u8 *)((s8 *)volopt_p01_breakup_color_ptr + 4) = 0xCC;
                    *(u8 *)((s8 *)volopt_p01_breakup_color_ptr + 5) = 0xFF;
                }
                ((TObjEneRe7Berura *)arg0)->draw();
            }
        }
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
    }
}

void TBoss3VoloptP01__sub_80043CA8(void * _w0) {  }

void TBoss3VoloptP01::dispatch_state() {
    Obj_80043CAC *arg0 = (Obj_80043CAC *)this;
    switch (arg0->state) {
    case 0: sub_80043758__15TBoss3VoloptP01Fv(arg0); return;
    case 2: TBoss3VoloptP01__sub_800430D0(arg0); return;
    case 4: update_state(); return;
    case 9: run_state_machine(); return;
    case 5: update_breakup(); break;
    }
}

void run_task__15TBoss3VoloptP01Fv(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r4_2;
    u8 *temp_r4;
    if (TObjPlayer::check_demo_mode() == 1) {
        TBoss3VoloptP01__sub_80043CA8((void *)((void *) (arg0)));
        return;
    }
    if (((TBoss3VoloptP01 *)(arg0))->has_flag_0x800() != 0) {
        ((TBoss3VoloptP01 *)(arg0))->vfunc_63();
    } else if ((((TBoss3VoloptP01 *)(arg0))->test_flag30_512() != 0) && !(*(s32 *)((s8 *)arg0 + 0x30) & 0x04000000)) {
        ((TBoss3VoloptP01 *)(arg0))->vfunc_62();
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (((TObjPlayer *)arg0)->add_status_effect_timer((int) (4), (int) (-1)) <= 0) {
            reset_status_effect_row((void *) (arg0 + 0x284));
            ((TUnk_804B9870 *)arg0)->obj_clearFlags30((int) (0x4000));
        }
    } else {
        if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != (s32) *(s32 *)((s8 *)arg0 + 0x374)) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x37C) != -1) {
                *(s32 *)((s8 *)arg0 + 0x37C) = -1;
                ((TBoss3VoloptP01 *)arg0)->dispatch_state();
            }
            *(s16 *)((s8 *)arg0 + 0x326) = (s16) *(s32 *)((s8 *)arg0 + 0x374);
            *(s32 *)((s8 *)arg0 + 0x37C) = 0;
        }
        ((TBoss3VoloptP01 *)arg0)->dispatch_state();
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x300);
        *(f32 *)((s8 *)arg0 + 0x300) = (f32) (temp_f2 + ((18.0f) + *(f32 *)((s8 *)arg0 + 0x38C)));
        temp_r4 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA4));
        *(f32 *)((s8 *)temp_r4 + 4) = (f32) ((18.0f) + *(f32 *)((s8 *)arg0 + 0x38C));
        copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0), (int) (temp_r4), (f32) ((18.0f)), (f32) (temp_f2));
        temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x3B4);
        *(s32 *)((s8 *)arg0 + 0x3B4) = (s32) (temp_r4_2 + 0x400);
        ((VObj_18 *)(arg0))->m53(temp_r4_2);
    }
}

void TBoss3VoloptP01::destroy() {
    if ((*(struct VObj_80043EA4 * *)&TBoss3VoloptP01__breakup_model) != NULL) {
        (*(struct VObj_80043EA4 * *)&TBoss3VoloptP01__breakup_model)->m0(1);
    }
    (*(struct VObj_80043EA4 * *)&TBoss3VoloptP01__breakup_model) = NULL;
}

void TBoss3VoloptP01::init_breakup_effect() {
    s32 temp_r3;

    TBoss3VoloptP01__resource_bundle = boss3_volopt_resources;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    if (temp_r3 != 0) {
        temp_r3 = init_from_model__11TBreakUpMdlFl(temp_r3, *(s32 *)((s8 *)(*(void **)((s8 *)TBoss3VoloptP01__resource_bundle + 0x42C)) + 0x118));
    }
    TBoss3VoloptP01__breakup_model = temp_r3;
    lbl_805D4CC8 = collect_and_count__12TBoss3VoloptFUll(*(s32 *)((s8 *)(*(void **)((s8 *)TBoss3VoloptP01__resource_bundle + 0x42C)) + 0x118), 0xD);
    volopt_p01_boss_stat_handle_a = register_boss__6TLobbyFl(0x22);
    volopt_p01_shared_handler_b = dispatch_shared_handler_b__6TLobbyFl(0x22);
    volopt_p01_object_handle = register_object__6TLobbyFl(0x22);
    volopt_p01_shared_handler_handle = dispatch_shared_handler_a__6TLobbyFl(0x22);
    (*(s32 *)&volopt_p01_breakup_color_ptr) = *(s32 *)((s8 *)(*(void **)((s8 *)lbl_805D4CC8 + 4)) + 4);
}

void *TBoss3VoloptP01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x418);
    if (o != NULL) {
        o = TBoss3VoloptP01__sub_800442A0((u8 *)(o), (s32)(tl_04), (s32)(arg0));
    }
    return o;
}

void *__dt__15TBoss3VoloptP01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TBoss3VoloptP01;
        free_collision_body_parts(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss3VoloptP01::init_params() {
    void *p;
    F(((VObj_80044038 *)this), s32, 0xDC) = F(TBoss3VoloptP01__resource_bundle, s32, 0x430);
    F(((VObj_80044038 *)this), s32, 0xD8) = (s32) volopt_p01_action_table;
    ((TObjPlayer *)((VObj_80044038 *)this))->set_field_d8(F(((VObj_80044038 *)this), s32, 0xD8));
    init_collision_body_parts(((VObj_80044038 *)this), (void *) lbl_804841EC, 1);
    F(((VObj_80044038 *)this), s32, 0x368) = 0;
    F(((VObj_80044038 *)this), s32, 0x350) = (s32) lbl_804841D0;
    recalc_combat_stats((void *)volopt_p01_boss_stat_handle_a, (void *)volopt_p01_shared_handler_b, (void *)volopt_p01_object_handle, (f32)((1.0f)), (f32)((1.0f)));
    F(((VObj_80044038 *)this), s16, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(((VObj_80044038 *)this), F(((VObj_80044038 *)this), s16, 0xB8));
    ((TObjMotion *)((VObj_80044038 *)this))->set_field_b8(F(((VObj_80044038 *)this), s16, 0xB8));
    F(((VObj_80044038 *)this), s16, 0x32C) = F(((VObj_80044038 *)this), s16, 0x2B8);
    F(((VObj_80044038 *)this), s16, 0x32E) = F(((VObj_80044038 *)this), s16, 0x2BA);
    F(((VObj_80044038 *)this), s16, 0x33E) = F(((VObj_80044038 *)this), s16, 0x32C);
    ((TObjEneLappy *)((VObj_80044038 *)this))->set_param(0x2E);
    ((TObjEnemy *)((VObj_80044038 *)this))->update_prev_position();
    ((TBoss3Volopt *)((VObj_80044038 *)this))->reset_photon_effect();
    load_volopt_param_entry(0x11);
    reset_state__15TBoss3VoloptP01FPv(((VObj_80044038 *)this));
    p = F(((VObj_80044038 *)this), void *, 0xA4);
    F(p, u32, 0x18) &= ~1;
    F(((VObj_80044038 *)this), s32, 0x3AC) = 0;
    F(((VObj_80044038 *)this), s32, 0x3B0) = 0;
    ((TUnk_804806E8 *)((VObj_80044038 *)this))->add_flags_2e4(4);
    obj_setFlags30(((VObj_80044038 *)this), 0x8000);
    this->clear_lobby_object_state();
}

#pragma push
#pragma fp_contract on
u8 *TBoss3VoloptP01__ct(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3, s16 arg4) {
    s32 temp_r29;
    s32 temp_r3;
    s32 var_r0;
    TObjEnemyCustom__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80044174___vt__15TBoss3VoloptP01 *)&*__vt__15TBoss3VoloptP01).value;
    ((TObjPlayer *)(arg0 + 0x3BC))->construct_target_cursor_records();
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss3VoloptP01_class_name;
    *(s16 *)((s8 *)arg0 + 0x1C) = arg3;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg4;
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)arg1 + 0x28);
    *(s16 *)((s8 *)arg0 + 0x2A) = (s16) *(s16 *)((s8 *)arg1 + 0x2A);
    ((TBoss3VoloptP01 *)arg0)->init_params();
    temp_r29 = (s32) ((182.04445f) * (f32) (arg2 * 0x3C));
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) (((76.0f) * cos_table_lookup((int) (temp_r29))) + *(f32 *)((s8 *)(&boss3_volopt_spawn_pos.value) + 0));
    *(f32 *)((s8 *)arg0 + 0x40) = (f32) (((76.0f) * ((f32 (*)(int))sin_table_lookup)((int) (temp_r29))) + *(f32 *)((s8 *)(&boss3_volopt_spawn_pos.value) + 8));
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (0.0f);
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (-0x4000 - temp_r29);
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x34)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)__ct__17TObjVoloptShutterFv((void *)((int) (temp_r3)), (s32)((void *) (arg2))));
    }
    *(s32 *)((s8 *)arg0 + 0x3B8) = var_r0;
    return arg0;
}
#pragma pop

u8 *TBoss3VoloptP01__sub_800442A0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TObjEnemyCustom__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800442A0___vt__15TBoss3VoloptP01 *)&*__vt__15TBoss3VoloptP01).value;
    ((TObjPlayer *)(arg0 + 0x3BC))->construct_target_cursor_records();
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss3VoloptP01_class_name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    ((TBoss3VoloptP01 *)arg0)->init_params();
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x34))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__17TObjVoloptShutterFv(temp_r3, 0));
    }
    *(u8 **)((s8 *)arg0 + 0x3B8) = var_r0;
    return arg0;
}

void fn_80044330(void* p) { *(s32*)((char*)p + 0x0) = 0; }

int TObjPlayer::construct_target_cursor_records() {
    s32 _w0 = (s32)this;
    __construct_array((void *)(_w0 + 4), (void *)fn_8004438C, 0, 8, 11);
    fn_80044330((void *)_w0);
    return _w0;
}

void* fn_8004438C(void* p) { ((TBoss3VoloptP01 *)p)->init_cursor_record(); return p; }

void TBoss3VoloptP01::init_cursor_record() {
    O_800443BC *self = (O_800443BC *)this;
    self->a = 0xFFFF;
    self->b = 0;
    self->c = (0.0f);
}

}

#undef TObjPlayer__sub_80042ED0
#undef cast_tech_on_players__10TObjPlayerFPv
#undef play_sound_effect
#undef __nw__7TObjectFUl
#undef rotate_matrix_y
#undef translate_matrix
#undef pop_matrix
#undef push_nearby_players__10TObjPlayerFPv
#undef obj_testFlags30
#undef update_if_active__15TObjEneMe1GiGueFl
#undef update_pulse_scale__15TBoss3VoloptP01FPv
#undef fire_zonde_at_players__10TObjPlayerFPv
#undef sub_80043758__15TBoss3VoloptP01Fv
#undef TBoss3VoloptP01_class_name
