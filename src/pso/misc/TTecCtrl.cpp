#include "pso/TTecCtrl.h"

TTecCtrl::~TTecCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022F068_lbl_804CC934 {
    u8 * value;
    u8 remaining[0x8];
};

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TTecZondeEff__sub_8023DBA8(void);
s32 TLobby__sub_803DA16C(void *, M2C_UNK);
extern RecoveredGlobal_8022F068_lbl_804CC934 lbl_804CC934;
extern u8 *lbl_805D63AC;
extern void **lbl_805D63B0;
void TLobby__sub_8022F068(void);
}

extern "C" {

void* TTecCtrl__sub_8022EF88(int a0);
void *__ct__8TTecCtrlFv(void *arg0);
void render__8TTecCtrlFv(void);
void run_task__8TTecCtrlFv(void);
M2C_UNK TTecLuker__sub_80234F28();
void __ct__7TObjectFP7TObject(void *);

void render__8TTecCtrlFv(void) {  }

    extern unsigned char lbl_804CC1CC[];
void* TTecCtrl__sub_8022EF88(int a0) {  return (char*)lbl_804CC1CC + a0 * 44; }

extern s8 lbl_805D63A8;

void run_task__8TTecCtrlFv(void) {
    lbl_805D63A8 = 0;
    TTecLuker__sub_80234F28();
}

extern M2C_UNK __vt__8TTecCtrl[];
extern void *lbl_805D37A0;

void *__ct__8TTecCtrlFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TTecCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D37A0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}
typedef char RecoveredGlobal_8022F068_lbl_804CC934_size[sizeof(RecoveredGlobal_8022F068_lbl_804CC934) == 0xC ? 1 : -1];
void TLobby__sub_8022F068(void) {
    u8 *temp_r4;
    TTecZondeEff__sub_8023DBA8();
    if ((u32) M2C_FIELD(lbl_804CC934.value, u32 *, 8) != 0U) {
        TLobby__sub_803DA16C(&lbl_804CC934.value, (s32) lbl_804CC934.value);
    }
    if ((void **) lbl_805D63B0 != NULL) {
        temp_r4 = (u8 *)(*lbl_805D63B0);
        if ((u32) M2C_FIELD(temp_r4, u32 *, 8) != 0U) {
            TLobby__sub_803DA16C(lbl_805D63B0, (s32) temp_r4);
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi((u32) lbl_805D63B0);
        lbl_805D63B0 = NULL;
    }
    if ((void *) lbl_805D63AC != NULL) {
        TLobby__sub_8001FE7C(lbl_805D63AC, 1);
    }
    lbl_805D63AC = NULL;
}

}
