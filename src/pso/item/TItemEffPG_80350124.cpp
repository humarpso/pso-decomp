#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TItemEffPG__sub_80350124(void *arg0, void *arg1);
void* TItemEffPG__sub_8035016C(void* a0);
void *TItemEffPG__ct(void *, void *, void *);
int TObjPlayer__sub_802E451C(void);
void *__nw__7TObjectFUl(int);

void TItemEffPG__sub_80350124(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        TItemEffPG__ct(o, arg0, arg1);
    }
}

    extern const float lbl_805DFE14;
    extern const float lbl_805DFE1C;
    extern const float lbl_805DFE20;
void* TItemEffPG__sub_8035016C(void* a0) { TObjPlayer__sub_802E451C(); *(int*)((char*)a0 + 0x10) = 10; *(float*)((char*)a0 + 0x28) = lbl_805DFE14; *(float*)((char*)a0 + 0x2c) = lbl_805DFE1C; *(float*)((char*)a0 + 0x30) = lbl_805DFE20; return a0; }

}
