#ifndef PSO_MISC_TLOBBY_803C4698_H
#define PSO_MISC_TLOBBY_803C4698_H

#include "types.h"

extern "C" {
void ARAlloc(void);
s32 ARStartDMA(u8 *arg0, s32 arg1, s16 *arg2, u8 *arg3, s8 *arg4, s8 *arg5, u8 *arg6, s32 *arg7, s32 *arg8, s32 *arg9);
void TLobby__sub_803C4698(void);
s32 TLobby__sub_803C48C8(u8 *arg0, s32 arg1, u16 *arg2);
s32 __DVDPrepareResetAsync(u8 *hdr, s32 size, s32 *o1, s16 *o2, s16 *o3, s32 *o4, s32 *o5, s32 *o6, s32 *o7);
void num_to_str_803C526C(s32 v, char *out, s32 n);
}

#endif
