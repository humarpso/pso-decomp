#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void free_buffers__9TWindowDDFv(void);
s32 update_close_flag__9TWindowDDFPv(void *arg0);
void TLobby__sub_800F957C(void*);
M2C_UNK TWindowDD__sub_80347EF4();
void TWindowDD__sub_80348520(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 classify_id__9TWindowDDFs();
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347EF4();
    if (classify_id__9TWindowDDFs() != 7) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
        return 1;
    }
    return 0;
}

extern M2C_UNK __vt__9TWindowDD[];

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        TWindowDD__sub_80348520(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TWindowDD__data_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 TWindowDD__data_805D6E18;
extern u32 TWindowDD__data_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void free_buffers__9TWindowDDFv(void) {
    fn_8034AF18();
    if ((u32) TWindowDD__data_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E1C);
        TWindowDD__data_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E18);
        TWindowDD__data_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E0C);
        TWindowDD__data_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}

}
