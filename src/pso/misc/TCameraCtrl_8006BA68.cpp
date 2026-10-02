#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct E_8006BAC8 { f32 x; f32 y; f32 z; };

struct O_8006BAC8 { u8 pad[0xd4]; E_8006BAC8 arr[1]; };

struct E_8006BAB4 { f32 x; f32 y; f32 z; };

struct O_8006BAB4 { u8 pad[0x104]; E_8006BAB4 arr[1]; };

struct Vec_8006BB1C { f32 x, y, z; };

struct Pad_8006BB1C {
    u8 pad0[0x70];
    u32 buttons;
    u8 pad74[0x84 - 0x74];
    s16 sx;
    s16 sy;
};

struct Obj_8006BB1C {
    u8 pad0[0x2c];
    s32 yaw;
    s32 pitch;
    u8 pad34[0x3c - 0x34];
    Vec_8006BB1C eye;
    Vec_8006BB1C at;
    u8 pad54[0x6c - 0x54];
    f32 dist;
};

extern "C" {
E_8006BAC8 *TCameraCtrl__sub_8006BAC8(O_8006BAC8 *self, s32 i);
E_8006BAB4 *TCameraCtrl__sub_8006BAB4(O_8006BAB4 *self, s32 i);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern Pad_8006BB1C lbl_8050E208;
extern const f32 lbl_805D9008;
void TCameraCtrl__sub_8006BB1C(Obj_8006BB1C *arg0);
}

extern "C" {

void* TCameraCtrl__sub_8006BA68(void* a0);
unsigned char TCameraCtrl__sub_8006BADC(void);
void *TCameraCtrl__vt4(void);
void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void TCameraCtrl__sub_800686BC(void *, int);
int TCameraCtrl__sub_80068714(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void *init_defaults__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B08[];
    extern int TCameraCtrl__data_805D4E10;
void* TCameraCtrl__sub_8006BA68(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B08; *(int*)((char*)a0 + 0x38) = 4; TCameraCtrl__data_805D4E10 = 0; return a0; }

    extern unsigned char TCameraCtrl__data_805D4E20;

E_8006BAB4 *TCameraCtrl__sub_8006BAB4(O_8006BAB4 *self, s32 i) {
    return &self->arr[i];
}

E_8006BAC8 *TCameraCtrl__sub_8006BAC8(O_8006BAC8 *self, s32 i) {
    return &self->arr[i];
}

unsigned char TCameraCtrl__sub_8006BADC(void) {  return TCameraCtrl__data_805D4E20; }

void *TCameraCtrl__vt4(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = init_defaults__11TCameraCtrlFPv(o);
    }
    return o;
}

extern M2C_UNK lbl_80488B38[];

#pragma push
#pragma fp_contract on
void TCameraCtrl__sub_8006BB1C(Obj_8006BB1C *arg0) {
    Pad_8006BB1C *pad = &lbl_8050E208;
    u32 btn = pad->buttons;
    s16 sx = pad->sx;
    s16 sy = pad->sy;
    f32 r;
    if (btn & 0x20000) {
        arg0->dist += lbl_805D9008;
    } else if (btn & 0x10000) {
        arg0->dist -= lbl_805D9008;
    }
    if (arg0->dist < 10.0f) {
        arg0->dist = 10.0f;
    }
    if (arg0->dist > 300.0f) {
        arg0->dist = 300.0f;
    }
    arg0->pitch += sx * 3;
    arg0->yaw += sy * 3;
    r = arg0->dist * TBoss8Dragon__sub_803D64DC(arg0->yaw);
    arg0->eye.x = r * TBoss8Dragon__sub_803D64C0(arg0->pitch) + arg0->at.x;
    arg0->eye.y = arg0->at.y - arg0->dist * TBoss8Dragon__sub_803D64C0(arg0->yaw);
    arg0->eye.z = r * TBoss8Dragon__sub_803D64DC(arg0->pitch) + arg0->at.z;
}
#pragma pop

void *__dt_deleting_3__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488B38;
        TCameraCtrl__sub_800686BC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
