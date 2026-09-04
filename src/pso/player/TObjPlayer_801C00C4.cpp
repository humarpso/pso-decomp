#include "types.h"

extern "C" {

int TObjPlayer__sub_801C00E4(void);
int TObjPlayer__sub_801C00FC(void);
int TObjPlayer__sub_801C0104(void);
int TObjPlayer__sub_801C010C(void);
int TObjPlayer__sub_801C0124(void);
int forward_801C210C__10TObjPlayerFPv(void* p);
int get_hold_effect_count__10TObjPlayerFv(void);
int get_item_count_max__10TObjPlayerFv(void);
void set_technique_id__10TObjPlayerFPvs(void* p, s16 v);
int TObjPlayer__sub_801C210C(void*);

int forward_801C210C__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801C210C(p); }

int TObjPlayer__sub_801C00E4(void) { return 0; }

    extern int lbl_805D6688;
int get_hold_effect_count__10TObjPlayerFv(void) {  return lbl_805D6688; }

int TObjPlayer__sub_801C00FC(void) { return 0; }
int TObjPlayer__sub_801C0104(void) { return 0; }

int TObjPlayer__sub_801C010C(void) { return 0; }

void set_technique_id__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }

int TObjPlayer__sub_801C0124(void) { return 0; }

int get_item_count_max__10TObjPlayerFv(void) { return 255; }

}
