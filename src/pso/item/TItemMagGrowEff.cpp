#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemMagGrowEff.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void clear_flag_64__11TItemMagSubFPv(void*);

void TItemMagGrowEff::run_task() {}

TItemMagGrowEff::~TItemMagGrowEff() {
    request_destroy__11TBoss4Type2FUi(m_20);
    if (m_24 != nullptr) clear_flag_64__11TItemMagSubFPv(m_24);
}
#else
#if PSO_CLASS_PACKAGE == 0x8011488C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemMagGrowEff__ct(void *arg0, void *arg1, u32 arg2);
s32 TBoss4Type2__sub_800874F4(s32, M2C_UNK);
M2C_UNK set_grow_flag__15TItemMagGrowEffFPv(u32);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__15TItemMagGrowEff[];
extern s32 lbl_805D2C14;

void *TItemMagGrowEff__ct(void *arg0, void *arg1, u32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TItemMagGrowEff;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C14;
    if (arg2 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x24) = arg2;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = TBoss4Type2__sub_800874F4(M2C_FIELD(arg0, u32 *, 0x24) + 0xDC, 0x9D);
        set_grow_flag__15TItemMagGrowEffFPv(M2C_FIELD(arg0, u32 *, 0x24));
    } else {
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115924
#include "types.h"

extern "C" {

int set_grow_flag__15TItemMagGrowEffFPv(void* p);
int fn_80115948(void* p);
int fn_80115954(void* p);
void clear_flag_64__11TItemMagSubFPv(void* p);
void clear_flags64__11TItemMagSubFPvUi(void* p, u32 v);
int set_flags64__8TItemMagFPvUi(void*, int);

int set_grow_flag__15TItemMagGrowEffFPv(void* p) { return set_flags64__8TItemMagFPvUi(p, 64); }
int fn_80115948(void* p) { return (*(u8*)((char*)p + 0x0) >> 7) & 0x1; }
int fn_80115954(void* p) { return (*(u8*)((char*)p + 0x0) >> 6) & 0x1; }

}
#endif
#endif
