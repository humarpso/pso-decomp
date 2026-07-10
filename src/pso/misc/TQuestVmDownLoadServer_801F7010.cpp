#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F8D30(void);
void allow_rendering__7TObjectFv(void *);
void fn_801A7E40(void *);
void queue_destruction__7TObjectFv(void *);

extern void *lbl_805D55D4;

void destroy__22TQuestVmDownLoadServerFPv(void *arg0) {
    fn_801A7E40(arg0);
    if (lbl_805D55D4 != NULL) {
        allow_rendering__7TObjectFv(lbl_805D55D4);
    }
    TQuestVmDownLoadServer__sub_801F8D30();
    queue_destruction__7TObjectFv(arg0);
}

}
