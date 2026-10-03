#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1);
s32 TObjPlayer__sub_801290D0(u8 *arg0);
void TObjPlayer__sub_80129118(u8 *arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_80129124(void* p);
void clear_rico_ring_flag__10TObjPlayerFUi(u32 arg0);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
int rotate_matrix_z(void*, void*);
s32 test_flags_any(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
int get_player_list__10TObjPlayerFv(void*);

extern M2C_UNK lbl_804A4020[];

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4020;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void clear_rico_ring_flag__10TObjPlayerFUi(u32 arg0) {
    if (arg0 != 0U) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1FC, 2);
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

s32 TObjPlayer__sub_801290D0(u8 *arg0) {
    if (test_flags_any((void *) (arg0 + 0x1FC), (int) (4)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x188);
    }
    return M2C_FIELD(arg0, s32 *, 0x184);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
}

extern "C" {

}

void TObjPlayer__sub_80129118(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg2;
}

void TObjPlayer__sub_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void handle_tunnel_state_0__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { rotate_matrix_z((void*)0, *(void**)((char*)p + 0x1fc)); } }

}
