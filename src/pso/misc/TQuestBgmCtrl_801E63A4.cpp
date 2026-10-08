#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual M2C_UNK m1();
};
extern "C" {
extern s32 TQuestBgmCtrl__data_805D5E60;
extern s32 TQuestBgmCtrl__data_805D5E64;
extern s32 TQuestBgmCtrl__data_805D5E68;
extern u8 *TQuestBgmCtrl__data_805D5E6C;
void force_bgm__13TQuestBgmCtrlFi(s32 arg0);
}

extern "C" {

void force_bgm__13TQuestBgmCtrlFi(s32 arg0) {
    TQuestBgmCtrl__data_805D5E68 = arg0;
    TQuestBgmCtrl__data_805D5E60 = 0;
    TQuestBgmCtrl__data_805D5E64 = 1;
    if ((void *) TQuestBgmCtrl__data_805D5E6C != NULL) {
        ((VObj_18 *)(TQuestBgmCtrl__data_805D5E6C))->m1();
    }
}

}
