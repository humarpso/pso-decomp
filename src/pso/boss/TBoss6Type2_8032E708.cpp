#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8032EAE4
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

struct Stack_8032FE50 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
};

struct RecoveredGlobal_803300C8_lbl_80477404 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803300C8_lbl_80477428 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_803300C8_lbl_804EDD94 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
f32 TBoss4Zako__sub_803D8910(void *, int);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
f32 TBoss6Type1__sub_803D9370(void *, int);
f32 TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DF7F0;
extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7F8;
extern const f32 lbl_805DF7FC;
void TBoss6Type2__sub_8032EAE4(u8 *arg0);
int TBoss6Type2__sub_8032F304(void);
int TBoss6Type2__sub_8032F360(void);
void TBoss6Type2__sub_8032F5C4(void *arg0);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
M2C_UNK apply_damage__11TBoss6Type2FPvi(s32, s32);
void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0);
void sync_hp__11TBoss6Type2FPv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E4A94(s32, s32 *, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805DF7FC;
void TObjFish__sub_8032FE50(void *arg0);
s32 TObjFish__sub_8001ED9C(int, int);
extern RecoveredGlobal_803300C8_lbl_80477404 lbl_80477404;
extern RecoveredGlobal_803300C8_lbl_80477428 lbl_80477428;
extern RecoveredGlobal_803300C8_lbl_804EDD94 lbl_804EDD94;
void TBoss6Type2__sub_803300C8(u8 *arg0);
void copy_state__11TBoss6Type2FPvPv(void* p, void* q);
int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1);
}

extern "C" {

void TBoss6Type2__sub_8032E708(void* p, s32 v);
int TBoss6Type2__sub_8032E748(void);
int TBoss6Type2__sub_8032E770(void*, void*);
s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0);
void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void update_all_parts__11TBoss6Type2FPv(void* p);
void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
s32 TBoss6Type2__sub_8032F034(void *);
s32 TBoss6Type2__sub_8032F174();
M2C_UNK TBoss6Type2__sub_8032F418(void *);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
s32 TLobby__sub_800C6C10();
f32 get_random_float__8TObjFishFv(f32);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv((void *)(p)); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

int TBoss6Type2__sub_8032E748(void) { return 0; }
int TBoss6Type2__sub_8032E770(void*, void*) { return 0; }

void update_all_parts__11TBoss6Type2FPv(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type2__sub_8032E770((void*)(p), (void*)((void*)i)); } } }

s32 TBoss6Type2__sub_8032EAB8(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) == 0) {
        return arg1;
    }
    return -arg1;
}

f32 apply_direction_sign__11TBoss6Type2FPvf(void *arg0, f32 farg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        return -farg0;
    }
    return farg0;
}

extern const f32 lbl_805DF7F4;

typedef struct Stack_8032EAE4 Stack_8032EAE4;
void TBoss6Type2__sub_8032EAE4(u8 *arg0) {
  Stack_8032EAE4 stack;
  f32 temp_f1;
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0x37C)))) != 0U)
  {
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
    temp_f1 = TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8));
    if (!(temp_f1 >= lbl_805DF7F0))
    {
      if (temp_f1 <= lbl_805DF7F8)
      {
        stack.sp8 = apply_direction_sign__11TBoss6Type2FPvf((void *) arg0, (f32) lbl_805DF7F4);
      }
      TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
      stack.sp8 *= lbl_805DF7F0;
      stack.spC = lbl_805DF7FC;
      stack.sp10 *= lbl_805DF7F0;
      TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (int) ((*((u32 *) (((s8 *) arg0) + 0x37C))) + 0x38));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
  }
}

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f30 = lbl_805DF7F4 - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64C0((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64DC((void *) (arg2)));
}

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
extern const f32 lbl_805DF820;
extern const f32 lbl_805DF824;

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174() == 0) || (TBoss6Type2__sub_8032F034(arg0) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF81C);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < lbl_805DF7FC) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
        }
    } else if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3BC) + lbl_805DF820);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7F4;
        }
        if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        TBoss6Type2__sub_8032F418(arg0);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF824);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7F4;
        }
    }
}

void TBoss6Type2__sub_8032F2F0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
int TBoss6Type2__sub_8032F304(void) { return 0; }
int TBoss6Type2__sub_8032F360(void) { return 0; }
void TBoss6Type2__sub_8032F5C4(void *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 & ~0xA00);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x38C);
    sync_hp__11TBoss6Type2FPv((void *)((s32)((s32) arg0)));
}
void update_segment_angles__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x3B4);
    M2C_FIELD(arg0, s16 *, 0x39E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x398) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x396) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x396) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x398) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x39E) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x396);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x39A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x398);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x39E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x39C);
}
void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 != temp_r0) {
        if (temp_r4 < temp_r0) {
            sync_hp__11TBoss6Type2FPv((void *)((s32)(arg0)));
            return;
        }
        apply_damage__11TBoss6Type2FPvi(M2C_FIELD(arg0, s32 *, 0x378), temp_r4 - temp_r0);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}
void sync_hp__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}
void TObjFish__sub_8032FE50(void *arg0) {
    Stack_8032FE50 stack;
    s32 temp_r31;
    s32 temp_r31_2;
    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 1);
    temp_r31_2 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 1);
    set_global_param__8TObjFishFi(temp_r31);
    if (lbl_805DF7FC == M2C_FIELD(arg0, f32 *, 0x3E8)) {
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjEneSlimeOne__sub_803E4AF4(temp_r31_2, M2C_FIELD(arg0, s32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    } else {
        stack.sp8 = M2C_FIELD(arg0, s32 *, 0x3F0);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x3F4);
        stack.spC = M2C_FIELD(arg0, s32 *, 0x3DC);
        stack.sp14 = M2C_FIELD(arg0, f32 *, 0x3E0);
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjPlayer__sub_803E4A94(temp_r31_2, &stack.sp8, M2C_FIELD(arg0, f32 *, 0x3E8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    }
    clear_global_state__10TObjPlayerFv();
}
void TBoss6Type2__sub_803300C8(u8 *arg0) {
    s32 temp_r3;
    TBoss6Type2__sub_80330178((s32)((void *) (arg0 + 0x3D4)), (s32)((void *) (&lbl_80477404.value)));
    copy_state__11TBoss6Type2FPvPv((void*)((void *) (arg0 + 0x3DC)), (void*)((void *) (&lbl_80477428.value)));
    temp_r3 = TObjFish__sub_8001ED9C((int) (M2C_FIELD(arg0, s32 *, 0x374)), (int) (M2C_FIELD(&lbl_804EDD94.value, s32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x3F0) = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x3DC) = temp_r3;
    M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) M2C_FIELD(&lbl_804EDD94.value, f32 *, 0xC);
}
void copy_state__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }
int TBoss6Type2__sub_80330178(s32 _w0, s32 _w1) { return 0; }

typedef char RecoveredGlobal_803300C8_lbl_80477404_size[sizeof(RecoveredGlobal_803300C8_lbl_80477404) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_80477428_size[sizeof(RecoveredGlobal_803300C8_lbl_80477428) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_803300C8_lbl_804EDD94_size[sizeof(RecoveredGlobal_803300C8_lbl_804EDD94) == 0x50 ? 1 : -1];

}
