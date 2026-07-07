#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TORevlightCave01Base {
    char pad0[0x18];
};
struct TORevlightCave01 : TORevlightCave01Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32 b);
};

extern "C" {

void *TORevlightCave01__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8015858C();

extern const M2C_UNK lbl_80442498[];
extern const M2C_UNK __vt__16TORevlightCave01[];
extern s32 lbl_805D30D8;
extern void *lbl_805D5A78;
extern const f32 lbl_805DB960;
extern const f32 lbl_805DB964;
extern const f32 lbl_805DB968;
extern const f32 lbl_805DB96C;

void *TORevlightCave01__ct(void *arg0, s32 arg1, s32 arg2) {
    fn_8015858C();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__16TORevlightCave01;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30D8;
    ((TORevlightCave01*)arg0)->m5(arg2);
    M2C_FIELD(arg0, void **, 0x34) = (void *) M2C_FIELD(M2C_FIELD(lbl_805D5A78, void **, 0x42C), void **, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5A78, void **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xBC) = (void *) M2C_FIELD(M2C_FIELD(lbl_805D5A78, void **, 0x430), void **, 4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB960;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - lbl_805DB964);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB968;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (lbl_805DB96C * M2C_FIELD(arg0, f32 *, 0x68));
    return arg0;
}

}
