#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_803D8098 { s16 x; s16 y; s16 z; s16 pad; s32 f8; char *name; };

extern "C" {
char *strncpy(char *, const char *, unsigned long);
unsigned long strlen(const char *);
extern char *lbl_805D76C0;
extern Rec_803D8098 *lbl_805D76C4;
extern f32 lbl_805D76D8;
extern s32 lbl_805D76DC;
void TObjEneMe1Gee__sub_803D8098(s32 arg0, char *arg1);
}

extern "C" {

void set_global_count__12TObjNpcEnemyFi(s32 arg0);

extern s32 lbl_805D76DC;

void set_global_count__12TObjNpcEnemyFi(s32 arg0) {
    lbl_805D76DC = arg0;
}
void TObjEneMe1Gee__sub_803D8098(s32 arg0, char *arg1) {
    s16 len;
    s16 x;
    f32 scale;
    Rec_803D8098 *r;
    strlen(arg1);
    x = (s16) ((s16) (arg0 >> 16) * (scale = lbl_805D76D8));
    len = strlen(arg1);
    r = lbl_805D76C4++;
    r->x = x;
    r->y = (s16) ((s16) (arg0 & 0xFFFF) * scale);
    r->z = (s16) lbl_805D76D8;
    r->f8 = lbl_805D76DC;
    r->name = lbl_805D76C0;
    strncpy(lbl_805D76C0, arg1, len);
    lbl_805D76C0[len] = 0;
    lbl_805D76C0 += len + 1;
}

}
