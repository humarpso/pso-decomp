#include "types.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1);
void TObjEneDD__ct(void *);
void TObjEneDD__vt0(void *, int);
void enemy_init_validate_period(void *, int);
void __dl__7TObjectFPv(void *);
void enemy_init_acquire_period(void *, int);
void enemy_clear_target(void *);

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

void *TObjEneDD::init_object() {
    TObjEneDD__ct(this);
    *(s32 * *)((u8 *)this + 0x18) = lbl_80492558;
    *(void **)((s8 *)this + 0x0) = lbl_805D2A34;
    enemy_clear_target(this);
    init_float_params();
    enemy_init_acquire_period(this, 30);
    enemy_init_validate_period(this, 30);
    return this;
}

}
