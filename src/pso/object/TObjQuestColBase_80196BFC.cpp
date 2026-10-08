#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_551843 { char pad[0x18]; };

struct VObj_18_551843 : VBase_18_551843 {
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
    virtual s32 m13();
    virtual u8 * m14();
};

struct RecoveredGlobal_80196D50___vt__16TObjQuestColBase { M2C_UNK value; u8 remaining[0x44]; };
typedef char RecoveredGlobal_80196D50___vt__16TObjQuestColBase_size[sizeof(RecoveredGlobal_80196D50___vt__16TObjQuestColBase) == 0x48 ? 1 : -1];

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct RecoveredGlobal_80196C60_lbl_804A7438 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_1a504b
{
  char pad[0x18];
};

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80196DB4___vt__16TObjQuestColBase
{
  M2C_UNK value;
  u8 remaining[0x44];
};

struct RecoveredFields_80196DB4_arg0
{
  s32 field_0;
  u8 unknown_4[0x2];
  u16 field_6;
  u8 unknown_8[0x10];
  M2C_UNK *field_18;
  u16 field_1C;
  u8 unknown_1E[0x4A];
  f32 field_68;
  u8 unknown_6C[0x18];
  s32 field_84;
  u8 unknown_88[0x24];
  f32 field_AC;
  s32 field_B0;
  s32 field_B4;
  s32 field_B8;
};

extern "C" {
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void run_task__16TObjQuestColBaseFPv(u8 *arg0);
u8 * destroy_particle_controller__10TObjPlayerFPvs(void *, s16);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80196D50___vt__16TObjQuestColBase __vt__16TObjQuestColBase;
extern s32 lbl_805D5C54;
u8 *__dt__16TObjQuestColBaseFv(u8 *arg0, s16 arg1);
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_80196C60_lbl_804A7438 lbl_804A7438;
extern const f32 lbl_805DBEF8;
extern const f32 lbl_805DBEFC;
extern const f32 lbl_805DBF00;
void TObjQuestColBase__sub_80196C60(u8 *arg0);
u16 TLobby__sub_801A2078(u16);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
extern RecoveredGlobal_80196D50___vt__16TObjQuestColBase __vt__16TObjQuestColBase;
extern s32 lbl_805D33E8;
extern u16 lbl_805D5C48;
extern s32 lbl_805D5C54;
u8 *TObjQuestColBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TObjQuestColBase__sub_80196CC4(void);
s32 is_within_range__16TObjQuestColBaseFif(s32 arg0, f32 farg0);
u32 get_player_by_client_id(s32);
f32 xyz_distance_squared(s32, s32);

extern s32 lbl_805D53A0;

s32 is_within_range__16TObjQuestColBaseFif(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if ((temp_r3 != 0U) && (xyz_distance_squared(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

typedef char RecoveredGlobal_80196C60_lbl_804A7438_size[sizeof(RecoveredGlobal_80196C60_lbl_804A7438) == 0x10 ? 1 : -1];
void TObjQuestColBase__sub_80196C60(u8 *arg0) {
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBEF8, lbl_805DBEFC) != 0) {
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&lbl_804A7438.value), (f32) (lbl_805DBF00 * M2C_FIELD(arg0, f32 *, 0xAC)));
    }
}

void TObjQuestColBase__sub_80196CC4(void) {  }
void run_task__16TObjQuestColBaseFPv(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB8));
    if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) == 0)) {
        M2C_FIELD(arg0, u8 **, 0xB8) = NULL;
    }
    if (((void *) M2C_FIELD(arg0, u8 **, 0xB8) == NULL) && (((VObj_18_551843 *)(arg0))->m13() != 0)) {
        M2C_FIELD(arg0, u8 **, 0xB8) = ((VObj_18_551843 *)(arg0))->m14();
    }
}
u8 *__dt__16TObjQuestColBaseFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__16TObjQuestColBase.value;
        lbl_805D5C54 -= 1;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef struct RecoveredFields_80196DB4_arg0 RecoveredFields_80196DB4_arg0;
typedef struct RecoveredGlobal_80196DB4___vt__16TObjQuestColBase RecoveredGlobal_80196DB4___vt__16TObjQuestColBase;
typedef struct VBase_18_1a504b VBase_18_1a504b;
typedef struct VObj_18_1a504b VObj_18_1a504b;
typedef char RecoveredGlobal_80196DB4___vt__16TObjQuestColBase_size[((sizeof(RecoveredGlobal_80196DB4___vt__16TObjQuestColBase)) == 0x48) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_1a504b_m5(_self, _arg0) (((VObj_18_1a504b *)(_self))->m5((_arg0)))
u8 *TObjQuestColBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
  u16 temp_r6;
  construct_collider_proxy__10TObjPlayerFPv((void *) arg0);
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_18 = &(*(RecoveredGlobal_80196DB4___vt__16TObjQuestColBase *)&__vt__16TObjQuestColBase).value;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_0 = lbl_805D33E8;
  PSO_VCALL_VObj_18_1a504b_m5(arg0, arg2);
  temp_r6 = -1;
  if (((RecoveredFields_80196DB4_arg0 *) arg0)->field_1C == temp_r6)
  {
    ((RecoveredFields_80196DB4_arg0 *) arg0)->field_1C = TLobby__sub_801A2078(0);
  }
  temp_r6 = lbl_805D5C48;
  lbl_805D5C48 = temp_r6 + 1;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_6 = temp_r6;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_AC = ((RecoveredFields_80196DB4_arg0 *) arg0)->field_68;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_B0 = ((RecoveredFields_80196DB4_arg0 *) arg0)->field_84;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_B4 = 1;
  ((RecoveredFields_80196DB4_arg0 *) arg0)->field_B8 = 0;
  lbl_805D5C54 += 1;
  return arg0;
}

}
