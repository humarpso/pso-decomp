#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Quantity_8026D000 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void **vt;
    u8 pad1C[0x38 - 0x1C];
    f32 f38;
    u8 pad3C[0x60 - 0x3C];
    f32 f60;
    f32 f64;
    f32 f68;
};

extern "C" {
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
void set_position__15TWindowQuantityFPvi(void *arg0, s32 arg1);
void render__15TWindowQuantityFv(s32 arg0);
s32 get_camera_id__11TCameraCtrlFv(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
u32 TWindowSubStatusDisp__sub_80144D68(void);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void save_position__17TWindowSubComCardFPv(void *);
void TWindowDD__sub_802466E0(void *, void *, s16, s32);
void TWindowSubStatusDisp__sub_8025AC50(void *, s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
f32 get_base_y__20TWindowSubStatusDispFf(f32);
f32 TWindowSubStatusDisp__sub_802877A4(f32);
extern u8 lbl_804D0870[];
extern M2C_UNK __vt__15TWindowQuantity[];
extern s32 lbl_805D39B0;
extern const f32 lbl_805DD2D0;
extern const f32 lbl_805DD2D4;
extern const f32 lbl_805DD2D8;
extern const f32 lbl_805DD2DC;
extern const f32 lbl_805DD2E0;
void *TWindowQuantity__ct(void *arg0, void *arg1);
}

extern "C" {

void *create_window_quantity(void *arg0);
void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1);
void run_task__15TWindowQuantityFv(void* p);
void set_position__15TWindowQuantityFPvi(void *arg0, s32 arg1);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);

void set_position__15TWindowQuantityFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}

void render__15TWindowQuantityFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubComCard__sub_80244C0C((void *)(arg0), (void *) (arg0 + 0x64));
    set_position__15TWindowQuantityFPvi((void *)((void *) (arg0)), (s32)((int) (temp_r3)));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__15TWindowQuantityFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__15TWindowQuantity[];

void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowQuantity;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TWindowQuantity__ct(void *arg0, void *arg1) {
#define self ((Quantity_8026D000 *)arg0)
    u8 *e1;
    u8 *e0;
    s32 id;
    f32 n;
    TWindowDD__sub_802466E0(arg0, lbl_804D0870, (s16)(s32)arg1, TWindowSubComCard__sub_8026CBB8(0x2A));
    self->vt = ((void * *)&__vt__15TWindowQuantity);
    self->f0 = lbl_805D39B0;
    id = TQuestVmDownLoadServer__sub_8006EF6C(1);
    n = (f32)TWindowSubStatusDisp__sub_80144D68();
    self->f60 = TWindowSubStatusDisp__sub_802877A4(lbl_805DD2D0 + (lbl_805DD2D4 + n));
    e0 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    e1 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    TWindowSubStatusDisp__sub_8025AC50(e0, id, 0);
    *(f32 *)(e1 + 8) = lbl_805DD2D0 + (lbl_805DD2D4 + (lbl_805DD2D8 + n));
    self->f38 = get_base_y__20TWindowSubStatusDispFf(self->f60);
    save_position__17TWindowSubComCardFPv(arg0);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        self->f64 = lbl_805DD2DC;
        self->f68 = lbl_805DD2DC;
    } else {
        self->f64 = lbl_805DD2E0;
        self->f68 = lbl_805DD2E0;
    }
    return arg0;
#undef self
}

void *create_window_quantity(void *arg0) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TWindowQuantity__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

}
