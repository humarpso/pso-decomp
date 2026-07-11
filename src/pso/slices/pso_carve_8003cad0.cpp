#include "types.h"

extern "C" {

s32 get_main_phase();
s32 fn_80040C7C(s32);
s32 TODoorVoShip__sub_801F44BC(s32);
s32 fn_801F4830(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
int fn_80242DA0(void*, void*);
int fn_8003CB48(void);
int fn_80242D74(void*);

void fn_8003CAD0(void) {
    fn_801F4830(0x2A);
    if (get_main_phase() == 0xF) {
        fn_80040C7C(0);
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        fn_80040C7C(5);
        return;
    }
    if (TODoorVoShip__sub_801F44BC(0x2F) != 0) {
        fn_80040C7C(2);
        return;
    }
    fn_80040C7C(1);
}
int fn_8003CB48(void) { return fn_80242D74((void*)(0)); }
void fn_8003CB6C(void) { fn_80242DA0((void*)160, (void*)0); }

}
