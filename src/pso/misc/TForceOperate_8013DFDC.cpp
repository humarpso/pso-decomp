#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFPv(void* p);
u8 TMainCursor__sub_8013DF3C(void* p);
u8 TMainCursor__sub_8013DF44(void* p);
void TWindowActionPalette__sub_8013DF4C(void* p, u8 v);
void TWindowActionPalette__sub_8013DF54(void* p, u8 v);
s32 TMainCursor__sub_8013DFD4(void* p);
void TForceOperate__sub_8013E018(void* p, s16 v);
u16 fn_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void TForceOperate__sub_8013E018(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
