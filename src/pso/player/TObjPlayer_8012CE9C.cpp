#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjPlayer__sub_8012CE9C(void* p);
int TObjPlayer__sub_8012CEC8(void* p);
void TObjPlayer__sub_8012CEF4(void* p);
void *TObjPlayer__sub_8012CF34(void *arg0);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_80115BC0(void*, int, int);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
int TObjPlayer__sub_80121200(void*);

int TObjPlayer__sub_8012CE9C(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int TObjPlayer__sub_8012CEC8(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -1820, 0); }
void TObjPlayer__sub_8012CEF4(void* p) { if (TObjPlayer__sub_80121200(p) > 0) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_804A5740[];

void *TObjPlayer__sub_8012CF34(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5740;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    TObjPlayer__sub_8012106C(arg0, 1536);
    return arg0;
}

}
