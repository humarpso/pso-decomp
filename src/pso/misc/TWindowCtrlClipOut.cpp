#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern M2C_UNK __vt__18TWindowCtrlClipOut[];
extern s32 window_clip_out_instance;
u8 *__dt__18TWindowCtrlClipOutFv(u8 *arg0, s16 arg1);
}

extern "C" {

void *TWindowCtrlClipOut__ct(void *arg0);
void render__18TWindowCtrlClipOutFv(void* p);
int TCameraCtrl__sub_80068EF0(void);
int restore_full_screen_view__11TCameraCtrlFv(void);
int TWindowCtrlMain__sub_8024CE34(void);
int is_window_display_enabled(void*);
void __ct__7TObjectFP7TObject(void *);
int begin_effect_render__13TParticleCtrlFv(void);
int end_effect_render__13TParticleCtrlFv(void);
int render_nodes__7TObjectFv(void);
int reset_transform_state__10TObjPlayerFv(void);

void render__18TWindowCtrlClipOutFv(void* p) { if (is_window_display_enabled(p) != 0) { reset_transform_state__10TObjPlayerFv(); begin_effect_render__13TParticleCtrlFv(); restore_full_screen_view__11TCameraCtrlFv(); TWindowCtrlMain__sub_8024CE34(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); end_effect_render__13TParticleCtrlFv(); } }

extern M2C_UNK __vt__18TWindowCtrlClipOut[];
extern void *lbl_805D38DC;

typedef char RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut_size[sizeof(RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut) == 0x18 ? 1 : -1];
u8 *__dt__18TWindowCtrlClipOutFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut *)&__vt__18TWindowCtrlClipOut).value;
        window_clip_out_instance = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TWindowCtrlClipOut__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowCtrlClipOut;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38DC;
    return arg0;
}

}
