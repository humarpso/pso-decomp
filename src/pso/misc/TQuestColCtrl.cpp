#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestColCtrl__ct(void *arg0);
void render__13TQuestColCtrlFv(void);
void __ct__7TObjectFP7TObject(void *);

void render__13TQuestColCtrlFv(void) {  }

extern M2C_UNK __vt__13TQuestColCtrl[];
extern void *lbl_805D3404;

void *TQuestColCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TQuestColCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3404;
    return arg0;
}

}
