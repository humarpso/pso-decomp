#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemList.h"

TItemList::~TItemList() {}
#else
#if PSO_CLASS_PACKAGE == 0x8010ED0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 get_item_type_or_default__9TItemListFPv(void *arg0);
s32 lookup_item_def__9TItemDataFPv();

u8 get_item_type_or_default__9TItemListFPv(void *arg0) {
    u8 temp_r3;

    if (lookup_item_def__9TItemDataFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, u8 *, 5);
        if (temp_r3 != 0) {
            return temp_r3;
        }
    }
    return 1U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D38F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *destroy__9TItemListFPvs(void *arg0, s16 arg1);
void *TItemList__sub_801D39C8(void *, void *, void *, void *, void *, void *);
M2C_UNK TItemList__sub_801D59E8(void *, s32);
M2C_UNK TItemList__sub_801D5A28(void *, s32);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TItemList__sub_801D3FC4(void *, M2C_UNK);

extern void *tl_07;

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D39C8(o, tl_07, arg0, arg1, arg2, arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4468[];

void *destroy__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4468;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D3B00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, void *arg3);
void *__nw__7TObjectFUl(int);
void *TItemList__sub_801D3BD4(void *, void *, void *, void *, void *, void *);

extern void *tl_07;

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D3BD4(o, tl_07, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D3B64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemList__sub_801D3B64(void *arg0, s16 arg1);
M2C_UNK TItemList__sub_801D59E8(void *, s32);
M2C_UNK TItemList__sub_801D5A28(void *, s32);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TItemList__sub_801D3FC4(void *, M2C_UNK);

extern M2C_UNK lbl_804C4480[];

void *TItemList__sub_801D3B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4480;
        TItemList__sub_801D5A28(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D59E8(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D3FC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemList__sub_801D3FC4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804C4498[];

void *TItemList__sub_801D3FC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4498;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D57B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__9TItemListFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK __vt__9TItemList[];
extern void *lbl_805D3568;

void *__ct__9TItemListFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TItemList;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3568;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5814
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

int copy_item_data__9TItemListFPv(void* p) { return copy_item_data__6TLobbyFPvPv((char*)p + 0x8); }
void TItemList__sub_801D5838(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int TItemList__sub_801D5844(void* p) { return *(u32*)((char*)p + 0x0) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D587C
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

void* get_ptr_0x44__9TItemListFPv(void* p) { return (char*)p + 0x44; }
void TItemList__sub_801D5884(void* p, u8 v) { *(u8*)((char*)p + 0x1d) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D58C8
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

void TItemList__sub_801D58C8(void* p) { *(s32*)((char*)p + 0x0) = 3; }
u8 get_item_count__9TItemListFPv(void* p) { return *(u8*)((char*)p + 0x1c); }
u16 TItemList__sub_801D58DC(void* p) { return *(u16*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5968
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

int copy_position__9TItemListFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D59DC
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

void TItemList__sub_801D59DC(void* p) { *(s32*)((char*)p + 0x0) = 2; }
void TItemList__sub_801D59E8(void* p, void* a1) { TItemList__sub_801D5A0C(a1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5A64
#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int copy_item_data__9TItemListFPv(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 get_item_count__9TItemListFPv(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

void TItemList__sub_801D5A64(void* p) { *(s32*)((char*)p + 0x0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5ABC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_item_valid__9TItemListFi(s32 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);

extern s32 lbl_805D3568;

u8 is_item_valid__9TItemListFi(s32 arg0) {
    int var_r31;

    var_r31 = 0;
    if ((check_value_equals__13TQuestColCtrlFPvi(arg0, lbl_805D3568) != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5B10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemList__sub_801D5B10(void *arg0, s16 arg1);
void *__dt__9TItemListFPvs(void *arg0, s16 arg1);
M2C_UNK dt__9TItemListFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804C445C[];

void *TItemList__sub_801D5B10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C445C;
        __dt__9TItemListFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C4450[];

void *__dt__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C4450;
        dt__9TItemListFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5BC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__9TItemListFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804C4444[];

void *dt__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C4444;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5C08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_items__9TItemListFPv(void *arg0);
void *init_array__9TItemListFPv(void *arg0);
void TItemList__sub_801D5CF8(void *);

extern M2C_UNK lbl_804C445C[];
extern M2C_UNK init_c2098_return_self__10TObjPlayerFPv[];
void __construct_array(void *, void *, int, int, int);

void *init_items__9TItemListFPv(void *arg0) {
    init_array__9TItemListFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C445C;
    __construct_array((void *)((char *)arg0 + 168), init_c2098_return_self__10TObjPlayerFPv, 0, 28, 9);
    return arg0;
}

extern M2C_UNK lbl_804C4450[];
extern M2C_UNK reset_position__9TItemListFPv[];
void __construct_array(void *, void *, int, int, int);

void *init_array__9TItemListFPv(void *arg0) {
    TItemList__sub_801D5CF8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C4450;
    __construct_array((void *)((char *)arg0 + 40), reset_position__9TItemListFPv, 0, 16, 8);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801D5CB8
#include "types.h"

extern "C" {

void* reset_position__9TItemListFPv(void* a0);
int TObjPlayer__sub_801C2098(void);

    extern const float lbl_805DC3D4;
void* reset_position__9TItemListFPv(void* a0) { TObjPlayer__sub_801C2098(); *(float*)((char*)a0 + 0xc) = lbl_805DC3D4; *(float*)((char*)a0 + 0x8) = lbl_805DC3D4; *(float*)((char*)a0 + 0x4) = lbl_805DC3D4; return a0; }

}
#endif
#endif
