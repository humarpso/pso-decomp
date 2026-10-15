#include "types.h"

extern "C" {

s32 get_field230__22TQuestVmDownLoadServerFv(void);

extern void *TQuestVmDownLoadServer__instance;

s32 get_field230__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        return *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x230);
    }
    return 0;
}

}
