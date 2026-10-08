#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct DD_80346FE4 {
    u8 pad[0x10];
    s16 *list0;
    s32 n0;
    s16 *list1;
    s32 n1;
    s16 *list2;
    s32 n2;
    s16 *list3;
    s32 n3;
};

extern "C" {
s32 TWindowDD__sub_80346FC0(s16 arg0);
u32 get_player_by_client_id(int);
char *strncpy(char *, const char *, u32);
extern s32 lbl_805D53A0;
extern char **TWindowDD__data_805D6E18;
extern DD_80346FE4 *TWindowDD__data_805D6E1C;
void build_player_word_lists__9TWindowDDFv(void);
}

extern "C" {

void reset_selection__9TWindowDDFPv(void* a0);
void update_selected_id__9TWindowDDFPv(void *arg0);
int build_item_list__9TWindowDDFPv(void);

    extern short lbl_805D6E24;
void reset_selection__9TWindowDDFPv(void* a0) { *(short*)((char*)a0 + 0x1c) = -1; lbl_805D6E24 = -1; build_item_list__9TWindowDDFPv(); }

extern s16 lbl_805D6E24;

void update_selected_id__9TWindowDDFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 2) == 1) && (TWindowDD__sub_80346FC0((s16)(M2C_FIELD(arg0, s16 *, 4))) != 0)) {
        lbl_805D6E24 = M2C_FIELD(arg0, s16 *, 4);
    }
}
s32 TWindowDD__sub_80346FC0(s16 arg0) {
    u8 var_r3;
    var_r3 = 0;
    if ((arg0 >= 0x7F) && (arg0 <= 0x138)) {
        var_r3 = 1;
    }
    return var_r3;
}
void build_player_word_lists__9TWindowDDFv(void) {
    s32 i;
    s32 n;
    s16 *list;
    s32 j;
    s32 j2;
    s32 k;
    s16 *l1;
    s16 *l2;
    s16 *l3;
    u32 p;
    s16 v;
    n = 0;
    list = TWindowDD__data_805D6E1C->list0;
    list[n++] = 0x2c7;
    for (i = 0; i < 12; i++) {
        p = get_player_by_client_id(i);
        if (p != 0) {
            strncpy(TWindowDD__data_805D6E18[i], (char *)(p + 0x85c), 0x18);
            if (i != lbl_805D53A0) {
                list[n++] = i + 0x68c;
                if (n >= 16) {
                    break;
                }
            }
        } else {
            TWindowDD__data_805D6E18[i][0] = 0;
        }
    }
    TWindowDD__data_805D6E1C->n0 = n;
    j = 0;
    l1 = TWindowDD__data_805D6E1C->list1;
    l1[j++] = 0x2c4;
    for (k = 0; k < n - 1; k++) {
        l1[j++] = list[k + 1];
    }
    l1[j++] = 0x2c5;
    l1[j++] = 0x2c6;
    l1[j++] = 0x2c7;
    TWindowDD__data_805D6E1C->n1 = j;
    j2 = 0;
    l2 = TWindowDD__data_805D6E1C->list2;
    l3 = TWindowDD__data_805D6E1C->list3;
    l2[j2++] = 0x2c4;
    *l3++ = 0x2c4;
    for (k = 0; k < n - 1; k++) {
        v = list[k + 1];
        l2[j2++] = v;
        *l3++ = v;
    }
    l2[j2++] = 0x2c7;
    *l3 = 0x2c7;
    l2[j2++] = 0x2c8;
    TWindowDD__data_805D6E1C->n2 = j2;
    TWindowDD__data_805D6E1C->n3 = j2 - 1;
}

}
