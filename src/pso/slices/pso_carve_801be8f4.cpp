#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801AF288();
s32 TObjPlayer__sub_801BE934(s32);
void TObjPlayer__sub_801BE9F0(void *arg0);
void TObjPlayer__sub_801BEA14(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
int check_flag_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE6E4(void* p);
int set_flag_4000__10TObjPlayerFPv(void* p);
int clear_flag_4000__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BE74C(void* p, s32 v);
s32 TObjPlayer__sub_801BE754(void* p);
int check_flag_0x40000000__10TObjPlayerFPv(void* p);
void clear_flag_0x2__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BE778(void* p);
void TObjPlayer__sub_801BE784(void* p, u8 v);
u8 TObjPlayer__sub_801BE78C(void* p);
void TObjPlayer__sub_801BE794(void* p, u8 v);
u8 TObjPlayer__sub_801BE79C(void* p);
void TObjPlayer__sub_801BE7A4(void* p, u8 v);
u8 TObjPlayer__sub_801BE7AC(void* p);
void TObjPlayer__sub_801BE7B4(void* p, u8 v);
int TObjPlayer__sub_801BE7BC(void* p);
void TObjPlayer__sub_801BE7E0(void* p, u8 v);
int TObjPlayer__sub_801BE7E8(void* p);
void TObjPlayer__sub_801BE80C(void* p, u8 v);
int TObjPlayer__sub_801BE814(void* p);
void TObjPlayer__sub_801BE838(void* p, u8 v);
int TObjPlayer__sub_801BE840(void* p);
void TObjPlayer__sub_801BE864(void* p, u8 v);
int TObjPlayer__sub_801BE86C(void* p);
void TObjPlayer__sub_801BE8E4(void* p, s32 v);
void TObjPlayer__sub_801BE8EC(void* p, s32 v);
void TObjPlayer__sub_801BEA4C(void* p);
int TObjPlayer__sub_801BEA80(void* p);
int TObjPlayer__sub_801BEAA4(void* p);
int TObjPlayer__sub_801BEAB0(void* p);
int TObjPlayer__sub_801BEABC(void* p);
int TObjPlayer__sub_801BEADC(void* p);
void TObjPlayer__sub_801BEAFC(void* p, s32 v);
void TObjPlayer__sub_801BEB04(void* p, s32 v);
s32 fn_801BEB0C(void* p);
int fn_801BEB14(void* p);
void fn_801BEB34(void* p, s32 v);
u8 fn_801BEB3C(void* p);
u8 fn_801BEB44(void* p);
u8 fn_801BEB4C(void* p);
void fn_801BEB54(void* p, s32 v);
void fn_801BEB5C(void* p);
int fn_801BEB68(void* p);
u8 fn_801BEB8C(void* p);
int fn_801BEB94(void* p);
u8 fn_801BEBB8(void* p);
int fn_801BEBC0(void* p);
u8 fn_801BEBE4(void* p);
int fn_801BEBEC(void* p);
u8 fn_801BEC10(void* p);
int fn_801BEC18(void* p);
u8 fn_801BEC3C(void* p);
int TPlyPhotonChair__sub_801BEC44(void* p);
int check_flag__10TObjPlayerFPvi(void*, int);
int TObjPlayer__sub_8011E204(void*, int);
int TObjPlayer__sub_8011E238(void*, int);
int TObjPlayer__sub_80154A00(void*);
int TObjPlayer__sub_801BA458(void*);
int TObjPlayer__sub_801BA5CC(void*);
int TObjPlayer__sub_801BED70(void*);
int TObjPlayer__sub_801BED78(void*);
int TObjPlayer__sub_801BED80(void*);
int TObjPlayer__sub_801BED88(void*);
int TObjPlayer__sub_801BED90(void*);
int TObjPlayer__sub_801BED98(void*);
int TObjPlayer__sub_801BEDA0(void*);
int TObjPlayer__sub_801BEDA8(void*);
int TObjPlayer__sub_801BEDB0(void*);
int TObjPlayer__sub_801BEDB8(void*);

int TObjPlayer__sub_801BE8F4(void) { return 0; }

}
