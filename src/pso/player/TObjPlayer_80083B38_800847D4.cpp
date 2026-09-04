#include "types.h"

extern "C" {

void TObjPlayer__sub_800847FC(void);
int TObjPlayer__sub_80084824(void);
int TObjPlayer__sub_80084834(void);
int TObjPlayer__sub_80084840(void);
f32 get_end_text_value__10TObjPlayerFv(void);
int is_inactive__10TObjPlayerFPv(void* p);
void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
f64 TAdEndText__sub_803A20A4();

void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
void TObjPlayer__sub_800847FC(void) {  }
f32 get_end_text_value__10TObjPlayerFv(void) {
    return (f32) TAdEndText__sub_803A20A4();
}

int TObjPlayer__sub_80084824(void) { return 0; }
int TObjPlayer__sub_80084834(void) { return 0; }
int TObjPlayer__sub_80084840(void) { return 0; }

int is_inactive__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
