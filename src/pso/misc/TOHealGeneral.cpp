#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801695a8_80169520 { char pad[0x18]; };
struct VObj_801695a8_80169520 : Base_801695a8_80169520 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_80169710_lbl_804B2748
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80169710_lbl_804B2760
{
  M2C_UNK value;
  u8 remaining[0xC];
};

typedef struct TOHealGeneral_801697C0 {
    u8 pad0[0x18];
    void **vtable;
    u8 pad1C[0xEC - 0x1C];
    u32 handles[2];
} TOHealGeneral_801697C0;

extern "C" {
void TOHealGeneral__sub_801699F8(u8 *arg0, s16 *arg1);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern RecoveredGlobal_80169710_lbl_804B2748 lbl_804B2748;
extern RecoveredGlobal_80169710_lbl_804B2760 lbl_804B2760;
extern u32 TOHealGeneral__data_805D59F0;
void TOHealGeneral__sub_80169710(void);
void request_destroy__11TBoss4Type2FUi(u32);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_key_base__5TOKeyFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
extern void *__vt__13TOHealGeneral[];
TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag);
}

extern "C" {

void TOHealGeneral__sub_801699F4(void);
void TOHealGeneral__sub_80169B28(void *arg0, s32 arg1);
void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1);
void* TOHealGeneral__vt7(void* p);
void close_dialog_window__13TOHealGeneralFv(void);
void *create__13TOHealGeneralFPv(void *arg0);
void render__13TOHealGeneralFv(u8 *arg0);
void run_task__13TOHealGeneralFv(void *arg0);
s32 update_active_state__13TOHealGeneralFPv(void *arg0);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
u8 TODoorAncient08__sub_80229220(u16);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TOHangerMachine01__sub_80169168(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TOHealGeneral__ct(void *, void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TObjPlayer__sub_80169334(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK fn_8016916C(void *);
M2C_UNK fn_80169230(void *);
M2C_UNK set_global_param__8TObjFishFi(int);

void run_task__13TOHealGeneralFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOHangerMachine01__sub_80169168(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_80169334(arg0);
        return;
    case 1:
        fn_80169230(arg0);
        return;
    case 2:
        fn_8016916C(arg0);
        return;
    }
}

void render__13TOHealGeneralFv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;

    if (((VObj_801695a8_80169520 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        TObjPlayer__sub_803D9B2C();
        temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xCC)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x30));
        TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31_3, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0xD0)), (f32) (M2C_FIELD(temp_r31_3, f32 *, 0x10)));
        rotate_matrix_y((int) (0), (int) (-M2C_FIELD(arg0, s32 *, 0xCC)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

void *create__13TOHealGeneralFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOHealGeneral__ct(o, arg0);
    }
    return o;
}

extern u32 TOHealGeneral__data_805D59F0;

void close_dialog_window__13TOHealGeneralFv(void) {
    if ((u32) TOHealGeneral__data_805D59F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOHealGeneral__data_805D59F0, 1);
        TOHealGeneral__data_805D59F0 = 0U;
    }
}

typedef struct RecoveredGlobal_80169710_lbl_804B2748 RecoveredGlobal_80169710_lbl_804B2748;
typedef struct RecoveredGlobal_80169710_lbl_804B2760 RecoveredGlobal_80169710_lbl_804B2760;
void TOHealGeneral__sub_80169710(void) {
  s32 temp_r3;
  s32 temp_r3_2;
  s32 temp_r3_3;
  s32 var_r0;
  s32 var_r0_2;
  int new_var;
  temp_r3 = get_global_state__14TOKeyMachine01Fv();
  if (temp_r3 < 0x22)
  {
    if (temp_r3 < 0x1E)
    {
      if (temp_r3 < 0x17)
      {
        temp_r3_2++;
        temp_r3_2--;
        goto block_8;
      }
      goto block_5;
    }
    goto block_8;
  }
  if (temp_r3 < 0x24)
  {
    block_5:
    temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x440);
    var_r0 = temp_r3_2;
    if (var_r0 != 0)
    {
      var_r0 = (long) TLobby__sub_80020004((void *) temp_r3_2, 1, &lbl_804B2760.value, 0, 0, 0);
    }
    (*(s32 *)&TOHealGeneral__data_805D59F0) = var_r0;
    return;
  }
  block_8:
  temp_r3_3 = (new_var = alloc__23TAdSinglePlyChrSelectGCFPv((void *) 0x440));
  var_r0_2 = temp_r3_3;
  if (var_r0_2 != 0)
  {
    var_r0_2 = (long) TLobby__sub_80020004((void *) temp_r3_3, 1, &lbl_804B2748.value, 0, 0, 0);
  }
  (*(s32 *)&TOHealGeneral__data_805D59F0) = var_r0_2;
}

TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        self->vtable = __vt__13TOHealGeneral;
        for (i = 0; i < 2; i++) {
            if (self->handles[i] != 0) {
                request_destroy__11TBoss4Type2FUi(self->handles[i]);
            }
        }
        TObjPlayer__sub_80154A00(self);
        TObjEneGibbles__sub_80156720(self);
        destroy_key_base__5TOKeyFPvs(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void* TOHealGeneral__vt7(void* p) { return (char*)p + 0xe0; }

void TOHealGeneral__sub_801699F4(void) {  }

extern f32 lbl_805DB6D8;

void TOHealGeneral__sub_801699F8(u8 *arg0, s16 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) *arg1;
}

s32 update_active_state__13TOHealGeneralFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 1:
        if (TODragonfly__sub_80158360(lbl_805DB6D8) != 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    case 2:
        if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xD0)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
        break;
    }
    return M2C_FIELD(arg0, s32 *, 0xCC);
}

void TOHealGeneral__sub_80169B28(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r4;
}

void TOHealGeneral__sub_80169B3C(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = var_r4;
}

s32 update_heal_gauge_state__13TOHealGeneralFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    if (temp_r0 > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    TOHealGeneral__sub_80169B3C((void *)((void *)(arg0)), (s32)((s32)(M2C_FIELD(arg0, s32 *, 0x88))));
    TOHealGeneral__sub_80169B28((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x8C)));
    return M2C_FIELD(arg0, s32 *, 0xD0);
}

}
