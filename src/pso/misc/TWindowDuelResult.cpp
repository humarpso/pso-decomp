#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8024F5B0___vt__17TWindowDuelResult {
    M2C_UNK value;
    u8 remaining[0x70];
};

struct RecoveredGlobal_8024F5B0_lbl_804CF020 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Win_8024EF40 { u8 pad[0x20]; s16 player; u8 pad22[2]; u8 sub[4]; };

extern "C" {
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(int, int);
void TWindowDuelResult__sub_8024F478(u8 *arg0);
s32 get_camera_id__11TCameraCtrlFv();
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TWindowDD__sub_802466E0(void *, void *, void *, int);
M2C_UNK TWindowDuelResult__sub_8024F3CC(void *);
u8 *init__21TWindowSubComCardListFPviii(void *, s32, s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(int);
extern RecoveredGlobal_8024F5B0___vt__17TWindowDuelResult __vt__17TWindowDuelResult;
extern M2C_UNK lbl_804CF020[];
extern s32 lbl_805D38F0;
extern const f32 lbl_805DCCB0;
extern const f32 lbl_805DCCB4;
u8 *TWindowDuelResult__ct(u8 *arg0, s16 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 TWindowDuelResult__sub_801C19AC(void *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void TWindowSubStatusDisp__sub_80257D44(void *, void *, int);
void TWindowSubStatusDisp__sub_8025AC50(void *, void *, int);
void set_default_status__17TWindowDuelResultFPvi(void *, int);
extern u8 lbl_804CEDD0[];
void TWindowDuelResult__vt1(Win_8024EF40 *arg0);
}

extern "C" {

void TWindowDuelResult__vt2(void);
void TWindowDuelResult__vt3(void);
void *destroy__17TWindowDuelResultFPvs(void *arg0, s16 arg1);
void update__17TWindowDuelResultFPv(u8 *arg0);
M2C_UNK TWindowDuelResult__sub_8024F330(void *);
M2C_UNK TWindowDuelResult__sub_8024F3CC(void *);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);

void TWindowDuelResult__vt3(void) {  }

void TWindowDuelResult__vt1(Win_8024EF40 *arg0) {
    s32 vals[4];
    u8 *pl;
    s32 i;
    u8 *a;
    u8 *b;
    u8 *c;
    TWindowSubStatusDisp__sub_80257D44(arg0->sub, lbl_804CEDD0, arg0->player);
    a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    set_default_status__17TWindowDuelResultFPvi(a, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 0));
    c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xF);
    set_default_status__17TWindowDuelResultFPvi(c, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 5));
    pl = TPlayerBattleCtrl4P__sub_801BA74C(arg0->player);
    if (pl != 0) {
        TWindowSubStatusDisp__sub_8025AC50(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), pl + 0x85C, 0x20);
        vals[0] = TWindowDuelResult__sub_801C19AC(pl + 0x75C);
        vals[1] = TWindowDuelResult__sub_801C19AC(pl + 0x76C);
        vals[2] = TWindowDuelResult__sub_801C19AC(pl + 0x78C);
        vals[3] = TWindowDuelResult__sub_801C19AC(pl + 0x77C);
        for (i = 0; i < 4; i++) {
            a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i * 3 + 2);
            b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i * 3 + 4);
            set_default_status__17TWindowDuelResultFPvi(a, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, i + 1));
            *(s32 *)(b + 0x20) = vals[i];
        }
    }
}

void TWindowDuelResult__vt2(void) {  }

void TWindowDuelResult__sub_8024F478(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, (void *) (arg0 + 0x60));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    TWindowSubStatusDisp__sub_8026C800((int) (M2C_FIELD(arg0, s32 *, 0x68)), (int) (temp_r3));
}

void update__17TWindowDuelResultFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x68)) != 0) {
        TWindowDuelResult__sub_8024F3CC(arg0);
    }
    TWindowDuelResult__sub_8024F330(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
}

extern M2C_UNK lbl_804CF020[];

void *destroy__17TWindowDuelResultFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF020;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x68), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8024F5B0___vt__17TWindowDuelResult_size[sizeof(RecoveredGlobal_8024F5B0___vt__17TWindowDuelResult) == 0x74 ? 1 : -1];
typedef char RecoveredGlobal_8024F5B0_lbl_804CF020_size[sizeof(RecoveredGlobal_8024F5B0_lbl_804CF020) == 0x18 ? 1 : -1];
u8 *TWindowDuelResult__ct(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&__vt__17TWindowDuelResult.value), (void *) (arg1), (int) (TWindowSubComCard__sub_8026CBB8((int) (0x24))));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8024F5B0_lbl_804CF020 *)&lbl_804CF020).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D38F0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv((void *)0xC));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(init__21TWindowSubComCardListFPviii(temp_r3, 0, 2, (s32) M2C_FIELD(arg0, s16 *, 0x20)));
    }
    M2C_FIELD(arg0, u8 **, 0x68) = var_r0;
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DCCB0;
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805DCCB0;
    } else if (get_camera_id__11TCameraCtrlFv() == 2) {
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DCCB4;
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805DCCB4;
    } else {
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DCCB4;
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805DCCB4;
    }
    TWindowDuelResult__sub_8024F3CC((void *) (arg0));
    return arg0;
}

}
