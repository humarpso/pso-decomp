#ifndef PSO_MISC_TWINDOWSNAPSHOT_802A5B2C_H
#define PSO_MISC_TWINDOWSNAPSHOT_802A5B2C_H

#include "types.h"

struct TWindowSnapShot;
extern "C" {
void *TWindowSnapShot__sub_802A5EDC(void *arg0, s16 arg1);
s32 TWindowSnapShot__sub_802A605C(u8 *arg0);
s32 alloc_buffer__15TWindowSnapShotFPv(TWindowSnapShot *arg0);
void fn_802A5B2C(s32 arg0);
int fn_802A5B50(s32 arg0);
int fn_802A5B74(s32 _w0, s32 _w1);
int fn_802A5BFC(s32 _w0, s32 _w1);
s32 fn_802A5C3C(u32 *arg0);
void fn_802A5C7C(void *arg0);
void fn_802A5CB8(void *p);
void fn_802A5CC4(u8 *arg0, s32 arg1);
void fn_802A6070(void *p, s32 v);
void fn_802A6078(void *p, s32 v);
s32 init__15TWindowSnapShotFPvi(TWindowSnapShot *arg0, s32 arg1);
s32 rlc_get_chunk_count(s32 arg0);
int rlc_get_directory_offset(void *arg0);
}

#endif
