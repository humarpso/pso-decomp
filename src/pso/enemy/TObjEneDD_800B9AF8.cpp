#include "types.h"

extern "C" {

void TObjEneDD__sub_800B9B24(void);
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0);
void init_lights__9TObjEneDDFv(void);
int TObjLight__sub_801337F8(void*);
int TObjLight__sub_801337FC(void*);
s32 check_v2_mode__9TObjEneDDFv();

    extern int lbl_805D555C;
    extern int current_scene_light;
void init_lights__9TObjEneDDFv(void) { TObjLight__sub_801337F8((void*)(current_scene_light)); TObjLight__sub_801337FC((void*)(lbl_805D555C)); }

void TObjEneDD__sub_800B9B24(void) {  }
s32 clamp_frame_index__9TObjEneDDFi(s32 arg0) {
    s32 limit;
    s32 idx;

    idx = arg0;
    limit = 0xE;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        limit = 0x1D;
    }
    if (idx < 0) {
        idx = 0;
    } else if (idx >= limit) {
        idx = limit - 1;
    }
    return idx;
}

}
