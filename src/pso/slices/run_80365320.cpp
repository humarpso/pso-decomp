#include "types.h"

extern "C" {

    extern unsigned char lbl_804F2C40[];
void* fn_80365320(int a0) {  return (char*)lbl_804F2C40 + a0 * 44; }

    extern int lbl_80543A48[];
int fn_80365334(int a0) {  return lbl_80543A48[a0]; }

}
