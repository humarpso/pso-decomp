#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TNeedleShootFv(void *arg0);

M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
M2C_UNK TNeedleShoot__sub_802A4668();
M2C_UNK TNeedleShoot__sub_802A4694();

void run_task__12TNeedleShootFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        TNeedleShoot__sub_802A4694();
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        return;
    }
    TNeedleShoot__sub_802A4668();
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802A4540
#include "types.h"

extern "C" {

void TNeedleShoot__sub_802A4540(void);

void TNeedleShoot__sub_802A4540(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4668
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_802A4668 { char pad[0x18]; };
struct VObj_802A4668 : Base_802A4668 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

void TNeedleShoot__sub_802A4668(void *arg0);

void TNeedleShoot__sub_802A4668(void *arg0) {
    struct VObj_802A4668 *o = (struct VObj_802A4668 *)arg0;
    o->m5();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TNeedleShootFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__12TNeedleShoot[];

void *__dt__12TNeedleShootFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TNeedleShoot;
        if (M2C_FIELD(arg0, void **, 0x68) != NULL) { TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, void **, 0x68)); M2C_FIELD(arg0, M2C_UNK *, 0x68) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4A00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int queue_destruction__7TObjectFv(void*);

int TNeedleShoot__vt4(void* p) { return queue_destruction__7TObjectFv(p); }
int queue_destruction__12TNeedleShootFPv(void* p) { return queue_destruction__7TObjectFv(p); }
void TNeedleShoot__vt7(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4A44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int queue_destruction__7TObjectFv(void*);

void* get_shoot_data__12TNeedleShootFPv(void* p) { return (char*)p + 0x28; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4B60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TNeedleShoot__sub_802A4B60(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);

extern M2C_UNK lbl_804DCFF8[];

void *TNeedleShoot__sub_802A4B60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DCFF8;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A4A7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
int queue_destruction__7TObjectFv(void*);

void init_velocity__12TNeedleShootFPv(u8 *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() == 0x22) {
        TBoss3Volopt__sub_8022675C((int) (0x4003B20E), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    } else {
        TBoss3Volopt__sub_8022675C((int) (0x3A847), (void *) (arg0 + 0x6C), (int) (0), (int) (0));
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
}

}

}
#endif
#endif
