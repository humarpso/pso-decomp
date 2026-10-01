#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
struct UV_8032D600 { f32 u, v; };

struct Rect_8032D600 { u8 pad[0x10]; f32 u0, v0, u1, v1; };

struct Src_8032D600 {
    s32 kind;
    u8 a[8];
    u8 b[8];
    s32 val;
    s32 x18;
    s32 x1C;
    s32 x20;
};

struct Obj_8032D600 {
    u8 pad0[0x1C];
    Rect_8032D600 rects[8];
    s32 vals[8];
    u8 pad13C[0x144 - 0x13C];
    s32 kind;
    u8 a[8];
    u8 b[8];
    u8 pad158[0x198 - 0x158];
    s32 x198;
    s32 x19C;
    s32 x1A0;
    s32 x1A4;
};

struct Quad_8032D708 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Vec2_8032D708 { f32 x, y; };

struct Obj_8032D708 {
    u8 pad0[0x1C];
    Quad_8032D708 quads[8];
    u8 pad11C[0x13C - 0x11C];
    s32 x13C;
    s32 x140;
    u8 pad144[0x148 - 0x144];
    Vec2_8032D708 from;
    Vec2_8032D708 to;
    u8 pad158[0x19C - 0x158];
    s32 x19C;
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
s32 TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
extern M2C_UNK __vt__16TAdGuideButtonGC[];
extern s32 lbl_805D4210;
extern s32 lbl_805D6D00;
u8 *TAdGuideButtonGC__ct(u8 *arg0, u8 *arg1);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
extern UV_8032D600 lbl_80477350[];
void TAdGuideButtonGC__sub_8032D600(Obj_8032D600 *arg0, Src_8032D600 *arg1);
void TAdGuideButtonGC__sub_8032D708(Obj_8032D708 *arg0);
}

extern "C" {

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1);
void render__16TAdGuideButtonGCFv(void* p);
int TAdWarningBaseGC__sub_8032D514(void*, void*, void*);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
int get_state_flag__9TMainTaskFv(void*);
int render__16TAdWarningBaseGCFi(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { render__16TAdWarningBaseGCFi(p, (void*)0); TAdWarningBaseGC__sub_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

extern M2C_UNK __vt__16TAdGuideButtonGC[];
extern u32 lbl_805D6D04;

void TAdGuideButtonGC__sub_8032D600(Obj_8032D600 *arg0, Src_8032D600 *arg1) {
    s32 i;
    arg0->kind = arg1->kind;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0->a, arg1->a);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0->b, arg1->b);
    arg0->x198 = arg1->x18;
    arg0->x19C = arg1->x1C;
    arg0->x1A0 = arg1->x20;
    arg0->x1A4 = 1;
    for (i = 0; i < 8; i++) {
        arg0->rects[i].u0 = lbl_80477350[arg0->kind].u / 256.0f;
        arg0->rects[i].v0 = lbl_80477350[arg0->kind].v / 256.0f;
        arg0->rects[i].u1 = (20.0f + lbl_80477350[arg0->kind].u) / 256.0f;
        arg0->rects[i].v1 = (20.0f + lbl_80477350[arg0->kind].v) / 256.0f;
        arg0->vals[i] = arg1->val;
    }
}

void TAdGuideButtonGC__sub_8032D708(Obj_8032D708 *arg0) {
    Vec2_8032D708 d[8];
    u32 i;
    if (arg0->x19C == arg0->x13C) {
        if (arg0->x140 < 8) {
            arg0->x140++;
        }
    }
    for (i = 0; i < 8; i++) {
        s32 cur = arg0->x19C;
        s32 off = 0;
        s32 base = arg0->x13C;
                if (cur != base) {
            if (base < i) {
                off = i;
            }
        } else if (arg0->x140 < i) {
            off = 8 - i;
        }
        d[i].x = ((arg0->to.x - arg0->from.x) * (f32)((cur - (base - off)) * (cur - (base - off)))) / 400.0f;
        d[i].y = ((arg0->to.y - arg0->from.y) * (f32)((arg0->x19C - (arg0->x13C - off)) * (arg0->x19C - (arg0->x13C - off)))) / 400.0f;
        arg0->quads[i].x0 = arg0->from.x + d[i].x;
        arg0->quads[i].y0 = arg0->from.y + d[i].y;
        arg0->quads[i].x1 = 20.0f + arg0->quads[i].x0;
        arg0->quads[i].y1 = 20.0f + arg0->quads[i].y0;
    }
}

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdGuideButtonGC;
        if ((u32) lbl_805D6D04 != 0U) {
            lbl_805D6D04 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC_size[sizeof(RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC) == 0x18 ? 1 : -1];
u8 *TAdGuideButtonGC__ct(u8 *arg0, u8 *arg1) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8032D958___vt__16TAdGuideButtonGC *)&__vt__16TAdGuideButtonGC).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4210;
    M2C_FIELD(arg0, s32 *, 0x13C) = -1;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    lbl_805D6D00 = TAdMultiPlyChrSelectGC__sub_802C6FA8();
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    return arg0;
}

}
