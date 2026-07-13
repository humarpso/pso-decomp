#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjCMAutoMkData__ct(u8 *arg0);
M2C_UNK TChCrEffTag__sub_8029ACA8(int);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);

extern M2C_UNK __vt__16TObjCMAutoMkData[];
extern s32 lbl_805D3CE4;
extern s32 lbl_805D6520;
extern const f32 lbl_805DDA90;

u8 *TObjCMAutoMkData__ct(u8 *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMAutoMkData;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CE4;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) lbl_805D6520;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x30), (int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x48));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDA90;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    TChCrEffTag__sub_8029ACA8((int) (0xB));
    return arg0;
}

}
