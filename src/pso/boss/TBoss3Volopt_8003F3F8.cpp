#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *__nw__7TObjectFUl(int);
void *create_TBoss3VoloptCore(void *, void *, void *, void *);
void * fn_8003F468(void *arg0, void *arg1, void *arg2);
}

extern "C" {

int TBoss3Volopt__sub_8003F408(void);
int TBoss3Volopt__sub_8003F41C(void);
int TBoss3Volopt__sub_8003F430(void);
int TBoss3Volopt__sub_8003F444(void);
u8 TBoss3Volopt__sub_8003F458(void *arg0);
u8 fn_8003F3F8(void *arg0);
int is_photon_blast_active__11TCameraCtrlFPv(void* p);

u8 fn_8003F3F8(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 0);
}
int TBoss3Volopt__sub_8003F408(void) { return 0; }
int TBoss3Volopt__sub_8003F41C(void) { return 0; }
int TBoss3Volopt__sub_8003F430(void) { return 0; }
int TBoss3Volopt__sub_8003F444(void) { return 0; }

u8 TBoss3Volopt__sub_8003F458(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 0);
}

void * fn_8003F468(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x3D4);
    if (o != NULL) {
        o = create_TBoss3VoloptCore(o, arg0, arg1, arg2);
    }
    return o;
}

}
