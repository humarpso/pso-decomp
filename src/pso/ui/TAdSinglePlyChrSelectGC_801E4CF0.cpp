#include "types.h"

extern "C" {

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
s32 pso_load_texture__6TLobbyFPv(void *);
s32 TLobby__sub_803DA16C(s32);
s32 set_texture_name(void *, void *, int, int);
s32 __dl__FPv(void *);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);

void advance_wrapped_cursor__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (*(s32 *)((s8 *)arg0 + 0x4C) + 1);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x4C);
    temp_r4 = *(s32 *)((s8 *)arg0 + 4);
    if (temp_r0 >= temp_r4) {
        *(s32 *)((s8 *)arg0 + 0x4C) = (s32) (temp_r0 - temp_r4);
    }
}

extern s32 lbl_804C57E0[];

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x50) = lbl_804C57E0;
        TLobby__sub_803DA16C(*(s32 *)((s8 *)arg0 + 0x3C));
        safe_free__23TAdSinglePlyChrSelectGCFUi(*(s32 *)((s8 *)arg0 + 0x44));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void init_image_buffer__23TAdSinglePlyChrSelectGCFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;

    *(void **)((s8 *)arg0 + 0x40) = arg1;
    *(s32 *)((s8 *)arg0 + 0x48) = arg2;
    *(s32 *)((s8 *)arg0 + 4) = (s32) *(u16 *)((s8 *)(*(void **)((s8 *)arg0 + 0x40)) + 0x1C);
    *(s32 *)((s8 *)arg0 + 0) = (s32) *(u16 *)((s8 *)(*(void **)((s8 *)arg0 + 0x40)) + 0x1E);
    temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x40));
    *(s32 *)((s8 *)arg0 + 8) = (s32) *(u16 *)((s8 *)temp_r3 + 8);
    *(s32 *)((s8 *)arg0 + 8) = (s32) (*(s32 *)((s8 *)arg0 + 8) | (*(u16 *)((s8 *)temp_r3 + 0xA) << 0x10));
    *(s32 *)((s8 *)arg0 + 0x44) = alloc__22TQuestVmDownLoadServerFPv((int) ((*(s32 *)((s8 *)arg0 + 0) * (*(s32 *)((s8 *)arg0 + 4) * 2)) + 0x20));
    *(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x3C)) + 0) = (void *) (arg0 + 0xC);
    *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x3C)) + 4) = 1;
    set_render_rect__10TObjPlayerFPviiii((void *) (arg0 + 0x18), (int) (*(s32 *)((s8 *)arg0 + 0x44) + 0x20), (int) (5), (int) (*(s32 *)((s8 *)arg0 + 4)), (int) (*(s32 *)((s8 *)arg0 + 0)));
    set_texture_name((void *) (arg0 + 0xC), (void *) (arg0 + 0x18), (int) (*(s32 *)((s8 *)arg0 + 8)), (int) (0x40800000));
    pso_load_texture__6TLobbyFPv((void *) (*(void **)((s8 *)arg0 + 0x3C)));
}

}
