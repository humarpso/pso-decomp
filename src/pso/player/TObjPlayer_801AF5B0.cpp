#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 is_camera_ready__10TObjPlayerFv();
s32 is_ready__10TObjPlayerFPv(s32);
s32 is_boss_area();
s32 reset_key_machine_state__10TObjPlayerFv();
u32 TObjPlayer__sub_801C6D40(s32 a0 = 0, s32 a1 = 0);
s32 TObjPlayer__sub_801BF40C(u32 a0 = 0, s32 a1 = 0);
s32 TFontSmallLobby__sub_801AFEE0(void);
s32 obj_getField1c(void * a0 = 0);
s32 set_facing__10TObjPlayerFPvs(void * a0 = 0, s16 a1 = 0);
s32 TObjPlayer__sub_800113E4(void * a0 = 0, s16 a1 = 0);
int update_rotation__10TObjPlayerFPv(void*);
int obj_clearFlags30(void*, void*);
int TObjPlayer__sub_801AF694(void* p);
int fn_801C543C(void*);

void play_voice_pair__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_800113E4(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    set_facing__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}
void TObjPlayer__vt62(void* p) { obj_clearFlags30(p, (void*)2048); update_rotation__10TObjPlayerFPv(p); }
u32 get_or_create_lobby_font__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp;

    if (TFontSmallLobby__sub_801AFEE0() == 0) {
        return 0U;
    }
    temp = M2C_FIELD(arg0, u32 *, 0x3B8);
    if (temp == 0U) {
        M2C_FIELD(arg0, u32 *, 0x3B8) = TObjPlayer__sub_801C6D40(obj_getField1c(arg0), arg1);
    } else {
        TObjPlayer__sub_801BF40C(temp, arg1);
    }
    return M2C_FIELD(arg0, u32 *, 0x3B8);
}
int TObjPlayer__sub_801AF694(void* p) { return fn_801C543C((char*)p + 0x7c4); }
s32 is_action_available__10TObjPlayerFi(s32 arg0) {
    if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (is_boss_area() != 0)) {
        return 0;
    }
    if (is_camera_ready__10TObjPlayerFv() != 0) {
        return (u32)__cntlzw(obj_testFlags30(arg0, 0x20000)) >> 5;
    }
    return is_ready__10TObjPlayerFPv(arg0) != 0 ? 1 : 0;
}

}
