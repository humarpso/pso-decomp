#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80054F6C_lbl_804FF2A0 {
    M2C_UNK value;
    u8 remaining[0x2FC];
};

extern "C" {
s32 create__16TObjDFTenchuFuruFPvPv(s32, s32);
extern RecoveredGlobal_80054F6C_lbl_804FF2A0 lbl_804FF2A0;
void TBoss4Type2__sub_80054F6C(s32 arg0);
}

extern "C" {

void TBoss4Type2__sub_80055300(void);
int TBoss4Type2__sub_80054FC0(s32, f32);

    extern const f32 lbl_805D8B20;

typedef char RecoveredGlobal_80054F6C_lbl_804FF2A0_size[sizeof(RecoveredGlobal_80054F6C_lbl_804FF2A0) == 0x300 ? 1 : -1];
void TBoss4Type2__sub_80054F6C(s32 arg0) {
    M2C_UNK *var_r31;
    s32 var_r30;
    var_r30 = 0;
    var_r31 = (M2C_UNK *)(&lbl_804FF2A0.value);
    do {
        create__16TObjDFTenchuFuruFPvPv(arg0, (s32) var_r31);
        var_r30 += 1;
        var_r31 = (M2C_UNK *)((u8 *)var_r31 + (0xC));
    } while (var_r30 < 0x40);
}

    void TBoss4Type2__sub_80055300(void) { TBoss4Type2__sub_80054FC0(0, lbl_805D8B20); }

}
