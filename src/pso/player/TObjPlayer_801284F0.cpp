#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801284F0(void* p);
void *TObjPlayer__sub_80128538(void *arg0);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012A884(void *);

void TObjPlayer__sub_801284F0(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }

extern M2C_UNK lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3C20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
