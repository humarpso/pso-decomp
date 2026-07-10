#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 fn_801AEE3C();
s32 TObjPlayer__sub_801BE2DC(s32);
s32 fn_80203418();
s32 fn_802034EC();
u32 fn_801C6D40(s32 a0 = 0, s32 a1 = 0);
s32 TObjPlayer__sub_801BF40C(u32 a0 = 0, s32 a1 = 0);
s32 TFontSmallLobby__sub_801AFEE0(void);
s32 obj_getField1c(void * a0 = 0);
s32 fn_80102C78(void * a0 = 0, s16 a1 = 0);
s32 fn_800113E4(void * a0 = 0, s16 a1 = 0);
int fn_801B42AC(void*);
int obj_clearFlags30(void*, void*);
int TObjPlayer__sub_801AF694(void* p);
int fn_801C543C(void*);

void play_voice_pair__10TObjPlayerFPv(void *arg0) {
    fn_800113E4(arg0, M2C_FIELD(arg0, s16 *, 0x2B8));
    fn_80102C78(arg0, M2C_FIELD(arg0, s16 *, 0x2BA));
}
void TObjPlayer__vt62(void* p) { obj_clearFlags30(p, (void*)2048); fn_801B42AC(p); }
u32 get_or_create_lobby_font__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    u32 temp;

    if (TFontSmallLobby__sub_801AFEE0() == 0) {
        return 0U;
    }
    temp = M2C_FIELD(arg0, u32 *, 0x3B8);
    if (temp == 0U) {
        M2C_FIELD(arg0, u32 *, 0x3B8) = fn_801C6D40(obj_getField1c(arg0), arg1);
    } else {
        TObjPlayer__sub_801BF40C(temp, arg1);
    }
    return M2C_FIELD(arg0, u32 *, 0x3B8);
}
int TObjPlayer__sub_801AF694(void* p) { return fn_801C543C((char*)p + 0x7c4); }
s32 is_action_available__10TObjPlayerFi(s32 arg0) {
    if ((fn_802034EC() == 0) || (fn_80203418() != 0)) {
        return 0;
    }
    if (fn_801AEE3C() != 0) {
        return (u32)__cntlzw(obj_testFlags30(arg0, 0x20000)) >> 5;
    }
    return TObjPlayer__sub_801BE2DC(arg0) != 0 ? 1 : 0;
}

}
