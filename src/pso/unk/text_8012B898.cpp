#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(int, void *, int, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(int, void *, int, int);
M2C_UNK create_tec_zonde__10TObjPlayerFPvPvPvPv(int, void *, void *, int);
void TObjPlayer__sub_8012B8F0(u8 *arg0, s32 arg1);
u8 * init_vtable_and_clear_field1f8__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012B898(u8 *arg0);
}

extern "C" {

u8 *TObjPlayer__sub_8012B898(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_and_clear_field1f8__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_8012B8F0(u8 *arg0, s32 arg1) {
  s32 new_var;
  s32 temp_r31;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0xF0)))) != 0U)
  {
    if (reset_key_machine_state__10TObjPlayerFv() != 0)
    {
      temp_r31 = get_field_3e4__10TObjPlayerFPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))));
      new_var = TObjPlayer__sub_800196EC();
      if (new_var == temp_r31)
      {
        switch (arg1)
        {
          case 0:
            create_tec_zonde__10TObjPlayerFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x1FC), (void *) (arg0 + 0x208), (int) 0xA);
            return;
          case 1:
            create__8TTecFoieFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x1FC), (int) (*((s32 *) (((s8 *) arg0) + 0x264))), (int) 0xA);
            return;
          case 2:
            create_ex__9TTecBartaFPvPvPvPv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))), (void *) (arg0 + 0x268), (int) (*((s32 *) (((s8 *) arg0) + 0x264))), (int) 0xA);
            break;
        }
      }
    }
  }
}

}
