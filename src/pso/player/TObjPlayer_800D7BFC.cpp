#include "types.h"

struct Base_800D7BFC { char pad[0x14]; };
struct VObj_800D7BFC : Base_800D7BFC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

extern "C" {

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1);
void activate_and_dispatch__10TObjPlayerFPv(void *arg0);
void *init_and_activate__10TObjPlayerFPv(void *arg0);
void init_effect_9472__10TObjPlayerFv(void);
s32 TObjPlayer__sub_800D96D0(s32, s32 *);
void TObjPlayer__sub_800D9718(void *);
int set_chunk_blend(int);
s32 __dl__FPv(void *);
int set_flags_and_apply_damage_color__10TObjPlayerFv(void);

void activate_and_dispatch__10TObjPlayerFPv(void *arg0) {
    struct VObj_800D7BFC *o = (struct VObj_800D7BFC *)arg0;
    *(s32 *)((s8 *)arg0 + 0x18) = 1;
    o->m2();
}

void init_effect_9472__10TObjPlayerFv(void) { set_flags_and_apply_damage_color__10TObjPlayerFv(); set_chunk_blend(9472); }

extern s32 lbl_804949A8[];

void *TObjPlayer__sub_800D7C58(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = lbl_804949A8;
        TObjPlayer__sub_800D96D0((s32)arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804949A8[];

void *init_and_activate__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_800D9718(arg0);
    *(s32 **)((s8 *)arg0 + 0x14) = lbl_804949A8;
    activate_and_dispatch__10TObjPlayerFPv((void *)(arg0));
    return arg0;
}

}
