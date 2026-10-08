#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80195CF0 { u8 pad0[6]; u16 f6; u8 pad8[4]; Obj_80195CF0 *next; u8 pad10[4]; Obj_80195CF0 *child; };

struct Obj_80195DE0 { u8 pad0[6]; u16 f6; u8 pad8[4]; Obj_80195DE0 *next; u8 pad10[4]; Obj_80195DE0 *child; };

extern "C" {
u16 obj_getField1c(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
extern s32 lbl_805D33EC;
extern s32 lbl_805D33F0;
extern s32 lbl_805D33F4;
extern s32 lbl_805D33F8;
extern s32 lbl_805D33FC;
extern s32 lbl_805D3400;
extern u32 lbl_805D5C50;
Obj_80195CF0 *find_by_id__13TQuestColCtrlFUs(u16 arg0);
void queue_destruction__7TObjectFv(void *);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
extern s32 lbl_805D33EC;
extern s32 lbl_805D33F0;
extern s32 lbl_805D33F4;
extern s32 lbl_805D33F8;
extern s32 lbl_805D33FC;
extern s32 lbl_805D3400;
extern u32 lbl_805D5C50;
void delete_by_param__13TQuestColCtrlFi(s32 arg0);
}

extern "C" {

void init__13TQuestColCtrlFv(void);
M2C_UNK TQuestColCtrl__ct(M2C_UNK, s32);
u32 __ct__7TObjectFP7TObject(M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D5C50;
extern s32 tl_05;

Obj_80195CF0 *find_by_id__13TQuestColCtrlFUs(u16 arg0) {
    Obj_80195CF0 *next;
    Obj_80195CF0 *cur;
    next = (*(Obj_80195CF0 * *)&lbl_805D5C50)->child;
    while ((*(Obj_80195CF0 * *)&lbl_805D5C50)->child != 0 && next != 0) {
        cur = next;
        next = cur->next;
        if ((check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33EC) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F0) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F4) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F8) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33FC) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D3400) != 0)
            && arg0 == obj_getField1c(cur)) {
            return cur;
        }
    }
    return 0;
}

void delete_by_param__13TQuestColCtrlFi(s32 arg0) {
    Obj_80195DE0 *next;
    Obj_80195DE0 *cur;
    if (arg0 < 0) {
        return;
    }
    next = (*(Obj_80195DE0 * *)&lbl_805D5C50)->child;
    while ((*(Obj_80195DE0 * *)&lbl_805D5C50)->child != 0 && next != 0) {
        cur = next;
        next = cur->next;
        if ((check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33EC) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F0) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F4) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33F8) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D33FC) != 0
             || check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D3400) != 0)
            && cur->f6 == arg0) {
            queue_destruction__7TObjectFv(cur);
            return;
        }
    }
}

void init__13TQuestColCtrlFv(void) {
    u32 var_r3;

    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        var_r3 = __ct__7TObjectFP7TObject(var_r3, 0);
    }
    lbl_805D5C50 = var_r3;
    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        TQuestColCtrl__ct(var_r3, tl_05);
    }
}

}
