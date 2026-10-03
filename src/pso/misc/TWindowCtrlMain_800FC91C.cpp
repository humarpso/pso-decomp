#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_7b3651 { char pad[0x18]; };

struct VObj_18_7b3651 : VBase_18_7b3651 {
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
    virtual M2C_UNK * m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

typedef struct Ent_800FC968 { u8 pad0[4]; char name[0x100]; u16 a; u8 pad106[6]; u16 b; u8 pad10E[0x11C - 0x10E]; } Ent_800FC968;

extern "C" {
s32 get_shared_text_buffer(void);
char *TWindowSubStatusDisp__sub_80071820(char *);
s32 get_card_status_bits__20TWindowShortListCtrlFv();
s32 TObjPlayer__sub_801AFD8C(void *);
VObj_18_7b3651 *get_player_by_client_id(s32);
void append_text_space(void);
void append_padded_number(s32, s32);
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append(void *);
void text_builder_reset(void);
extern char *lbl_8049CA40[];
extern Ent_800FC968 lbl_80509D5C[];
extern char lbl_805DA9F4[4];
extern char lbl_805DA9F8[4];
s32 TWindowSubStatusDisp__sub_800FC968(s32 arg0);
}

extern "C" {

void advance_card_status__15TWindowCtrlMainFi(s32 arg0);
int get_instance__15TWindowCtrlMainFv(void);
M2C_UNK fn_800FCCC8(s32, s32);
s32 get_card_status_bits__20TWindowShortListCtrlFv();

    extern int TWindowCtrlMain__data_805D6404;
int get_instance__15TWindowCtrlMainFv(void) {  return TWindowCtrlMain__data_805D6404; }

void advance_card_status__15TWindowCtrlMainFi(s32 arg0) {
    s32 var_r4;

    var_r4 = get_card_status_bits__20TWindowShortListCtrlFv() + 1;
    if (var_r4 >= 5) {
        var_r4 = 0;
    }
    fn_800FCCC8(arg0, var_r4);
}
s32 TWindowSubStatusDisp__sub_800FC968(s32 arg0) {
    s32 mode;
    M2C_UNK *name;
    u8 *info;
    s32 idx;
    s32 lvl;
    VObj_18_7b3651 *p;
    mode = get_card_status_bits__20TWindowShortListCtrlFv();
    p = get_player_by_client_id(arg0);
    if (p == NULL) {
        return 0;
    }
    info = (u8 *)p + 0x85C;
    if (info == NULL) {
        return 0;
    }
    name = p->m10();
    idx = TObjPlayer__sub_801AFD8C(p);
    lvl = p->m14();
    text_builder_reset();
    switch (mode) {
    case 0:
        text_builder_append(name);
        break;
    case 1:
        text_builder_append(name);
        append_text_space();
        text_builder_append(lbl_8049CA40[idx]);
        append_padded_number(lvl + 1, 3);
        break;
    case 2:
        if ((s8)info[0x33] < 2) {
            return 0;
        }
        text_builder_append(lbl_805DA9F4);
        TWindowSubStatusDisp__sub_80228F5C(lbl_80509D5C[arg0].a);
        text_builder_append(lbl_805DA9F8);
        TWindowSubStatusDisp__sub_80228F5C(lbl_80509D5C[arg0].b);
        break;
    case 3:
        if ((s8)info[0x33] < 2) {
            return 0;
        }
        text_builder_append(TWindowSubStatusDisp__sub_80071820(lbl_80509D5C[arg0].name));
        break;
    case 4:
        return 0;
    }
    return get_shared_text_buffer();
}

}
