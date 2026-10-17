#include "types.h"
extern "C" {
extern u8 TPlyCharData__global_character_data[];
extern u8 TPlyCharData__global_destructor_registration[];
void *__ct__12TPlyCharDataFv(void *p);
s32 __dt__12TPlyCharDataFv(s32 arg0, s16 arg1);
void __register_global_object(void *obj, void *dtor, void *link);
void fn_801A3BB8(void);
void fn_801A3BB8(void) {
    __register_global_object(__ct__12TPlyCharDataFv(TPlyCharData__global_character_data), (void *)__dt__12TPlyCharDataFv, TPlyCharData__global_destructor_registration);
}

}

__declspec(section ".ctors") static void *const __sinit_text_801A3BB8_cpp_ref = (void *)fn_801A3BB8;
