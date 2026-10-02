#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjMapForceWarp__ct(void *arg0);
void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1);
void render__16TObjMapForceWarpFv(void);
int run_task__16TObjMapForceWarpFv(void* p);
M2C_UNK TObjMapWarp__ct();
int process_player_warps__11TObjMapWarpFPv(void*);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK set_flag_4__9TObjLukerFPv(u32);

void render__16TObjMapForceWarpFv(void) {  }
int run_task__16TObjMapForceWarpFv(void* p) { return process_player_warps__11TObjMapWarpFPv(p); }

extern M2C_UNK __vt__16TObjMapForceWarp[];

void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TObjMapForceWarp[];
extern s32 lbl_805D3478;

void *TObjMapForceWarp__ct(void *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3478;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4));
        set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, u32 *, 0xB4));
    }
    return arg0;
}

}
