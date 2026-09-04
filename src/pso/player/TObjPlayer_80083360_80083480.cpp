#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_80083480(void* p);
void TObjPlayer__sub_800834B0(void);
void *TObjPlayer__sub_800834B4(void *arg0, s16 arg1);
int TObjPlayer__sub_80141448(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int get_camera_flag__10TObjPlayerFv(void*);

void TObjPlayer__sub_80083480(void* p) { if (get_camera_flag__10TObjPlayerFv(p) != 0) { TObjPlayer__sub_80141448((void*)0); } }
void TObjPlayer__sub_800834B0(void) {  }

extern M2C_UNK lbl_8048E5F4[];

void *TObjPlayer__sub_800834B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E5F4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
