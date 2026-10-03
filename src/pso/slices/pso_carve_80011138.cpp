#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "pso/player/TObjPlayer.h"
struct ActorMesetaView
{
  u8 padding[0x20];
  s32 meseta;
};

extern "C" {
s32 try_spend_actor_meseta(u8 *arg0, s32 arg1);
}

extern "C" {

s32 obj_isState2_324();
s32 get_actor_level_index(void* p);

s32 try_spend_actor_meseta(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    u8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, u8 **, 0x2B0);
    temp_r0 = M2C_FIELD(temp_r5, s32 *, 0x20);
    if (temp_r0 < arg1) {
        return 0;
    }
    M2C_FIELD(temp_r5, s32 *, 0x20) = (s32) (temp_r0 - arg1);
    return 1;
}
s32 TObjPlayer::add_meseta(s32 amount) {
  TObjPlayer* self = this;
  s32 limit = 999999;
  int maximum;
  ((ActorMesetaView *) self->m_2b0)->meseta += amount;
  maximum = limit;
  if (maximum < ((ActorMesetaView *) self->m_2b0)->meseta)
  {
    ((ActorMesetaView *) self->m_2b0)->meseta = maximum;
    return 0;
  }
  return 1;
}

}
