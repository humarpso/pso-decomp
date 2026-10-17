#include "types.h"
#include "pso/misc/TUnk_804B8DD0.h"
#include "pso/system/vector.h"

struct RecoveredGlobal_8019886C_lbl_804B8DD0 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801988E8_lbl_804B8DD0 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804B8DD0[];
u8 *TWindowTimer__sub_8019886C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5);
u8 *TWindowTimer__sub_801988E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4);
void *__dt__13TUnk_804B8DD0Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void *__dt__13TUnk_804B8DD0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B8DD0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8019886C_lbl_804B8DD0_size[sizeof(RecoveredGlobal_8019886C_lbl_804B8DD0) == 0x18 ? 1 : -1];
u8 *TWindowTimer__sub_8019886C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    __ct__7TObjectFP7TObject(arg0, arg5);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019886C_lbl_804B8DD0 *)&lbl_804B8DD0).value;
    VecCopy((Vec *)(arg0 + 0x1C), (const Vec *)arg1);
    ((TUnk_804B8DD0 *)arg0)->m_28 = arg2;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = arg4;
    ((TUnk_804B8DD0 *)arg0)->m_38 = 0;
    ((TUnk_804B8DD0 *)arg0)->m_30 = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    ((TUnk_804B8DD0 *)arg0)->m_40 = arg3;
    return arg0;
}
typedef char RecoveredGlobal_801988E8_lbl_804B8DD0_size[sizeof(RecoveredGlobal_801988E8_lbl_804B8DD0) == 0x18 ? 1 : -1];
u8 *TWindowTimer__sub_801988E8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4) {
    __ct__7TObjectFP7TObject(arg0, arg4);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801988E8_lbl_804B8DD0 *)&lbl_804B8DD0).value;
    VecCopy((Vec *)(arg0 + 0x1C), (const Vec *)arg1);
    ((TUnk_804B8DD0 *)arg0)->m_28 = arg2;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = arg3;
    ((TUnk_804B8DD0 *)arg0)->m_38 = 0;
    ((TUnk_804B8DD0 *)arg0)->m_30 = 0;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    ((TUnk_804B8DD0 *)arg0)->m_40 = 0;
    return arg0;
}

}
