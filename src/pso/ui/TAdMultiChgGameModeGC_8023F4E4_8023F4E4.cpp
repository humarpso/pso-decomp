#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F4E4(void);
void TAdMultiChgGameModeGC__sub_8023F50C(void);
void set_mode_1c__21TAdMultiChgGameModeGCFv(void);
int TObjLight__sub_8023F22C(void);
int render_tick__Fv(void);
int set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

void TAdMultiChgGameModeGC__sub_8023F4E4(void) { TObjLight__sub_8023F22C(); set_mode_change_state__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F50C(void) { TObjLight__sub_8023F22C(); set_change_mode_flags__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_1c__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x1C;
    lbl_805D63C8 = 1;
}

}
