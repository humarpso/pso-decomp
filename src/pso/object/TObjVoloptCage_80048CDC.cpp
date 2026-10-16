#include "types.h"
#include "pso/object/TObjVoloptCage.h"
#include "pso/player/TObjPlayer.h"

struct Base_800490E8_80048F40 { char pad[0xC]; };
struct VObj_800490E8_80048F40 : Base_800490E8_80048F40 {
    virtual void m0(int);
};

typedef struct Pair_80048C04 {
    s32 id;
    f32 val;
} Pair_80048C04;

struct TBase_80048C04 { char pad[0x18]; };

struct Target_80048C04 : TBase_80048C04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(s32, Pair_80048C04 *, s32, s32, s32);
};

struct SBase_80048C04 { char pad[0x18]; };

struct Self_80048C04 : SBase_80048C04 {
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
    virtual void m60(); virtual void m61();
};

typedef struct Fields_80048C04 {
    u8 pad0[0x10];
    s32 id;
    u8 pad14[0x338 - 0x14];
    u16 target;
    u8 pad33A[0x390 - 0x33A];
    s32 state;
} Fields_80048C04;

struct Base_80048E80 { char pad[0x18]; };

struct VObj_80048E80 : Base_80048E80 {
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
};

extern "C" {
struct Vec_80048CDC { f32 x, y, z; };

void queue_destruction__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
s32 spawn_particle_effect(Vec_80048CDC *, s32);
void create_breakup_mdl__12TBoss3VoloptFlllll(void *, void *, s32, void *, s32);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u8 volopt_cage_breakup_params[];
extern struct VObj_800490E8_80048F40 *volopt_cage_breakup_model;
extern s32 TObjVoloptCage__texture_list;
extern const f32 lbl_805D8860;
extern const f32 lbl_805D8864;
extern const f32 lbl_805D8868;
extern const f32 lbl_805D886C;
extern Pair_80048C04 lbl_804366E8[];
void fn_80048C04(Self_80048C04 *self);
s32 TObjVoloptPillar__sub_80048118(s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern const f32 lbl_805D8874;
extern const f32 lbl_805D8878;
s32 check_object_collisions__10TObjPlayerFv(void *, int);
}

extern "C" {

struct TObjVoloptCage_base_80048F40 { char pad[0x18]; };
struct TObjVoloptCage_VObj_80048F40 : TObjVoloptCage_base_80048F40 {
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
    virtual s32 m61();
};

void update_capture__14TObjVoloptCageFPv(u8 *arg0);
s32 TLobby__sub_80049568();
s32 is_locally_controlled__10TObjPlayerFPv();
s32 send_6x2C_impose_hold(s32, void *, s32, s32, f32);
s32 get_player_by_client_id(u16);
s32 obj_setFlags30(void *, s32);
s32 obj_set_flag_20000(s32);

extern const f32 lbl_805D8870;

void fn_80048C04(Self_80048C04 *self) {
    Fields_80048C04 *f = (Fields_80048C04 *)self;
    Target_80048C04 *t;
    Pair_80048C04 p = lbl_804366E8[0];
    p.val = (f32)TObjVoloptPillar__sub_80048118(2);
    t = (Target_80048C04 *)get_player_by_client_id(f->target);
    if (t != NULL) {
        Pair_80048C04 q = p;
        t->m21(f->id, &q, 0, -1, -1);
    }
    f->state = 0xF;
    obj_setFlags30(self, 0x800);
    self->m61();
}

#pragma push
#pragma fp_contract on
void TObjVoloptCage::update_breakup() {
    u8 *arg0 = (u8 *)this;
    Vec_80048CDC v;
    s32 idx;

    switch (*(s32 *)&this->state) {
    case -1:
        break;
    case 0:
        play_sound_effect(0x4001C112, (u32)(arg0 + 0x38), 0, 0);
        create_breakup_mdl__12TBoss3VoloptFlllll(volopt_cage_breakup_model, volopt_cage_breakup_params, TObjVoloptCage__texture_list, arg0 + 0x2FC, this->rotation_y);
        create_breakup_mdl__12TBoss3VoloptFlllll(volopt_cage_breakup_model, volopt_cage_breakup_params, TObjVoloptCage__texture_list, arg0 + 0x2FC, this->rotation_y);
        ((TObjPlayer *)(arg0 + 0x2FC))->trigger_dell_biter_events();
        *(s16 *)&this->timer = 0xC;
        disallow_rendering__7TObjectFv(arg0);
        *(s32 *)&this->state = 1;
        break;
    case 1:
        if (*(s16 *)&this->timer & 1) {
            idx = (s32)(lbl_805D8860 * (lbl_805D8864 * (lbl_805D8868 * (f32)rand())));
            v.x = lbl_805D886C * cos_table_lookup(idx) + this->m_2fc;
            v.y = lbl_805D886C * (lbl_805D8868 * (f32)rand()) + *(f32 *)&this->m_300;
            v.z = lbl_805D886C * sin_table_lookup(idx) + this->m_304;
            spawn_particle_effect(&v, 0xFB);
        }
        if ((*(s16 *)&this->timer -= 1) <= 0) {
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}

#pragma pop

void TObjVoloptCage::update_collision_state() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r3;
    s32 temp_r0;
    s32 temp_r4;
    switch (*(s32 *)&this->state) {
    case -1:
        break;
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFDFFFFF);
        *(s16 *)&this->timer = 0x1E;
        *(s32 *)&this->state = 1;
    case 1:
        temp_r4 = *(s32 *)&this->unk_38C;
        *(s32 *)&this->unk_38C = (s32) (temp_r4 - 1);
        check_object_collisions__10TObjPlayerFv((void *) (arg0), (int) (temp_r4));
        if ((s16) (*(s16 *)&this->timer -= 1) <= 0) {
            *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFFFDFF);
            this->referenceHp = (s16) this->hp;
            *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
            ((VObj_80048E80 *)arg0)->m57();
        }
        break;
    default:
        break;
    }
}

void update_capture__14TObjVoloptCageFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        temp_r3 = get_player_by_client_id(*(u16 *)((s8 *)arg0 + 0x338));
        if (temp_r3 != 0) {
            if (is_locally_controlled__10TObjPlayerFPv() != 0) {
                send_6x2C_impose_hold(temp_r3, arg0 + 0x38, -1, 0, lbl_805D8870);
                obj_set_flag_20000(temp_r3);
            }
            TLobby__sub_80049568();
        }
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x38C) - 1;
        *(s32 *)((s8 *)arg0 + 0x38C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            obj_setFlags30(arg0, 0x800);
            ((TObjVoloptCage_VObj_80048F40*)arg0)->m61();
        }
        break;
    }
}

extern struct VObj_800490E8_80048F40 *volopt_cage_breakup_model;

#pragma push
#pragma opt_common_subs off
void TObjVoloptCage::sub_80049000() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000);
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        play_sound_effect(0x4003A80A, (u32) ((u8 *)(arg0) + 0x38), 0xA, 0);
        break;
    case 1:
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) + lbl_805D8874);
        if (*(f32 *)((s8 *)arg0 + 0x3C) >= lbl_805D8878) {
            *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805D8878;
            *(s32 *)((s8 *)arg0 + 0x38C) = (s32) (TObjVoloptPillar__sub_80048118(4) + 0x1C2);
            *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
            this->vfunc_59();
            break;
        }
        break;
    case -1:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFBFFFF);
        break;
    }
}
#pragma pop

void TObjVoloptCage::destroy() {
    if (volopt_cage_breakup_model != NULL) {
        volopt_cage_breakup_model->m0(1);
    }
    volopt_cage_breakup_model = NULL;
}

}
