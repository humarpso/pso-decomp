#include "pso/TItemList.h"

TItemList::~TItemList() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TItemList__sub_801D5A0C(s32 *arg0);
u8 get_item_count__9TItemListFPv(void* p);
void TItemList__sub_801D5A64(void* p);
u8 *TItemList__sub_801D5868(s32, s8);
void TItemList__sub_801D5A28(u8 *arg0, s32 arg1);
void* get_ptr_0x44__9TItemListFPv(void* p);
u8 get_item_count__9TItemListFPv(void* p);
void copy_position__9TItemListFPv(void *, s32);
void *TItemList__sub_801D598C(int, int);
void TItemList__sub_801D5A70(u8 *arg0);
void __construct_array(void *, void *, int, int, int);
int TObjPlayer__sub_801C2098(void);
extern M2C_UNK lbl_804C4444[];
u8 *TItemList__sub_801D5CF8(u8 *arg0);
}

extern "C" {

void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D59E8(void* p, void* a1);
void TItemList__sub_801D5A64(void* p);
void *TItemList__sub_801D5B10(void *arg0, s16 arg1);
void *__dt__9TItemListFPvs(void *arg0, s16 arg1);
void *dt__9TItemListFPvs(void *arg0, s16 arg1);
void *init_array__9TItemListFPv(void *arg0);
void *init_items__9TItemListFPv(void *arg0);
u8 is_item_valid__9TItemListFi(s32 arg0);
void* reset_position__9TItemListFPv(void* a0);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u16 TItemList__sub_801D58DC(void* p);
int TObjPlayer__sub_801C2098(void);
int VecCopy__FP3VecPC3Vec(void*);
void __construct_array(void *, void *, int, int, int);
M2C_UNK __dl__FPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);
int copy_item_data__6TLobbyFPvPv(void*);
int copy_item_data__9TItemListFPv(void* p);
u8 get_item_count__9TItemListFPv(void* p);

void TItemList__sub_801D59DC(void* p) { *(s32*)((char*)p + 0x0) = 2; }
void TItemList__sub_801D59E8(void* p, void* a1) { TItemList__sub_801D5A0C((s32 *)((void*)(a1))); }

void TItemList__sub_801D5A0C(s32 *arg0) {
    s32 temp_r0;
    temp_r0 = *arg0 - 1;
    *arg0 = temp_r0;
    if (temp_r0 < 0) {
        *arg0 = 0;
    }
}

void TItemList__sub_801D5A28(u8 *arg0, s32 arg1) {
    TItemList__sub_801D5A64((void*)(TItemList__sub_801D5868(arg1, get_item_count__9TItemListFPv((void*)(arg0)))));
}

void TItemList__sub_801D5A64(void* p) { *(s32*)((char*)p + 0x0) = 0; }

extern s32 lbl_805D3568;

void TItemList__sub_801D5A70(u8 *arg0) {
    copy_position__9TItemListFPv(TItemList__sub_801D598C(*(s32 *)(arg0 + 0x54), ((s8)get_item_count__9TItemListFPv((void*)(arg0)))), ((s32)get_ptr_0x44__9TItemListFPv((void*)(arg0))));
}

u8 is_item_valid__9TItemListFi(s32 arg0) {
    int var_r31;

    var_r31 = 0;
    if ((check_value_equals__13TQuestColCtrlFPvi(arg0, lbl_805D3568) != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

extern M2C_UNK lbl_804C445C[];

void *TItemList__sub_801D5B10(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C445C;
        __dt__9TItemListFPvs((void *)((void *)(arg0)), (s16)((s16)(0)));
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
        dt__9TItemListFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

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

extern M2C_UNK lbl_804C445C[];
extern M2C_UNK init_c2098_return_self__10TObjPlayerFPv[];

void *init_items__9TItemListFPv(void *arg0) {
    init_array__9TItemListFPv((void *)(arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C445C;
    __construct_array((void *)((char *)arg0 + 168), init_c2098_return_self__10TObjPlayerFPv, 0, 28, 9);
    return arg0;
}

extern M2C_UNK lbl_804C4450[];

void *init_array__9TItemListFPv(void *arg0) {
    TItemList__sub_801D5CF8((u8 *)(arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C4450;
    __construct_array((void *)((char *)arg0 + 40), (M2C_UNK *)reset_position__9TItemListFPv, 0, 16, 8);
    return arg0;
}

    extern const float lbl_805DC3D4;
void* reset_position__9TItemListFPv(void* a0) { TObjPlayer__sub_801C2098(); *(float*)((char*)a0 + 0xc) = lbl_805DC3D4; *(float*)((char*)a0 + 0x8) = lbl_805DC3D4; *(float*)((char*)a0 + 0x4) = lbl_805DC3D4; return a0; }
u8 *TItemList__sub_801D5CF8(u8 *arg0) {
    *(u8 **)(arg0 + 0x24) = ((u8 *)&lbl_804C4444);
    __construct_array(arg0 + 4, TObjPlayer__sub_801C2098, 0, 4, 8);
    *(s32 *)arg0 = 0;
    return arg0;
}

}
