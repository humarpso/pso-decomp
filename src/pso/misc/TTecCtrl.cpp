#include "pso/TTecCtrl.h"

TTecCtrl::~TTecCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

}
