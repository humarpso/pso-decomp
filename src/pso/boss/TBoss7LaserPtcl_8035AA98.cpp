#include "types.h"

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss7LaserPtcl__sub_8035AA98(s32 arg0);
}

extern "C" {

void render__15TBoss7LaserPtclFv(void);

void TBoss7LaserPtcl__sub_8035AA98(s32 arg0) {
  void **var_r30;
  s32 var_r29;
  u8 *temp_r3;
  var_r30 = (void **) ((u8 *) (arg0 + 0x44));
  var_r29 = 2;
  do
  {
    temp_r3 = (u8 *) (*((u8 **) (((s8 *) var_r30) + 0)));
    if (temp_r3 != 0)
    {
      queue_destruction__7TObjectFv(temp_r3);
      *((u8 **) (((s8 *) var_r30) + 0)) = 0;
    }
    var_r29 -= 1;
    var_r30 = (void **) ((u8 *) ((void **) (((u8 *) var_r30) + 4)));
  }
  while (var_r29 != 0);
}

}
