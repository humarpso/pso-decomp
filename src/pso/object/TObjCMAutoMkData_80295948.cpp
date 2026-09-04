#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjCMAutoMkData__ct(u8 *arg0);
void *__dt__16TObjCMAutoMkDataFv(void *arg0, s16 arg1);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
M2C_UNK fn_802911E8(f32);
M2C_UNK set_eff_tag__11TChCrEffTagFi(int);

extern M2C_UNK __vt__16TObjCMAutoMkData[];
extern const f32 lbl_805DDA70;

void *__dt__16TObjCMAutoMkDataFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCMAutoMkData;
        fn_802911E8(lbl_805DDA70);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

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
    set_eff_tag__11TChCrEffTagFi((int) (0xB));
    return arg0;
}

}
