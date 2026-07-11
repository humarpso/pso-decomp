#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80244C0C(s32, s32);
s32 fn_80257BC0(s32, s32, s32);
void *fn_8007EAF8();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
M2C_UNK fn_80287580(s32, s32, M2C_UNK, f32);
s32 fn_80269064(void* p);
int fn_8026906C(void* p);

s32 get_meseta_value__13TWindowMesetaFPv(void *arg0) {
    void *temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x64)) == 0U) {
        return 0;
    }
    temp_r3 = fn_8007EAF8();
    if (temp_r3 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r3, s32 *, 0x20);
}
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1) {
    fn_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void update_display__13TWindowMesetaFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_80244C0C(arg0, arg0 + 0x6C);
    draw_value__13TWindowMesetaFPvi((void *)(arg0), temp_r3);
    fn_80257BC0(arg0, arg0 + 0x24, temp_r3);
}

}
