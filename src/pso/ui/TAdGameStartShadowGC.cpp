#include "pso/TAdGameStartShadowGC.h"

#include "types.h"

struct Rec_80320CB8 { f32 x, y, x2, y2; f32 u0, v0, u1, v1; };

struct Shadow_80320CB8 {
    s32 f0;
    u8 pad4[0x14];
    s32 *vt;
    Rec_80320CB8 r[5];
    s32 fbc, fc0, fc4;
};

extern "C" {
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 get_instance__10TObjPlayerFv(void);
extern s32 __vt__20TAdGameStartShadowGC[];
extern s32 TAdGameStartShadowGC__name;
extern s32 TAdGameStartShadowGC__texture_list;
extern const f32 lbl_805DF47C;
extern const f32 lbl_805DF480;
extern const f32 lbl_805DF484;
extern const f32 lbl_805DF488;
extern const f32 lbl_805DF48C;
extern const f32 lbl_805DF490;
extern const f32 lbl_805DF494;
Shadow_80320CB8 *__ct__20TAdGameStartShadowGCFv(Shadow_80320CB8 *arg0, void *parent);
}

extern "C" {

void render__20TAdGameStartShadowGCFv(void* p);
void run_task__20TAdGameStartShadowGCFv(void *arg0);
int fn_80320B38(void*);
int get_state_flag__9TMainTaskFv(void*);

void render__20TAdGameStartShadowGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { fn_80320B38(p); } }

void run_task__20TAdGameStartShadowGCFv(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    *(s32 *)((s8 *)arg0 + 0xC4) = (s32) (*(s32 *)((s8 *)arg0 + 0xC4) + 1);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC4);
    if (temp_r0 < 0xA) {
        *(s32 *)((s8 *)arg0 + 0xC0) = (s32) (*(s32 *)((s8 *)arg0 + 0xC0) + 0x19);
        var_r0 = *(s32 *)((s8 *)arg0 + 0xC0);
        if (var_r0 > 0xFF) {
            var_r0 = 0xFF;
        }
        *(s32 *)((s8 *)arg0 + 0xC0) = var_r0;
    } else if (temp_r0 > 0x1C) {
        *(s32 *)((s8 *)arg0 + 0xC0) = (s32) (*(s32 *)((s8 *)arg0 + 0xC0) - 0x19);
        var_r0_2 = *(s32 *)((s8 *)arg0 + 0xC0);
        if (var_r0_2 < 0) {
            var_r0_2 = 0;
        }
        *(s32 *)((s8 *)arg0 + 0xC0) = var_r0_2;
    }
    *(s32 *)((s8 *)arg0 + 0xBC) = (s32) ((*(s32 *)((s8 *)arg0 + 0xC0) << 0x18) | 0xFF0000 | 0xFFFF);
}
TAdGameStartShadowGC::~TAdGameStartShadowGC() {}
Shadow_80320CB8 *__ct__20TAdGameStartShadowGCFv(Shadow_80320CB8 *arg0, void *parent) {
    u32 i;
    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->vt = __vt__20TAdGameStartShadowGC;
    arg0->f0 = TAdGameStartShadowGC__name;
    arg0->fbc = -1;
    arg0->fc0 = 0;
    arg0->fc4 = -1;
    TAdGameStartShadowGC__texture_list = get_instance__10TObjPlayerFv();
    for (i = 0; i < 5; i++) {
        arg0->r[i].x = lbl_805DF47C * (f32)i;
        arg0->r[i].x2 = lbl_805DF47C + arg0->r[i].x;
        arg0->r[i].y = lbl_805DF480;
        arg0->r[i].y2 = lbl_805DF47C + arg0->r[i].y;
    }
    arg0->r[0].u0 = lbl_805DF484;
    arg0->r[0].v0 = lbl_805DF488;
    arg0->r[0].u1 = lbl_805DF48C;
    arg0->r[0].v1 = lbl_805DF490;
    for (i = 1; i < 4; i++) {
        arg0->r[i].u0 = lbl_805DF48C;
        arg0->r[i].v0 = lbl_805DF488;
        arg0->r[i].u1 = lbl_805DF494;
        arg0->r[i].v1 = lbl_805DF490;
    }
    arg0->r[4].u0 = lbl_805DF494;
    arg0->r[4].v0 = lbl_805DF488;
    arg0->r[4].u1 = lbl_805DF488;
    arg0->r[4].v1 = lbl_805DF490;
    return arg0;
}

}
