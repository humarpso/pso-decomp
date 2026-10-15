#include "types.h"
#include "pso/misc/TScene.h"

extern "C" {

    extern unsigned char TScene__floor_scene_ready_flag;
void TScene::set_ready() { TScene__floor_scene_ready_flag = 1; }

    extern unsigned char TScene__floor_scene_ready_flag;
void TScene::reset_counter() { TScene__floor_scene_ready_flag = 0; }

}
