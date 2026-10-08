#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803C5850_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803C588C_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_8058C960;
extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;
M2C_UNK memset(void *, int, int);
void clear_net_error_buffer__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_8058C960;
extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;
void reset_scratch_buffer_100__6TLobbyFv(void);
s32 calc_binomial_coefficient__12TBoss8DragonFii(s32 n, s32 k);
}

extern "C" {

typedef char RecoveredGlobal_803C5850_lbl_80572020_size[sizeof(RecoveredGlobal_803C5850_lbl_80572020) == 0x100 ? 1 : -1];
void clear_net_error_buffer__6TLobbyFv(void) {
    memset((void *) (&lbl_8058C960.value), (int) (0), (int) (0x100));
    lbl_805D76A0 = 0;
    lbl_805D76A4 = 0;
}
void reset_scratch_buffer_100__6TLobbyFv(void) {
    memset((void *) (&lbl_8058C960.value), (int) (0), (int) (0x100));
    lbl_805D76A0 = 0;
    lbl_805D76A4 = 0;
}
#pragma push
#pragma optimize_for_size off
#pragma scheduling off
#pragma peephole off
s32 calc_binomial_coefficient__12TBoss8DragonFii(s32 n, s32 k) {
    s32 d = 1;
    s32 r = 1;
    s32 i;
    for (i = k; i != 0; i--) {
        d *= i;
        r *= n - i + 1;
    }
    return r / d;
}
#pragma pop

typedef char RecoveredGlobal_803C588C_lbl_80572020_size[sizeof(RecoveredGlobal_803C588C_lbl_80572020) == 0x100 ? 1 : -1];

}
