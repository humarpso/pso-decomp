#ifndef PSO_MISC_TSCENE_80206494_H
#define PSO_MISC_TSCENE_80206494_H

#include "types.h"

class TScene;
extern "C" {
u8 *TScene__ct(TScene *arg0, s32 arg1);
void TScene__sub_802065E8(void);
void TScene__sub_802065EC(void);
void *__dt__6TSceneFv(void *arg0, s16 arg1);
void load_floor_scene(void);
void load_scene_collision_file(s32 name);
void load_scene_map_file(s32 arg0);
}

#endif
