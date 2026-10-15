#include "types.h"

struct RecoveredGlobal_802466E0_lbl_804CE018 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void TWindowBase__ct(void *, void *, void *, s16);
s32 TWindowCtrlMain__sub_8024CDB0(s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804CE018[];
u8 *construct_base__9TWindowDDFPvPvsPv(u8 *arg0, u8 *arg1, s16 arg2, u8 *arg3);
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
int update_open_close__17TWindowSubComCardFPv(void*);
void destroy_all_items__20TWindowSubStatusDispFPv(void *);
void TWindowCtrlMain__sub_8026CC28(void *);

int update_com_card__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_8024634C(p); }
int initialize_subwindow__9TWindowDDFPv(void* p) { return update_open_close__17TWindowSubComCardFPv(p); }
void TWindowDD__sub_8024666C(void) {  }
void TWindowDD__sub_80246670(void) {  }

extern s32 lbl_804CE018[];

void *destroy_window_base__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CE018;
        destroy_all_items__20TWindowSubStatusDispFPv((s8 *)arg0 + 0x24);
        TWindowCtrlMain__sub_8026CC28(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802466E0_lbl_804CE018_size[sizeof(RecoveredGlobal_802466E0_lbl_804CE018) == 0x18 ? 1 : -1];
u8 *construct_base__9TWindowDDFPvPvsPv(u8 *arg0, u8 *arg1, s16 arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (TWindowCtrlMain__sub_8024CDB0((s32) arg2)));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802466E0_lbl_804CE018 *)&lbl_804CE018).value;
    TWindowBase__ct(arg0, arg1, arg3, arg2);
    return arg0;
}

}
