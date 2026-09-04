#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8006CE78_8006CC30 { char pad[0x18]; };
struct VObj_8006CE78_8006CC30 : Base_8006CE78_8006CC30 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12(s32);
};

extern "C" {

void* TCameraCtrl__sub_8006CC30(void* a0);
void TCameraCtrl__sub_8006DCC8(void* p);
void TCameraCtrl__sub_8006DEF4(void);
s32 TCameraCtrl__sub_8006E7FC(void* p);
void TCameraCtrl__sub_8006E804(void* a0);
void *TCameraCtrl__vt0(void);
void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1);
s32 is_flag_set__11TCameraCtrlFv(void);
void set_field_100__11TCameraCtrlFPvi(void* p, s32 v);
void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void *TCameraCtrl__sub_8006E714(void *);
void *TKeyBoardControl__sub_803DEB74(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 is_split_screen();

    extern unsigned char lbl_80488DA0[];
    extern const float lbl_805D9044;
void* TCameraCtrl__sub_8006CC30(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488DA0; *(float*)((char*)a0 + 0x6c) = lbl_805D9044; *(int*)((char*)a0 + 0x38) = 0; return a0; }

void set_pos_target__11TCameraCtrlFPvPvPvi(void *arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) | 8);
    ((VObj_8006CE78_8006CC30*)arg0)->m12(arg3);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) M2C_FIELD(arg2, f32 *, 8);
}

s32 is_flag_set__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(TKeyBoardControl__sub_803DEB74(0x12), u32 *, 8) >> 0x11U) & 1;
}

void TCameraCtrl__sub_8006DCC8(void* p) { *(s32*)((char*)p + 0xfc) = 0; }

void TCameraCtrl__sub_8006DEF4(void) {  }

void *TCameraCtrl__vt0(void) {
    void *o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        o = TCameraCtrl__sub_8006E714(o);
    }
    return o;
}

extern M2C_UNK lbl_80488E00[];

void *deleting_dtor__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488E00;
        M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0x100) = 0;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void set_field_100__11TCameraCtrlFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }
s32 TCameraCtrl__sub_8006E7FC(void* p) { return *(s32*)((char*)p + 0x10c); }

    extern const float TCameraCtrl__data_805D905C;
void TCameraCtrl__sub_8006E804(void* a0) { *(int*)((char*)a0 + 0x18) = 0; *(float*)((char*)a0 + 0x0) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x4) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x8) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0xc) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x10) = TCameraCtrl__data_805D905C; *(float*)((char*)a0 + 0x14) = TCameraCtrl__data_805D905C; }

}
