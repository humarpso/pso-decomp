#include "types.h"

extern "C" {

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1);
void *init_object__9TObjEneDDFPv(void *arg0);
void TObjEneDD__ct(void *);
void TObjEneDD__vt0(void *, int);
void enemy_init_validate_period(void *, int);
void __dl__7TObjectFPv(void *);
void enemy_init_acquire_period(void *, int);
void enemy_clear_target(void *);
void init_float_params__9TObjEneDDFPv(void *);

extern s32 lbl_80492558[];

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80492558;
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_80492558[];
extern void *lbl_805D2A34;

void *init_object__9TObjEneDDFPv(void *arg0) {
    TObjEneDD__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_80492558;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2A34;
    enemy_clear_target(arg0);
    init_float_params__9TObjEneDDFPv(arg0);
    enemy_init_acquire_period(arg0, 30);
    enemy_init_validate_period(arg0, 30);
    return arg0;
}

}
