#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Vec2_80285D38 { f32 x, y; };

struct Parts_80285D38 {
    s32 f0;
    u8 pad[0x14];
    void *vt;
    u8 pad2[0x20 - 0x1C];
    s16 id;
    u8 pad3[0x70 - 0x22];
    s8 f70;
    u8 pad4;
    s8 f72;
    s8 f73;
    u8 pad5[2];
    s16 f76;
    u8 pad6[0x7C - 0x78];
    s32 f7C;
    s32 f80;
    u8 pad7[0x88 - 0x84];
    void *sub88;
    void *sub8C;
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s32, void *);
void *reset_selection__20TWindowSubStatusDispFPv(void *, Vec2_80285D38 *);
void *TWindowSubStatusDisp__sub_802880BC(void *, s32, s16);
extern u8 lbl_804D2DD8[];
extern M2C_UNK __vt__25TWindowSubSymbolChatParts[];
extern s32 lbl_805D3AC0;
extern const f32 lbl_805DD7E4;
Parts_80285D38 *TWindowSubSymbolChatParts__ct(Parts_80285D38 *arg0, void *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__25TWindowSubSymbolChatPartsFv(void *arg0, s16 arg1);
void render__25TWindowSubSymbolChatPartsFv(u8 *arg0);
M2C_UNK draw_window_frame(void *, s32);
s32 get_draw_context__11TWindowBaseFPv();
M2C_UNK draw_window_scrollbar(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK fn_80285274(void *, s32);
M2C_UNK fn_80285314(void *, s32);
M2C_UNK fn_802855C4(void *, s32);
M2C_UNK fn_802857C4(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__25TWindowSubSymbolChatPartsFv(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = get_draw_context__11TWindowBaseFPv();
    draw_window_frame(arg0, temp_r3);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x71);
    switch ((s8) temp_r0) {
    case 0:
        fn_802857C4(arg0, temp_r3);
        break;
    case 1:
        fn_802855C4(arg0, temp_r3);
        break;
    case 2:
        fn_80285314(arg0, temp_r3);
        break;
    }
    draw_window_scrollbar(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3, arg0 + 0x68);
    fn_80285274(arg0, temp_r3);
    forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
}

extern M2C_UNK __vt__25TWindowSubSymbolChatParts[];

void *__dt__25TWindowSubSymbolChatPartsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TWindowSubSymbolChatParts;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x8C), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Parts_80285D38 *TWindowSubSymbolChatParts__ct(Parts_80285D38 *arg0, void *arg1, s32 arg2, s32 arg3) {
    Vec2_80285D38 v;
    void *p;
    void *q;
    construct_with_parent__15TWindowAdditionFPvPv(arg0, lbl_804D2DD8, 4, arg1);
    arg0->vt = __vt__25TWindowSubSymbolChatParts;
    arg0->f0 = lbl_805D3AC0;
    arg0->f70 = 0;
    arg0->f72 = 0;
    arg0->f73 = 0;
    arg0->f76 = 0;
    arg0->f7C = arg2;
    arg0->f80 = arg3;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
    if (p != NULL) {
        p = TWindowSubStatusDisp__sub_802880BC(p, get_message_10__20TWindowSubStatusDispFPv(0x33), arg0->id);
    }
    arg0->sub88 = p;
    v.x = lbl_805DD7E4;
    v.y = lbl_805DD7E4;
    q = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (q != NULL) {
        q = reset_selection__20TWindowSubStatusDispFPv(q, &v);
    }
    arg0->sub8C = q;
    return arg0;
}

}
