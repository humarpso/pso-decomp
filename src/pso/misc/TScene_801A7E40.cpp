#include "types.h"

extern "C" {

    extern unsigned char TScene__floor_scene_ready_flag;
void set_ready__6TSceneFv(void) { TScene__floor_scene_ready_flag = 1; }

    extern unsigned char TScene__floor_scene_ready_flag;
void reset_counter__6TSceneFv(void) { TScene__floor_scene_ready_flag = 0; }

}
