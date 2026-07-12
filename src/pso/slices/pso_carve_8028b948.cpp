#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();
s32 TLobby__sub_803CC53C(u32);
s32 TLobby__sub_803CCB5C(u32, s32, u32);
u32 TLobby__sub_803CD16C(s32, s32);
void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);

int TChCrLoadAfs__sub_8028B948(void) { return 0; }

}
