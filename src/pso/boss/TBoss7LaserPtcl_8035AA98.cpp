#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/boss/TBoss7LaserPtcl.h"

void TBoss7LaserPtcl::destroy_particles() {
    s32 arg0 = (s32)this;
  void **var_r30;
  s32 var_r29;
  u8 *object;
  var_r30 = (void **) (arg0 + 0x44);
  var_r29 = 2;
  do
  {
    object = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0)));
    if (object != 0)
    {
      queue_destruction__7TObjectFv(object);
      *((u8 **) (((s8 *) var_r30) + 0)) = 0;
    }
    var_r29 -= 1;
    var_r30 = (void **) ((u8 *) ((void **) (((u8 *) var_r30) + 4)));
  }
  while (var_r29 != 0);
}
