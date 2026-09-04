#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_802A7260(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);
void TObjSeabedSuisoBrakable__vt17(void);
int fn_802A7238(void);
void free_static_resources__23TObjSeabedSuisoBrakableFv(void);
int get_break_data__23TObjSeabedSuisoBrakableFi(int a0);
int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0);
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0);
void TLobby__sub_8001FE7C(void*, int);
void TLobby__sub_802A7318(void* p);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjSeabedSuisoBrakable__data_805D6670;
extern u32 lbl_805D6674;

void free_static_resources__23TObjSeabedSuisoBrakableFv(void) {
    if ((u32) lbl_805D6674 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6674);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6674);
        lbl_805D6674 = 0U;
    }
    if ((u32) TObjSeabedSuisoBrakable__data_805D6670 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSeabedSuisoBrakable__data_805D6670, 1);
        TObjSeabedSuisoBrakable__data_805D6670 = 0U;
    }
}

    extern int lbl_80540AC0[];
int get_break_data__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AC0[a0]; }

    extern int lbl_80540AD4[];
int get_table0_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AD4[a0]; }

    extern int lbl_80540AE0[];
int get_table1_entry__23TObjSeabedSuisoBrakableFi(int a0) {  return lbl_80540AE0[a0]; }

void TObjSeabedSuisoBrakable__vt17(void) {  }

int fn_802A7238(void) { return 0; }
int TLobby__sub_802A7260(void* a0) { return 0; }
int TLobby__sub_802A7278(void* a0) { return 0; }

}
