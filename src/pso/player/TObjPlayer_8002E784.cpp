#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8002E784 { char pad[0xC]; };
struct VObj_8002E784 : Base_8002E784 {
    virtual void m0(int);
};

extern "C" {
extern f32 lbl_805D4B90;
extern const f32 lbl_805D8258;
void TObjPlayer__sub_8002EF80(void);
}

extern "C" {

struct VObj8002EB88_8002eb88_8002E784 {
    char pad[0xC];
    virtual void m0(int);
};

int TObjLight__sub_8002F238(void* p);
void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1);
void TObjPlayer__sub_8002EB88(void);
s32 calc_random_scaled__10TObjPlayerFv(void);
void clear_target_ref__10TObjPlayerFv(void);
void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_base__10TObjPlayerFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int get_target_info__9TObjEneDDFPv(void*);
s32 rand__11TOBoss4RockFv();

extern void *lbl_805D4B8C;

void clear_target_ref__10TObjPlayerFv(void) {
    if (lbl_805D4B8C != NULL) {
        ((VObj_8002E784 *)lbl_805D4B8C)->m0(1);
    }
    lbl_805D4B8C = NULL;
}

extern M2C_UNK lbl_804820A8[];

void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820A8;
        deleting_dtor__10TObjPlayerFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;

void TObjPlayer__sub_8002EB88(void) {
    if (lbl_805D4B88 != NULL) {
        lbl_805D4B88->m0(1);
    }
    lbl_805D4B88 = NULL;
}

extern M2C_UNK lbl_804820C0[];

void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804820C0[];

void *init_base__10TObjPlayerFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern M2C_UNK lbl_80435620;
extern const f32 lbl_805D8244;
extern const f32 lbl_805D8248;

void TObjPlayer__sub_8002EF80(void) {
    lbl_805D4B90 = lbl_805D8258;
}

s32 calc_random_scaled__10TObjPlayerFv(void) {
    return (s32) (lbl_805D8248 * (lbl_805D8244 * (f32) rand__11TOBoss4RockFv()));
}

int TObjLight__sub_8002F238(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
