#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TAdEp3ExistFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__11TAdEp3Exist[];

void *__dt__11TAdEp3ExistFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TAdEp3Exist;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8036F06C
#include "types.h"

extern "C" {

int close_window__14TAdScrollWinGCFPv(void*);
void close_window__11TAdEp3ExistFPv(void* p);
int request_game_mode_transition__11TAdEp3ExistFPv(void* p);
int request_scene_change__11TAdEp3ExistFPv(void* p);
int TAdEp3Exist__sub_8036F0AC(void* p);
int reset_and_set_mode__21TAdMultiChgGameModeGCFv(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int request_game_mode_transition__11TAdEp3ExistFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }
int request_scene_change__11TAdEp3ExistFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
int TAdEp3Exist__sub_8036F0AC(void* p) { return reset_and_set_mode__21TAdMultiChgGameModeGCFv(p); }
void close_window__11TAdEp3ExistFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036F538
#include "types.h"

extern "C" {

s32 free_if_valid__11TAdEp3ExistFis(s32 arg0, s16 arg1);
int __dl__FPv();
void TAdEp3Exist__sub_8036F5A4(void* p);

s32 free_if_valid__11TAdEp3ExistFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036F5A4
#include "types.h"

extern "C" {

s32 free_if_valid__11TAdEp3ExistFis(s32 arg0, s16 arg1);
int __dl__FPv();
void TAdEp3Exist__sub_8036F5A4(void* p);

void TAdEp3Exist__sub_8036F5A4(void* p) { *(s32*)((char*)p + 0x10) = 0; }

}
#endif
#endif
