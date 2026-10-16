#include "types.h"
#include "pso/misc/TUnk_804CE7D0.h"
#include "pso/misc/TWindowChatSymbol.h"
#include "pso/misc/TWindowDD.h"

struct RecoveredGlobal_80248700_lbl_804CE7A0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80248700___vt__17TWindowChatSymbol {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
s32 fn_8024491C(void *, void *);
extern RecoveredGlobal_80248700_lbl_804CE7A0 lbl_804CE7A0;
extern s32 __vt__17TWindowChatSymbol[];
extern s32 lbl_805D38A8;
u8 *TWindowChatSymbol__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void render__13TUnk_804CE7D0Fv(void);
void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1);
s32 get_selected_menu_value(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 set_from_key__20TWindowSubSymbolChatFii(s32, s32);

extern s32 __vt__17TWindowChatSymbol[];

void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowChatSymbol;
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80248700_lbl_804CE7A0_size[sizeof(RecoveredGlobal_80248700_lbl_804CE7A0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80248700___vt__17TWindowChatSymbol_size[sizeof(RecoveredGlobal_80248700___vt__17TWindowChatSymbol) == 0x1C ? 1 : -1];
u8 *TWindowChatSymbol__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &lbl_804CE7A0.value, 4, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80248700___vt__17TWindowChatSymbol *)&__vt__17TWindowChatSymbol).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D38A8;
    fn_8024491C((void *) (arg0), (void *) (arg2));
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    return arg0;
}

void TUnk_804CE7D0::render() {  }
void TUnk_804CE7D0::run_task() {
    set_from_key__20TWindowSubSymbolChatFii(*(s32 *)((s8 *)this + 0x20), get_selected_menu_value(*(s32 *)((s8 *)this + 0x1C)));
}

extern s32 lbl_804CE7D0[];

void *TWindowChatSymbol::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804CE7D0;
        if (*(void **)((s8 *)this + 0x20) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x20)); *(s32 *)((s8 *)this + 0x20) = 0; }
        if (*(void **)((s8 *)this + 0x1C) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x1C)); *(s32 *)((s8 *)this + 0x1C) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
