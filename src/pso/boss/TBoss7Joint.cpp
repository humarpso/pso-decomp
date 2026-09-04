#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TBoss7JointFv(void *arg0, s16 arg1);
void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);

extern M2C_UNK __vt__11TBoss7Joint[];

void *__dt__11TBoss7JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss7Joint;
        clear_obj_links(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802E7B00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_800F5E08(void *);
void set_flag_800__11TBoss7JointFPv(void* p);

void set_flag_800__11TBoss7JointFPv(void* p) { *(u32*)((char*)p + 0x628) |= 0x800; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE6E0
#include "types.h"

extern "C" {

int get_state__11TBoss7JointFv(void);

    extern int lbl_805D6938;
int get_state__11TBoss7JointFv(void) {  return lbl_805D6938; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE6E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__sub_802EE6E8(void);
void TBoss7Joint__sub_802EE6EC(void);
void TBoss7Joint__sub_802EE6F0(void);
void TBoss7Joint__sub_802EE6F4(void);
void TBoss7Joint__sub_802EE6F8(void);
void TBoss7Joint__sub_802EE6FC(void);
void TBoss7Joint__sub_802EE700(void);
void read_state__11TBoss7JointFPv(void* p);
void byteswap_action_packet__11TBoss7JointFPv(void* p);
void update_and_send_60__11TBoss7JointFPv(void* p);
void TBoss7Joint__sub_802EE7B8(void* p);
void broadcast_state__11TBoss7JointFPv(void* p);
void TBoss7Joint__sub_802EE800(void* p);
int is_part_active__11TBoss7JointFPv(void* p);
void TBoss7Joint__vt91(void *arg0);
int TLobby__send_and_handle_60(void*);
M2C_UNK TObjEneDD__vt90(void *);
M2C_UNK TObjEneDD__vt91(void *);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TBoss7Joint__sub_802EE6E8(void) {  }
void TBoss7Joint__sub_802EE6EC(void) {  }
void TBoss7Joint__sub_802EE6F0(void) {  }
void TBoss7Joint__sub_802EE6F4(void) {  }
void TBoss7Joint__sub_802EE6F8(void) {  }
void TBoss7Joint__sub_802EE6FC(void) {  }
void TBoss7Joint__sub_802EE700(void) {  }
void read_state__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void byteswap_action_packet__11TBoss7JointFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void update_and_send_60__11TBoss7JointFPv(void* p) { byteswap_action_packet__11TBoss7JointFPv(p); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
void broadcast_state__11TBoss7JointFPv(void* p) { read_state__11TBoss7JointFPv(p); TLobby__send_and_handle_60(p); }
void TBoss7Joint__sub_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE814
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__vt91(void *arg0);
M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TBoss7Joint__sub_802EE6E8(void);
void TBoss7Joint__sub_802EE6EC(void);
void TBoss7Joint__sub_802EE6F0(void);
void TBoss7Joint__sub_802EE6F4(void);
void TBoss7Joint__sub_802EE6F8(void);
void TBoss7Joint__sub_802EE6FC(void);
void TBoss7Joint__sub_802EE700(void);
void TBoss7Joint__sub_802EE7B8(void* p);
void TBoss7Joint__sub_802EE800(void* p);
int is_part_active__11TBoss7JointFPv(void* p);

int is_part_active__11TBoss7JointFPv(void* p) { return *(u32*)((char*)p + 0x3bc) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE8CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__vt91(void *arg0);
M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void TBoss7Joint__sub_802EE6E8(void);
void TBoss7Joint__sub_802EE6EC(void);
void TBoss7Joint__sub_802EE6F0(void);
void TBoss7Joint__sub_802EE6F4(void);
void TBoss7Joint__sub_802EE6F8(void);
void TBoss7Joint__sub_802EE6FC(void);
void TBoss7Joint__sub_802EE700(void);
void TBoss7Joint__sub_802EE7B8(void* p);
void TBoss7Joint__sub_802EE800(void* p);
int is_part_active__11TBoss7JointFPv(void* p);

void TBoss7Joint__vt91(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 6) {
        TObjEneDD__vt90(arg0);
        return;
    }
    TObjEneDD__vt91(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE9A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void store_position__11TBoss7JointFPv(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);

struct VOff_802EE9A4_arg0 { char pad_0[0x2FC]; char f_2FC[1]; };

void store_position__11TBoss7JointFPv(void *arg0) {
    struct VOff_802EE9A4_arg0 *self = (struct VOff_802EE9A4_arg0 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_2FC, (void *)((char *)arg0 + 56));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 116), self->f_2FC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EE9E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__vt60(u8 *arg0);
M2C_UNK set_flag_800__11TBoss7JointFPv(int);
u32 is_part_active__11TBoss7JointFPv(void *, int);
M2C_UNK TBoss7Joint__sub_802EE820(void *);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
M2C_UNK TObjFish__sub_802EC468(void *, f32, f32);
M2C_UNK TObjFish__sub_802ECB70(int, int, int);

extern const f32 lbl_805DEBB0;
extern const f32 lbl_805DEBB4;

void TBoss7Joint__vt60(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r31;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x2B8) - temp_r4;
    if (is_part_active__11TBoss7JointFPv((void *) (arg0), (int) (temp_r4)) != 0U) {
        TObjFish__sub_802EC468((void *) (arg0 + 0x38), (f32) (lbl_805DEBB0), (f32) (lbl_805DEBB4));
        TObjFish__sub_802ECB70((int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (temp_r31), (int) (M2C_FIELD(arg0, u16 *, 0x2D4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) - temp_r31);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
            TBoss7Joint__sub_802EE820((void *) (arg0));
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    set_flag_800__11TBoss7JointFPv((int) (M2C_FIELD(arg0, s32 *, 0x10)));
    TBoss8Dragon__sub_800BB780((void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EECE8
#include "types.h"

extern "C" {

void TBoss7Joint__vt85(void);
void TBoss7Joint__vt26(void);
void TBoss7Joint__vt59(void);
void TBoss7Joint__vt42(void);
void TBoss7Joint__vt43(void);
void TBoss7Joint__vt44(void);
void TBoss7Joint__vt45(void);
void TBoss7Joint__vt46(void);
void TBoss7Joint__vt47(void);
void TBoss7Joint__vt48(void);

void TBoss7Joint__vt85(void) {  }
void TBoss7Joint__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EED00
#include "types.h"

extern "C" {

void TBoss7Joint__vt85(void);
void TBoss7Joint__vt26(void);
void TBoss7Joint__vt59(void);
void TBoss7Joint__vt42(void);
void TBoss7Joint__vt43(void);
void TBoss7Joint__vt44(void);
void TBoss7Joint__vt45(void);
void TBoss7Joint__vt46(void);
void TBoss7Joint__vt47(void);
void TBoss7Joint__vt48(void);

void TBoss7Joint__vt59(void) {  }
void TBoss7Joint__vt42(void) {  }
void TBoss7Joint__vt43(void) {  }
void TBoss7Joint__vt44(void) {  }
void TBoss7Joint__vt45(void) {  }
void TBoss7Joint__vt46(void) {  }
void TBoss7Joint__vt47(void) {  }
void TBoss7Joint__vt48(void) {  }

}
#endif
#endif
