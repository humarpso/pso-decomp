#include "types.h"

extern "C" {

void TQuestVmDownLoadServer__sub_801F6B98(void);
void clear_field2A0__22TQuestVmDownLoadServerFv(void);

extern void *TQuestVmDownLoadServer__instance;

void clear_field2A0__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x2A0) = 0;
    }
}

extern void *TQuestVmDownLoadServer__instance;

void TQuestVmDownLoadServer__sub_801F6B98(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x2A0) = 0;
    }
}

}
