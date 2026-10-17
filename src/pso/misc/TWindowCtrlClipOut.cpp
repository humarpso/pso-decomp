#include "types.h"
#include "pso/misc/TWindowCtrlClipOut.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern s32 __vt__18TWindowCtrlClipOut[];
extern s32 window_clip_out_instance;
u8 *__dt__18TWindowCtrlClipOutFv(u8 *arg0, s16 arg1);
void *TWindowCtrlClipOut__ct(void *arg0);
int TCameraCtrl__sub_80068EF0(void);
int TWindowCtrlMain__sub_8024CE34(void);
int is_window_display_enabled(void*);
void __ct__7TObjectFP7TObject(void *);
int render_nodes__7TObjectFv(void);

void TWindowCtrlClipOut::render() { if (is_window_display_enabled(this) != 0) { TObjPlayer::reset_transform_state(); TParticleCtrl::begin_effect_render(); TCameraCtrl::restore_full_screen_view(); TWindowCtrlMain__sub_8024CE34(); render_nodes__7TObjectFv(); TCameraCtrl__sub_80068EF0(); TParticleCtrl::end_effect_render(); } }

extern void *TWindowCtrlClipOut__name;

typedef char RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut_size[sizeof(RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut) == 0x18 ? 1 : -1];
u8 *__dt__18TWindowCtrlClipOutFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8024C8E8___vt__18TWindowCtrlClipOut *)&__vt__18TWindowCtrlClipOut).value;
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
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TWindowCtrlClipOut;
    *(void **)((s8 *)arg0 + 0x0) = TWindowCtrlClipOut__name;
    return arg0;
}

}
