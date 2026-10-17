#include "types.h"

extern "C" {
s32 __construct_array(void *, void *, int, int, int);
extern s32 fn_8022F258[];
extern s32 lbl_80515FBC[];
extern s32 lbl_8051607C[];
void fn_8022F164(void);
void fn_8022F164(void) {
    __construct_array((void *) (lbl_80515FBC), (void *) (fn_8022F258), (int) (0), (int) (0x30), (int) (4));
    __construct_array((void *) (lbl_8051607C), (void *) (fn_8022F258), (int) (0), (int) (0x30), (int) (4));
}

}

__declspec(section ".ctors") static void *const __sinit_text_8022F164_cpp_ref = (void *)fn_8022F164;
