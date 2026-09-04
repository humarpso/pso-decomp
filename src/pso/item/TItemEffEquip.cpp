#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemEffEquip.h"

extern "C" int  all_parents_unqueued_for_destruction__7TObjectFv(TObject*);
extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void queue_destruction__7TObjectFv(TObject*);

void TItemEffEquip::run_task() {
    if (all_parents_unqueued_for_destruction__7TObjectFv((TObject*)this->m_1c) == 0) {
        this->m_1c = NULL;
        queue_destruction__7TObjectFv(this);
    }
}

TItemEffEquip::~TItemEffEquip() {
    request_destroy__11TBoss4Type2FUi(this->m_20);
}
#else
#if PSO_CLASS_PACKAGE == 0x801088D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEffEquip__sub_801088D0(u32 arg0);
M2C_UNK queue_destruction__7TObjectFv();

void TItemEffEquip__sub_801088D0(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801088F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemEffEquip__sub_801088F8(u32 arg0);
M2C_UNK release_effect__13TItemEffEquipFPv();

void TItemEffEquip__sub_801088F8(u32 arg0) {
    if (arg0 != 0U) {
        release_effect__13TItemEffEquipFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80108920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_effect__13TItemEffEquipFPv(void *arg0);
M2C_UNK fn_80108860(void *, s32);
M2C_UNK request_destroy__11TBoss4Type2FUi(s32);

void release_effect__13TItemEffEquipFPv(void *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) != -1)) {
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, s32 *, 0x20));
        fn_80108860(arg0, M2C_FIELD(arg0, s32 *, 0x24));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80108AFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__13TItemEffEquipFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TItemEffEquip__ct(void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__13TItemEffEquipFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        TItemEffEquip__ct(o, arg0, arg1, arg2, arg3, arg4);
    }
}

}
#endif
#endif
