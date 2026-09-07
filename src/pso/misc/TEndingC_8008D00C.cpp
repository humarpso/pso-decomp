#include "pso/TEndingC.h"

TEndingC::~TEndingC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8008D3D4___vt__8TEndingC { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
s32 TKeyBoardControl__sub_8000F828(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008D3D4___vt__8TEndingC __vt__8TEndingC;
extern s32 lbl_805D2960;
extern const f32 lbl_805D95CC;
extern const f32 lbl_805D95D4;
extern const f32 lbl_805D95D8;
extern const f32 lbl_805D95DC;
extern const f32 lbl_805D95E0;
extern const f32 lbl_805D95E4;
extern const f32 lbl_805D95E8;
extern const f32 lbl_805D95EC;
extern const f32 lbl_805D95F0;
extern const f32 lbl_805D95F4;
extern const f32 lbl_805D95F8;
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1);
}

extern "C" {

void render__8TEndingCFv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32, f32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_global_param__8TObjFishFi(void *);

extern M2C_UNK lbl_8048EB30[];
extern const f32 lbl_805D95C0;
extern const f32 lbl_805D95C4;
extern const f32 lbl_805D95C8;

void render__8TEndingCFv(u8 *arg0) {
    set_global_param__8TObjFishFi(lbl_8048EB30);
    TWindowSubStatusDisp__sub_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(1, ((s32) (lbl_805D95C0 * M2C_FIELD(arg0, f32 *, 0x28)) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x30, lbl_805D95C4);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x50, lbl_805D95C4);
    TWindowSubStatusDisp__sub_803DF160(0, ((s32) (lbl_805D95C0 * M2C_FIELD(arg0, f32 *, 0x2C)) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x70, lbl_805D95C8);
    get_player__20TWindowSubStatusDispFv();
}
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TEndingC.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2960;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805D95D8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D95DC;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D95EC;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805D95F0;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) lbl_805D95F4;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805D95CC;
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x1E;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x19;
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    return arg0;
}

}
