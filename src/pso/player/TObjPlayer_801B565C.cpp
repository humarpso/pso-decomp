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

int TObjPlayer__sub_801B565C(void* p) { return TObjPlayer__sub_801C0044(*(void**)((char*)p + 0x380)); }
int check_flag_100__10TObjPlayerFPv(void* p) { return check_flag__10TObjPlayerFPvi(p, 256); }
void init_parts__10TObjPlayerFPv(void* p) { fn_8019DD24((char*)p + 0x550, (void*)1030); TChallenge4PResult__sub_801B3BB4(p); TObjPlayer__sub_8011E204(p, (void*)256); }
void reset_equip_slots__10TObjPlayerFPv(void* p) { fn_8019DD14((char*)p + 0x550, (void*)1030); TChallenge4PResult__sub_801B3BFC(p, (void*)0); TChallenge4PResult__sub_801B3BFC(p, (void*)1); TChallenge4PResult__sub_801B3BFC(p, (void*)2); TChallenge4PResult__sub_801B3BFC(p, (void*)3); TObjPlayer__sub_8011E238(p, (void*)256); }
s32 get_camera_field__10TObjPlayerFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x424);
    if (p != 0) {
        return TMainCursor__sub_8013E940(p);
    }
    return 0;
}
void TObjPlayer__sub_801B5790(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) TObjPlayer__sub_801C1B38(m); }
void TObjPlayer__sub_801B57BC(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) fn_801C1B60(m); }

}
