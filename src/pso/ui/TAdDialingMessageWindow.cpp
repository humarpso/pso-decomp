#include "types.h"

struct Base_8036A248_8036A174 { char pad[0x18]; };
struct VObj_8036A248_8036A174 : Base_8036A248_8036A174 { virtual void m0(int); };

extern "C" {
s32 render_status_disp__23TAdSinglePlyChrSelectGCFPvff(void *, f32, f32);
s32 render_nodes__7TObjectFv(void *);
s32 TAdDialingGC__sub_80328B24(s32 *, s32 *);
extern s32 lbl_8047A400[];
extern s32 lbl_8047A408[];
extern const f32 lbl_805E0364;
extern const f32 lbl_805E0368;
void render__23TAdDialingMessageWindowFv(void *arg0);
}

extern "C" {

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2);
void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1);
void run_child_tasks__23TAdDialingMessageWindowFPv(void* p);
void set_flag_and_notify__23TAdDialingMessageWindowFPv(void* a0);
int create_draw_line_ctrl__13TAdMcSelectGCFiif(void*, int, float);
void __ct__7TObjectFP7TObject(void *, void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
void *__nw__7TObjectFUl(int);
void *init__23TAdDialingMessageWindowFPvPvPvPv(void *, void *, void *, void *);
s32 queue_destruction__7TObjectFv(void *);
int run_tasks__7TObjectFv(void*);

    extern const float lbl_805E0360;
void set_flag_and_notify__23TAdDialingMessageWindowFPv(void* a0) { *(int*)((char*)a0 + 0x1c) = (*(int*)((char*)a0 + 0x1c) | 0x1); create_draw_line_ctrl__13TAdMcSelectGCFiif((void*)(*(int*)((char*)a0 + 0x28)), 17, lbl_805E0360); }

void run_child_tasks__23TAdDialingMessageWindowFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) run_tasks__7TObjectFv(m); }

extern s32 __vt__23TAdDialingMessageWindow[];

void render__23TAdDialingMessageWindowFv(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x1C) & 1) {
        TAdDialingGC__sub_80328B24(lbl_8047A400, lbl_8047A408);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
            render_status_disp__23TAdSinglePlyChrSelectGCFPvff(*(void **)((s8 *)arg0 + 0x20), lbl_805E0364, lbl_805E0368);
        }
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
        render_nodes__7TObjectFv(*(void **)((s8 *)arg0 + 0x28));
    }
}

void *__dt__23TAdDialingMessageWindowFv(void *arg0, s16 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TAdDialingMessageWindow;
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x24));
        }
        temp_r3 = *(void **)((s8 *)arg0 + 0x28);
        if ((temp_r3 != NULL) && (temp_r3 != NULL)) {
            ((VObj_8036A248_8036A174 *)temp_r3)->m0(1);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fadeafter;
extern s32 __vt__23TAdDialingMessageWindow[];
extern void *lbl_805D44C8;
extern void *tl_camera;

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0, tl_fadeafter);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TAdDialingMessageWindow;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D44C8;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(void **)((s8 *)arg0 + 0x20) = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = init__23TAdDialingMessageWindowFPvPvPvPv(o, tl_camera, arg0, arg2);
    }
    *(void **)((s8 *)arg0 + 0x24) = o;
    o2 = __nw__7TObjectFUl(0x1C);
    if (o2 != NULL) {
        o2 = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o2, 0);
    }
    *(void **)((s8 *)arg0 + 0x28) = o2;
    return arg0;
}

}
