#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80238388 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
};

struct RecoveredGlobal_80238388_lbl_8044DAF0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80230D9C_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80230D9C_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80230D9C_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

struct RaFoie_802381F8 {
    u8 pad0[0x22];
    u16 level;
    void *tev;
    u8 m28[0x34 - 0x28];
    f32 sx;
    f32 sy;
    f32 sz;
    u8 pad40[0x48 - 0x40];
    u8 m48[1];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TTecRaFoie__sub_80082688(void *, void *, f32);
s32 fn_80082764(void *, void *, f32);
extern RecoveredGlobal_80238388_lbl_8044DAF0 lbl_8044DAF0;
extern const f32 TTecRaFoie__data_805DC8CC;
extern const f32 lbl_805DC8D8;
extern const f32 lbl_805DC8DC;
extern const f32 lbl_805DC8E0;
void TTecRaFoie__sub_80238388(u8 *arg0);
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_80230D9C_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_80230D9C_lbl_804CC55C lbl_804CC55C;
void TTecRaFoie__sub_802380F4(u8 *arg0);
void TObjFish__sub_8001EDC4(void *, s32);
void set_cull_none__8TObjFishFv(void);
void set_cull_back__8TObjFishFv(void);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(s32);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void set_indirect_tev__6TSceneFii(void *, s32);
void draw_field_1c__6TSceneFPviii(void *, s32, s32, s32);
void TOMonitorMachine01__sub_803D8B5C(s32, f32, f32, f32);
void TObjPlayer__sub_803D9214(s32, s32);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(void *);
void TObjBoss2Tunnel__sub_803DB470(void);
void set_chunk_material_color(void *, s32);
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC8D0;
extern const f32 lbl_805DC8D4;
void TTecRaFoie__sub_802381F8(RaFoie_802381F8 *o);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80238388_lbl_8044DAF0_size[sizeof(RecoveredGlobal_80238388_lbl_8044DAF0) == 0x10 ? 1 : -1];

typedef struct RecoveredFields_80230D9C_arg0 RecoveredFields_80230D9C_arg0;
typedef struct RecoveredGlobal_80230D9C_lbl_804CC510 RecoveredGlobal_80230D9C_lbl_804CC510;
typedef struct RecoveredGlobal_80230D9C_lbl_804CC55C RecoveredGlobal_80230D9C_lbl_804CC55C;
typedef char RecoveredGlobal_80230D9C_lbl_804CC510_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80230D9C_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecRaFoie__sub_802380F4(u8 *arg0) {
  int new_var;
 new_var = (int) TTecCtrl__sub_8022DBC4((int) 0x2, (int) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78, (int) 0xFFFF); do { TTecAnti__sub_8022B35C((void *) (arg0 + ((0, 0x88))), new_var); if ((((s16) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0)) { ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x8))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0xa))) * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)); return; } } while (0);
  ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 + ((f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_AC * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)));
  if (is_technique_ready__8TTecCtrlFv())
  {
    ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x10))));
  }
}

void TTecRaFoie__sub_802381F8(RaFoie_802381F8 *o) {
    f32 x;
    f32 y;
    f32 z;
    s32 id;
    u16 lv;
    if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0x12 ||
        get_global_state__14TOKeyMachine01Fv() == 0xF) {
        return;
    }
    begin_effect_render__13TParticleCtrlFv();
    id = some_id_805c6f74;
    lbl_805D5660 = id;
    some_id_805c6f74 = id | 0x200010;
    set_chunk_material_color(o->m48, id);
    if (o->tev != 0) {
        draw_field_1c__6TSceneFPviii(o->tev, 2, 0, 0);
    }
    lv = o->level;
    x = o->sx;
    y = o->sy;
    z = o->sz;
    if (lv >= 0xF && lv < 0x19) {
        x = lbl_805DC8D0 * x;
        y = lbl_805DC8D0 * y;
        z = lbl_805DC8D0 * z;
    } else if (lv >= 0x19 && lv < 0x1E) {
        x = lbl_805DC8D4 * x;
        y = lbl_805DC8D4 * y;
        z = lbl_805DC8D4 * z;
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(o->m28);
    TOMonitorMachine01__sub_803D8B5C(0, x, y, z);
    TObjPlayer__sub_803D9214(0, *(s32 *)(lbl_805D4DF0 + 0x194));
    set_global_param__8TObjFishFi(lbl_805D63B0);
    set_cull_back__8TObjFishFv();
    set_depth_buffer_settings_id__FUl(3);
    TObjFish__sub_8001EDC4(lbl_805D63AC, 0xB);
    TObjBoss2Tunnel__sub_803DB470();
    func_80141618__Fv();
    set_cull_none__8TObjFishFv();
    TObjPlayer__sub_803D9B78();
    some_id_805c6f74 = lbl_805D5660;
    if (o->tev != 0) {
        set_indirect_tev__6TSceneFii(o->tev, 0);
    }
    end_effect_render__13TParticleCtrlFv();
}

void TTecRaFoie__sub_80238388(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80238388, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80238388, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80238388, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80238388, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80238388, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80238388, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80238388, sp20) == 0x18) ? 1 : -1];
    Stack_80238388 stack;
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) >= 0x10) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) > 0x6E) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    stack.sp8 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0xC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
    stack.sp18 = temp_f1;
    stack.sp1C = temp_f1;
    stack.sp20 = temp_f1;
    if (M2C_FIELD(arg0, f32 *, 0x34) >= (temp_f1 - TTecRaFoie__data_805DC8CC)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
        }
        TTecRaFoie__sub_80082688((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) (lbl_805DC8D8));
    } else {
        TTecRaFoie__sub_80082688((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) (lbl_805DC8DC));
    }
    fn_80082764((void *) (arg0 + 0x48), (void *) (&stack.sp8), (f32) (lbl_805DC8E0));
}
#pragma pop

}
