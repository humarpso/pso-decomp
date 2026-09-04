#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemMenuCtrl.h"

extern s32 TItemMenuCtrl__data_805D54C0;

TItemMenuCtrl::~TItemMenuCtrl() {
    TItemMenuCtrl__data_805D54C0 = 0;
}
#else
#if PSO_CLASS_PACKAGE == 0x801059E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 query_flag__13TItemMenuCtrlFi(s32 arg0);
s32 TObjPlayer__sub_8001BEF8(s32, s32);

extern u32 TItemMenuCtrl__data_805D54C0;

s32 query_flag__13TItemMenuCtrlFi(s32 arg0) {
    if ((u32) TItemMenuCtrl__data_805D54C0 != 0U) {
        return TObjPlayer__sub_8001BEF8(TItemMenuCtrl__data_805D54C0 + 0x1C, 1 << arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115A28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemMenuCtrl__ct(void *arg0);
void init_forward__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TItemMenuCtrl[];
extern void * TItemMenuCtrl__data_805D54C0;
extern void *lbl_805D2C18;

void *TItemMenuCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TItemMenuCtrl;
    init_forward__10TObjPlayerFPv((void *)((char *)arg0 + 28));
    TItemMenuCtrl__data_805D54C0 = arg0;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C18;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_menu__13TItemMenuCtrlFUi(u32 arg0);
M2C_UNK TItemMenuCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80115AF0(u32, s32);
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 TItemMenuCtrl__data_805D54C0;
extern s32 tl_05;

void open_menu__13TItemMenuCtrlFUi(u32 arg0) {
    u32 obj;
    if (((u32) TItemMenuCtrl__data_805D54C0 == 0U) && ((obj = __nw__7TObjectFUl(0x20)) != 0U)) {
        TItemMenuCtrl__ct(obj, tl_05);
    }
    if (arg0 < 7U) {
        if (arg0 == 0) {
            queue_destruction__7TObjectFv(TItemMenuCtrl__data_805D54C0);
            return;
        }
        fn_80115AF0(TItemMenuCtrl__data_805D54C0, 1 << arg0);
    }
}

}
#endif
#endif
