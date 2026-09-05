#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80364258_80364258 { s32 f0; };

extern "C" {
void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0);
int request_transition__18TAdEnterPasswordGCFPv(void* p);
int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(u32);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int set_mode_0x14__21TAdMultiChgGameModeGCFv(void*);

int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p) { return set_mode_0x14__21TAdMultiChgGameModeGCFv(p); }
int request_transition__18TAdEnterPasswordGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern M2C_UNK __vt__18TAdEnterPasswordGC[];

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdEnterPasswordGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D6CB8;

void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r0 < 0x18) {
        ((struct Elt80364258_80364258 *)(arg0 + 0x20))[temp_r0].f0 = arg1;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) + 1);
    }
}

s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0) {
    if ((u32) lbl_805D6CB8 != 0U) {
        if (get_confirm_state__20TAdSnAkPassConfirmGCFPv(lbl_805D6CB8) != 0) {
            return 0;
        }
        TAdEnterPasswordGC__sub_8032BC94((u8 *)(lbl_805D6CB8), (s32)(arg0));
        return 1;
    }
    return 0;
}

}
