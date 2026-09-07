#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TAdEp3Exist__sub_8036F574(u8 *arg0);
u8 TAdEp3Exist__sub_8036F590(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
u32 TWindowSubStatusDisp__sub_80144D68(int);
s32 render_status_line__15TAdSubPlyItemGCFPvi(int, int, f32, f32, f32);
s32 TWindowSubComCard__sub_80245F98(void *, void *);
extern const f32 lbl_805E0440;
extern const f32 lbl_805E0444;
extern const f32 lbl_805E0448;
void TAdEp3Exist__sub_8036EFBC(s32 arg0, s32 arg1);
}

extern "C" {

int TAdEp3Exist__sub_8036F0AC(void* p);
int TAdEp3Exist__sub_8036F4DC(void);
void TAdEp3Exist__sub_8036F5A4(void* p);
void *__dt__11TAdEp3ExistFv(void *arg0, s16 arg1);
void close_window__11TAdEp3ExistFPv(void* p);
s32 free_if_valid__11TAdEp3ExistFis(s32 arg0, s16 arg1);
int render__11TAdEp3ExistFv(void);
int request_game_mode_transition__11TAdEp3ExistFPv(void* p);
int request_scene_change__11TAdEp3ExistFPv(void* p);
void __dl__7TObjectFPv(void *);
int __dl__FPv();
void __dt__7TObjectFv(void *, int);
int close_window__14TAdScrollWinGCFPv(void*);
void queue_destruction__7TObjectFv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int reset_and_set_mode__21TAdMultiChgGameModeGCFv(void*);

void TAdEp3Exist__sub_8036EFBC(s32 arg0, s32 arg1) {
    f32 temp_f31;
    TWindowSubComCard__sub_80245F98((void *) (arg0), (void *) (arg1));
    temp_f31 = lbl_805E0440 - (f32) (TWindowSubStatusDisp__sub_80144D68((int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x2C), (int) (0xA)))) >> 1U);
    render_status_line__15TAdSubPlyItemGCFPvi((int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x2C), (int) (0xA))), (int) (-1), (f32) (temp_f31), (f32) (lbl_805E0444), (f32) (lbl_805E0448));
}

int render__11TAdEp3ExistFv(void) { return 0; }

int request_game_mode_transition__11TAdEp3ExistFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }
int request_scene_change__11TAdEp3ExistFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
int TAdEp3Exist__sub_8036F0AC(void* p) { return reset_and_set_mode__21TAdMultiChgGameModeGCFv(p); }
void close_window__11TAdEp3ExistFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

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

int TAdEp3Exist__sub_8036F4DC(void) { return 0; }

s32 free_if_valid__11TAdEp3ExistFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void TAdEp3Exist__sub_8036F574(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 8) = 1;
}

u8 TAdEp3Exist__sub_8036F590(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0xC);
    M2C_FIELD(arg0, u8 **, 0xC) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

void TAdEp3Exist__sub_8036F5A4(void* p) { *(s32*)((char*)p + 0x10) = 0; }

}
