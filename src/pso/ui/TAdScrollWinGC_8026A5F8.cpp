#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubLog__sub_8026A664(u8 *arg0, f32 farg0);
int send_and_handle__6TLobbyFPvii(void *, int, int);
M2C_UNK TWindowMessageLog__sub_8026A494(void *);
void fn_8026A62C(u8 *arg0, s32 arg1);
M2C_UNK heap_free__5THeapFPv(s32, void *);
u8 *heap_alloc__5THeapFUl(s32, s32);
s32 measure_string_len__20TWindowSubStatusDispFPv(void *);
M2C_UNK TLobby__sub_8026A6DC(int);
s32 TLobby__sub_8026A76C(void *);
M2C_UNK strncpy(int, void *, int);
extern s32 lbl_805D5544;
extern s32 lbl_805D6460;
extern u8 *lbl_805D6464;
void TLobby__sub_8026A7B0(u32 arg0);
}

extern "C" {

void TAdScrollWinGC__sub_8026A5F8(void* a0);
void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v);
void fn_8026A61C(void* p, f32 v);

    extern const float lbl_805DD240;
void TAdScrollWinGC__sub_8026A5F8(void* a0) { *(float*)((char*)a0 + 0x84) = lbl_805DD240; *(float*)((char*)a0 + 0x6c) = lbl_805DD240; *(float*)((char*)a0 + 0x94) = lbl_805DD240; }

void advance_scroll__14TAdScrollWinGCFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

void fn_8026A61C(void* p, f32 v) { *(f32*)((char*)p + 0x94) += v; }

void fn_8026A62C(u8 *arg0, s32 arg1) {
    send_and_handle__6TLobbyFPvii(arg0, arg1, 0x502);
    TWindowMessageLog__sub_8026A494((void *) (arg0));
}

void TWindowSubLog__sub_8026A664(u8 *arg0, f32 farg0) {
    if (farg0 != M2C_FIELD(arg0, f32 *, 0x3C)) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}
void TLobby__sub_8026A7B0(u32 arg0) {
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r3;
    if ((void *) lbl_805D6464 != NULL) {
        heap_free__5THeapFPv(lbl_805D6460, (void *) lbl_805D6464);
        lbl_805D6464 = NULL;
    }
    if (arg0 != 0U) {
        temp_r31 = TLobby__sub_8026A76C((void *) (arg0));
        var_r30 = measure_string_len__20TWindowSubStatusDispFPv((void *) (arg0)) + 1;
        if (temp_r31 != 0) {
            var_r30 += 2;
        }
        var_r3 = heap_alloc__5THeapFUl(lbl_805D6460, var_r30);
        if (var_r3 == NULL) {
            do {
                TLobby__sub_8026A6DC((int) (0));
                var_r3 = heap_alloc__5THeapFUl(lbl_805D6460, var_r30);
            } while (var_r3 == NULL);
        }
        lbl_805D6464 = var_r3;
        if (temp_r31 != 0) {
            M2C_FIELD(var_r3, s8 *, 0) = 9;
            if ((s32) lbl_805D5544 == 0) {
                M2C_FIELD(var_r3, s8 *, 1) = 0x4A;
                var_r3 += 2;
            } else {
                M2C_FIELD(var_r3, s8 *, 1) = 0x45;
                var_r3 += 2;
            }
            var_r30 -= 2;
        }
        strncpy((int) (var_r3), (void *) (arg0), (int) (var_r30));
    }
}

}
