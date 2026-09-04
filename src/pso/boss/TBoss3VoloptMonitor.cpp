#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss3VoloptMonitor__sub_800420D8(void);
void update_state__19TBoss3VoloptMonitorFPv(void *arg0);
s32 update_state__20TBoss3VoloptHiraisinFPv();
s32 TBoss3VoloptHiraisin__sub_80041D0C();
s32 TBoss3VoloptHiraisin__sub_80041D3C();
s32 fn_80041E88();

void TBoss3VoloptMonitor__sub_800420D8(void) {  }
void update_state__19TBoss3VoloptMonitorFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        update_state__20TBoss3VoloptHiraisinFPv();
        return;
    case 1:
        TBoss3VoloptHiraisin__sub_80041D0C();
        return;
    case 4:
        fn_80041E88();
        return;
    case 5:
        TBoss3VoloptHiraisin__sub_80041D3C();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800423D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release__19TBoss3VoloptMonitorFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D4CA4;

void release__19TBoss3VoloptMonitorFv(void) {
    if ((u32) lbl_805D4CA4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4CA4);
        lbl_805D4CA4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800424C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TBoss3VoloptMonitorFPv(void *arg0);
void *TBoss3VoloptMonitor__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__19TBoss3VoloptMonitorFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x394);
    if (o != NULL) {
        o = TBoss3VoloptMonitor__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004268C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__19TBoss3VoloptMonitor[];

void *__dt__19TBoss3VoloptMonitorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TBoss3VoloptMonitor;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004291C
#include "types.h"

extern "C" {

void set_flags_30__19TBoss3VoloptMonitorFPv(void* p);

void set_flags_30__19TBoss3VoloptMonitorFPv(void* p) { *(u32*)((char*)p + 0x30) |= 0x4040000; }

}
#endif
#endif
