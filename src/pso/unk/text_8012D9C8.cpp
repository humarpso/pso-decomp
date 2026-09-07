#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8012DBF4_lbl_804A5B20 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
extern const f32 lbl_805DAF38;
extern const f32 lbl_805DAF3C;
extern const f32 lbl_805DAF50;
extern const f32 lbl_805DAF54;
void TObjPlayer__sub_8012DB48(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012DC94(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
extern const f32 lbl_805DAF40;
extern const f32 lbl_805DAF44;
extern const f32 lbl_805DAF48;
extern const f32 lbl_805DAF4C;
void TObjPlayer__sub_8012DA98(u8 *arg0);
u8 * TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_8012DBF4_lbl_804A5B20 lbl_804A5B20;
extern const f32 lbl_805DAF38;
extern const f32 lbl_805DAF3C;
u8 *TObjPlayer__sub_8012DBF4(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void TObjPlayer__sub_8012DA98(u8 *arg0) {
  int new_var;
  u8 temp_r3;
  temp_r3 = get_slot_count__14TItemProShieldFPv();
  switch ((s32) temp_r3)
  {
    case 5:
    {
      s32 lim;
      TObjPlayer__sub_80115BC0((void *)(arg0 + 0x1F8), (int)(0x1555), (int)(0x8000));
      new_var = 0x8000;
      if (new_var <= ((s32) (*((s32 *) (((s8 *) arg0) + 0x1F8)))))
      {
        approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x204, lbl_805DAF40, lbl_805DAF44);
      }
    }
      break;
    case 6:
      break;
    case 7:
      approach_value__20TItemEffOrgaFlowShotFPvff(arg0 + 0x204, lbl_805DAF48, lbl_805DAF4C);
      TObjPlayer__sub_80115BC0((void *)(arg0 + 0x1F8), (int)(-0x1555), (int)(-0x8000));
      break;
  }
}

void TObjPlayer__sub_8012DB48(u8 *arg0) {
  u8 temp_r3;
  temp_r3 = get_slot_count__14TItemProShieldFPv();
  switch ((s32) temp_r3)
  {
    case 5:
      approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) lbl_805DAF50, (f32) lbl_805DAF38);
      if (lbl_805DAF38 <= (*((f32 *) (((s8 *) arg0) + 0x204))))
    {
      TObjPlayer__sub_80115BC0((void *) (arg0 + 0x1F8), (int) (-0x2AAA), (int) 0);
    }
    case 6:
      return;
    return;
    case 7:
      approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x204), (f32) lbl_805DAF54, (f32) lbl_805DAF3C);
      TObjPlayer__sub_80115BC0((void *) (arg0 + 0x1F8), (int) 0x2AAA, (int) 0);
      break;
  }
}

typedef char RecoveredGlobal_8012DBF4_lbl_804A5B20_size[sizeof(RecoveredGlobal_8012DBF4_lbl_804A5B20) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_8012DBF4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 temp_r0;
    TObjPlayer__sub_80120D50(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A5B20.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    temp_r0 = M2C_FIELD(arg2, u8 *, 2);
    switch ((s32) temp_r0) {
    case 6:
        break;
    case 5:
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DAF38;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAF38;
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DAF38;
        break;
    case 7:
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DAF3C;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAF3C;
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DAF3C;
        break;
    }
    return arg0;
}

u8 *TObjPlayer__sub_8012DC94(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8012DBF4((u8 *)(temp_r3), (u8 *)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
