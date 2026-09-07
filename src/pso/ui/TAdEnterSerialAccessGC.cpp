#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80364258_80364258 { s32 f0; };

struct RecoveredGlobal_8032B904_lbl_80477278 { M2C_UNK value; u8 remaining[0xC]; };

struct RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC {
    M2C_UNK value;
    u8 remaining[0x18];
};

#include <stddef.h>
struct Stack_803216C0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_803216C0_lbl_8047653C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803216C0_lbl_805430D0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Stack_803217B8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_803217B8_lbl_80476524 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803217B8_lbl_805430A4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Stack_80321874 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80321874_lbl_80476518 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80321874_lbl_80543090 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80322418_lbl_804ED9F8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterSerialAccessGC__data_804EC9C4;
void TAdEnterSerialAccessGC__sub_8032190C(s32 arg0);
M2C_UNK memset(void *, int, int);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
s32 TAdEnterSerialAccessGC__sub_80321668(void *, void *, int, void *);
extern RecoveredGlobal_803216C0_lbl_8047653C lbl_8047653C;
extern RecoveredGlobal_803216C0_lbl_805430D0 lbl_805430D0;
M2C_UNK *TAdEnterSerialAccessGC__sub_803216C0(void);
M2C_UNK memset(void *, int, int);
s32 TAdEnterSerialAccessGC__sub_80321668(void *, void *, int, void *);
extern RecoveredGlobal_803217B8_lbl_80476524 lbl_80476524;
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterSerialAccessGC__data_804EC9C4;
extern RecoveredGlobal_803217B8_lbl_805430A4 lbl_805430A4;
M2C_UNK *TAdEnterSerialAccessGC__sub_803217B8(void);
M2C_UNK memset(void *, int, int);
s32 TAdEnterSerialAccessGC__sub_80321668(void *, void *, int, void *);
extern RecoveredGlobal_80321874_lbl_80476518 lbl_80476518;
extern RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8 TAdEnterSerialAccessGC__data_804EC9B8;
extern RecoveredGlobal_80321874_lbl_80543090 lbl_80543090;
M2C_UNK *TAdEnterSerialAccessGC__sub_80321874(void);
extern RecoveredGlobal_80322418_lbl_804ED9F8 lbl_804ED9F8;
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1);
}

extern "C" {

int TAdEnterSerialAccessGC__sub_80321F18(void* p);
int TAdEnterSerialAccessGC__sub_80321F3C(void* p);
void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1);
void draw_serial_separators__22TAdEnterSerialAccessGCFv(void);
s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0);
void init__22TAdEnterSerialAccessGCFv(void);
void set_state_3__22TAdEnterSerialAccessGCFPv(void* p);
int TAdEnterSerialAccessGC__sub_8032195C(void);
int TAdEnterSerialAccessGC__sub_80321B28(void*, int);
int TAdEnterSerialAccessGC__sub_8032B12C(void);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
s32 get_state__19TWindowKeyBoardSoftFPv(u32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);

extern const f32 TAdEnterSerialAccessGC__data_805DF4DC;
extern const f32 lbl_805DF4E4;
extern const f32 lbl_805DF4E8;
extern M2C_UNK lbl_805DF4EC;
extern const f32 lbl_805DF4F0;

void draw_serial_separators__22TAdEnterSerialAccessGCFv(void) {
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4E8), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
    render_status_line__15TAdSubPlyItemGCFPvi((void *) (&lbl_805DF4EC), (int) (-1), (f32) (lbl_805DF4F0), (f32) (lbl_805DF4E4), (f32) (TAdEnterSerialAccessGC__data_805DF4DC));
}

typedef char RecoveredGlobal_803216C0_lbl_8047653C_size[sizeof(RecoveredGlobal_803216C0_lbl_8047653C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803216C0_lbl_805430D0_size[sizeof(RecoveredGlobal_803216C0_lbl_805430D0) == 0x18 ? 1 : -1];
M2C_UNK *TAdEnterSerialAccessGC__sub_803216C0(void) {
    typedef char sp8_offset[(offsetof(Stack_803216C0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803216C0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803216C0, sp10) == 0x8) ? 1 : -1];
    Stack_803216C0 stack;
    memset((void *) (&lbl_805430D0.value), (int) (0), (int) (0x18));
    stack.sp8 = M2C_FIELD(&lbl_8047653C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8047653C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8047653C.value, s32 *, 8);
    TAdEnterSerialAccessGC__sub_80321668((void *) (&lbl_805430D0.value), (void *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1153C), (int) (3), (void *) (&stack.sp8));
    return &lbl_805430D0.value;
}

typedef char RecoveredGlobal_803217B8_lbl_80476524_size[sizeof(RecoveredGlobal_803217B8_lbl_80476524) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4_size[sizeof(RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803217B8_lbl_805430A4_size[sizeof(RecoveredGlobal_803217B8_lbl_805430A4) == 0x18 ? 1 : -1];
M2C_UNK *TAdEnterSerialAccessGC__sub_803217B8(void) {
    typedef char sp8_offset[(offsetof(Stack_803217B8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803217B8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803217B8, sp10) == 0x8) ? 1 : -1];
    Stack_803217B8 stack;
    memset((void *) (&lbl_805430A4.value), (int) (0), (int) (0x18));
    stack.sp8 = M2C_FIELD(&lbl_80476524.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80476524.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80476524.value, s32 *, 8);
    TAdEnterSerialAccessGC__sub_80321668((void *) (&lbl_805430A4.value), (void *) (&(*(RecoveredGlobal_803217B8_TAdEnterSerialAccessGC__data_804EC9C4 *)&TAdEnterSerialAccessGC__data_804EC9C4).value), (int) (3), (void *) (&stack.sp8));
    return &lbl_805430A4.value;
}

typedef char RecoveredGlobal_80321874_lbl_80476518_size[sizeof(RecoveredGlobal_80321874_lbl_80476518) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8_size[sizeof(RecoveredGlobal_80321874_TAdEnterSerialAccessGC__data_804EC9B8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80321874_lbl_80543090_size[sizeof(RecoveredGlobal_80321874_lbl_80543090) == 0x14 ? 1 : -1];
M2C_UNK *TAdEnterSerialAccessGC__sub_80321874(void) {
    typedef char sp8_offset[(offsetof(Stack_80321874, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80321874, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80321874, sp10) == 0x8) ? 1 : -1];
    Stack_80321874 stack;
    memset((void *) (&lbl_80543090.value), (int) (0), (int) (0x14));
    stack.sp8 = M2C_FIELD(&lbl_80476518.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80476518.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80476518.value, s32 *, 8);
    TAdEnterSerialAccessGC__sub_80321668((void *) (&lbl_80543090.value), (void *) (&TAdEnterSerialAccessGC__data_804EC9B8.value), (int) (3), (void *) (&stack.sp8));
    return &lbl_80543090.value;
}

void init__22TAdEnterSerialAccessGCFv(void) { TAdEnterSerialAccessGC__sub_8032B12C(); TAdEnterSerialAccessGC__sub_8032195C(); }

typedef char RecoveredGlobal_8032B904_lbl_80477278_size[sizeof(RecoveredGlobal_8032B904_lbl_80477278) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20_size[sizeof(RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20) == 0x84 ? 1 : -1];
void TAdEnterSerialAccessGC__sub_8032190C(s32 arg0) {
    memset((void *) (&TAdEnterSerialAccessGC__data_804EC9C4.value), (int) (0), (int) (0xd));
    strncpy((s32) &TAdEnterSerialAccessGC__data_804EC9C4.value, arg0, 0xd);
}
typedef char RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC_size[sizeof(RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC) == 0x1C ? 1 : -1];

int TAdEnterSerialAccessGC__sub_80321F18(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 1); }
int TAdEnterSerialAccessGC__sub_80321F3C(void* p) { return TAdEnterSerialAccessGC__sub_80321B28(p, 0); }

extern M2C_UNK __vt__22TAdEnterSerialAccessGC[];

void *__dt__22TAdEnterSerialAccessGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TAdEnterSerialAccessGC;
        if (M2C_FIELD(arg0, void **, 0x58) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58)); M2C_FIELD(arg0, M2C_UNK *, 0x58) = 0; }
        if (M2C_FIELD(arg0, void **, 0x5C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C)); M2C_FIELD(arg0, M2C_UNK *, 0x5C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0) {
    u32 temp_r3 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r3 == 0U) {
        return 0;
    }
    return get_state__19TWindowKeyBoardSoftFPv(temp_r3);
}

typedef char RecoveredGlobal_80322418_lbl_804ED9F8_size[sizeof(RecoveredGlobal_80322418_lbl_804ED9F8) == 0x10 ? 1 : -1];
void TAdEnterSerialAccessGC__sub_80322418(s32 arg0, s32 arg1) {
    M2C_FIELD(((u8 *)(&lbl_804ED9F8.value) + (arg1 * 4)), s32 *, 0) = arg0;
}

void set_state_3__22TAdEnterSerialAccessGCFPv(void* p) { *(s32*)((char*)p + 0x700) = 3; }

}
