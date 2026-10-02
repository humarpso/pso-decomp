#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026D674_lbl_804D08DC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8026D674___vt__11TWindowRoom {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Pos_8026D740 { f32 x; f32 y; };

extern "C" {
f32 TWindowSubStatusDisp__sub_802877A4(f32);
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
s32 save_position__17TWindowSubComCardFPv(void *);
s32 TWindowDD__sub_802466E0(void *, void *, int, int);
s32 refresh_status_display__9TWindowDDFv(int);
s32 TWindowSubStatusDisp__sub_8025AC50(s32, s32, s32);
s32 get_window_layout_position(int);
extern RecoveredGlobal_8026D674_lbl_804D08DC lbl_804D08DC;
extern M2C_UNK __vt__11TWindowRoom[];
extern s32 lbl_805D39C0;
extern const f32 lbl_805DD2F0;
extern const f32 lbl_805DD2F4;
u8 *TWindowRoom__ct(u8 *arg0, s32 arg1);
extern const f32 lbl_805DD2F8;
s32 TWindowSubComCard__sub_8026D740(struct Pos_8026D740 *a, struct Pos_8026D740 *b, struct Pos_8026D740 *c);
}

extern "C" {

void *__dt__11TWindowRoomFv(void *arg0, s16 arg1);
void draw_status__11TWindowRoomFi(s32 arg0);
int fn_8026D504(void* p);
void fn_8026D564(void *arg0, s32 arg1);
void run_task__11TWindowRoomFv(void* p);
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
int update_window_entry_list(void*, void*);
s32 TWindowSubStatusDisp__sub_8025AC50(s32, s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
int initialize_subwindow__9TWindowDDFPv(void*);

int fn_8026D504(void* p) { return get_array_entry__20TWindowSubStatusDispFPvi(p, 0); }
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_8025AC50(get_array_entry__20TWindowSubStatusDispFPvi((void*)(arg0), 0), arg1, 0x60);
}
void fn_8026D564(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void draw_status__11TWindowRoomFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    fn_8026D564((void *)((void *)(arg0)), (s32)(temp_r3));
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
}
void run_task__11TWindowRoomFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__11TWindowRoom[];

void *__dt__11TWindowRoomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowRoom;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8026D674_lbl_804D08DC_size[sizeof(RecoveredGlobal_8026D674_lbl_804D08DC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8026D674___vt__11TWindowRoom_size[sizeof(RecoveredGlobal_8026D674___vt__11TWindowRoom) == 0x18 ? 1 : -1];
u8 *TWindowRoom__ct(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    TWindowDD__sub_802466E0((void *) (arg0), (void *) (&lbl_804D08DC.value), (int) (4), (int) (get_window_layout_position((int) (0xAF))));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026D674___vt__11TWindowRoom *)&__vt__11TWindowRoom).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D39C0;
    temp_r3 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi((void*)(arg0), (int)(0))));
    TWindowSubStatusDisp__sub_8025AC50((s32)((int) (temp_r3)), (s32)((void *) (arg1)), (s32)((int) (0x60)));
    refresh_status_display__9TWindowDDFv((int) (temp_r3));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (lbl_805DD2F0 + (M2C_FIELD(temp_r3, f32 *, 8) + M2C_FIELD(temp_r3, f32 *, 0x10)));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x38));
    save_position__17TWindowSubComCardFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0x60) = TWindowSubStatusDisp__sub_802877A4(M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DD2F4);
    return arg0;
}
s32 TWindowSubComCard__sub_8026D740(struct Pos_8026D740 *a, struct Pos_8026D740 *b, struct Pos_8026D740 *c) {
    f32 room;
    if (a->y < c->y || b->y < lbl_805DD2F8) {
        b->y = lbl_805DD2F8;
        return 1;
    }
    room = a->y - c->y;
    if (b->y > room) {
        b->y = room;
        return 1;
    }
    return 0;
}

}
