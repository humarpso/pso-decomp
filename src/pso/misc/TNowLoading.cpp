#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8001D19C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8001D19C_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

typedef struct Vec_8001D3A8 { f32 x, y, z; } Vec_8001D3A8;

typedef struct Cam_8001D3A8 {
    Vec_8001D3A8 eye;
    Vec_8001D3A8 dir;
    u8 pad18[0x10];
} Cam_8001D3A8;

typedef struct TNowLoading_8001D3A8 {
    s32 unk0;
    u8 pad4[0x18 - 0x4];
    void *vtable;
    void *children[4];
    Vec_8001D3A8 pos;
} TNowLoading_8001D3A8;

extern "C" {
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
extern RecoveredGlobal_8001D19C_lbl_804FF5E8 lbl_804FF5E8;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D7EC0;
void run_task__11TNowLoadingFv(u8 *arg0);
void run_frame__6TLobbyFv(void);
void DCInvalidateRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 lbl_805D4A90;
s32 aram_read_sync__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TLoadingCur__ct(void *, void *, void *);
M2C_UNK direction_to_rotation_xz(void *, void *, void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK TAdLoadNetworkGC__ct(void *, void *, void *);
extern M2C_UNK __vt__11TNowLoading[];
extern RecoveredGlobal_8001D19C_lbl_804FF5E8 lbl_804FF5E8;
extern s32 lbl_805D2640;
extern const f32 lbl_805D7EC0;
TNowLoading_8001D3A8 *TNowLoading__ct(TNowLoading_8001D3A8 *arg0, void *arg1, Vec_8001D3A8 *arg2);
void DCInvalidateRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 lbl_805D4A90;
s32 aram_dma_blocking__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void DCFlushRange(void *, u32);
void run_frame__6TLobbyFv(void);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 lbl_805D4A90;
s32 aram_transfer_sync__6TLobbyFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TNowLoading__sub_8001D4D0(void);
void TNowLoading__sub_8001D4D4(void);
void *__dt__11TNowLoadingFv(void *arg0, s16 arg1);
void render__11TNowLoadingFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__11TNowLoadingFv(void) {  }

extern M2C_UNK __vt__11TNowLoading[];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8001D19C_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001D19C_lbl_804FF5E8) == 0x28 ? 1 : -1];
void run_task__11TNowLoadingFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8001D19C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001D19C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001D19C, sp10) == 0x8) ? 1 : -1];
    Stack_8001D19C stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    if ((u32) camera_ctrl_instance == 0U) {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0));
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8));
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3), (void *) (arg0 + 0x2C));
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x20);
        if (temp_r3_2 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_2), (void *) (arg0 + 0x2C));
        }
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x24);
        if (temp_r3_3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_3), (void *) (arg0 + 0x2C));
        }
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x28);
        if (temp_r3_4 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_4), (void *) (arg0 + 0x2C));
        }
    } else {
        stack.sp8 = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0);
        stack.spC = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4);
        stack.sp10 = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8);
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3_5 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_5), (void *) (&stack.sp8));
        }
        temp_r3_6 = M2C_FIELD(arg0, u32 *, 0x20);
        if (temp_r3_6 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_6), (void *) (&stack.sp8));
        }
        temp_r3_7 = M2C_FIELD(arg0, u32 *, 0x24);
        if (temp_r3_7 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_7), (void *) (&stack.sp8));
        }
        temp_r3_8 = M2C_FIELD(arg0, u32 *, 0x28);
        if (temp_r3_8 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_8), (void *) (&stack.sp8));
        }
    }
}
#pragma pop

void *__dt__11TNowLoadingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TNowLoading;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
TNowLoading_8001D3A8 *TNowLoading__ct(TNowLoading_8001D3A8 *arg0, void *arg1, Vec_8001D3A8 *arg2) {
    Vec_8001D3A8 dir;
    s32 out[3];
    Cam_8001D3A8 *cam;
    void *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vtable = __vt__11TNowLoading;
    arg0->unk0 = lbl_805D2640;
    VecCopy__FP3VecPC3Vec(&arg0->pos, arg2);
    cam = (Cam_8001D3A8 *) &lbl_804FF5E8;
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    dir.x = -cam->dir.x;
    dir.y = -cam->dir.y;
    dir.z = -cam->dir.z;
    direction_to_rotation_xz(&dir, &out[0], &out[2]);
    arg0->pos.x = lbl_805D7EC0 * cam->dir.x + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0);
    arg0->pos.y = lbl_805D7EC0 * cam->dir.y + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4);
    arg0->pos.z = lbl_805D7EC0 * cam->dir.z + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8);
    arg0->children[0] = NULL;
    arg0->children[1] = NULL;
    arg0->children[2] = NULL;
    arg0->children[3] = NULL;
    p = __nw__7TObjectFUl(0x40);
    if (p != NULL) {
        TAdLoadNetworkGC__ct(p, arg0, &arg0->pos);
    }
    p = __nw__7TObjectFUl(0x5C);
    if (p != NULL) {
        TLoadingCur__ct(p, arg0, &arg0->pos);
    }
    return arg0;
}
#pragma pop

void TNowLoading__sub_8001D4D0(void) {  }
void TNowLoading__sub_8001D4D4(void) {  }

s32 aram_dma_blocking__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    len = (arg3 + 0x1F) & ~0x1F;
    (*(volatile s32 *)&lbl_805D4A90) = 1;
    DCInvalidateRange((void *)arg2, len);
    ARQPostRequest(sp8, arg0, 1, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if ((*(volatile s32 *)&lbl_805D4A90) == 0) break;
    }
    DCInvalidateRange((void *)arg2, len);
    return 1;
}

s32 aram_read_sync__6TLobbyFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    len = (arg3 + 0x1F) & ~0x1F;
    lbl_805D4A90 = 1;
    DCInvalidateRange((void *)arg2, len);
    ARQPostRequest(sp8, arg0, 1, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if (lbl_805D4A90 == 0) break;
        run_frame__6TLobbyFv();
    }
    DCInvalidateRange((void *)arg2, len);
    return 1;
}
s32 aram_transfer_sync__6TLobbyFiUiii(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    if (arg2 == 0 && arg1 == 0) {
        return 0;
    }
    len = (arg3 + 0x1F) & ~0x1F;
    (*(volatile s32 *)&lbl_805D4A90) = 1;
    DCFlushRange((void *)arg1, len);
    ARQPostRequest(sp8, arg0, 0, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if ((*(volatile s32 *)&lbl_805D4A90) == 0) break;
        run_frame__6TLobbyFv();
    }
    return 1;
}

}
