#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_801AFD8C(u8 *arg0);
}

extern "C" {

s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 TObjPlayer__sub_80203418();
s32 check_technique_flag__10TObjPlayerFPv(s32);
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_move_mode__10TObjPlayerFPv(void* p);
s32 has_item_flag_4096__10TObjPlayerFPv(s32);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();

s32 get_map_id__13TRaderMapCoreFPv(void* p) { return *(s32*)((char*)p + 0x3d0); }

s32 TObjPlayer__sub_801AFD8C(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3BC);
    if ((temp_r3 < 0) || (temp_r3 >= 5)) {
        return 1;
    }
    return temp_r3;
}

}
