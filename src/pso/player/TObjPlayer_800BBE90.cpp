#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VPad800BC050_800bc050_800BBE90 { char pad[0x18]; };
struct VObj800BC050_800bc050_800BBE90 : VPad800BC050_800bc050_800BBE90 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(void*, s32);
};
struct VPad800BC220_800bc220_800BBE90 { char pad[0x18]; };
struct VObj800BC220_800bc220_800BBE90 : VPad800BC220_800bc220_800BBE90 {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(void*, void*, s32);
};

struct VBase { char pad[0x18]; };

struct VObj : VBase { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(f32); virtual void m14(); virtual void m15(); virtual void m16(f32); };

struct Vec_800BBFD0 { f32 x, y, z; };

struct Obj_800BBFD0 { u8 pad[0x38]; Vec_800BBFD0 pos; u8 pad2[0x308 - 0x44]; f32 f308; f32 f30c; f32 f310; };

typedef struct Desc_800BBF08 {
    s32 a;
    s32 b;
} Desc_800BBF08;

typedef struct Rec_800BBF08 {
    u8 pad0[0x18];
    s32 flags;
    u8 pad1C[0x2C - 0x1C];
} Rec_800BBF08;

struct VBase_800BBF08 { char pad[0x18]; };

struct VObj_800BBF08 : VBase_800BBF08 {
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
    virtual void m18(void *, f32);
    virtual void m19();
    virtual void m20();
    virtual void m21(s32, Desc_800BBF08, Rec_800BBF08 *, s32, s32);
};

typedef struct Actor_800BBF08 : VObj_800BBF08 {
    u8 pad1C[0xA4 - 0x1C];
    Rec_800BBF08 *recs;
    s32 nrecs;
    s32 owner;
} Actor_800BBF08;

struct VBase_18_c1e16f { char pad[0x18]; };

struct VObj_18_c1e16f : VBase_18_c1e16f {
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
    virtual M2C_UNK m20(void *, void *);
};

struct Rec_800BC080 { u8 pad0[0x18]; s32 flags; u8 pad1C[0x2C - 0x1C]; };

struct Tgt_800BC080 { u8 pad[0x30]; s32 x30; u8 pad2[0xA4 - 0x34]; Rec_800BC080 *recs; s32 nrecs; };

struct Arg_800BC080 { s32 x0; s32 flags; };

struct Info_800BC080 { u8 pad[0x18]; s32 mask; };

struct VB_800BC080 { char pad[0x18]; };

struct P_800BC080 : VB_800BC080 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(Tgt_800BC080 *, Arg_800BC080 *);
    u8 pad1c[0xA4 - 0x1C];
    Info_800BC080 *info;
    u8 padA8[4];
    Tgt_800BC080 *self_tgt;
};

typedef s32 M2C_UNK;
struct Tgt_800BC250 { u8 pad[0x30]; s32 x30; };

struct Arg_800BC250 { s32 x0; s32 flags; };

struct Info_800BC250 { u8 pad[0x18]; s32 mask; };

struct VB_800BC250 { char pad[0x18]; };

struct P_800BC250 : VB_800BC250 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(Tgt_800BC250 *, Arg_800BC250 *, s32);
    u8 pad1c[0xA4 - 0x1C];
    Info_800BC250 *info;
    u8 padA8[4];
    Tgt_800BC250 *self_tgt;
};

extern "C" {
extern const f32 lbl_805D9EB4;
void TObjPlayer__sub_800BC1F0(u8 *arg0);
extern const f32 lbl_805D9EB4;
void TObjPlayer__sub_800BC394(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_800BBFD0 *dst, const Vec_800BBFD0 *src);
void subtract_vector(Vec_800BBFD0 *a, Vec_800BBFD0 *b);
void clamp_velocity__15TObjBoss2TunnelFPv(void *p);
void area_attack_apply_recoil(Obj_800BBFD0 *a, Obj_800BBFD0 *b, f32 s);
s32 obj_isState2_324(void *);
void area_attack_receive_direct(Actor_800BBF08 *src, Actor_800BBF08 *dst, f32 *recoil, Desc_800BBF08 *desc);
s32 obj_is_hit_receivable();
Tgt_800BC080 *get_battle_param__10TObjPlayerFi(s32);
s32 is_area_attack_target_eligible(void *, int);
s32 attack_target_history_add(void *, void *);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK mark_enemy_body_contacts(void *);
M2C_UNK TObjPlayer__sub_801561C4(void *, f32);
s32 area_attack_deliver_physical(P_800BC080 *arg0, Arg_800BC080 *arg1, void *arg2, f32 farg0);
s32 obj_is_hit_receivable();
Tgt_800BC080 *get_battle_param__10TObjPlayerFi(s32);
s32 is_area_attack_target_eligible(void *, int);
s32 attack_target_history_add(void *, void *);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK mark_enemy_body_contacts(void *);
M2C_UNK TObjPlayer__sub_801561C4(void *, f32);
s32 area_attack_deliver_direct(P_800BC250 *arg0, Arg_800BC250 *arg1, s32 arg2, void *arg3, f32 farg0);
}

extern "C" {

struct Base_800bbe90 { char pad[0x18]; };
struct VObj_800bbe90 : Base_800bbe90 {
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
    virtual void m18(void *, f32);
    virtual void m19();
    virtual void m20(s32, f32);
};

void TObjPlayer__sub_800BC220(void *arg0, void *arg1, void *arg2);
void apply_hit_if_active__10TObjPlayerFPvPvPv(void *arg0, void *arg1, f32 *arg2);
void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 obj_isState2_324(void *);

extern const f32 lbl_805D9EB0;

void apply_hit_if_active__10TObjPlayerFPvPvPv(void *arg0, void *arg1, f32 *arg2) {
    ((VObj_800bbe90*)arg1)->m20(M2C_FIELD(arg0, s32 *, 0xAC), lbl_805D9EB0);
    if (obj_isState2_324(arg1) == 0) {
        ((VObj_800bbe90*)arg0)->m18(arg1, *arg2);
    }
}

void area_attack_receive_direct(Actor_800BBF08 *src, Actor_800BBF08 *dst, f32 *recoil, Desc_800BBF08 *desc) {
    s32 i;
    Rec_800BBF08 *rec;
    for (i = 0; i < dst->nrecs; i++) {
        rec = &dst->recs[i];
        if (rec->flags & 0x04000000) {
            dst->m21(src->owner, *desc, rec, -1, -1);
            if (obj_isState2_324(dst) == 0) {
                src->m18(dst, *recoil);
            }
            return;
        }
    }
}

#pragma push
#pragma fp_contract on
void area_attack_apply_recoil(Obj_800BBFD0 *a, Obj_800BBFD0 *b, f32 s) {
    Vec_800BBFD0 v;
    VecCopy__FP3VecPC3Vec(&v, &b->pos);
    subtract_vector(&v, &a->pos);
    clamp_velocity__15TObjBoss2TunnelFPv(&v);
    b->f308 = v.x * s + b->f308;
    b->f310 = v.z * s + b->f310;
}
#pragma pop

void dispatch_vt15__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    ((VObj800BC050_800bc050_800BBE90*)arg0)->m15(arg1, 0);
}

s32 area_attack_deliver_physical(P_800BC080 *arg0, Arg_800BC080 *arg1, void *arg2, f32 farg0) {
    s32 hit = 0;
    s32 mask = 0;
    Tgt_800BC080 *t;
    s32 i;
    s32 ok;
    s32 j;
    s32 n;
    if (arg0->self_tgt == NULL) {
        return 0;
    }
    init_all_slots__10TObjPlayerFv();
    if (arg1->flags & 1) {
        TObjPlayer__sub_801561C4(arg0, farg0);
        mask |= 0x80000;
    }
    if (arg1->flags & 2) {
        mark_enemy_body_contacts(arg0);
        mask |= 0x100000;
    }
    if (arg0->info->mask & mask) {
        for (i = 0; i < 0x10; i++) {
            t = get_battle_param__10TObjPlayerFi(i);
            if (t == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && t != arg0->self_tgt && is_area_attack_target_eligible(arg0, t->x30) != 0) {
                ok = 1;
                if (arg2 != NULL && attack_target_history_add(arg2, t) == 0) {
                    ok = 0;
                }
                if (ok != 0) {
                    arg0->m20(t, arg1);
                    hit = 1;
                } else {
                    n = t->nrecs;
                    for (j = 0; j < n; j++) {
                        t->recs[j].flags &= ~0x04000000;
                    }
                }
            }
        }
    }
    return hit;
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800BC1F0(u8 *arg0) {
    ((VObj *)arg0)->m16(lbl_805D9EB4);
}
#pragma pop

void TObjPlayer__sub_800BC220(void *arg0, void *arg1, void *arg2) {
    ((VObj800BC220_800bc220_800BBE90*)arg0)->m12(arg1, arg2, 0);
}

s32 area_attack_deliver_direct(P_800BC250 *arg0, Arg_800BC250 *arg1, s32 arg2, void *arg3, f32 farg0) {
    s32 hit = 0;
    s32 mask = 0;
    Tgt_800BC250 *t;
    s32 i;
    s32 ok;
    if (arg0->self_tgt == NULL) {
        return 0;
    }
    init_all_slots__10TObjPlayerFv();
    if (arg1->flags & 1) {
        TObjPlayer__sub_801561C4(arg0, farg0);
        mask |= 0x80000;
    }
    if (arg1->flags & 2) {
        mark_enemy_body_contacts(arg0);
        mask |= 0x100000;
    }
    if (arg0->info->mask & mask) {
        for (i = 0; i < 0x10; i++) {
            t = ((Tgt_800BC250 *)get_battle_param__10TObjPlayerFi(i));
            if (t == NULL) {
                break;
            }
            if (obj_is_hit_receivable() != 0 && t != arg0->self_tgt && is_area_attack_target_eligible(arg0, t->x30) != 0) {
                ok = 1;
                if (arg3 != NULL && attack_target_history_add(arg3, t) == 0) {
                    ok = 0;
                }
                if (ok != 0) {
                    arg0->m19(t, arg1, arg2);
                    hit = 1;
                }
            }
        }
    }
    return hit;
}

void TObjPlayer__sub_800BC394(u8 *arg0) {
    ((VObj *)arg0)->m13(lbl_805D9EB4);
}

}
