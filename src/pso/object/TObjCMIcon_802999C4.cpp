#include "pso/TObjCMIcon.h"

s32 lbl_804DBDE0[35] = {
    2, 0x38, 0xA8, 0, 0,
    2, 0x38, 0xA9, 0, 0,
    2, 0x38, 0xAA, 0, 0,
    3, 0x38, 0x37, 0xAA, 0,
    2, 0x37, 0xA7, 0, 0,
    2, 0x37, 0xAB, 0, 0,
    2, 0x37, 0xAC, 0, 0,
};
__declspec(section ".data") f32 lbl_804DBE6C[2] = { 604.0f, 443.0f };

TObjCMIcon::~TObjCMIcon() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__10TObjCMIconFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__10TObjCMIcon[];
extern void *lbl_805D3CF0;

void *__ct__10TObjCMIconFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCMIcon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3CF0;
    return arg0;
}

}
