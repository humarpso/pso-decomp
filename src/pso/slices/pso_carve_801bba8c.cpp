#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248(void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
u32 TLockOnCursor__ct(u32, void *, s32);
s32 fn_801AEECC();
u32 __nw__7TObjectFUl(s32);
void fn_801BBB70(void);
int TObjPlayer__sub_801BBB74(void* p);
void TObjPlayer__sub_801BBB94(void);
void fn_801BBC2C(void* p);
void TObjPlayer__sub_801BBC38(void* p);
void TObjPlayer__sub_801BBC64(void);
int fn_801BBD38(void* p);
int fn_8013DAB0(void*);
int fn_801566CC(void*);
int fn_801B35AC(void*);

int fn_801BBA8C(void) { return 0; }
void fn_801BBB70(void) {  }
int TObjPlayer__sub_801BBB74(void* p) { return fn_801B35AC(p); }
void TObjPlayer__sub_801BBB94(void) {  }
int fn_801BBB98(void) { return 0; }
int fn_801BBBD0(void) { return 0; }
void fn_801BBC2C(void* p) { *(s32*)((char*)p + 0x424) = 0; }
void TObjPlayer__sub_801BBC38(void* p) { void* m = *(void**)((char*)p + 0x424); if (m) fn_8013DAB0(m); }
void TObjPlayer__sub_801BBC64(void) {  }
void fn_801BBC68(void *arg0) {
    u32 var_r31;
    u32 var_r31_2;

    if (fn_801AEECC() != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U) {
            var_r31 = __nw__7TObjectFUl(0x52C);
            if (var_r31 != 0U) {
                var_r31 = TLockOnCursor__ct(var_r31, arg0, obj_getField1c(arg0));
            }
            M2C_FIELD(arg0, u32 *, 0x424) = var_r31;
        }
    } else if (((fn_80019248(arg0) != 0) || (obj_isState3_324(arg0) != 0)) && ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0U)) {
        var_r31_2 = __nw__7TObjectFUl(0x52C);
        if (var_r31_2 != 0U) {
            var_r31_2 = TLockOnCursor__ct(var_r31_2, arg0, obj_getField1c(arg0));
        }
        M2C_FIELD(arg0, u32 *, 0x424) = var_r31_2;
    }
}
int fn_801BBD38(void* p) { return fn_801566CC(p); }

}
