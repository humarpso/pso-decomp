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

void start_download__12TChCrLoadAfsFPv(void *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    u32 temp_r3_3;

    if (try_begin_load__12TChCrLoadAfsFPv() != 0) {
        temp_r3 = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x1C) = temp_r3;
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        temp_r3_2 = TLobby__sub_803CC53C(M2C_FIELD(arg0, u32 *, 0x1C));
        temp_r3_3 = alloc__22TQuestVmDownLoadServerFPv(temp_r3_2 << 0xB);
        M2C_FIELD(arg0, u32 *, 0x28) = temp_r3_3;
        if (temp_r3_3 == 0U) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 3;
            return;
        }
        TLobby__sub_803CCB5C(M2C_FIELD(arg0, u32 *, 0x1C), temp_r3_2, M2C_FIELD(arg0, u32 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    }
}

}
