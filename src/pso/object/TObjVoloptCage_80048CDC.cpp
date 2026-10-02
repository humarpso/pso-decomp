#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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

struct VBase_18_345191 { char pad[0x18]; };

struct VObj_18_345191 : VBase_18_345191 {
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
    virtual M2C_UNK m57();
};

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
void create_breakup_mdl__12TBoss3VoloptFiiiii(void *, void *, s32, void *, s32);
void trigger_dell_biter_events__10TObjPlayerFPv(void *);
s32 rand(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern u8 lbl_804848FC[];
extern struct VObj_800490E8_80048F40 *lbl_805D4D20;
extern s32 TObjVoloptCage__data_805D4D28;
extern const f32 lbl_805D8860;
extern const f32 lbl_805D8864;
extern const f32 lbl_805D8868;
extern const f32 lbl_805D886C;
extern Pair_80048C04 lbl_804366E8[];
void fn_80048C04(Self_80048C04 *self);
void TObjVoloptCage__sub_80048CDC(u8 *arg0);
s32 TObjVoloptPillar__sub_80048118(s32);
s32 play_sound_effect(s32, u32, s16, s32);
extern const f32 lbl_805D8874;
extern const f32 lbl_805D8878;
void TObjVoloptCage__sub_80049000(u8 *arg0);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *, int);
void TObjVoloptCage__sub_80048E80(u8 *arg0);
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
    virtual M2C_UNK m61();
};

void destroy__14TObjVoloptCageFv(void);
void update_capture__14TObjVoloptCageFPv(u8 *arg0);
M2C_UNK TLobby__sub_80049568();
s32 is_locally_controlled__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801B5328(s32, void *, M2C_UNK, M2C_UNK, f32);
s32 get_player_by_client_id(u16);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK obj_set_flag_20000(s32);

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
void TObjVoloptCage__sub_80048CDC(u8 *arg0) {
    Vec_80048CDC v;
    s32 idx;

    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        play_sound_effect(0x4001C112, (u32)(arg0 + 0x38), 0, 0);
        create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4D20, lbl_804848FC, TObjVoloptCage__data_805D4D28, arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4D20, lbl_804848FC, TObjVoloptCage__data_805D4D28, arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        trigger_dell_biter_events__10TObjPlayerFPv(arg0 + 0x2FC);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0xC;
        disallow_rendering__7TObjectFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        break;
    case 1:
        if (M2C_FIELD(arg0, s16 *, 0x33C) & 1) {
            idx = (s32)(lbl_805D8860 * (lbl_805D8864 * (lbl_805D8868 * (f32)rand())));
            v.x = lbl_805D886C * TBoss8Dragon__sub_803D64DC(idx) + M2C_FIELD(arg0, f32 *, 0x2FC);
            v.y = lbl_805D886C * (lbl_805D8868 * (f32)rand()) + M2C_FIELD(arg0, f32 *, 0x300);
            v.z = lbl_805D886C * TBoss8Dragon__sub_803D64C0(idx) + M2C_FIELD(arg0, f32 *, 0x304);
            spawn_particle_effect(&v, 0xFB);
        }
        if ((M2C_FIELD(arg0, s16 *, 0x33C) -= 1) <= 0) {
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}

#pragma pop

void TObjVoloptCage__sub_80048E80(u8 *arg0) {
    s16 temp_r3;
    s32 temp_r0;
    s32 temp_r4;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C);
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (temp_r4 - 1);
        check_object_collisions__10TObjPlayerFPv((void *) (arg0), (int) (temp_r4));
        if ((s16) (M2C_FIELD(arg0, s16 *, 0x33C) -= 1) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
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

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x338));
        if (temp_r3 != 0) {
            if (is_locally_controlled__10TObjPlayerFPv() != 0) {
                TObjPlayer__sub_801B5328(temp_r3, arg0 + 0x38, -1, 0, lbl_805D8870);
                obj_set_flag_20000(temp_r3);
            }
            TLobby__sub_80049568();
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38C) - 1;
        M2C_FIELD(arg0, s32 *, 0x38C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            obj_setFlags30(arg0, 0x800);
            ((TObjVoloptCage_VObj_80048F40*)arg0)->m61();
        }
        break;
    }
}

extern struct VObj_800490E8_80048F40 *lbl_805D4D20;

#pragma push
#pragma opt_common_subs off
void TObjVoloptCage__sub_80049000(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        play_sound_effect(0x4003A80A, (u32) ((u8 *)(arg0) + 0x38), 0xA, 0);
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8874);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805D8878) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8878;
            M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (TObjVoloptPillar__sub_80048118(4) + 0x1C2);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj_18_345191 *)(arg0))->m57();
            break;
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}
#pragma pop

void destroy__14TObjVoloptCageFv(void) {
    if (lbl_805D4D20 != NULL) {
        lbl_805D4D20->m0(1);
    }
    lbl_805D4D20 = NULL;
}

}
