#include "pso/TChCrEffTagStr.h"

TChCrEffTagStr::~TChCrEffTagStr() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);
void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

void TChCrEffTagStr__sub_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern M2C_UNK __vt__14TChCrEffTagStr[];
extern void *lbl_805D3D18;
extern const f32 lbl_805DDCCC;

void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TChCrEffTagStr;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D18;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 40), arg3);
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DDCCC;
    return arg0;
}

}
