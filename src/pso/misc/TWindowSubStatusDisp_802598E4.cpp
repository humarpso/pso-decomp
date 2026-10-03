#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8025A0A4_lbl_804CF9E0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80259D3C_lbl_804CF9C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
f32 get_random_float__8TObjFishFv(f32, f32);
M2C_UNK play_persistent_sound(int, void *, int, int, int);
void TWindowSubStatusDisp__sub_80259F74(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32, f32);
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;
extern const f32 lbl_805DCF64;
void set_status_entry_target(void *arg0, s32 arg1);
extern M2C_UNK lbl_804CF9E0[];
extern const f32 lbl_805DCF58;
u8 *TWindowSubStatusDisp__sub_8025A0A4(u8 *arg0, u8 *arg1, s32 arg2);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);
extern M2C_UNK lbl_804CF9C8[];
u8 *TWindowSubStatusDisp__sub_80259D3C(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void TWindowSubStatusDisp__sub_80259CE0(void);
void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_80259DB0(u8 *arg0, s32 arg1);
void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1);
void* reset_entry__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2);
void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0);
M2C_UNK __dl__FPv(void *);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
f32 get_random_float__8TObjFishFv(f32, f32);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);

    extern unsigned char lbl_804CF9B0[];
    extern const float lbl_805DCF14;
void* reset_entry__20TWindowSubStatusDispFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF9B0; *(float*)((char*)a0 + 0x14) = lbl_805DCF14; *(unsigned char*)((char*)a0 + 0x1c) = 51; *(unsigned char*)((char*)a0 + 0x1d) = 51; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x24) = 0; *(int*)((char*)a0 + 0x28) = -1; *(int*)((char*)a0 + 0x2c) = -1; *(int*)((char*)a0 + 0x30) = -1; *(int*)((char*)a0 + 0x34) = -1; *(int*)((char*)a0 + 0x18) = 0; return a0; }

void TWindowSubStatusDisp__sub_80259CE0(void) {  }

extern M2C_UNK lbl_8044F010;
extern const f32 lbl_805DCF58;

extern M2C_UNK lbl_804CF9C8[];

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9C8;
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8044F010;
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;

typedef char RecoveredGlobal_80259D3C_lbl_804CF9C8_size[sizeof(RecoveredGlobal_80259D3C_lbl_804CF9C8) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_80259D3C(u8 *arg0, u8 *arg1, s32 arg2) {
    reset_entry__20TWindowSubStatusDispFPv((void*)((void *) (arg0)), (int)((void *) (arg2)));
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80259D3C_lbl_804CF9C8 *)&lbl_804CF9C8).value;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    return arg0;
}

void TWindowSubStatusDisp__sub_80259DB0(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DCF58;
}

void set_animated_target__20TWindowSubStatusDispFPvif(void *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    f32 var_f31;

    if (M2C_FIELD(arg0, f32 *, 0x28) != (f32) arg1) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) arg1;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
        var_f31 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x24);
        var_f31 = var_f31 / farg0;
        if (get_random_float__8TObjFishFv(var_f31, temp_f2) < lbl_805DCF5C) {
            if (var_f31 > lbl_805DCF58) {
                var_f31 = lbl_805DCF5C;
            } else {
                var_f31 = lbl_805DCF60;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x2C) = var_f31;
    }
}

extern M2C_UNK lbl_804CF9E0[];

void set_status_entry_target(void *arg0, s32 arg1) {
  f32 temp_f2;
  f32 var_f31;
  if ((*((f32 *) (((s8 *) arg0) + 0x28))) != ((f32) arg1))
  {
    *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) arg1;
    temp_f2 = *((f32 *) (((s8 *) arg0) + 0x28));
    var_f31 = temp_f2 - (*((f32 *) (((s8 *) arg0) + 0x24)));
    var_f31 = var_f31 * lbl_805DCF64;
    if (get_random_float__8TObjFishFv(var_f31, temp_f2) < lbl_805DCF5C)
    {
      if (var_f31 > lbl_805DCF58)
      {
        var_f31 = lbl_805DCF5C;
      }
      else
      {
        var_f31 = lbl_805DCF60;
      }
    }
    *((f32 *) (((s8 *) arg0) + 0x2C)) = var_f31;
  }
}

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp__sub_80259F74(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    if (M2C_FIELD(arg0, f32 *, 0x28) != M2C_FIELD(arg0, f32 *, 0x24)) {
        if (M2C_FIELD(arg0, u16 *, 0) & 8) {
            play_persistent_sound((int) (0x44E03), (void *) (arg0), (int) (0), (int) (0), (int) (0));
        }
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
        temp_f30 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x24);
        temp_f31 = get_random_float__8TObjFishFv((f32) (M2C_FIELD(arg0, f32 *, 0x2C)), (f32) (temp_f2));
        if (((f32 (*)(f32)) get_random_float__8TObjFishFv)(temp_f30) < temp_f31) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
        } else {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(arg0, f32 *, 0x2C));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, f32 *, 0x24);
    }
}
#pragma pop

void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9E0;
        TWindowSubStatusDisp__sub_80259CE4((void *)((void *)(arg0)), (s16)((s16)(0)));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8025A0A4_lbl_804CF9E0_size[sizeof(RecoveredGlobal_8025A0A4_lbl_804CF9E0) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_8025A0A4(u8 *arg0, u8 *arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80259D3C((u8 *)(arg0), (u8 *)(arg1), (s32)(arg2));
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_8025A0A4_lbl_804CF9E0 *)&lbl_804CF9E0).value;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DCF58;
    return arg0;
}

}
