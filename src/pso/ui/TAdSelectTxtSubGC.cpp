#include "pso/TAdSelectTxtSubGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Src_802A37A0 {
    s32 f0;
    s32 f4;
    f32 v8[2];
    s32 f10;
};

struct Txt_802A37A0 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    s32 f1c;
    s32 f20;
    f32 f24, f28, f2c, f30;
    u8 pad34[0x54 - 0x34];
    f32 f54, f58, f5c, f60;
    f32 f64, f68;
    f32 f6c, f70;
    f32 f74, f78;
    s32 f7c;
    s32 f80;
    s32 f84;
};

extern "C" {
extern const f32 lbl_805DDF3C;
extern const f32 lbl_805DDF40;
void run_task__17TAdSelectTxtSubGCFv(u8 *arg0);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
int TObjNpcHosa__sub_802A39B0(void);
extern M2C_UNK __vt__17TAdSelectTxtSubGC[];
extern s32 ad_select_txt_sub_gc_class_name;
extern s32 lbl_805D6648;
extern const f32 lbl_805DDF3C;
extern const f32 lbl_805DDF44;
extern const f32 lbl_805DDF48;
extern const f32 lbl_805DDF4C;
extern const f32 lbl_805DDF54;
extern const f32 lbl_805DDF58;
Txt_802A37A0 *__ct__17TAdSelectTxtSubGCFv(Txt_802A37A0 *arg0, void *parent, Src_802A37A0 *src);
}

extern "C" {

void * TObjNpcHosa__create(void *arg0);
int TObjNpcHosa__sub_802A39B0(void);
void render__17TAdSelectTxtSubGCFv(void* p);
void *TObjControl__ct(void *, void *);
void *TObjNpcHosa__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int set_cached_blend_factor(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status__20TWindowSubStatusDispFPv(void*);

void render__17TAdSelectTxtSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)10); render_status__20TWindowSubStatusDispFPv(p); set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)6); } }

    extern int ad_select_text_texture_handle;

#pragma push
#pragma fp_contract on
void run_task__17TAdSelectTxtSubGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r4 < 5) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (temp_r4 + 1);
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DDF40 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DDF3C);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) -((lbl_805DDF40 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DDF3C);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x78) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) ((M2C_FIELD(arg0, f32 *, 0x78) * (M2C_FIELD(arg0, f32 *, 0x30) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

#pragma push
#pragma fp_contract on
TAdSelectTxtSubGC::~TAdSelectTxtSubGC() {}
Txt_802A37A0 *__ct__17TAdSelectTxtSubGCFv(Txt_802A37A0 *arg0, void *parent, Src_802A37A0 *src) {
    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->vt = __vt__17TAdSelectTxtSubGC;
    arg0->f0 = ad_select_txt_sub_gc_class_name;
    arg0->f7c = src->f0;
    arg0->f1c = src->f4;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->f64, src->v8);
    arg0->f80 = src->f10;
    arg0->f84 = -1;
    arg0->f74 = lbl_805DDF3C;
    arg0->f78 = lbl_805DDF3C;
    lbl_805D6648 = TObjNpcHosa__sub_802A39B0();
    arg0->f20 = arg0->f7c > 8;
    arg0->f7c -= (arg0->f7c > 8) ? 9 : 0;
    arg0->f24 = lbl_805DDF44 * (f32) arg0->f1c + arg0->f64;
    arg0->f28 = arg0->f68;
    arg0->f2c = lbl_805DDF44 * (f32) (arg0->f1c + 1) + arg0->f64;
    arg0->f30 = lbl_805DDF48 + arg0->f68;
    arg0->f6c = lbl_805DDF4C * (arg0->f2c - arg0->f24) + arg0->f24;
    arg0->f70 = lbl_805DDF4C * (arg0->f30 - arg0->f28) + arg0->f28;
    arg0->f54 = (lbl_805DDF44 * (f32) arg0->f1c) / 256.0f;
    arg0->f58 = (lbl_805DDF54 * (f32) arg0->f7c) / 256.0f;
    arg0->f5c = (lbl_805DDF44 * (f32) (arg0->f1c + 1) - lbl_805DDF58) / 256.0f;
    arg0->f60 = (lbl_805DDF54 * (f32) (arg0->f7c + 1) - lbl_805DDF58) / 256.0f;
    return arg0;
}
#pragma pop

int TObjNpcHosa__sub_802A39B0(void) {  return ad_select_text_texture_handle; }

extern void *tl_04;

void * TObjNpcHosa__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHosa__ct(o2, o, arg0);
    }
    return o2;
}

}
