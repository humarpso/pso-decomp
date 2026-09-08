#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_isState3_324(void *);
s16 obj_getField1c(void *);
s32 get_state_ptr__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8012ADD4(void *, void *);
s32 test_flag_2000000__10TObjPlayerFPv(void *);
s32 reset_volopt_state__10TObjPlayerFv(void *);
M2C_UNK build_packet_header__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D2404(void *);
u32 TObjPlayer__sub_801D32A0(void *, void *);
void TObjPlayer__sub_801CEA08(u32 arg0);
s32 reset_target_link__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CDDEC(void *);
s32 TObjPlayer__sub_801CDE0C(void *);
s32 TObjPlayer__sub_801CDF9C(void *);
s32 TObjPlayer__sub_801CE064();
s32 TObjPlayer__sub_801CE068(void *);
s32 TObjPlayer__sub_801CE134(void *);
s32 apply_status_action__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CE19C(s32 arg0, s16 arg1);
}

extern "C" {

void TObjPlayer__sub_801CE19C(s32 arg0, s16 arg1) {
  int new_var2;
  void *new_var;
  new_var2 = ((u32) arg1) <= 8U;
  {
    new_var = (void *) arg0;
    switch (arg1)
    {
      case 7:
        apply_status_action__10TObjPlayerFPv((void *) arg0);
        return;
      case 2:
        TObjPlayer__sub_801CE134((void *) arg0);
        return;
      case 3:
        TObjPlayer__sub_801CE068(new_var);
        return;
      case 8:
        TObjPlayer__sub_801CE064();
        return;
      case 5:
        TObjPlayer__sub_801CDF9C((void *) arg0);
        return;
      case 0:
        TObjPlayer__sub_801CDE0C(new_var);
        return;
      case 1:
        TObjPlayer__sub_801CDDEC(new_var);
        return;
      case 6:
        reset_target_link__10TObjPlayerFPv(new_var);
        break;
    }
  }
}

void TObjPlayer__sub_801CEA08(u32 arg0) {
    s16 sp8[0x14];
    if (((obj_isState2_324((void *) (arg0)) == 0) || (reset_volopt_state__10TObjPlayerFv((void *) (arg0)) != 0)) && ((obj_isState3_324((void *) (arg0)) != 0) || (TObjPlayer__sub_801D32A0((void *) (arg0 + 0x7CC), (void *) (arg0)) != 0U)) && (test_flag_2000000__10TObjPlayerFPv((void *) (arg0)) == 0) && ((arg0 == 0U) || (obj_isState2_324((void *) (arg0)) == 0))) {
        build_packet_header__10TObjPlayerFPv((void *) (sp8));
        sp8[1] = obj_getField1c((void *) (arg0));
        TObjPlayer__sub_8012ADD4((void *) (&sp8[2]), (void *) (get_state_ptr__10TObjPlayerFPv((void *) (arg0 + 0x7CC))));
        TObjPlayer__sub_801D2404((void *) (sp8));
    }
}

}
