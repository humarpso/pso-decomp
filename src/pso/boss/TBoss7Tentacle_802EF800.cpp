#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802EFB1C_lbl_80541918 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802EFB1C_lbl_80541918;
struct VBase_18_9935f6 { char pad[0x18]; };

struct VObj_18_9935f6 : VBase_18_9935f6 {
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
    virtual M2C_UNK m20(s32, f32);
    virtual M2C_UNK m21(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual s32 m25(s32, M2C_UNK, f32);
};

typedef struct Hit_802EF99C { s32 a; f32 f; } Hit_802EF99C;

typedef struct Obj_802EF99C { u8 pad0[0x44]; s32 flags[12]; } Obj_802EF99C;

struct Cnt_802EF898 { u8 pad[4]; u32 n; };

struct Ten_802EF898 { u8 pad[0x74]; f32 t; Cnt_802EF898 *c; };

extern "C" {
int queue_destruction__7TObjectFv(void*);
M2C_UNK attach_particle_model(int, int, int, int, int, f32);
s32 spawn_particle_effect(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 queue_boss_effect__10TObjPlayerFPv(int);
s32 TObjPlayer__sub_802E80A0();
extern const f32 TBoss7Tentacle__data_805DEC00;
s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);
void TBoss7Tentacle__sub_802EF800(u8 *arg0);
extern RecoveredGlobal_802EFB1C_lbl_80541918 lbl_80541918;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;
extern const f32 lbl_805DEC14;
extern const f32 lbl_805DEC18;
void TBoss7Tentacle__sub_802EFB1C(u8 *arg0);
s32 obj_testFlags30(void *, s32);
s32 spawn_particle_effect(void *, int);
f32 horizontal_distance_squared(void *, void *);
u8 *get_player_by_client_id(u16);
extern RecoveredGlobal_802EFB1C_lbl_80541918 lbl_80541918;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;
extern const f32 lbl_805DEC08;
extern const f32 lbl_805DEC0C;
extern const f32 lbl_805DEC10;
void TBoss7Tentacle__sub_802EF99C(u8 *arg0);
extern const f32 TBoss7Tentacle__data_805DEC00;
s32 TBoss7Tentacle__sub_802EF898(void *p, f32 d);
}

extern "C" {

void TBoss7Tentacle__sub_802EF954(void* p);
s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0);
int disallow_rendering__7TObjectFv(void*);
int queue_destruction__7TObjectFv(void*);

extern M2C_UNK TBoss7Tentacle__data_804740C8;
extern const f32 TBoss7Tentacle__data_805DEC00;
extern const f32 TBoss7Tentacle__data_805DEC04;

void TBoss7Tentacle__sub_802EF800(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r3;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x40)))) != 0U)
  {
    queue_destruction__7TObjectFv((void*)(*((void **) (((s8 *) arg0) + 0x40))));
    *((u32 *) (((s8 *) arg0) + 0x40)) = 0U;
  }
  temp_r31 = spawn_particle_effect((void *) (arg0 + 0x1C), (int) 0x215);
  temp_r3 = temp_r31;
  if (temp_r3 != 0)
  {
    temp_r31 = TObjPlayer__sub_802E80A0();
    attach_particle_model((int) temp_r3, (int) queue_boss_effect__10TObjPlayerFPv((int) 4), (int) temp_r31, (int) 0, (int) 0, (f32) (*(f32 *)&TBoss7Tentacle__data_805DEC00));
  }
  TBoss3Volopt__sub_8022675C((int) 0x3A809, (void *) (arg0 + 0x1C), (int) 0, (int) 0);
}

s32 TBoss7Tentacle__sub_802EF898(void *p, f32 d) {
    Ten_802EF898 *o = (Ten_802EF898 *)p;
    f32 lim = (f32)o->c->n - TBoss7Tentacle__data_805DEC00;
    o->t += d;
    if (lim <= o->t) {
        o->t -= lim;
    }
}

s32 advance_toward_limit__14TBoss7TentacleFPvf(void *arg0, f32 farg0) {
    f32 temp_f4;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f4 < ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u32 *, 4) - TBoss7Tentacle__data_805DEC00)) {
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f4 + farg0);
        return 0;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    return 1;
}

extern const f32 TBoss7Tentacle__data_805DEC00;

void TBoss7Tentacle__sub_802EF954(void* p) { if (advance_toward_limit__14TBoss7TentacleFPvf((void *)(p), TBoss7Tentacle__data_805DEC00) != 0) { queue_destruction__7TObjectFv(p); disallow_rendering__7TObjectFv(p); } }
typedef char RecoveredGlobal_802EFB1C_lbl_80541918_size[sizeof(RecoveredGlobal_802EFB1C_lbl_80541918) == 0x10 ? 1 : -1];

void TBoss7Tentacle__sub_802EF99C(u8 *arg0) {
    s32 i;
    u8 *p;
    TBoss7Tentacle__sub_802EF898((void *)(arg0), lbl_805DEC08);
    for (i = 0; (u16)i != 12; i++) {
        p = get_player_by_client_id((u16)i);
        if (p != NULL && horizontal_distance_squared(p + 0x38, arg0 + 0x1C) < lbl_805DEC0C) {
            if (*(s32 *)(arg0 + 0x3C) == 0 && ((VObj_18_9935f6 *)p)->m25(*(s32 *)(arg0 + 0x10), 0, lbl_805DEC10) != 0) {
                ((VObj_18_9935f6 *)p)->m20(*(s32 *)(arg0 + 0x10), TBoss7Tentacle__data_805DEC00);
            }
            if (obj_testFlags30(p, 0x801) == 0) {
                Hit_802EF99C b;
                b.a = 15;
                b.f = lbl_805DEC0C;
                Hit_802EF99C a = b;
                ((VObj_18_9935f6 *)p)->m21(*(s32 *)(arg0 + 0x10), &a, 0, -1, -1);
                if (((Obj_802EF99C *)arg0)->flags[(u16)i] == 0) {
                    spawn_particle_effect(p + 0x2FC, 0x214);
                    ((Obj_802EF99C *)arg0)->flags[(u16)i] = 1;
                }
            }
        }
    }
    if (*(s32 *)(arg0 + 0x3C) == 0x3C) {
        *(s32 *)(arg0 + 0x38) = 3;
        *(s32 *)(arg0 + 0x3C) = 0;
        *(s32 *)(arg0 + 0x78) = *(s32 *)((u8 *)&lbl_80541918 + 8);
        *(f32 *)(arg0 + 0x74) = TBoss7Tentacle__data_805DEC04;
    } else {
        *(s32 *)(arg0 + 0x3C) += 1;
    }
}

void TBoss7Tentacle__sub_802EFB1C(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x74);
    if ((lbl_805DEC14 < temp_f1) && (temp_f1 <= lbl_805DEC18)) {
        TBoss7Tentacle__sub_802EF800((u8 *)(arg0));
    }
    if (advance_toward_limit__14TBoss7TentacleFPvf(arg0, TBoss7Tentacle__data_805DEC00) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 2;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(&lbl_80541918.value, s32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) TBoss7Tentacle__data_805DEC04;
    }
}

}
