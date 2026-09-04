#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowChoiceSetting__ct(void *arg0);
void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1);
int render__20TWindowChoiceSettingFv(void);
int TWindowSubComCard__sub_80249220(void* p);
void __dl__7TObjectFPv(void *);
void destroy_children__20TWindowSubStatusDispFPvs(void *, int);
int fn_80268C5C(void*);
void fn_80269004(void *);

int render__20TWindowChoiceSettingFv(void) { return 0; }

extern M2C_UNK __vt__20TWindowChoiceSetting[];

void *__dt__20TWindowChoiceSettingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
        destroy_children__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__20TWindowChoiceSetting[];
extern void *lbl_805D38B8;

void *TWindowChoiceSetting__ct(void *arg0) {
    fn_80269004(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowChoiceSetting;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38B8;
    M2C_FIELD(arg0, u16 *, 0x80) = 0;
    return arg0;
}

}
