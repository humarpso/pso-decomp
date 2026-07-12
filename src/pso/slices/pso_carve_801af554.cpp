#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 TObjPlayer__sub_801AEE3C();
s32 TObjPlayer__sub_801BE2DC(s32);
s32 TObjPlayer__sub_80203418();
s32 TObjPlayer__sub_802034EC();
u32 TObjPlayer__sub_801C6D40(s32 a0 = 0, s32 a1 = 0);
s32 TObjPlayer__sub_801BF40C(u32 a0 = 0, s32 a1 = 0);
s32 TFontSmallLobby__sub_801AFEE0(void);
s32 obj_getField1c(void * a0 = 0);
s32 TObjPlayer__sub_80102C78(void * a0 = 0, s16 a1 = 0);
s32 TObjPlayer__sub_800113E4(void * a0 = 0, s16 a1 = 0);
int update_rotation__10TObjPlayerFPv(void*);
int obj_clearFlags30(void*, void*);
int TObjPlayer__sub_801AF694(void* p);
int fn_801C543C(void*);

int TObjPlayer__sub_801AF554(void) { return 0; }

}
