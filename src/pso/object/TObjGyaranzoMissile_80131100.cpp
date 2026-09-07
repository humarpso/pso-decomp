#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

extern "C" {
void* init_missile__19TObjGyaranzoMissileFPv(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjGyaranzoMissile__sub_80131180(s32 arg0);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_804A6DC0[];
void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1);
int TObjPlayer__sub_80120D50(void);
extern unsigned char TObjPlayer__sub_80109440[];
extern M2C_UNK lbl_804A6DC0[];
    extern const float lbl_805DB054;
    extern const float lbl_805DB060;
void* init_effect__19TObjGyaranzoMissileFPv(void* a0, M2C_UNK _w1, void * _w2);
void* init_effect__19TObjGyaranzoMissileFPv(void* a0, M2C_UNK _w1, void * _w2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjGyaranzoMissile__sub_80131430(u8 *arg0);
f32 TCameraCtrl__sub_803D8D00();
f32 TObjPlayer__sub_8001978C();
extern f32 lbl_805DB068;
extern f32 lbl_805DB06C;
f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0);
}

extern "C" {

void TObjGyaranzoMissile__sub_801311D8(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_80120D50(void);
int get_player_list__10TObjPlayerFv(void*);

    extern unsigned char TObjPlayer__sub_80109440[];
    extern unsigned char lbl_804A6CC8[];
    extern const float lbl_805DB038;
    extern const float lbl_805DB044;
    extern const float lbl_805DB04C;
void* init_missile__19TObjGyaranzoMissileFPv(void* a0, M2C_UNK _w1, s32 _w2) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6CC8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB04C; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB038; *(float*)((char*)a0 + 0x200) = lbl_805DB038; *(float*)((char*)a0 + 0x1fc) = lbl_805DB038; *(int*)((char*)a0 + 0x208) = 0; *(float*)((char*)a0 + 0x214) = lbl_805DB044; *(float*)((char*)a0 + 0x210) = lbl_805DB044; *(float*)((char*)a0 + 0x20c) = lbl_805DB044; return a0; }

u8 *TObjGyaranzoMissile__sub_80131180(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x218));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_missile__19TObjGyaranzoMissileFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (s32)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void TObjGyaranzoMissile__sub_801311D8(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TOHangerMachine01__sub_803D9C00((char*)p + 0x1fc); } }
void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A6DC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void* init_effect__19TObjGyaranzoMissileFPv(void* a0, M2C_UNK _w1, void * _w2) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804A6DC0); *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)TObjPlayer__sub_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB060; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB054; *(float*)((char*)a0 + 0x200) = lbl_805DB054; *(float*)((char*)a0 + 0x1fc) = lbl_805DB054; return a0; }
u8 *TObjGyaranzoMissile__sub_80131430(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_effect__19TObjGyaranzoMissileFPv((void*)((void *)(temp_r3)), (M2C_UNK)((M2C_UNK)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}
f32 scale_velocity__19TObjGyaranzoMissileFPvf(void *arg0, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    if (TCameraCtrl__sub_803D8D00() > lbl_805DB068) {
        temp_f1 = TObjPlayer__sub_8001978C();
        temp_f2 = farg0 / temp_f1;
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2);
        return temp_f1;
    }
    return lbl_805DB06C;
}

}
