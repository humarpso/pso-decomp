#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p);
int request_transition__17TAdEnterPPPPassGCFPv(void* p);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int reset_mode_state__21TAdMultiChgGameModeGCFv(void*);

int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p) { return reset_mode_state__21TAdMultiChgGameModeGCFv(p); }
int request_transition__17TAdEnterPPPPassGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x803394F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);

extern M2C_UNK __vt__17TAdEnterPPPPassGC[];

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdEnterPPPPassGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
