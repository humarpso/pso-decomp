#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TObjBoss5PillarDemoFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TObjBoss5PillarFv(void *, int);

extern M2C_UNK __vt__19TObjBoss5PillarDemo[];

void *__dt__19TObjBoss5PillarDemoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss5PillarDemo;
        __dt__15TObjBoss5PillarFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8028AB38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss5PillarDemo__sub_8028AB38(void);
M2C_UNK fn_8028A998(s32, s32);

extern void *lbl_805D4DD8;

void TObjBoss5PillarDemo__sub_8028AB38(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
        fn_8028A998(M2C_FIELD(temp_r4, s32 *, 0x78), M2C_FIELD(temp_r4, s32 *, 0x68));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028AB70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_active_pillar__19TObjBoss5PillarDemoFv(void);
M2C_UNK fn_8028A9CC(s32, s32);

extern void *lbl_805D4DD8;

void update_active_pillar__19TObjBoss5PillarDemoFv(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
        fn_8028A9CC(M2C_FIELD(temp_r4, s32 *, 0x78), M2C_FIELD(temp_r4, s32 *, 0x68));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028ACE0
#include "types.h"

extern "C" {

void TObjBoss5PillarDemo__sub_8028ACE0(void);
void TObjBoss5PillarDemo__sub_8028ACE4(void);

void TObjBoss5PillarDemo__sub_8028ACE0(void) {  }
void TObjBoss5PillarDemo__sub_8028ACE4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028AD88
#include "types.h"

extern "C" {

void TObjBoss5PillarDemo__sub_8028AD88(void* a0);
int TObjBoss5PillarDemo__sub_8028ACE8(void*, void*);

    extern int lbl_805D64D4;
void TObjBoss5PillarDemo__sub_8028AD88(void* a0) { TObjBoss5PillarDemo__sub_8028ACE8((void*)(lbl_805D64D4), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028ADB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss5PillarDemo__sub_8028ADB0(u32 arg0);
M2C_UNK set_npc_enemy_param(M2C_UNK);

void TObjBoss5PillarDemo__sub_8028ADB0(u32 arg0) {
    if (arg0 != 0U) {
        set_npc_enemy_param(0);
    }
}

}
#endif
#endif
