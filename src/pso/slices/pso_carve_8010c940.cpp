#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *fn_8022DBC4(u8, u8, s32);
void fn_8010CCB0(void);
void fn_8010CCB4(void);
int fn_8010CCEC(void* p);
int fn_8011C1E8(void*);

int fn_8010C940(void) { return 0; }
int fn_8010CA08(void) { return 0; }
int fn_8010CAB0(void) { return 0; }
int fn_8010CACC(void) { return 0; }
int fn_8010CB10(void) { return 0; }
int fn_8010CBAC(void) { return 0; }
int fn_8010CC68(void) { return 0; }
void fn_8010CCB0(void) {  }
void fn_8010CCB4(void) {  }
u8 fn_8010CCB8(void) {
    void *temp_r3;

    temp_r3 = fn_8010EA38();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u8 *, 0x16);
    }
    return 0U;
}
int fn_8010CCEC(void* p) { return fn_8011C1E8(p); }
int fn_8010CD0C(void) { return 0; }
void fn_8010CD6C(void *arg0) {
    fn_80101A48(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1));
}
s16 fn_8010CD98(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs(&sp8);
    return sp8;
}
int fn_8010CDC8(void) { return 0; }
s16 fn_8010CDEC(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 8);
    bswap_16__FPUs(&sp8);
    return sp8;
}
int fn_8010CE1C(void) { return 0; }
s16 fn_8010CE40(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs(&sp8);
    return sp8;
}
int fn_8010CE70(void) { return 0; }
s16 fn_8010CE94(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = fn_8022DBC4(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

}
