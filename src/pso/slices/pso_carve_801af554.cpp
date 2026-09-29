#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_801AF554 { u8 f0[2]; s16 f2; s8 f4; };

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_getField1c(void * a0);
void TFontSmallLobby__sub_801C0274(void *);
void TFontSmallLobby__sub_801C029C(void *);
void TObjPlayer__sub_801AF554(void *arg0, s8 arg1);
}

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 is_camera_ready__10TObjPlayerFv();
s32 is_ready__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80203418();
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

void TObjPlayer__sub_801AF554(void *arg0, s8 arg1) {
    L_801AF554 sp8;
    if (arg0 == 0 || obj_isState2_324(arg0) == 0) {
        TFontSmallLobby__sub_801C0274(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        TFontSmallLobby__sub_801C029C(&sp8);
    }
}

}
