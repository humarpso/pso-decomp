#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TMainCursor__sub_8013E940(void *);
s32 fn_801C1E44(s32);
s32 fn_801C1E48(s32);
s32 fn_801C1E50(s32);
s32 TObjPlayer__sub_801C1F50(s32);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_8011E238(void*, void*);
int fn_8019DD14(void*, void*);
int fn_8019DD24(void*, void*);
int TChallenge4PResult__sub_801B3BB4(void*);
int TChallenge4PResult__sub_801B3BFC(void*, void*);
int TObjPlayer__sub_801B565C(void* p);
int check_flag_100__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801B5790(void* p);
void action_enable_if_present__10TObjPlayerFPv(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_801C0044(void*);
int TObjPlayer__sub_801C1B38(void*);
int TObjPlayer__sub_801C1B60(void*);

int TObjPlayer__sub_801B57E8(void) { return 0; }
int TObjPlayer__sub_801B5874(void) { return 0; }
int TObjPlayer__sub_801B58DC(void) { return 0; }
int TObjPlayer__sub_801B5920(void) { return 0; }
int TObjPlayer__sub_801B5990(void) { return 0; }
int TObjPlayer__sub_801B59C4(void) { return 0; }
int TObjPlayer__sub_801B59F8(void) { return 0; }
int TObjPlayer__sub_801B5A44(void) { return 0; }
int TObjPlayer__sub_801B5A88(void) { return 0; }
int TObjPlayer__sub_801B5AC4(void) { return 0; }
int TObjPlayer__sub_801B5AF8(void) { return 0; }

}
