#include "types.h"

extern "C" {

void render__21TAdMultiChgGameModeGCFv(void);
void fn_802FFC78(void);
void fn_802FFC7C(void);
s32 check_players_ready__21TAdMultiChgGameModeGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C658C(u32);

void fn_802FFC78(void) {  }
void fn_802FFC7C(void) {  }
void render__21TAdMultiChgGameModeGCFv(void) {  }
s32 check_players_ready__21TAdMultiChgGameModeGCFv(void) {
    u32 var_r31;

    var_r31 = 0U;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C658C(var_r31) > 3)) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 4U) {
        return 0;
    }
    goto loop_1;
}

}
