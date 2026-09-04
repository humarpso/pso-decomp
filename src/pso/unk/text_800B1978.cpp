#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B1A90_800B1978 { char pad[0x18]; };
struct VObj_800B1A90_800B1978 : Base_800B1A90_800B1978 {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)VV(62)VV(63)VV(64)VV(65)VV(66)VV(67)VV(68)VV(69)VV(70)
VV(71)VV(72)VV(73)VV(74)VV(75)VV(76)VV(77)VV(78)VV(79)VV(80)
VV(81)VV(82)VV(83)VV(84)VV(85)VV(86)VV(87)VV(88)VV(89)VV(90)
VV(91)VV(92)VV(93)VV(94)VV(95)VV(96)VV(97)VV(98)VV(99)
#undef VV
    virtual u32 v102();
};
struct Base_800B2214_800B1978 { char pad[0xC]; };
struct VObj_800B2214_800B1978 : Base_800B2214_800B1978 {
    virtual void m2(int);
};

extern "C" {

void TObjEneBm3Fly__vt26(void);
void TObjEneBm3Fly__vt59(void);
void TObjEneBm3Fly__vt60(void* p);
int TObjEneBm3Fly__vt61(void);
void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1);
void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void release_shared_data__13TObjEneBm3FlyFv(void);
void store_position__13TObjEneBm3FlyFPv(u8 *arg0);
void update__13TObjEneBm3FlyFPv(void *arg0);
void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0);
void update_height_offset__13TObjEneBm3FlyFPv(void *arg0);
void update_state_flag__13TObjEneBm3FlyFPv(void *arg0);
void *TObjEneBm3Fly__ct(void *, void *, void *, void *, void *, void *, void *);
u32 TObjEneDD__sub_800BAC14();
int TObjEneDD__sub_800BBA18(void*, void*);
u32 TObjEneEpsilon__sub_800B92F8(void *, void *, f32);
s32 TObjEneEpsilon__sub_800B96A4();
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

void store_position__13TObjEneBm3FlyFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC, arg0);
}

extern f32 *lbl_805D50EC;

void update_state_flag__13TObjEneBm3FlyFPv(void *arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x350);
    if (TObjEneEpsilon__sub_800B92F8(arg0, M2C_FIELD(temp_r5, void **, 8), *lbl_805D50EC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_dd_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (TObjEneDD__sub_800BAC14() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_collide_flag__13TObjEneBm3FlyFPv(void *arg0) {
    if (((VObj_800B1A90_800B1978 *)arg0)->v102() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD);
}

void update_height_offset__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x450));
}
void update__13TObjEneBm3FlyFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x44C));
}
void TObjEneBm3Fly__vt59(void) {  }
void TObjEneBm3Fly__vt60(void* p) { if (*(short*)((char*)p + 0x326) != 6) { TObjEneDD__sub_800BBA18(p, (void*)6); } }

int TObjEneBm3Fly__vt61(void) { return 0; }

void TObjEneBm3Fly__vt26(void) {  }

extern M2C_UNK __vt__13TObjEneBm3Fly[];

void *__dt__13TObjEneBm3FlyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneBm3Fly;
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TObjEneBm3Fly__data_805D50F4;

void release_shared_data__13TObjEneBm3FlyFv(void) {
    void *obj = TObjEneBm3Fly__data_805D50F4;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214_800B1978 *)obj)->m2(1);
        }
        TObjEneBm3Fly__data_805D50F4 = NULL;
    }
}

extern void *tl_04;

void * create__13TObjEneBm3FlyFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4A8);
    if (o != NULL) {
        o = TObjEneBm3Fly__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
