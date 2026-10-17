#ifndef PSO_OBJECT_TOBJLABOMAPWARP_80185248_H
#define PSO_OBJECT_TOBJLABOMAPWARP_80185248_H

#include "types.h"

extern "C" {
void *TObjCityAreaWarp__ct(void *arg0);
void TObjCityAreaWarp__vt13(void *arg0, s16 arg1);
void *TObjCityMainWarp__ct(void *arg0, void *arg1, void *arg2);
s32 TObjCityMainWarp__vt14(s32 arg0);
s32 TObjCityMainWarp__vt15(u8 *arg0);
void *TObjCityMapWarp__ct(void *arg0);
void TObjCityMapWarp__vt13(u8 *arg0, s32 arg1);
void *TObjLaboMapWarp__ct(void *arg0);
void TObjLaboMapWarp__vt13(u8 *arg0, s32 arg1);
void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1);
void *__dt__15TObjLaboMapWarpFv(void *arg0, s16 arg1);
void *__dt__16TObjCityAreaWarpFv(void *arg0, s16 arg1);
void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1);
void clear_enabled_main_warps(void);
void run_task__15TObjLaboMapWarpFv(u8 *arg0);
void run_task__16TObjCityMainWarpFv(u8 *arg0);
void unlock_main_warp_destination(s32 id);
}

#endif
