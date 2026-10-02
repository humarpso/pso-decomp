#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TObjCMHairMenu__sub_801E35C4(void *, int, int, f32);
void copy4__18TAdChrMoveEffectGCFPvPv(void *, void *);
extern const f32 lbl_805DFCE8;
extern const f32 lbl_805DFCEC;
void fn_80348E34(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
typedef struct {
    f32 *pos;
    u8 *col;
    s32 a;
    s32 n;
} Desc_80348E34;
void fn_80348E34(u8 *arg0) {
    f32 pos[8];
    Desc_80348E34 desc;
    u8 col[16];
    u8 *e;
    s32 i;
    u8 *src;
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        for (i = 0; i < 16; i++) {
            e = arg0 + i * 0x38;
            if (M2C_FIELD(e, u32 *, 0x54) & 1) {
                desc.pos = pos;
                desc.col = col;
                desc.a = 0;
                desc.n = 4;
                copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(pos, e + 0x44);
                src = e + 0x4C;
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col, src);
                desc.col[3] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[2] = M2C_FIELD(e, f32 *, 0x44);
                desc.pos[3] = M2C_FIELD(e, f32 *, 0x48) + M2C_FIELD(e, f32 *, 0x40);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 4, src);
                desc.col[7] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[4] = M2C_FIELD(e, f32 *, 0x44) + M2C_FIELD(e, f32 *, 0x3C);
                desc.pos[5] = M2C_FIELD(e, f32 *, 0x48) + M2C_FIELD(e, f32 *, 0x40);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 8, src);
                desc.col[11] = M2C_FIELD(e, u8 *, 0x50);
                desc.pos[6] = M2C_FIELD(e, f32 *, 0x44) + M2C_FIELD(e, f32 *, 0x3C);
                desc.pos[7] = M2C_FIELD(e, f32 *, 0x48);
                copy4__18TAdChrMoveEffectGCFPvPv(desc.col + 12, src);
                desc.col[15] = M2C_FIELD(e, u8 *, 0x50);
                TObjCMHairMenu__sub_801E35C4(&desc, 4, 7, lbl_805DFCEC * (f32)i + lbl_805DFCE8);
            }
        }
    }
}
#pragma pop

}
