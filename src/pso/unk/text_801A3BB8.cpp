#include "types.h"
extern "C" {
extern u8 lbl_8050DDEC[];
extern u8 lbl_8050DDE0[];
void *__ct__12TPlyCharDataFv(void *p);
void __dt__12TPlyCharDataFv(void *p, s32 d);
void __register_global_object(void *obj, void *dtor, void *link);
void fn_801A3BB8(void);
}

extern "C" {

void fn_801A3BB8(void) {
    __register_global_object(__ct__12TPlyCharDataFv(lbl_8050DDEC), (void *)__dt__12TPlyCharDataFv, lbl_8050DDE0);
}

}

__declspec(section ".ctors") static void *const __sinit_text_801A3BB8_cpp_ref = (void *)fn_801A3BB8;
