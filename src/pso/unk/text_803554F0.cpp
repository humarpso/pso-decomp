#include "types.h"
#include "pso/boss/TBoss5GryphonTornado.h"
#include "pso/boss/TObjBoss2Tunnel.h"
extern "C" {
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DFFA8;
void sub_803554F0__20TBoss5GryphonTornadoFPUc(u8 *arg0, u8 *arg1);
}

extern "C" {

void TBoss5GryphonTornado::sub_803554F0(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
  unsigned short new_var;
  u16 temp_r3;
  u8 *temp_r3_2;
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) lbl_805DFFA8;
  *((f32 *) (((s8 *) arg1) + 4)) = (f32) lbl_805DFFA8;
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) lbl_805DFFA8;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x24));
  new_var = -1U;
  if (temp_r3 != new_var)
  {
    temp_r3_2 = (u8 *) get_player_by_client_id((u32) temp_r3);
    if (temp_r3_2 != 0)
    {
      *((f32 *) (((s8 *) arg1) + 0)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x38))) - (*((f32 *) (((s8 *) arg0) + 0x28))));
      *((f32 *) (((s8 *) arg1) + 8)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x40))) - (*((f32 *) (((s8 *) arg0) + 0x30))));
      ((TObjBoss2Tunnel *)arg1)->update_scale();
    }
  }
}

}
