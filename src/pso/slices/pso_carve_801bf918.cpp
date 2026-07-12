#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801BF548();
s32 TObjPlayer__sub_801BF640();
int clear_fields__20TWindowSubStatusDispFPv(void*);
void* reset_sub_status_disp__10TObjPlayerFPv(void* p);
f32 TObjPlayer__sub_801BF6B0(void* p);
void* TObjPlayer__sub_801BF6B8(void* p);
void TObjPlayer__sub_801BF6C0(void* p, f32 v);
void TObjPlayer__sub_801BF6C8(void* p, f32 a, f32 b);
void TObjPlayer__sub_801BF6D4(void* p, s16 v);
void TObjPlayer__sub_801BF6DC(void* p, s16 v);
int TObjPlayer__sub_801BF6E4(void* p);
int TObjPlayer__sub_801BF708(void* p);
void TObjPlayer__sub_801BF7B8(void* p);
void TObjPlayer__sub_801BF7F4(void* p, s32 v);
void TObjPlayer__sub_801BF7FC(void* p, s16 v);
void TObjPlayer__sub_801BF804(void* p, s16 v);
void TObjPlayer__sub_801BF80C(void* p, s16 v);
f32 TObjPlayer__sub_801BF814(void* p);
int TObjPlayer__sub_801BF81C(void* p);
int TObjPlayer__sub_801BF840(void* p);
int TObjPlayer__sub_801BF864(void* p);
int TObjPlayer__sub_801BF888(void* p);
int TObjPlayer__sub_801BF8AC(void* p);
int TObjPlayer__sub_801BF8CC(void* p);
void TObjPlayer__sub_801BF914(void);
s16 TObjPlayer__sub_801BF92C(void* p);
void* TObjPlayer__sub_801BF934(void* p);
void TObjPlayer__sub_801BF93C(void* p, s16 v);
void* TObjPlayer__sub_801BF944(void* p);
s32 TObjPlayer__sub_801BF94C(void* p);
void TObjPlayer__sub_801BF954(void* p, s32 v);
s32 TObjPlayer__sub_801BF95C(void* p);
int TObjPlayer__sub_8001BED8(void*, int);
int TObjPlayer__sub_8001BF40(void*);
int TMainCursor__sub_8013DF3C(void*);
int TMainCursor__sub_8013DF44(void*);

int TObjPlayer__sub_801BF918(void) { return 0; }

}
