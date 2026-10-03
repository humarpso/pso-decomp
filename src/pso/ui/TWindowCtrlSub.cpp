#include "pso/TWindowCtrlSub.h"

extern s32 TWindowCtrlMain__data_805D6410;

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void run_task__14TWindowCtrlSubFv(void);
M2C_UNK TWindowCtrlMain__sub_8024CCDC();
M2C_UNK resolve_chat_balloon_overlaps();
M2C_UNK run_tasks__7TObjectFv(s32);
extern s32 TWindowCtrlMain__data_805D6408;
void run_task__14TWindowCtrlSubFv(void);
}

extern "C" {

void *TWindowCtrlSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__14TWindowCtrlSub[];
extern void *lbl_805D38D8;

void run_task__14TWindowCtrlSubFv(void) {
    resolve_chat_balloon_overlaps();
    TWindowCtrlMain__sub_8024CCDC();
    run_tasks__7TObjectFv(TWindowCtrlMain__data_805D6408);
}

TWindowCtrlSub::~TWindowCtrlSub() {
    TWindowCtrlMain__data_805D6410 = 0;
}
void *TWindowCtrlSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowCtrlSub;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38D8;
    return arg0;
}

}
