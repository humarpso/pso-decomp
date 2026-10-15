#include "types.h"
#include "pso/misc/TScene.h"

extern "C" {

    extern int scene_resource_index;
int TScene::get_status() {  return scene_resource_index; }

}
