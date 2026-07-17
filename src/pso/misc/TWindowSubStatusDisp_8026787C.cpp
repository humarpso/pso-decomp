#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag4__20TWindowSubStatusDispFPv(void *arg0);
void handle_open__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_status_flag__6TLobbyFPv();
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
s32 is_flag80_set__20TWindowSubStatusDispFPv(s32);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(void *, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void set_flag4__20TWindowSubStatusDispFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (get_status_flag__6TLobbyFPv() == 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void handle_open__20TWindowSubStatusDispFPv(void *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if ((is_flag_4_set__20TWindowSubStatusDispFPv() == 0) || (is_flag80_set__20TWindowSubStatusDispFPv(temp_r31) != 0)) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x100)) {
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, void **, 0x80), 2);
    }
}

void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
