#include "types.h"

#include <stddef.h>
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
struct Stack_8001D19C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8001D19C_lbl_804FF5E8 {
    s32 value;
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
extern RecoveredGlobal_8001D19C_lbl_804FF5E8 lbl_804FF5E8;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D7EC0;
void DCInvalidateRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 aram_dma_pending;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TLoadingCur__ct(void *, void *, void *);
s32 direction_to_rotation_xz(void *, void *, void *);
void *__nw__7TObjectFUl(u32);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TAdLoadNetworkGC__ct(void *, void *, void *);
extern s32 __vt__11TNowLoading[];
extern RecoveredGlobal_8001D19C_lbl_804FF5E8 lbl_804FF5E8;
extern s32 TNowLoading__class_name;
extern const f32 lbl_805D7EC0;
TNowLoading_8001D3A8 *TNowLoading__ct(TNowLoading_8001D3A8 *arg0, void *arg1, Vec_8001D3A8 *arg2);
void DCInvalidateRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 aram_dma_pending;
void DCFlushRange(void *, u32);
void ARQPostRequest(void *, u32, u32, u32, u32, u32, u32, void *);
void TLobby__sub_8001D9DC(void);
extern s32 aram_dma_pending;
}

extern "C" {

void TNowLoading__sub_8001D4D0(void);
void TNowLoading__sub_8001D4D4(void);
void *__dt__11TNowLoadingFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void TNowLoading::render() {  }

extern s32 __vt__11TNowLoading[];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8001D19C_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001D19C_lbl_804FF5E8) == 0x28 ? 1 : -1];
void TNowLoading::run_task() {
    u8 *arg0 = (u8 *)this;
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
        *(f32 *)((s8 *)arg0 + 0x2C) = (f32) ((lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0xC)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0));
        *(f32 *)((s8 *)arg0 + 0x30) = (f32) ((lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x10)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 4));
        *(f32 *)((s8 *)arg0 + 0x34) = (f32) ((lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x14)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 8));
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x1C);
        if (temp_r3 != 0U) {
            ((TNowLoading *)temp_r3)->copy_pos((void *) (arg0 + 0x2C));
        }
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x20);
        if (temp_r3_2 != 0U) {
            ((TNowLoading *)temp_r3_2)->copy_pos((void *) (arg0 + 0x2C));
        }
        temp_r3_3 = *(u32 *)((s8 *)arg0 + 0x24);
        if (temp_r3_3 != 0U) {
            ((TNowLoading *)temp_r3_3)->copy_pos((void *) (arg0 + 0x2C));
        }
        temp_r3_4 = *(u32 *)((s8 *)arg0 + 0x28);
        if (temp_r3_4 != 0U) {
            ((TNowLoading *)temp_r3_4)->copy_pos((void *) (arg0 + 0x2C));
        }
    } else {
        stack.sp8 = (lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0xC)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0);
        stack.spC = (lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x10)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 4);
        stack.sp10 = (lbl_805D7EC0 * *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x14)) + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 8);
        temp_r3_5 = *(u32 *)((s8 *)arg0 + 0x1C);
        if (temp_r3_5 != 0U) {
            ((TNowLoading *)temp_r3_5)->copy_pos((void *) (&stack.sp8));
        }
        temp_r3_6 = *(u32 *)((s8 *)arg0 + 0x20);
        if (temp_r3_6 != 0U) {
            ((TNowLoading *)temp_r3_6)->copy_pos((void *) (&stack.sp8));
        }
        temp_r3_7 = *(u32 *)((s8 *)arg0 + 0x24);
        if (temp_r3_7 != 0U) {
            ((TNowLoading *)temp_r3_7)->copy_pos((void *) (&stack.sp8));
        }
        temp_r3_8 = *(u32 *)((s8 *)arg0 + 0x28);
        if (temp_r3_8 != 0U) {
            ((TNowLoading *)temp_r3_8)->copy_pos((void *) (&stack.sp8));
        }
    }
}
#pragma pop

void *__dt__11TNowLoadingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TNowLoading;
        if (*(void **)((s8 *)arg0 + 0x1C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x1C)); *(s32 *)((s8 *)arg0 + 0x1C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x20)); *(s32 *)((s8 *)arg0 + 0x20) = 0; }
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x24)); *(s32 *)((s8 *)arg0 + 0x24) = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
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
    arg0->unk0 = TNowLoading__class_name;
    VecCopy__FP3VecPC3Vec(&arg0->pos, arg2);
    cam = (Cam_8001D3A8 *) &lbl_804FF5E8;
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    dir.x = -cam->dir.x;
    dir.y = -cam->dir.y;
    dir.z = -cam->dir.z;
    direction_to_rotation_xz(&dir, &out[0], &out[2]);
    arg0->pos.x = lbl_805D7EC0 * cam->dir.x + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0);
    arg0->pos.y = lbl_805D7EC0 * cam->dir.y + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 4);
    arg0->pos.z = lbl_805D7EC0 * cam->dir.z + *(f32 *)((s8 *)(&lbl_804FF5E8.value) + 8);
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

s32 TLobby::aram_dma_blocking(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    len = (arg3 + 0x1F) & ~0x1F;
    (*(volatile s32 *)&aram_dma_pending) = 1;
    DCInvalidateRange((void *)arg2, len);
    ARQPostRequest(sp8, arg0, 1, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if ((*(volatile s32 *)&aram_dma_pending) == 0) break;
    }
    DCInvalidateRange((void *)arg2, len);
    return 1;
}

s32 TLobby::aram_read_sync(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    len = (arg3 + 0x1F) & ~0x1F;
    aram_dma_pending = 1;
    DCInvalidateRange((void *)arg2, len);
    ARQPostRequest(sp8, arg0, 1, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if (aram_dma_pending == 0) break;
        TLobby::run_frame();
    }
    DCInvalidateRange((void *)arg2, len);
    return 1;
}
s32 TLobby::aram_transfer_sync(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u8 sp8[0x20];
    s32 len;
    if (arg2 == 0 && arg1 == 0) {
        return 0;
    }
    len = (arg3 + 0x1F) & ~0x1F;
    (*(volatile s32 *)&aram_dma_pending) = 1;
    DCFlushRange((void *)arg1, len);
    ARQPostRequest(sp8, arg0, 0, 1, arg1, arg2, len, (void *)TLobby__sub_8001D9DC);
    for (;;) {
        if ((*(volatile s32 *)&aram_dma_pending) == 0) break;
        TLobby::run_frame();
    }
    return 1;
}

}
