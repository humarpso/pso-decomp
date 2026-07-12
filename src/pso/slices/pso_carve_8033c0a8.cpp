#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8000F8EC();
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 fn_8033BC88(void *, s32, s32, s32, s32);
s32 fn_8033BB14();
s32 fn_8033C024(void *, s32);
int fn_8033C178(void* p);
void fn_8033C198(void);
int fn_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int fn_8033BC34(void*, int, int, int, int);
int fn_8033BF90(void*);

void fn_8033C0A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = fn_8033BB14();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_8033C024(arg0, 0);
}
int fn_8033C10C(void) { return 0; }
int fn_8033C178(void* p) { return fn_8033BF90(p); }
void fn_8033C198(void) {  }
int fn_8033C19C(void* p) { return fn_8033BC34(p, 0, -1, -1, -1); }
int fn_8033C1CC(void) { return 0; }

}
