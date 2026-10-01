#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
s32 get_global_state__14TOKeyMachine01Fv();
extern M2C_UNK lbl_804660AC[];
extern M2C_UNK lbl_804660C8[];
extern M2C_UNK lbl_804660DC[];
extern M2C_UNK lbl_804660FC[];
extern M2C_UNK lbl_804DC810[];
extern u32 lbl_805D660C;
extern u32 lbl_805D6610;
extern u32 lbl_805D6614;
void TLanguage__sub_8029FF0C(void);
}

extern "C" {

void free_global_buffers__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D660C;
extern u32 lbl_805D6610;
extern u32 lbl_805D6614;

void free_global_buffers__6TLobbyFv(void) {
    if ((u32) lbl_805D6614 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6614);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6614);
        lbl_805D6614 = 0U;
    }
    if ((u32) lbl_805D6610 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6610);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6610);
        lbl_805D6610 = 0U;
    }
    if ((u32) lbl_805D660C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D660C, 1);
        lbl_805D660C = 0U;
    }
}
void TLanguage__sub_8029FF0C(void) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 28:
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0 != 0) {
            var_r0 = TLobby__sub_80020004(var_r0, (int) (5), (void *) (lbl_804DC810), (int) (0), (int) (0), (int) (0));
        }
        lbl_805D660C = var_r0;
        lbl_805D6610 = TLanguage__sub_801E4874((void *) (lbl_804660AC));
        lbl_805D6614 = TLanguage__sub_801E4874((void *) (lbl_804660C8));
        return;
    case 29:
        var_r0_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0_2 != 0) {
            var_r0_2 = TLobby__sub_80020004(var_r0_2, (int) (5), (void *) (lbl_804DC810), (int) (0), (int) (0), (int) (0));
        }
        lbl_805D660C = var_r0_2;
        lbl_805D6610 = TLanguage__sub_801E4874((void *) (lbl_804660DC));
        lbl_805D6614 = TLanguage__sub_801E4874((void *) (lbl_804660FC));
        return;
    }
}

}
