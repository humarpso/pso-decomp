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
s32 fn_801C1F50(s32);
int TObjPlayer__sub_8011E204(void*, void*);
int TObjPlayer__sub_8011E238(void*, void*);
int fn_8019DD14(void*, void*);
int fn_8019DD24(void*, void*);
int TChallenge4PResult__sub_801B3BB4(void*);
int TChallenge4PResult__sub_801B3BFC(void*, void*);
int TObjPlayer__sub_801B565C(void* p);
int check_flag_100__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801B5790(void* p);
void TObjPlayer__sub_801B57BC(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_801C0044(void*);
int TObjPlayer__sub_801C1B38(void*);
int fn_801C1B60(void*);

void set_effect_enabled__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        fn_801C1E48(arg0 + 0x500);
        return;
    }
    fn_801C1E44(arg0 + 0x500);
}
void refresh_effect__10TObjPlayerFi(s32 arg0) {
    if (fn_801C1F50(arg0 + 0x4AC) != 0) {
        if (fn_801C1E50(arg0 + 0x500) != 0) {
            fn_801C1E44(arg0 + 0x500);
            return;
        }
        fn_801C1E48(arg0 + 0x500);
        return;
    }
    fn_801C1E44(arg0 + 0x500);
}

}
