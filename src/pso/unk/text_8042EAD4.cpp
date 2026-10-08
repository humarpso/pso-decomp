#include "types.h"
struct Ctx_8042EBA4 { u8 pad[0x100]; s32 f100; s32 f104; s32 f108; };

typedef struct Ctx_8042ED98 {
    u8 pad[0x8c];
    char name[5][0x100];
} Ctx_8042ED98;

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
char *strcpy(char *, const char *);
void fn_8042E8C4(Ctx_8042EBA4 *);
extern char lbl_80480404[];
extern Ctx_8042EBA4 *lbl_805D7CB0;
void fn_8042EBA4(s32 arg0, s32 arg1);
char *strncpy(char *, const char *, unsigned long);
void *memset(void *, int, unsigned long);
unsigned long strlen(const char *);
extern s32 lbl_805D7CA8;
extern Ctx_8042ED98 *lbl_805D7CB8;
s32 fn_8042ED98(s32 arg0, const char *arg1);
extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
s32 fn_8042EAD4(u8 *arg0, u32 arg1);
}

extern "C" {

#pragma push
#pragma optimize_for_size off
s32 fn_8042EAD4(u8 *arg0, u32 arg1) {
    u8 *dst;
    u32 i;
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    if (arg1 > 0x800U) {
        return -2;
    }
    dst = lbl_805D7CC0 + 0x6020;
    for (i = arg1; i != 0; i--) {
        *dst++ = *arg0++;
    }
    M2C_FIELD(lbl_805D7CC0, u32 *, 0x14) = arg1;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 1);
    return 0;
}
#pragma pop

#pragma push
#pragma optimize_for_size off
void fn_8042EBA4(s32 arg0, s32 arg1) {
    strcpy((char *)lbl_805D7CB0, lbl_80480404);
    lbl_805D7CB0->f100 = arg1;
    lbl_805D7CB0->f104 = arg0;
    lbl_805D7CB0->f108 = 0x8000;
    fn_8042E8C4(lbl_805D7CB0);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
s32 fn_8042ED98(s32 arg0, const char *arg1) {
    s32 ret = 0;
    if (lbl_805D7CA8 == 0) {
        return -1;
    }
    if (arg0 < 0 || arg0 > 4) {
        return -2;
    }
    memset(lbl_805D7CB8->name[arg0], 0, 0x100);
    strncpy(lbl_805D7CB8->name[arg0], arg1, 0xFF);
    if (strlen(arg1) >= 0x100) {
        ret = -2;
    }
    return ret;
}
#pragma pop

}
