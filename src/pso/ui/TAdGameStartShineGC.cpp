#include "pso/TAdGameStartShineGC.h"

#include "types.h"

struct V2_8034AB4C { f32 x, y; };

struct Shine_8034AB4C {
    s32 name;
    u8 pad4[0x18 - 4];
    void *vt;
    f32 f1C;
    f32 f20;
    f32 x24;
    f32 y28;
    f32 x2C;
    f32 y30;
    f32 x34;
    f32 y38;
    u8 pad3C[0x4C - 0x3C];
    f32 x4C;
    f32 y50;
    u8 pad54[0x64 - 0x54];
    f32 f64;
    f32 f68;
    f32 f6C;
    f32 f70;
    s32 alpha;
    s32 timer;
    s32 visible;
};

extern "C" {
extern const f32 lbl_805DFD64;
extern const f32 lbl_805DFD68;
void run_task__19TAdGameStartShineGCFv(u8 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
s32 get_instance__10TObjPlayerFv();
extern f32 lbl_804789E8[];
extern const f32 lbl_804789F0[];
extern s32 __vt__19TAdGameStartShineGC[];
extern s32 lbl_805D4320;
extern s32 lbl_805D6E88;
extern const f32 lbl_805DFD64;
extern const f32 lbl_805DFD6C;
extern const f32 lbl_805DFD70;
extern const f32 lbl_805DFD74;
Shine_8034AB4C *__ct__19TAdGameStartShineGCFv(Shine_8034AB4C *self);
}

extern "C" {

void render__19TAdGameStartShineGCFv(void *arg0);
s32 set_cached_blend_factor(s32, s32);
s32 get_state_flag__9TMainTaskFv();
s32 render_status_box__20TWindowSubStatusDispFPv(void *);

void render__19TAdGameStartShineGCFv(void *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && ((s32) *(s32 *)((s8 *)arg0 + 0x7C) != 0)) {
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 0xA);
        render_status_box__20TWindowSubStatusDispFPv(arg0);
        set_cached_blend_factor(0, 8);
        set_cached_blend_factor(1, 6);
    }
}
#pragma push
#pragma fp_contract on
void run_task__19TAdGameStartShineGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x78);
    *(s32 *)((s8 *)arg0 + 0x78) = (s32) (temp_r4 + 1);
    if (temp_r4 >= 0xA) {
        *(s32 *)((s8 *)arg0 + 0x7C) = 1;
        *(s32 *)((s8 *)arg0 + 0x74) = (s32) (*(s32 *)((s8 *)arg0 + 0x74) - 0xE);
        var_r0 = *(s32 *)((s8 *)arg0 + 0x74);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        *(s32 *)((s8 *)arg0 + 0x74) = var_r0;
        *(f32 *)((s8 *)arg0 + 0x1C) = (f32) -((lbl_805DFD68 * (f32) (*(s32 *)((s8 *)arg0 + 0x78) - 0xB)) - lbl_805DFD64);
        *(f32 *)((s8 *)arg0 + 0x20) = (f32) lbl_805DFD64;
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x4C);
        *(f32 *)((s8 *)arg0 + 0x54) = (f32) ((*(f32 *)((s8 *)arg0 + 0x1C) * (*(f32 *)((s8 *)arg0 + 0x2C) - temp_f2)) + temp_f2);
        temp_f2_2 = *(f32 *)((s8 *)arg0 + 0x50);
        *(f32 *)((s8 *)arg0 + 0x58) = (f32) ((*(f32 *)((s8 *)arg0 + 0x20) * (*(f32 *)((s8 *)arg0 + 0x30) - temp_f2_2)) + temp_f2_2);
        temp_f2_3 = *(f32 *)((s8 *)arg0 + 0x4C);
        *(f32 *)((s8 *)arg0 + 0x5C) = (f32) ((*(f32 *)((s8 *)arg0 + 0x1C) * (*(f32 *)((s8 *)arg0 + 0x34) - temp_f2_3)) + temp_f2_3);
        temp_f2_4 = *(f32 *)((s8 *)arg0 + 0x50);
        *(f32 *)((s8 *)arg0 + 0x60) = (f32) ((*(f32 *)((s8 *)arg0 + 0x20) * (*(f32 *)((s8 *)arg0 + 0x38) - temp_f2_4)) + temp_f2_4);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
TAdGameStartShineGC::~TAdGameStartShineGC() {}
Shine_8034AB4C *__ct__19TAdGameStartShineGCFv(Shine_8034AB4C *self) {
    __ct__7TObjectFP7TObject(self);
    self->vt = __vt__19TAdGameStartShineGC;
    self->name = lbl_805D4320;
    self->f1C = lbl_805DFD64;
    self->f20 = lbl_805DFD64;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&self->x24, lbl_804789E8);
    self->x2C = self->x24;
    self->y30 = self->y28;
    self->x34 = self->x24 + lbl_804789F0[0];
    self->y38 = self->y28 + lbl_804789F0[1];
    self->f64 = lbl_805DFD6C;
    self->f68 = lbl_805DFD6C;
    self->f6C = lbl_805DFD64;
    self->f70 = lbl_805DFD70;
    self->x4C = lbl_805DFD74 * (self->x34 - self->x2C) + self->x2C;
    self->y50 = lbl_805DFD74 * (self->y38 - self->y30) + self->y30;
    self->alpha = 0xFF;
    self->timer = -1;
    self->visible = 0;
    lbl_805D6E88 = get_instance__10TObjPlayerFv();
    return self;
}
#pragma pop

}
