#include "types.h"

extern "C" {
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
int is_inactive__10TObjPlayerFPv(void* p);
int is_inactive__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
f32 get_end_text_value__10TObjPlayerFv(void);
f64 atan();
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
f32 get_end_text_value__10TObjPlayerFv(void);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_800847FC(void);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_800847FC(void);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void TObjPlayer__sub_801E3F24(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
void TObjPlayer__sub_80084824(f32 farg0, f32 farg1);
void TObjPlayer__sub_80084834(s32 arg0);
void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2);
void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
unsigned char TObjPlayer__sub_800847CC(void);
    extern unsigned char camera_capture_flags;
unsigned char TObjPlayer__sub_800847CC(void);
s32 TObjPlayer__sub_800847A8(void);
extern u8 camera_capture_flags;
s32 TObjPlayer__sub_800847A8(void);
}

extern "C" {
s32 TObjPlayer__sub_800847A8(void) {
    if ((camera_capture_flags & 2) && (camera_capture_flags & 1)) {
        return 1;
    }
    return 0;
}
}
extern "C" {
unsigned char TObjPlayer__sub_800847CC(void) {  return camera_capture_flags; }
}
extern "C" {
void set_tex_coord_gen__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    GXSetTexCoordGen2(arg0, arg1, arg2, arg3, 0, 0x7D);
}
}
extern "C" {
void TObjPlayer__sub_800847FC(void) {  }
}
extern "C" {
f32 get_end_text_value__10TObjPlayerFv(void) {
    return (f32) atan();
}
}
extern "C" {

void TObjPlayer__sub_80084824(f32 farg0, f32 farg1) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

void TObjPlayer__sub_80084834(s32 arg0) {
    *(s32 *)0xCC008000 = arg0;
}

void TObjPlayer__sub_80084840(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

int is_inactive__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
