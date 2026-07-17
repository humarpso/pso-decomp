#include "types.h"

extern "C" {

s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 TObjPlayer__sub_801B3540(s32);
s32 check_technique_flag__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80203418();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 get_move_mode__10TObjPlayerFPv(void* p);

s32 get_map_id__13TRaderMapCoreFPv(void* p) { return *(s32*)((char*)p + 0x3d0); }

}
