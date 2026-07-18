#include "types.h"

extern "C" {

s32 fn_80308294(u32 a0 = 0, s32 a1 = 0);
u32 TLobby__sub_80101AB0(void);
void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void set_field_2c__13TAdVIConfigGCFPvi(void* p, s32 v);

void apply_config_if_valid__13TAdVIConfigGCFii(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        fn_80308294(temp_r3, arg1);
    }
}

}
