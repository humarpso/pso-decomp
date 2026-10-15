#include "pso/TAdDrawLineTask.h"

TAdDrawLineTask::~TAdDrawLineTask() {}

#include "types.h"

extern "C" {

void render__15TAdDrawLineTaskFv(void* p);
void run_task__15TAdDrawLineTaskFv(void *arg0);
int draw_projected_line_strip__10TObjPlayerFPvii(void*, void*, void*);
s32 allow_rendering__7TObjectFv();
s32 fn_80019B08(u32, s32);
int reset_transform_state__10TObjPlayerFv(void*);
s32 set_flag_4__9TObjLukerFPv(void *);

void render__15TAdDrawLineTaskFv(void* p) { reset_transform_state__10TObjPlayerFv(p); draw_projected_line_strip__10TObjPlayerFPvii((char*)p + 0x64, (void*)4, (void*)1); }

extern const f32 lbl_805D7DD8;

void run_task__15TAdDrawLineTaskFv(void *arg0) {
    allow_rendering__7TObjectFv();
    if ((lbl_805D7DD8 + *(f32 *)((s8 *)arg0 + 0x4C)) < *(f32 *)((s8 *)arg0 + 0x50)) {
        *(u8 *)((s8 *)arg0 + 0xA6) = (u8) (*(u8 *)((s8 *)arg0 + 0xA6) + *(u8 *)((s8 *)arg0 + 0x62));
        *(u8 *)((s8 *)arg0 + 0xA5) = (u8) (*(u8 *)((s8 *)arg0 + 0xA5) + *(u8 *)((s8 *)arg0 + 0x61));
        *(u8 *)((s8 *)arg0 + 0xA4) = (u8) (*(u8 *)((s8 *)arg0 + 0xA4) + *(u8 *)((s8 *)arg0 + 0x60));
        *(u8 *)((s8 *)arg0 + 0xA7) = (u8) (*(u8 *)((s8 *)arg0 + 0xA7) + *(u8 *)((s8 *)arg0 + 0x63));
        *(f32 *)((s8 *)arg0 + 0x84) = (f32) (*(f32 *)((s8 *)arg0 + 0x84) + *(f32 *)((s8 *)arg0 + 0x54));
        *(f32 *)((s8 *)arg0 + 0x88) = (f32) (*(f32 *)((s8 *)arg0 + 0x88) + *(f32 *)((s8 *)arg0 + 0x58));
        *(f32 *)((s8 *)arg0 + 0x8C) = (f32) (*(f32 *)((s8 *)arg0 + 0x8C) + *(f32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x90) = (s32) *(s32 *)((s8 *)arg0 + 0xA4);
        *(f32 *)((s8 *)arg0 + 0x94) = (f32) (*(f32 *)((s8 *)arg0 + 0x94) + *(f32 *)((s8 *)arg0 + 0x54));
        *(f32 *)((s8 *)arg0 + 0x98) = (f32) (*(f32 *)((s8 *)arg0 + 0x98) + *(f32 *)((s8 *)arg0 + 0x58));
        *(f32 *)((s8 *)arg0 + 0x9C) = (f32) (*(f32 *)((s8 *)arg0 + 0x9C) + *(f32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0xA0) = (s32) *(s32 *)((s8 *)arg0 + 0xA4);
        *(f32 *)((s8 *)arg0 + 0x4C) = (f32) (*(f32 *)((s8 *)arg0 + 0x4C) + lbl_805D7DD8);
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x84) = (f32) (*(f32 *)((s8 *)arg0 + 0x34) + *(f32 *)((s8 *)arg0 + 0xA8));
    *(f32 *)((s8 *)arg0 + 0x88) = (f32) (*(f32 *)((s8 *)arg0 + 0x38) + *(f32 *)((s8 *)arg0 + 0xAC));
    *(f32 *)((s8 *)arg0 + 0x8C) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
    *(s32 *)((s8 *)arg0 + 0x90) = (s32) *(s32 *)((s8 *)arg0 + 0x40);
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) (*(f32 *)((s8 *)arg0 + 0x34) - *(f32 *)((s8 *)arg0 + 0xA8));
    *(f32 *)((s8 *)arg0 + 0x98) = (f32) (*(f32 *)((s8 *)arg0 + 0x38) - *(f32 *)((s8 *)arg0 + 0xAC));
    *(f32 *)((s8 *)arg0 + 0x9C) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
    *(s32 *)((s8 *)arg0 + 0xA0) = (s32) *(s32 *)((s8 *)arg0 + 0x40);
    {
        u32 temp = *(u32 *)((s8 *)arg0 + 0x1C);
        if (temp != 0U) {
            fn_80019B08(temp, *(s32 *)((s8 *)arg0 + 0x20));
        }
    }
    set_flag_4__9TObjLukerFPv(arg0);
}

}
