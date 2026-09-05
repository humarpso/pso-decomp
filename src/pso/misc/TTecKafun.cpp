#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
u32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK TObjPlayer__sub_8022BD74(void *);
void run_task__9TTecKafunFv(u8 *arg0);
}

extern "C" {

void *__dt__9TTecKafunFv(void *arg0, s16 arg1);
void render__9TTecKafunFv(void);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern M2C_UNK __vt__9TTecKafun[];

void *__dt__9TTecKafunFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecKafun;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__9TTecKafunFv(void) {  }
void run_task__9TTecKafunFv(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0xF0)));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) == 1) {
        TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x20), (int) (M2C_FIELD(arg0, s32 *, 0xF4)));
    }
    TObjPlayer__sub_8022BD74((void *) (arg0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

}
