#include "pso/TEneEffHamon.h"

TEneEffHamon::~TEneEffHamon() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800A4204_lbl_80490A18 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern const f32 lbl_805D99E0;
void run_task__12TEneEffHamonFv(u8 *arg0);
void TTecZondeEff__sub_800A39A8(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80490A18[];
extern s32 lbl_805D29E0;
u8 *TObjPlayer__sub_800A4204(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

void TEneEffHamon__sub_800A380C(void);
void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1);
void init_fish_effects__12TEneEffHamonFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void run_task__12TEneEffHamonFv(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 - 1);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + M2C_FIELD(arg0, f32 *, 0x44));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + M2C_FIELD(arg0, f32 *, 0x48));
    if (M2C_FIELD(arg0, f32 *, 0x50) <= lbl_805D99E0) {
        queue_destruction__7TObjectFv();
    }
}

void TEneEffHamon__sub_800A380C(void) {  }

    extern int lbl_805D500C;
    extern int lbl_805D5030;
    extern int lbl_805D5034;
void init_fish_effects__12TEneEffHamonFv(void) { lbl_805D5030 = TObjFish__sub_8001EDC4((void*)(lbl_805D500C), (void*)3); lbl_805D5034 = TObjFish__sub_8001EDB0((void*)(lbl_805D500C), (void*)3); }

extern M2C_UNK lbl_80490A18[];

void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490A18;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_800A4204_lbl_80490A18_size[sizeof(RecoveredGlobal_800A4204_lbl_80490A18) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_800A4204(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800A4204_lbl_80490A18 *)&lbl_80490A18).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29E0;
    M2C_FIELD(arg0, s32 *, 0x338) = arg2;
    M2C_FIELD(arg0, s32 *, 0x33C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x330) = 0;
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    M2C_FIELD(arg0, s32 *, 0x344) = arg4;
    TTecZondeEff__sub_800A39A8(arg0);
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x32C) = 0xFF000000;
    M2C_FIELD(arg0, s32 *, 0x340) = 0;
    return arg0;
}

}
