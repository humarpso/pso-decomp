#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TContainerAncient01__sub_8018BE90(void);
int get_table_entry__19TContainerAncient01Fi(int a0);
extern int TContainerAncient01R__data_805D5B94;
extern int lbl_8050DC70[];
void TContainerAncient01R__sub_8018AF80(void);
}

extern "C" {

void *TContainerAncient01R__create(void *arg0);
void TContainerAncient01R__sub_8018AF74(void);
void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1);
void *TContainerAncient01R__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *tl_05;

void *TContainerAncient01R__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x374);
    if (o != NULL) {
        o = TContainerAncient01R__ct(o, tl_05, arg0);
    }
    return o;
}

    extern int TContainerAncient01R__data_805D5B94;
void TContainerAncient01R__sub_8018AF74(void) { TContainerAncient01R__data_805D5B94 = 0; }

extern M2C_UNK lbl_804B6E1C[];

void TContainerAncient01R__sub_8018AF80(void) {
    TContainerAncient01R__data_805D5B94 = TContainerAncient01__sub_8018BE90();
    lbl_8050DC70[0] = get_table_entry__19TContainerAncient01Fi(0);
    lbl_8050DC70[1] = get_table_entry__19TContainerAncient01Fi(1);
}

void *dt__20TContainerAncient01RFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B6E1C;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
