#include "types.h"
#include "pso/boss/TBoss5GryphonTornado.h"
#include "pso/boss/TObjBoss2Tunnel.h"
extern "C" {
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DFFA8;
void TBoss5GryphonTornado::sub_803554F0(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
  unsigned short new_var;
  u16 temp_r3;
  u8 *player;
  *((f32 *) (((s8 *) arg1) + 0)) = (f32) lbl_805DFFA8;
  *((f32 *) (((s8 *) arg1) + 4)) = (f32) lbl_805DFFA8;
  *((f32 *) (((s8 *) arg1) + 8)) = (f32) lbl_805DFFA8;
  temp_r3 = this->m_24;
  new_var = -1U;
  if (temp_r3 != new_var)
  {
    player = (u8 *) get_player_by_client_id((u32) temp_r3);
    if (player != 0)
    {
      *((f32 *) (((s8 *) arg1) + 0)) = (f32) ((*((f32 *) (((s8 *) player) + 0x38))) - (*((f32 *) (((s8 *) arg0) + 0x28))));
      *((f32 *) (((s8 *) arg1) + 8)) = (f32) ((*((f32 *) (((s8 *) player) + 0x40))) - (this->m_30));
      ((TObjBoss2Tunnel *)arg1)->update_scale();
    }
  }
}

}
