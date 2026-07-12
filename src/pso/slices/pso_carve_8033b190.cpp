#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 TLobby__sub_80269C6C(s32, s32, s32);
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
int TKeyBoardControl__sub_8000F9B0(void*);

int TAdSinglePlyChrSelectGC__sub_8033B190(void) { return 0; }

}
