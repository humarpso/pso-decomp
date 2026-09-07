#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802466E0_lbl_804CE018 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void TWindowBase__ct(void *, void *, void *, s16);
s32 TWindowCtrlMain__sub_8024CDB0(s32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CE018[];
u8 *TWindowDD__sub_802466E0(u8 *arg0, u8 *arg1, s16 arg2, u8 *arg3);
}

extern "C" {

int update_com_card__9TWindowDDFPv(void* p);
int initialize_subwindow__9TWindowDDFPv(void* p);
void TWindowDD__sub_8024666C(void);
void TWindowDD__sub_80246670(void);
void *destroy_window_base__9TWindowDDFPvs(void *arg0, s16 arg1);
int TWindowSubComCard__sub_8024634C(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int TWindowSubComCard__sub_80246464(void*);
void TWindowSubStatusDisp__sub_80257CB8(void *);
void TWindowCtrlMain__sub_8026CC28(void *);

int update_com_card__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_8024634C(p); }
int initialize_subwindow__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_80246464(p); }
void TWindowDD__sub_8024666C(void) {  }
void TWindowDD__sub_80246670(void) {  }

extern M2C_UNK lbl_804CE018[];

void *destroy_window_base__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE018;
        TWindowSubStatusDisp__sub_80257CB8((s8 *)arg0 + 0x24);
        TWindowCtrlMain__sub_8026CC28(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802466E0_lbl_804CE018_size[sizeof(RecoveredGlobal_802466E0_lbl_804CE018) == 0x18 ? 1 : -1];
u8 *TWindowDD__sub_802466E0(u8 *arg0, u8 *arg1, s16 arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (TWindowCtrlMain__sub_8024CDB0((s32) arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802466E0_lbl_804CE018 *)&lbl_804CE018).value;
    TWindowBase__ct(arg0, arg1, arg3, arg2);
    return arg0;
}

}
