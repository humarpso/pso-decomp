#include "pso/TAdMultiPlayerNoGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_8033A668 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    f32 f2C;
    f32 f30;
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern void *__vt__18TAdMultiPlayerNoGC[];
extern s32 lbl_805D4288;
Self_8033A668 *__ct__18TAdMultiPlayerNoGCFv(Self_8033A668 *self, void *parent, s32 n, u32 idx, u32 arg);
}

extern "C" {

void render__18TAdMultiPlayerNoGCFv(void* p);
void render_status__18TAdMultiPlayerNoGCFi(s32 arg0);
void run_task__18TAdMultiPlayerNoGCFv(void);
M2C_UNK draw_textured_quad_at_depth(s32, f32);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK set_draw_texture_and_color(M2C_UNK, M2C_UNK);
int abs__4cXyzCFv(void*, void*);
M2C_UNK get_player__20TWindowSubStatusDispFv();
int get_state_flag__9TMainTaskFv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D6D78;

void render_status__18TAdMultiPlayerNoGCFi(s32 arg0) {
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6D78);
    set_draw_texture_and_color(0, -1);
    draw_textured_quad_at_depth(arg0 + 0x20, (0.25f));
    get_player__20TWindowSubStatusDispFv();
}

void render__18TAdMultiPlayerNoGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status__18TAdMultiPlayerNoGCFi((s32)(p)); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
void run_task__18TAdMultiPlayerNoGCFv(void) {  }
#pragma fp_contract on
TAdMultiPlayerNoGC::~TAdMultiPlayerNoGC() {}
Self_8033A668 *__ct__18TAdMultiPlayerNoGCFv(Self_8033A668 *self, void *parent, s32 n, u32 idx, u32 arg) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__18TAdMultiPlayerNoGC;
    self->f0 = lbl_805D4288;
    switch (n) {
    case 2:
        self->f40 = idx * 0x130 + 0x68;
        break;
    case 3:
        self->f40 = idx * 0xCB + 0x35;
        break;
    case 4:
        self->f40 = idx * 0x98 + 0x1C;
        break;
    default:
        queue_destruction__7TObjectFv(self);
        return self;
    }
    self->f44 = (112.0f);
    self->f1C = arg;
    self->f20 = self->f40;
    self->f24 = self->f44;
    self->f28 = (128.0f) + self->f40;
    self->f2C = (22.0f) + self->f44;
    self->f30 = (0.0f);
    self->f34 = (22.0f) * self->f1C / 128.0f;
    self->f38 = 1.0f;
    self->f3C = ((22.0f) * self->f1C + (22.0f)) / 128.0f;
    return self;
}

}
