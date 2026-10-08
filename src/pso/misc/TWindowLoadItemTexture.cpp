#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
s32 get_camera_id__11TCameraCtrlFv(void);
s32 create__12TItemTexLoadFPv(s32);
void get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
M2C_UNK save_position__17TWindowSubComCardFPv(void *);
M2C_UNK construct_base__9TWindowDDFPvPvsPv(void *, M2C_UNK *, s16, void *);
extern M2C_UNK lbl_804D0058[];
extern M2C_UNK __vt__22TWindowLoadItemTexture[];
extern s32 lbl_805D3940;
extern s32 tl_07;
extern const f32 lbl_805DD0D8;
extern const f32 lbl_805DD0F0;
extern const f32 lbl_805DD0FC;
void *TWindowLoadItemTexture__ct(void *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1);
void *create__22TWindowLoadItemTextureFPvPv(void *arg0, void *arg1);
void fn_80262C2C(void* p);
void render__22TWindowLoadItemTextureFv(u8 *arg0);
void run_task__22TWindowLoadItemTextureFv(void* p);
u32 TItemTexLoad__sub_8011D164(s32);
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_window_frame(void *, s32);
M2C_UNK draw_visible_window_entries(void *, void *, s32);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void fn_8025B078(f32, f32, f32, f32);
M2C_UNK fn_8026287C(void *);
void get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
void queue_destruction__7TObjectFv(void *);
int update_fade__17TWindowSubComCardFPv(void*);

extern M2C_UNK lbl_8044F280[];
extern const f32 lbl_805DD0EC;
extern const f32 lbl_805DD0F4;
extern const f32 lbl_805DD0F8;

void *create__22TWindowLoadItemTextureFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TWindowLoadItemTexture__ct((void *)(o), (void *)(arg0), (void *)(lbl_8044F280), (void *)(arg1));
    }
    get_array_entry__20TWindowSubStatusDispFPvi(o, 0);
    fn_8025B078(lbl_805DD0EC, lbl_805DD0EC, lbl_805DD0F4, lbl_805DD0F8);
    return o;
}

void render__22TWindowLoadItemTextureFv(u8 *arg0) {
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, u8 *, 0x60) == 1) {
        M2C_FIELD(arg0, u32 *, 0x70) = TItemTexLoad__sub_8011D164(M2C_FIELD(arg0, s32 *, 0x6C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            fn_8026287C(arg0);
            M2C_FIELD(arg0, u8 *, 0x60) = 1U;
        }
    }
    temp_r31 = setup_window_draw_context(arg0, arg0 + 0x64);
    if (M2C_FIELD(arg0, u8 *, 0x61) & 1) {
        draw_window_frame(arg0, temp_r31);
    }
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r31);
}

void run_task__22TWindowLoadItemTextureFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__22TWindowLoadItemTexture[];

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowLoadItemTexture;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x6C));
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TWindowLoadItemTexture__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *e;
    construct_base__9TWindowDDFPvPvsPv(arg0, lbl_804D0058, (s16)(s32)arg3, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowLoadItemTexture;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3940;
    switch (get_camera_id__11TCameraCtrlFv()) {
    case 1:
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DD0F0;
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DD0D8;
        break;
    case 3:
    case 4:
        M2C_FIELD(arg0, f32 *, 0x68) = M2C_FIELD(arg0, f32 *, 0x64) = lbl_805DD0FC;
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x3C) = M2C_FIELD(arg2, f32 *, 4);
    save_position__17TWindowSubComCardFPv(arg0);
    e = ((void *(*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)(arg0, 0);
    M2C_FIELD(e, f32 *, 0x10) = M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(e, f32 *, 0x14) = M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x6C) = create__12TItemTexLoadFPv(tl_07);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s8 *, 0x60) = 2;
    return arg0;
}

void fn_80262C2C(void* p) { *(u8*)((char*)p + 0x61) |= 0x1; }

}
