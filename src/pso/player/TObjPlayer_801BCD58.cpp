#include "types.h"

extern "C" {

void init_control_mode__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s32 is_locally_controlled__10TObjPlayerFPv();
int is_flag_set_550__10TObjPlayerFv(void* p);
void TObjPlayer__sub_801BCD50(void);
void TObjPlayer__sub_801BCD54(void);
int TObjPlayer__sub_801BEF60(void*, int);
s32 init_pad_binding(void *, void *, int);
s32 obj_getField1c(void *);

#include "types.h"

extern "C" {

void init_control_mode__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        *(s32 *)((s8 *)arg0 + 0x3D0) = (s32) (arg1 & 3);
        init_pad_binding((void *) (arg0 + 0x550), (void *) (obj_getField1c((void *) (arg0))), (int) ((s16) *(s32 *)((s8 *)arg0 + 0x3D0)));
        return;
    }
    TObjPlayer__sub_801BEF60((void *) (arg0 + 0x550), (int) (0));
}

}

}
