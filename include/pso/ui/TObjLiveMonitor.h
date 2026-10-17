#ifndef PSO_UI_TOBJLIVEMONITOR_H
#define PSO_UI_TOBJLIVEMONITOR_H

#include "types.h"

class TObjLiveMonitor;
extern "C" {
int TBoss8Dragon__sub_8030B80C(void);
void *TObjLiveCamera__create(void *arg0);
u8 *TObjLiveCamera__ct(u8 *arg0, s32 parent, s32 arg2);
void TObjLiveCamera__sub_8030B630(void);
void *__ct__15TObjLiveMonitorFv(void *arg0);
void *__dt__14TObjLiveCameraFv(void *arg0, s16 arg1);
int call_null__12TBoss8DragonFv(void);
void fn_8030B7B4(void);
void fn_8030B7B8(void);
void render__14TObjLiveCameraFv(void);
void render__15TObjLiveMonitorFv(TObjLiveMonitor *arg0);
void run_task__14TObjLiveCameraFv(void);
int run_task__15TObjLiveMonitorFv(void *p);
}

#endif
