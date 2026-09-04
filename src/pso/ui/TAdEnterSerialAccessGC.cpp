#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

void init__22TAdEnterSerialAccessGCFv(void) { TAdEnterSerialAccessGC__sub_8032B12C(); TAdEnterSerialAccessGC__sub_8032195C(); }

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

void set_state_3__22TAdEnterSerialAccessGCFPv(void* p) { *(s32*)((char*)p + 0x700) = 3; }

}
