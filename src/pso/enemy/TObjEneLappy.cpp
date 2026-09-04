#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneLappy__sub_800C2014(void);
void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1);
s32 get_instance__6TLobbyFv();

int TObjEneLappy__sub_800C2014(void) { return 0; }

extern void *lbl_805D5164;
extern s32 lbl_805D516C;

void set_speed_params__12TObjEneLappyFPvi(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (get_instance__6TLobbyFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
    } else {
        if (arg1 == 0) {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 8);
        } else {
            var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0x18);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = var_r0;
    }
    if (arg1 == 0) {
        var_r0_2 = M2C_FIELD(M2C_FIELD(lbl_805D5164, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0_2 = lbl_805D516C;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_2;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800C16E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__12TObjEneLappyFPv(void *arg0);
void *TObjControl__ct(void *, void *);
void *TObjEneLappy__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * create__12TObjEneLappyFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3A4);
    if (o2 != NULL) {
        o2 = TObjEneLappy__ct(o2, o, arg0);
    }
    return o2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C1BEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK lbl_80492F28[];

void *destroy__12TObjEneLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492F28;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F5DE0
#include "types.h"

extern "C" {

s32 get_target_id__13TWindowLockOnFPv(void* p);
void set_param__12TObjEneLappyFPvi(void* p, s32 v);
int initialize_enemy_photon_effect(void* p);
int reset_photon_effect__12TBoss3VoloptFPv(void*);

void set_param__12TObjEneLappyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }

}
#endif
#endif
