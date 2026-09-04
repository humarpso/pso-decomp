#ifndef PSO_CLASS_PACKAGE
#include "pso/TQuestThread.h"

TQuestThread::~TQuestThread() {}
#else
#if PSO_CLASS_PACKAGE == 0x801F4A04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 tick_com_card__12TQuestThreadFPv(void *arg0);
s32 update_board_card__12TQuestThreadFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);

s32 tick_com_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r3 != NULL) {
        return TWindowSubComCard__sub_80265BF8(temp_r3);
    }
    return -1;
}

s32 update_board_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r3 != NULL) {
        return is_visible__17TWindowSubComCardFPv(temp_r3);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F4D20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_com_card__12TQuestThreadFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);

s32 update_com_card__12TQuestThreadFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x1C)) != 0) {
            return TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x1C));
        }
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5BD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 create__12TQuestThreadFi(s32 arg0);
u32 __ct__12TQuestThreadFv(u32, u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(u32, s32);

extern u32 lbl_805D5EE8;
extern s32 tl_00;

u32 create__12TQuestThreadFi(s32 arg0) {
    u32 var_r31;

    if ((u32) lbl_805D5EE8 != 0U) {
        var_r31 = __nw__7TObjectFUl(0x194);
        if (var_r31 != 0U) {
            var_r31 = __ct__12TQuestThreadFv(var_r31, lbl_805D5EE8, arg0);
        }
        if (var_r31 != 0U) {
            set_parent__7TObjectFP7TObject(var_r31, tl_00);
            return var_r31;
        }
        return 0U;
    }
    return 0U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5D88
#include "types.h"

extern "C" {

int TQuestThread__sub_801F5D88(void* p);
int TQuestThread__sub_801F5DA8(void*);

int TQuestThread__sub_801F5D88(void* p) { return TQuestThread__sub_801F5DA8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5DD0
#include "types.h"

extern "C" {

void clear_buffer__12TQuestThreadFPv(void* p);

int memset(void*, void*, void*);

void clear_buffer__12TQuestThreadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5ECC
#include "types.h"

extern "C" {

void TQuestThread__sub_801F5ECC(void);

void TQuestThread__sub_801F5ECC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5ED0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__12TQuestThreadFPvs(void *arg0, s16 arg1);
M2C_UNK TQuestThread__sub_801F5E7C();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern M2C_UNK TQuestThread__data_804C8678[];
extern s32 lbl_805D5EE8;
extern s32 lbl_805D5EEC;

void *destroy__12TQuestThreadFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TQuestThread__data_804C8678;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0) {
            lbl_805D5EE8 = 0;
            TQuestThread__sub_801F5E7C();
        } else {
            lbl_805D5EEC = 0;
        }
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0x198));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F5F58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_quest_obj__12TQuestThreadFv(void);
void queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5EEC;

void destroy_quest_obj__12TQuestThreadFv(void) {
    if ((u32) lbl_805D5EEC != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5EEC);
        lbl_805D5EEC = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F64BC
#include "types.h"

extern "C" {

void set_status_flag_80__12TQuestThreadFPv(void* p);
void TQuestThread__sub_801F64CC(int a0);

void set_status_flag_80__12TQuestThreadFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }

    extern int lbl_805D5EF4;
void TQuestThread__sub_801F64CC(int a0) { lbl_805D5EF4 = a0; }

}
#endif
#endif
