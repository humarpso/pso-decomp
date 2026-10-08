#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct L_8028B948 { u8 pad[0x1c]; s32 f1c; u8 pad2[0xc]; s32 f2c; };

extern "C" {
s32 TLobby__sub_803CC4C0(int);
void TLobby__sub_803CCE9C(int);
void release_load_slot__12TChCrLoadAfsFPv(void *);
void TChCrLoadAfs__sub_8028B948(L_8028B948 *arg0);
}

extern "C" {

void TChCrLoadAfs__sub_8028B940(void);
void TChCrLoadAfs__sub_8028B944(void);
s32 TLobby__sub_803CC53C(u32);
s32 read_checked_align__6TLobbyFiii(u32, s32, u32);
u32 adxf_open_afs__6TLobbyFii(s32, s32);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 try_begin_load__12TChCrLoadAfsFPv();

void TChCrLoadAfs__sub_8028B940(void) {  }
void TChCrLoadAfs__sub_8028B944(void) {  }
void TChCrLoadAfs__sub_8028B948(L_8028B948 *arg0) {
    switch (TLobby__sub_803CC4C0(arg0->f1c)) {
    case 2:
        return;
    case 3:
        TLobby__sub_803CCE9C(arg0->f1c);
        arg0->f1c = 0;
        break;
    case 1:
    default:
        arg0->f2c = 3;
        return;
    }
    release_load_slot__12TChCrLoadAfsFPv(arg0);
    arg0->f2c = 2;
}

}
