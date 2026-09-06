#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
void TObjPlayer__sub_801BEE24(void* p, s16 v);
void TObjPlayer__sub_801BEE24(void* p, s16 v);
void TObjPlayer__sub_801BEE2C(void* p, s16 v);
void TObjPlayer__sub_801BEE2C(void* p, s16 v);
void bswap_32__FPUl(void *);
void TObjPlayer__sub_801BEE34(void *arg0);
void TObjPlayer__sub_801BEEE0(void* p, void* q);
void TObjPlayer__sub_801BEEE0(void* p, void* q);
void TObjPlayer__sub_801BEF30(void* p, void* q);
void TObjPlayer__sub_801BEF30(void* p, void* q);
void TObjPlayer__sub_801BEF44(void* p, void* q);
void TObjPlayer__sub_801BEF44(void* p, void* q);
void TObjPlayer__sub_801BEF60(void* p, s32 v);
void TObjPlayer__sub_801BEF60(void* p, s32 v);
int TObjPlayer__sub_801BEF68(void* p);
int TObjPlayer__sub_801BEF8C(void*);
int TObjPlayer__sub_801BEF68(void* p);
int TObjPlayer__sub_801BF014(void* p, int a1);
int TObjPlayer__sub_8030A1E4(void*, int, int);
int TObjPlayer__sub_801BF014(void* p, int a1);
int TObjPlayer__sub_801BF060(void* p, int a1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
int TObjPlayer__sub_801BF060(void* p, int a1);
int TObjPlayer__sub_801BF084(void* p);
int TObjPlayer__sub_801BF0A8(void*);
int TObjPlayer__sub_801BF084(void* p);
int TObjPlayer__sub_801BF110(void* p);
int TObjPlayer__sub_801BF134(void*);
int TObjPlayer__sub_801BF110(void* p);
void* TObjPlayer__sub_801BF1D4(void* p);
void* TObjPlayer__sub_801BF1D4(void* p);
int TObjPlayer__sub_801BF204(void* p, int a1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
int TObjPlayer__sub_801BF204(void* p, int a1);
int TObjPlayer__sub_801BF2F8(void* p, int a1);
int TObjPlayer__sub_8030A2CC(void*, int, int);
int TObjPlayer__sub_801BF2F8(void* p, int a1);
void* TObjPlayer__sub_801BF31C(void* p);
void* TObjPlayer__sub_801BF31C(void* p);
int TObjPlayer__sub_801BF3A0(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TObjPlayer__sub_801BF3A0(void* p);
int TObjPlayer__sub_801BF3C4(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TObjPlayer__sub_801BF3C4(void* p);
int TObjPlayer__sub_801BF3E8(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801BF3E8(void* p);
void TObjPlayer__sub_801BF40C(void* p, u8 v);
void TObjPlayer__sub_801BF40C(void* p, u8 v);
void TObjPlayer__sub_801BEE18(u8 *arg0, s32 arg1);
u8 TObjPlayer__sub_801BF460(s32 *arg0, s32 arg1);
void TObjPlayer__sub_801BF488(s32 *arg0, s32 arg1);
void TObjPlayer__sub_801BF4A0(s32 *arg0, s32 arg1);
int TObjPlayer__sub_801BF2F8(void* p, int a1);
void* TObjPlayer__sub_801BF31C(void* p);
void TObjPlayer__sub_801BF2C0(s32 arg0);
void* TObjPlayer__sub_801BF1D4(void* p);
M2C_UNK TObjPlayer__sub_80309FD4(void *, int);
void TObjPlayer__sub_801BF288(s32 arg0);
void* TObjPlayer__sub_801BF1D4(void* p);
M2C_UNK TObjPlayer__sub_80309F78(void *, int);
void TObjPlayer__sub_801BF250(s32 arg0);
void* TObjPlayer__sub_801BF1D4(void* p);
M2C_UNK TObjPlayer__sub_80309F30(void *, int);
void TObjPlayer__sub_801BF19C(s32 arg0);
void TObjPlayer__sub_801BEEAC(u8 *arg0, u8 *arg1);
void TObjPlayer__sub_801BEEEC(u8 *arg0, u8 *arg1);
int check_hit_by_id__10TObjPlayerFiii(void*, int, int);
void TObjPlayer__sub_801BF34C(s32 arg0, s32 arg1);
int TObjPlayer__sub_801BF014(void* p, int a1);
int TObjPlayer__sub_801BEFEC(u16 *arg0);
int TObjPlayer__sub_801BF060(void* p, int a1);
int TObjPlayer__sub_801BF038(u16 *arg0);
int TObjPlayer__sub_801BF204(void* p, int a1);
int TObjPlayer__sub_801BF1DC(u16 *arg0);
M2C_UNK check_hit_by_id_431__10TObjPlayerFPvi(void *, u16);
void TObjPlayer__sub_801BF228(u16 *arg0);
void TObjPlayer__sub_801BF34C(s32 arg0, s32 arg1);
void TObjPlayer__sub_801BF324(u16 *arg0);
}

extern "C" {

u8 TObjPlayer__sub_801BED70(void* p);
u8 TObjPlayer__sub_801BED78(void* p);
u8 TObjPlayer__sub_801BED80(void* p);
u8 TObjPlayer__sub_801BED88(void* p);
u8 TObjPlayer__sub_801BED90(void* p);
void TObjPlayer__sub_801BED98(void* p, u8 v);
void TObjPlayer__sub_801BEDA0(void* p, u8 v);
void TObjPlayer__sub_801BEDA8(void* p, u8 v);
void TObjPlayer__sub_801BEDB0(void* p, u8 v);
void TObjPlayer__sub_801BEDB8(void* p, u8 v);
void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1);
void TObjPlayer__sub_801BF47C(void* p);
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_action_palette_mode__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c);
void set_shared_count__10TObjPlayerFi(int a0);
void set_shared_flag__10TObjPlayerFi(int a0);
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
int update_action_palette__10TObjPlayerFPv(void* p);
M2C_UNK __dl__FPv(void *);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_mode__20TWindowActionPaletteFPvUc(void*);
int set_slot__20TWindowActionPaletteFPvUc(void*);
s32 try_add_item_count__10TObjPlayerFiiiUc(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);

    extern int lbl_805D5D74;
void set_shared_flag__10TObjPlayerFi(int a0) { lbl_805D5D74 = a0; }

    extern int lbl_805D5D70;
void set_shared_count__10TObjPlayerFi(int a0) { lbl_805D5D70 = a0; }

void add_item_count_kind4__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 4, arg2);
}
void try_add_item_count_kind3__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 3, arg2);
}
void try_add_item_count_type2__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 2, arg2);
}
void add_item_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 1, arg2);
}
void try_add_item__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    try_add_item_count__10TObjPlayerFiiiUc(arg0, arg1, 0, arg2);
}
u8 TObjPlayer__sub_801BED70(void* p) { return *(u8*)((char*)p + 0x4); }
u8 TObjPlayer__sub_801BED78(void* p) { return *(u8*)((char*)p + 0x3); }
u8 TObjPlayer__sub_801BED80(void* p) { return *(u8*)((char*)p + 0x2); }
u8 TObjPlayer__sub_801BED88(void* p) { return *(u8*)((char*)p + 0x1); }
u8 TObjPlayer__sub_801BED90(void* p) { return *(u8*)((char*)p + 0x0); }
void TObjPlayer__sub_801BED98(void* p, u8 v) { *(u8*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801BEDA0(void* p, u8 v) { *(u8*)((char*)p + 0x3) = v; }
void TObjPlayer__sub_801BEDA8(void* p, u8 v) { *(u8*)((char*)p + 0x2) = v; }
void TObjPlayer__sub_801BEDB0(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void TObjPlayer__sub_801BEDB8(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

extern M2C_UNK lbl_804C3E44[];

void *TObjPlayer__sub_801BEDC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804C3E44;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void set_position__10TObjPlayerFPvfff(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x38) = a; *(f32*)((char*)p + 0x3c) = b; *(f32*)((char*)p + 0x40) = c; }

void TObjPlayer__sub_801BEE18(u8 *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x20) = arg1;
}

void TObjPlayer__sub_801BEE24(void* p, s16 v) { *(s16*)((char*)p + 0x2be) = v; }

void TObjPlayer__sub_801BEE2C(void* p, s16 v) { *(s16*)((char*)p + 0x2bc) = v; }

void TObjPlayer__sub_801BEE34(void *arg0) {
    bswap_32__FPUl(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

void TObjPlayer__sub_801BEEAC(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    *(M2CCopy_8 *)((s32) arg0 + 0xC) = *(const M2CCopy_8 *)((s32) arg1 + 0xC);
}

void TObjPlayer__sub_801BEEE0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

void TObjPlayer__sub_801BEEEC(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
}

void TObjPlayer__sub_801BEF30(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

void TObjPlayer__sub_801BEF44(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); }

void TObjPlayer__sub_801BEF60(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }

int TObjPlayer__sub_801BEF68(void* p) { return TObjPlayer__sub_801BEF8C((char*)p + 0x4); }

int TObjPlayer__sub_801BEFEC(u16 *arg0) { return TObjPlayer__sub_801BF014((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int TObjPlayer__sub_801BF014(void* p, int a1) { return TObjPlayer__sub_8030A1E4(p, a1, 508); }

int TObjPlayer__sub_801BF038(u16 *arg0) { return TObjPlayer__sub_801BF060((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int TObjPlayer__sub_801BF060(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii(p, a1, 508); }

int TObjPlayer__sub_801BF084(void* p) { return TObjPlayer__sub_801BF0A8((char*)p + 0x4); }

int TObjPlayer__sub_801BF110(void* p) { return TObjPlayer__sub_801BF134((char*)p + 0x4); }

void TObjPlayer__sub_801BF19C(s32 arg0) {
    TObjPlayer__sub_80309F30((void *) (arg0 + 4), (int) (TObjPlayer__sub_801BF1D4((void*)arg0)));
}

void* TObjPlayer__sub_801BF1D4(void* p) { return (char*)p + 0x24; }

int TObjPlayer__sub_801BF1DC(u16 *arg0) { return TObjPlayer__sub_801BF204((void*)((s8 *)arg0 + 4), (int)(*arg0)); }

int TObjPlayer__sub_801BF204(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii(p, a1, 276); }

void TObjPlayer__sub_801BF228(u16 *arg0) {
    check_hit_by_id_431__10TObjPlayerFPvi((s8 *)arg0 + 4, *arg0);
}

void TObjPlayer__sub_801BF250(s32 arg0) {
    TObjPlayer__sub_80309F78((void *) (arg0 + 4), (int) (TObjPlayer__sub_801BF1D4((void*)arg0)));
}

void TObjPlayer__sub_801BF288(s32 arg0) {
    TObjPlayer__sub_80309FD4((void *) (arg0 + 4), (int) (TObjPlayer__sub_801BF1D4((void*)arg0)));
}

void TObjPlayer__sub_801BF2C0(s32 arg0) {
    TObjPlayer__sub_801BF2F8((void*)((void *) (arg0 + 4)), (int)((int) (TObjPlayer__sub_801BF31C((void*)arg0))));
}

int TObjPlayer__sub_801BF2F8(void* p, int a1) { return TObjPlayer__sub_8030A2CC(p, a1, 570); }

void* TObjPlayer__sub_801BF31C(void* p) { return (char*)p + 0x18; }

void TObjPlayer__sub_801BF324(u16 *arg0) {
    TObjPlayer__sub_801BF34C((s32)((s8 *)arg0 + 4), (s32)(*arg0));
}

void TObjPlayer__sub_801BF34C(s32 arg0, s32 arg1) {
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(5));
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(0x2C));
    check_hit_by_id__10TObjPlayerFiii((void*)(arg0), (int)(arg1), (int)(0x3B));
}

int TObjPlayer__sub_801BF3A0(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x24); }

int TObjPlayer__sub_801BF3C4(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x18); }

int TObjPlayer__sub_801BF3E8(void* p) { return TObjPlayer__sub_8001BEF8(p, 4); }

void TObjPlayer__sub_801BF40C(void* p, u8 v) { *(u8*)((char*)p + 0x1c) = v; }

u8 TObjPlayer__sub_801BF460(s32 *arg0, s32 arg1) {
    return (u8) ((*arg0 & (1 << arg1)) == 0);
}

void TObjPlayer__sub_801BF47C(void* p) { *(s32*)((char*)p + 0x0) = 0; }

void TObjPlayer__sub_801BF488(s32 *arg0, s32 arg1) {
    *arg0 &= ~(1 << arg1);
}

void TObjPlayer__sub_801BF4A0(s32 *arg0, s32 arg1) {
    *arg0 |= 1 << arg1;
}

int update_action_palette__10TObjPlayerFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int set_action_palette_mode__10TObjPlayerFPv(void* p) { return set_mode__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int clear_flag0_bit1__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 2); }
int set_flag_2__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 2); }

}
