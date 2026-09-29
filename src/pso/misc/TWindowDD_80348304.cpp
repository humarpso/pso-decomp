#include "pso/misc/TWindowDD.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TWindowDD__sub_80343BC0(int, void *);
M2C_UNK reset_selection__9TWindowDDFPv(void *, void *);
int TWindowDD__sub_80348520(void*);
void TWindowDD__sub_803484C4(u8 *arg0);
s32 TWindowDD__sub_80348470(u8 *arg0);
int TWindowDD__sub_8034B008(s32, s32);
void TWindowDD__sub_80348448(M2C_UNK arg0, s16 arg1);
int TWindowDD__sub_803485F4(s32, s32 *);
void TWindowDD__sub_80348688(u8 *arg0, s32 *arg1);
}

extern "C" {

int TWindowDD__sub_80348398(void);
int TWindowDD__sub_80348424(s32 _w0, s32 _w1);
int TWindowDD__sub_80348520(void*);
s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0);
s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0);
void dispatch_state__9TWindowDDFv(void);
void set_state__9TWindowDDFPv(void* p);
int test_input_flag_4__9TWindowDDFPv(void* p);
void update_state__9TWindowDDFv(void);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
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

int test_input_flag_4__9TWindowDDFPv(void* p) { return TWindowDD_check_input_mask((char*)p + 0x1c, 4); }

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

int TWindowDD__sub_80348424(s32 _w0, s32 _w1) { return TWindowDD__sub_8034B008((s32)((void*)(1)), (s32)(_w1)); }

void TWindowDD__sub_80348448(M2C_UNK arg0, s16 arg1) {
    TWindowDD__sub_8034B008((s32)(0), (s32)((s32) arg1));
}

s32 TWindowDD__sub_80348470(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_r3 == 2) {
        return 1;
    }
    return ((temp_r3 - 3) == 0) ? 2 : 0;
}

void set_state__9TWindowDDFPv(void* p) { *(int*)((char*)p + 0xa8) = 3; TWindowDD__sub_80348520((void*)(p)); }

void TWindowDD__sub_803484C4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = 2;
    TWindowDD__sub_80343BC0((int) (M2C_FIELD(arg0, s32 *, 0xC0)), (void *) (arg0 + 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        reset_selection__9TWindowDDFPv((void *) (arg0), (void *) (arg0 + 0xC4));
    }
    TWindowDD__sub_80348520((void*)((void *) (arg0)));
}

int TWindowDD__sub_80348520(void*) { return 0; }
int TWindowDD__sub_803485F4(s32 _w0, s32 * _w1) { return 0; }

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

void TWindowDD__sub_80348688(u8 *arg0, s32 *arg1) {
    s32 p = *arg1;
    if (((s32)TWindowDD__sub_803485F4((s32)(3), (s32 *)(arg1))) != 0) {
        arg0[p++] = 0xA;
        arg0[p++] = 0x3E;
        arg0[p++] = 0x20;
    }
    *arg1 = p;
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
