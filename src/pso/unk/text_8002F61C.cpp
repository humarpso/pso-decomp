#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8002F61C_lbl_80435628 {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct RecoveredGlobal_8002F61C_lbl_804820D8 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8002F61C_lbl_804FE31C {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
void update_camera_sequence__9TObjEneDDFPv(void);
M2C_UNK mult_vec_array__10TObjPlayerFUii(int, void *, void *, int);
M2C_UNK get_current_matrix(void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern RecoveredGlobal_8002F61C_lbl_80435628 lbl_80435628;
extern RecoveredGlobal_8002F61C_lbl_804820D8 lbl_804820D8;
extern RecoveredGlobal_8002F61C_lbl_804FE31C lbl_804FE31C;
extern s32 lbl_805D4BA8;
extern s32 lbl_805D4BAC;
extern s32 lbl_805D4BB0;
extern s32 lbl_805D4BB4;
extern s32 lbl_805D4BB8;
extern s32 lbl_805D4BBC;
extern s32 lbl_805D4BC0;
void TObjPlayer__sub_8002F61C(void);
}

extern "C" {

typedef char RecoveredGlobal_8002F61C_lbl_80435628_size[sizeof(RecoveredGlobal_8002F61C_lbl_80435628) == 0x54 ? 1 : -1];
typedef char RecoveredGlobal_8002F61C_lbl_804820D8_size[sizeof(RecoveredGlobal_8002F61C_lbl_804820D8) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_8002F61C_lbl_804FE31C_size[sizeof(RecoveredGlobal_8002F61C_lbl_804FE31C) == 0xC ? 1 : -1];
void TObjPlayer__sub_8002F61C(void) {
    if ((s32) lbl_805D4BA8 == (s32) M2C_FIELD(&lbl_80435628.value, M2C_UNK *, (lbl_805D4BAC * 4))) {
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FE31C.value, lbl_805D4BB4);
        lbl_805D4BAC += 1;
        lbl_805D4BB4 += 0xC;
    }
    if ((s32) lbl_805D4BA8 == 0x33) {
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
        mult_vec_array__10TObjPlayerFUii((int) (0), (void *) (&lbl_804820D8.value), (void *) (lbl_805D4BB8), (int) (4));
        pop_matrix();
        subtract_vector((void *) (lbl_805D4BB8 + 0xC), (void *) (lbl_805D4BB8));
    }
    if ((lbl_805D4BB0 & 0x80) && ((s32) lbl_805D4BA8 >= 0x4D) && ((s32) lbl_805D4BA8 <= 0x58)) {
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
        get_current_matrix((void *) (lbl_805D4BC0));
        pop_matrix();
        lbl_805D4BC0 += 0x30;
    }
    if (((s32) lbl_805D4BA8 >= 0x1D) && ((s32) lbl_805D4BA8 <= 0x20)) {
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
        get_current_matrix((void *) (lbl_805D4BBC));
        pop_matrix();
        lbl_805D4BBC += 0x30;
    }
    lbl_805D4BA8 += 1;
}

}
