#include "types.h"
extern "C" {
void *TObjMapWarp__sub_80141CA4(void *);
void TObjMapWarp__sub_80141C68(void *, s32);
void *__register_global_object(void *, void *, void *);
extern u8 lbl_805D5DD8[8];
extern u8 lbl_80511DD8[];
void fn_801D34E0(void);
void fn_801D34E0(void) {
    __register_global_object(TObjMapWarp__sub_80141CA4(lbl_805D5DD8), (void *)TObjMapWarp__sub_80141C68, lbl_80511DD8);
}

}

__declspec(section ".ctors") static void *const __sinit_text_801D34E0_cpp_ref = (void *)fn_801D34E0;
