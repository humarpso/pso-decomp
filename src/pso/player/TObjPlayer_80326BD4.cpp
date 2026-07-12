#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjPlayer__sub_80326BD4(void* p);
void init_item_slots__10TObjPlayerFPv(void* p);
void *init_variant_b__10TObjPlayerFPv(void *arg0);
int TObjPlayer__sub_8010069C(void*);
int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_801210B0(void *, int, int, int);

int TObjPlayer__sub_80326BD4(void* p) { return TObjPlayer__sub_8010069C(p); }
void init_item_slots__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)48); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); TObjPlayer__sub_8011E87C(p, (void*)2); }

extern M2C_UNK lbl_804ED1A0[];

void *init_variant_b__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED1A0;
    TObjPlayer__sub_801210B0(arg0, 2, 6, 5);
    TObjPlayer__sub_8012106C(arg0, 1);
    return arg0;
}

}
