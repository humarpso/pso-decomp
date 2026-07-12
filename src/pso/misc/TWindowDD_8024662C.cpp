#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int update_com_card__9TWindowDDFPv(void* p);
int TWindowDD__sub_8024664C(void* p);
void TWindowDD__sub_8024666C(void);
void TWindowDD__sub_80246670(void);
void *TWindowDD__sub_80246674(void *arg0, s16 arg1);
int TWindowSubComCard__sub_8024634C(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_80246464(void*);
void TWindowSubStatusDisp__sub_80257CB8(void *);
void fn_8026CC28(void *);

int update_com_card__9TWindowDDFPv(void* p) { return TWindowSubComCard__sub_8024634C(p); }
int TWindowDD__sub_8024664C(void* p) { return fn_80246464(p); }
void TWindowDD__sub_8024666C(void) {  }
void TWindowDD__sub_80246670(void) {  }

extern M2C_UNK lbl_804CE018[];

void *TWindowDD__sub_80246674(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE018;
        TWindowSubStatusDisp__sub_80257CB8((s8 *)arg0 + 0x24);
        fn_8026CC28(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
