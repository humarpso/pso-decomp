#include "types.h"

extern "C" {

s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_8022602C(s32);
void fn_80091CCC(void);

void fn_80091CCC(void) {  }
void fn_80091CD0(s32 arg0) {
    fn_8022675C(0x4003E431, arg0 + 0x38, 0, 0);
}
void fn_80091D08(s32 arg0) {
    fn_8022675C(0x4003AB2D, arg0 + 0x38, 0, 0);
    fn_8022602C(-0x200);
}
void fn_80091D48(s32 arg0) {
    fn_8022675C(0x4003A32E, arg0 + 0x38, 0, 0);
    fn_8022602C(-0x100);
}
void fn_80091D88(s32 arg0) {
    fn_8022675C(0x4003A62F, arg0 + 0x38, 0, 0);
    fn_8022602C(-0x100);
}
void fn_80091DC8(s32 arg0) {
    fn_8022675C(0x4003A82C, arg0 + 0x38, 0, 0);
    fn_8022602C(-0x200);
}

}
