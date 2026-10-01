#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80327698___vt__14TAdScrollWinGC { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(s32);
void fn_8026A14C(void);
extern RecoveredGlobal_80327698___vt__14TAdScrollWinGC __vt__14TAdScrollWinGC;
u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
void advance_scroll__14TAdScrollWinGCFPvf(void *, f32);
void fn_8026A61C(void *, f32);
extern u8 lbl_8050E3B8[];
extern const f32 lbl_805DF69C;
extern const f32 lbl_805DF6A0;
extern const f32 lbl_805DF6A4;
extern const f32 lbl_805DF6A8;
extern const f32 lbl_805DF6AC;
extern const f32 lbl_805DF6B0;
void run_task__14TAdScrollWinGCFv(u8 *arg0);
}

extern "C" {

void close_window__14TAdScrollWinGCFPv(void* p);
int TWindow__close(void*);

void close_window__14TAdScrollWinGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindow__close(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

void run_task__14TAdScrollWinGCFv(u8 *arg0) {
    s32 d;
    u32 a;
    switch (M2C_FIELD(arg0, s32 *, 0x4C)) {
    case 0:
        break;
    case 1:
        if (++M2C_FIELD(arg0, s32 *, 0x50) > lbl_805DF69C) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        break;
    }
    M2C_FIELD(arg0, u32 *, 0x3C) += 0xC;
    M2C_FIELD(arg0, u32 *, 0x3C) = M2C_FIELD(arg0, u32 *, 0x3C) > 0xFF ? 0xFF : M2C_FIELD(arg0, u32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DF6A0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805DF6A4;
    M2C_FIELD(arg0, f32 *, 0x24) = lbl_805DF6A8;
    M2C_FIELD(arg0, f32 *, 0x28) = lbl_805DF6AC;
    d = M2C_FIELD(lbl_8050E3B8, s16 *, 0x3A);
    if (d < 0) {
        d += 0x19;
        if (M2C_FIELD(arg0, void **, 0x40) != 0) {
            fn_8026A61C(M2C_FIELD(arg0, void **, 0x40), lbl_805DF6B0 * d);
        }
    }
    if (d > 0 && M2C_FIELD(arg0, void **, 0x40) != 0) {
        advance_scroll__14TAdScrollWinGCFPvf(M2C_FIELD(arg0, void **, 0x40), lbl_805DF6B0 * (d - 0x19));
    }
}

u8 *__dt__14TAdScrollWinGCFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TAdScrollWinGC.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x40));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x40) = NULL;
        }
        fn_8026A14C();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
