#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 fn_801AEECC();
u32 __nw__7TObjectFUl(s32);
void fn_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void TObjPlayer__sub_801BBC2C(void* p);
void TObjPlayer__sub_801BBC38(void* p);
void TObjPlayer__sub_801BBC64(void);
int TObjPlayer__sub_801BBD38(void* p);
int TLockOnCursor__sub_8013DAB0(void*);
int fn_801566CC(void*);
int fn_801B35AC(void*);

int TObjPlayer__sub_801BBB98(void) { return 0; }
int TObjPlayer__sub_801BBBD0(void) { return 0; }

}
