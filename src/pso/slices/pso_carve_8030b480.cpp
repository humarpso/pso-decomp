#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_split_screen();
M2C_UNK TObjPlayer__sub_80084500();
M2C_UNK TObjPlayer__sub_8030B208(void *);
M2C_UNK update_camera__15TObjLiveMonitorFPv(int);
s32 get_table_entry__18TObjLiveCameraCtrlFi(int);
s32 TObjLiveMonitor__sub_8030C050();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void render__15TObjLiveMonitorFv(u8 *arg0);
}

extern "C" {

int run_task__15TObjLiveMonitorFv(void* p);
int fn_8030B370(void*);

void render__15TObjLiveMonitorFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_table_entry__18TObjLiveCameraCtrlFi((int) (0));
    if ((temp_r3 != 0) && (TObjLiveMonitor__sub_8030C050() != 0)) {
        update_camera__15TObjLiveMonitorFPv((int) (temp_r3));
    } else if (is_split_screen() == 0) {
        TObjPlayer__sub_80084500();
    } else {
        TObjPlayer__sub_8030B208((void *) (arg0));
    }
    TObjPlayer__sub_803D9B2C();
    TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x1C)));
    TObjPlayer__sub_803D9B78();
}

}
