#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void queue_destruction__7TObjectFv(void *);
void disallow_rendering__7TObjectFv(void *);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
extern const f32 lbl_805DFE08;
extern const f32 lbl_805DFE0C;
void TItemEffPG__sub_8034FBA4(u8 *arg0);
}

extern "C" {

void TItemEffPG__sub_8034FA50(void* p);
void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1);
s32 countdown_timer__10TItemEffPGFPv(void *arg0);
void *destroy__10TItemEffPGFPvs(void *arg0, s16 arg1);
void *init_fields__10TItemEffPGFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void __dl__7TObjectFPv(void *);
void __dt__10TItemEffPGFv(void *, int);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804F0AF8[];

void *init_fields__10TItemEffPGFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0AF8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = -30947;
    M2C_FIELD(arg0, u32 *, 0x1FC) = -7281;
    return arg0;
}

void TItemEffPG__sub_8034FA50(void* p) { *(s32*)((char*)p + 0x58) = 1; }

extern M2C_UNK lbl_804F0BF0[];

void TItemEffPG__sub_8034FBA4(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 0x71C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) - 0xE38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) == 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x50);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0x44)) {
            M2C_FIELD(arg0, f32 *, 0x50) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x54));
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x44);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x50)) {
                M2C_FIELD(arg0, f32 *, 0x50) = temp_f1_2;
            }
        }
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x4C) = temp_f0;
        M2C_FIELD(arg0, f32 *, 0x48) = temp_f0;
    } else {
        temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x28);
        if (temp_f1_3 <= lbl_805DFE08) {
            queue_destruction__7TObjectFv(arg0);
            disallow_rendering__7TObjectFv(arg0);
        } else {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f1_3 - lbl_805DFE0C);
        }
    }
    TOTrapAncient01__sub_80226578((int) (0x4001A343), (void *) (arg0), (void *) (arg0 + 0x5C), (int) (0), (int) (0));
}

void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0BF0;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 countdown_timer__10TItemEffPGFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (temp_r4 - 1);
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804F0C08[];

void *destroy__10TItemEffPGFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C08;
        __dt__10TItemEffPGFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
