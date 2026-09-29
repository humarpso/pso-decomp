#include "types.h"
struct Ok_80306C10 { u8 pad[0x97C]; s32 count; };

struct Ok_80306F84 { u8 pad[0x97C]; s32 count; };

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void TAdMultiOkGC__sub_80306B04(void *, int);
void render__12TAdMultiOkGCFv(Ok_80306C10 *o);
void TAdMultiOkGC__sub_80306C70(void *, int);
void TAdMultiOkGC__sub_80306DF4(void *, int);
void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o);
}

extern "C" {

void render__12TAdMultiOkGCFv(Ok_80306C10 *o) {
    s32 i;
    if (get_state_flag__9TMainTaskFv() != 1) {
        init_xyz_limits__10TObjPlayerFv();
        for (i = 0; i < o->count; i++) {
            TAdMultiOkGC__sub_80306B04(o, i);
        }
        reset_transform_state__10TObjPlayerFv();
    }
}
void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o) {
    s32 i;
    for (i = 0; i < o->count; i++) {
        TAdMultiOkGC__sub_80306DF4(o, i);
        TAdMultiOkGC__sub_80306C70(o, i);
    }
}

}
