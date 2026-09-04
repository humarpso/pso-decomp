#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowDD__sub_80348398(void);
int TWindowDD__sub_80348424(void);
int TWindowDD__sub_80348448(void);
int TWindowDD__sub_80348470(void);
int TWindowDD__sub_803484C4(void);
int TWindowDD__sub_80348520(void*);
int TWindowDD__sub_803485F4(void);
s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0);
s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0);
void dispatch_state__9TWindowDDFv(void);
void set_state__9TWindowDDFPv(void* p);
int test_input_flag_4__9TWindowDDFPv(void* p);
void update_state__9TWindowDDFv(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TWindowDD__sub_80340508(void*, int);
M2C_UNK TWindowDD__sub_8034435C();
M2C_UNK TWindowDD__sub_80344568();
M2C_UNK TWindowDD__sub_80344774();
M2C_UNK TWindowDD__sub_80344980();
M2C_UNK TWindowDD__sub_80344F54();
M2C_UNK TWindowDD__sub_80345608();
M2C_UNK TWindowDD__sub_80345C64();
M2C_UNK TWindowDD__sub_803461CC();
M2C_UNK TWindowDD__sub_80346434();
M2C_UNK TWindowDD__sub_80346640();
int TWindowDD__sub_8034B008(void*);

int test_input_flag_4__9TWindowDDFPv(void* p) { return TWindowDD__sub_80340508((char*)p + 0x1c, 4); }

extern s32 TWindowDD__data_805D6E08;

void dispatch_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__data_805D6E08) {
    case 0:
        TWindowDD__sub_80346640();
        return;
    default:
        TWindowDD__sub_80346434();
        return;
    case 4:
        TWindowDD__sub_80344774();
        return;
    case 2:
        TWindowDD__sub_80344568();
        return;
    case 3:
        TWindowDD__sub_8034435C();
        return;
    }
}

int TWindowDD__sub_80348398(void) { return 0; }

int TWindowDD__sub_80348424(void) { return TWindowDD__sub_8034B008((void*)(1)); }

int TWindowDD__sub_80348448(void) { return TWindowDD__sub_8034B008((void*)(0)); }
int TWindowDD__sub_80348470(void) { return 0; }

void set_state__9TWindowDDFPv(void* p) { *(int*)((char*)p + 0xa8) = 3; TWindowDD__sub_80348520((void*)(p)); }

int TWindowDD__sub_803484C4(void) { return 0; }
int TWindowDD__sub_80348520(void*) { return 0; }
int TWindowDD__sub_803485F4(void) { return 0; }

extern s32 TWindowDD__data_805D6E08;

void update_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__data_805D6E08) {
    case 0:
        TWindowDD__sub_803461CC();
        return;
    default:
        TWindowDD__sub_80345C64();
        return;
    case 4:
        TWindowDD__sub_80345608();
        return;
    case 2:
        TWindowDD__sub_80344F54();
        return;
    case 3:
        TWindowDD__sub_80344980();
        return;
    }
}

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
