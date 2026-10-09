#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013BDCC___vt__11TMainCursor { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8013BDCC___vt__11TMainCursor_size[sizeof(RecoveredGlobal_8013BDCC___vt__11TMainCursor) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8013BC2C_lbl_804A7164 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 lbl_805D49BC;
void TKeyBoardControl__sub_8000F978(void);
void TKeyBoardControl__sub_8000F984(void);
extern s32 lbl_805D49B8;
void mark_area_change_pending(void);
void TKeyBoardControl__sub_8000F9A4(void);
int matches_type_and_enabled__11TMainCursorFiUcUc(void*, void* a1, void* a2);
extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int lbl_805D49A8;
    extern int lbl_805D49B0;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
int check_type_and_enabled__11TMainCursorFPvPvPv(void* p, void* _w1, void* _w2);
s32 init_forward__10TObjPlayerFPv(void *);
s32 set_offset_y__11TMainCursorFPvs(void *, void *);
s32 init_field_60__11TMainCursorFPv(void *, void *);
s32 TMainCursor__sub_8013E6E0(void *, void *);
s32 TMainCursor__sub_8013E724(void *, f32);
s32 set_target_id_at_60__11TMainCursorFiUc(void *, void *);
s32 set_target_index_at_60__11TMainCursorFPvPv(void *, void *);
s32 reset__11TMainCursorFi(void *);
s32 TMainCursor__sub_8013E800(void *);
s32 TMainCursor__sub_8013F1F0(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__11TMainCursor[];
extern s32 main_cursor_class_name;
u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_can_pickup__11TMainCursorFi(void *);
void update_position__11TMainCursorFi(s32 arg0);
s32 check_visible__11TMainCursorFPv(void *, int, void *, int);
s32 check_field_24__11TMainCursorFPv();
s32 update__11TMainCursorFPv(void *);
M2C_UNK check_flag_4__11TMainCursorFPv(void *);
int forward_13E338_at_60__11TMainCursorFPv(void *);
u8 update_sub_60__11TMainCursorFPv(void *);
M2C_UNK get_rader_map__11TMainCursorFPv(void *, void *);
extern RecoveredGlobal_8013BC2C_lbl_804A7164 target_cursor_color_table;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D4;
extern const f32 lbl_805DB0D8;
extern const f32 lbl_805DB0DC;
void refresh_target_marker__11TMainCursorFPv(u8 *arg0);
}

extern "C" {

void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
void update_position__11TMainCursorFi(s32 arg0);
s32 is_channel_active__11TMainCursorFPv();
void delete_this__11TMainCursorFis(void *, int);
void *find_entity_by_id();
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__11TMainCursorFPvs(void *, int);
void destroy__11TMainCursorFis(void *, int);
M2C_UNK get_id__11TMainCursorFPv(s32);
u8 is_position_moved__11TMainCursorFPv(s32);

void update_position__11TMainCursorFi(s32 arg0) {
    void *temp_r3;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = find_entity_by_id();
    if (temp_r3 != NULL) {
        s32 base = M2C_FIELD(temp_r3, s32 *, 0xA4) + is_position_moved__11TMainCursorFPv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

extern M2C_UNK __vt__11TMainCursor[];

typedef char RecoveredGlobal_8013BC2C_lbl_804A7164_size[sizeof(RecoveredGlobal_8013BC2C_lbl_804A7164) == 0x60 ? 1 : -1];
void refresh_target_marker__11TMainCursorFPv(u8 *arg0) {
    u8 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    temp_r3 = check_field_24__11TMainCursorFPv();
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = (u8) forward_13E338_at_60__11TMainCursorFPv((void *) (arg0));
    temp_r3_2 = check_visible__11TMainCursorFPv((void *) (temp_r3 + 0x500), (int) (temp_r3), (void *) (update_sub_60__11TMainCursorFPv((void *) (arg0))), (int) (temp_r31));
    if (temp_r3_2 == -1) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DB0D4;
    M2C_FIELD(arg0, f32 *, 0x34) = M2C_FIELD(arg0, f32 *, 0x28) - TMainCursor__data_805DB0CC;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DB0D8 + M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x30) = M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DB0DC;
    update_position__11TMainCursorFi((s32) (arg0));
    if (check_can_pickup__11TMainCursorFi((void *) (arg0)) != 0) {
        check_flag_4__11TMainCursorFPv((void *) (arg0));
    }
    if (update__11TMainCursorFPv((void *) (arg0)) != 0) {
        get_rader_map__11TMainCursorFPv((void *) (arg0 + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + 0x40));
        return;
    }
    get_rader_map__11TMainCursorFPv((void *) (arg0 + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + (temp_r3_2 * 0x10)));
}

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s8 *)arg0 + 0x60, -1);
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0x4C, -1);
        delete_this__11TMainCursorFis((s8 *)arg0 + 0x24, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8013BDCC___vt__11TMainCursor *)&__vt__11TMainCursor).value;
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x20));
    TMainCursor__sub_8013E800((void *) (arg0 + 0x24));
    TMainCursor__sub_8013F1F0((void *) (arg0 + 0x4C));
    reset__11TMainCursorFi((void *) (arg0 + 0x60));
    M2C_FIELD(arg0, s32 *, 0) = (s32) main_cursor_class_name;
    set_target_index_at_60__11TMainCursorFPvPv((void *) (arg0), (void *) (arg2));
    set_target_id_at_60__11TMainCursorFiUc((void *) (arg0), (void *) (arg3));
    TMainCursor__sub_8013E724((void *) (arg0), (f32) (farg0));
    TMainCursor__sub_8013E6E0((void *) (arg0), (void *) ((s32) arg4));
    init_field_60__11TMainCursorFPv((void *) (arg0), (void *) ((s32) arg5));
    set_offset_y__11TMainCursorFPvs((void *) (arg0), (void *) (arg6));
    return arg0;
}

int check_type_and_enabled__11TMainCursorFPvPvPv(void* p, void* _w1, void* _w2) { return matches_type_and_enabled__11TMainCursorFiUcUc((void*)(p), (void*)(_w1), (void*)(_w2)); }

}
