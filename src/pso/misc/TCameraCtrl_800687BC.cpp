#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TCameraCtrl__sub_800689E8(void);
void update_position__11TCameraCtrlFPv(u8 *arg0);
s32 get_camera_no__11TCameraCtrlFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
s32 is_split_screen();
M2C_UNK approach_camera_vector(void *, void *, f32);
extern int TCameraCtrl__data_805D4E00;
void TCameraCtrl__sub_80069BD8(u8 *arg0);
}

extern "C" {

void TCameraCtrl__sub_800687BC(void);
void TCameraCtrl__sub_800689E8(void);
f32 TCameraCtrl__sub_80068A04(void);
void create__11TCameraCtrlFv(void);
f32 get_fov__11TCameraCtrlFv(void);
f32 get_split_offset__11TCameraCtrlFi(s32 arg0);
void* get_target__11TCameraCtrlFPv(void* p);
void* get_target_ptr__11TCameraCtrlFPv(void* p);
f32 get_view_scale__11TCameraCtrlFv(void);
void update_position__11TCameraCtrlFPv(u8 *arg0);
M2C_UNK TCameraCtrl__ct(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_camera_no__11TCameraCtrlFv();
s32 is_split_screen();

void TCameraCtrl__sub_800687BC(void) {  }
void* get_target_ptr__11TCameraCtrlFPv(void* p) { return (char*)p + 0x44; }

    extern int TCameraCtrl__data_805D4E00;
void TCameraCtrl__sub_800689E8(void) { TCameraCtrl__data_805D4E00 = 0; }

extern f32 TCameraCtrl__data_805D8FA8;

f32 TCameraCtrl__sub_80068A04(void) {
    return TCameraCtrl__data_805D8FA8;
}

extern f32 TCameraCtrl__data_805D8FA8;
extern f32 lbl_805D8FB0;
extern f32 lbl_805D8FB4;

f32 get_split_offset__11TCameraCtrlFi(s32 arg0) {
    if ((is_split_screen() != 0) && (get_camera_id__11TCameraCtrlFv() == 2)) {
        if (arg0 == 0) {
            return lbl_805D8FB0;
        }
        return lbl_805D8FB4;
    }
    return TCameraCtrl__data_805D8FA8;
}

extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

f32 get_fov__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

extern f32 TCameraCtrl__data_805D8FAC;
extern f32 lbl_805D8FC8;

f32 get_view_scale__11TCameraCtrlFv(void) {
    if (is_split_screen() != 0) {
        if (get_camera_id__11TCameraCtrlFv() == 2) {
            return TCameraCtrl__data_805D8FAC;
        }
        return lbl_805D8FC8;
    }
    return TCameraCtrl__data_805D8FAC;
}

extern s32 tl_camera;

void create__11TCameraCtrlFv(void) {
    void *obj = __nw__7TObjectFUl(0x1D4);
    if (obj != 0) {
        TCameraCtrl__ct(obj, tl_camera);
    }
}

void* get_target__11TCameraCtrlFPv(void* p) { return (char*)p + 0x68; }

void update_position__11TCameraCtrlFPv(u8 *arg0) {
    u8 *temp_r3;

    M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(arg0, f32 *, 0x1A0);
    M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(arg0, f32 *, 0x1A4);
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(arg0, f32 *, 0x1A8);
    M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(arg0, f32 *, 0x1AC);
    M2C_FIELD(arg0, f32 *, 0x188) = (f32) M2C_FIELD(arg0, f32 *, 0x1B0);
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) M2C_FIELD(arg0, f32 *, 0x1B4);
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
    M2C_FIELD(arg0, f32 *, 0x1CC) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
    M2C_FIELD(arg0, f32 *, 0x1D0) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    if (is_split_screen() != 0) {
        temp_r3 = arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC);
        M2C_FIELD(temp_r3, f32 *, 0x134) = (f32) M2C_FIELD(arg0, f32 *, 0x178);
        M2C_FIELD(temp_r3, f32 *, 0x138) = (f32) M2C_FIELD(arg0, f32 *, 0x17C);
        M2C_FIELD(temp_r3, f32 *, 0x13C) = (f32) M2C_FIELD(arg0, f32 *, 0x180);
    }
}
void TCameraCtrl__sub_80069BD8(u8 *arg0) {
  u8 *new_var;
  u8 *temp_r30;
  u8 *temp_r30_2;
  u8 *temp_r31;
  if ((*(s32 *)&TCameraCtrl__data_805D4E00) & 1)
  {
    update_position__11TCameraCtrlFPv((u8 *)(arg0));
    TCameraCtrl__sub_800689E8();
    return;
  }
  if (is_split_screen() != 0)
  {
    temp_r30 = (u8 *) (arg0 + (get_camera_no__11TCameraCtrlFv() * 0xC));
    new_var = (u8 *) (temp_r30 + 0xD4);
    temp_r31 = new_var;
    approach_camera_vector((void *) temp_r31, (void *) (arg0 + 0x1A0), (f32) (*((f32 *) (((s8 *) arg0) + 0x1B8))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x178), (int) temp_r31);
    temp_r30_2 = (u8 *) (temp_r30 + 0x104);
    approach_camera_vector((void *) temp_r30_2, (void *) (arg0 + 0x1AC), (f32) (*((f32 *) (((s8 *) arg0) + 0x1BC))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x184), (int) temp_r30_2);
    return;
  }
  approach_camera_vector((void *) (arg0 + 0x178), (void *) (arg0 + 0x1A0), (f32) (*((f32 *) (((s8 *) arg0) + 0x1B8))));
  approach_camera_vector((void *) (arg0 + 0x184), (void *) (arg0 + 0x1AC), (f32) (*((f32 *) (((s8 *) arg0) + 0x1BC))));
}

}
