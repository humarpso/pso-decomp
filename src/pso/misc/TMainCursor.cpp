#include "types.h"
#include "pso/misc/TMainCursor.h"

struct RecoveredGlobal_8013BDCC___vt__11TMainCursor { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8013BDCC___vt__11TMainCursor_size[sizeof(RecoveredGlobal_8013BDCC___vt__11TMainCursor) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8013BC2C_lbl_804A7164 {
    s32 value;
    u8 remaining[0x5C];
};

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void activate_keyboard(void);
void deactivate_keyboard(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
void clear_keyboard_key_state(void);
int matches_type_and_enabled__11TMainCursorFiUcUc(void*, void* a1, void* a2);
extern s32 keyboard_task_object[];
extern s32 lbl_805D62B0;
    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
s32 init_forward__10TObjPlayerFv(void *);
s32 set_offset_y__11TMainCursorFs(void *, void *);
s32 init_field_60__11TMainCursorFv(void *, void *);
s32 TMainCursor__sub_8013E6E0(void *, void *);
s32 TMainCursor__sub_8013E724(void *, f32);
s32 set_target_id_at_60__11TMainCursorFiUc(void *, void *);
s32 set_target_index_at_60__11TMainCursorFPvPv(void *, void *);
s32 reset__11TMainCursorFv(void *);
s32 TMainCursor__sub_8013E800(void *);
s32 TMainCursor__sub_8013F1F0(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__11TMainCursor[];
extern s32 main_cursor_class_name;
u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0);
s32 queue_destruction__7TObjectFv(void *);
s32 check_can_pickup__11TMainCursorFi(void *);
s32 check_visible__11TMainCursorFv(void *, int, void *, int);
s32 check_field_24__11TMainCursorFv();
s32 update__11TMainCursorFv(void *);
s32 check_flag_4__11TMainCursorFv(void *);
int forward_13E338_at_60__11TMainCursorFv(void *);
u8 update_sub_60__11TMainCursorFv(void *);
s32 get_rader_map__11TMainCursorFv(void *, void *);
extern RecoveredGlobal_8013BC2C_lbl_804A7164 target_cursor_color_table;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D4;
extern const f32 lbl_805DB0D8;
extern const f32 lbl_805DB0DC;
void refresh_target_marker__11TMainCursorFPv(u8 *arg0);
}

extern "C" {

void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
s32 is_channel_active__11TMainCursorFv();
void delete_this__11TMainCursorFis(void *, int);
void *find_entity_by_id();
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy__11TMainCursorFs(void *, int);
void destroy__11TMainCursorFis(void *, int);
s32 get_id__11TMainCursorFv(s32);
u8 is_position_moved__11TMainCursorFv(s32);

void TMainCursor::update_position() {
    s32 arg0 = (s32)this;
    void *temp_r3;

    get_id__11TMainCursorFv(arg0 + 0x60);
    temp_r3 = find_entity_by_id();
    if (temp_r3 != NULL) {
        s32 base = *(s32 *)((s8 *)temp_r3 + 0xA4) + is_position_moved__11TMainCursorFv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

extern s32 __vt__11TMainCursor[];

typedef char RecoveredGlobal_8013BC2C_lbl_804A7164_size[sizeof(RecoveredGlobal_8013BC2C_lbl_804A7164) == 0x60 ? 1 : -1];
void refresh_target_marker__11TMainCursorFPv(u8 *arg0) {
    u8 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;
    temp_r3 = check_field_24__11TMainCursorFv();
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = (u8) forward_13E338_at_60__11TMainCursorFv((void *) (arg0));
    temp_r3_2 = check_visible__11TMainCursorFv((void *) (temp_r3 + 0x500), (int) (temp_r3), (void *) (update_sub_60__11TMainCursorFv((void *) (arg0))), (int) (temp_r31));
    if (temp_r3_2 == -1) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805DB0D4;
    *(f32 *)((s8 *)arg0 + 0x34) = *(f32 *)((s8 *)arg0 + 0x28) - TMainCursor__data_805DB0CC;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DB0D8 + *(f32 *)((s8 *)arg0 + 0x28);
    *(f32 *)((s8 *)arg0 + 0x30) = *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DB0DC;
    ((TMainCursor *)arg0)->update_position();
    if (check_can_pickup__11TMainCursorFi((void *) (arg0)) != 0) {
        check_flag_4__11TMainCursorFv((void *) (arg0));
    }
    if (update__11TMainCursorFv((void *) (arg0)) != 0) {
        get_rader_map__11TMainCursorFv((void *) (arg0 + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + 0x40));
        return;
    }
    get_rader_map__11TMainCursorFv((void *) (arg0 + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + (temp_r3_2 * 0x10)));
}

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s8 *)arg0 + 0x60, -1);
        destroy__11TMainCursorFs((s8 *)arg0 + 0x4C, -1);
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
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8013BDCC___vt__11TMainCursor *)&__vt__11TMainCursor).value;
    init_forward__10TObjPlayerFv((void *) (arg0 + 0x20));
    TMainCursor__sub_8013E800((void *) (arg0 + 0x24));
    TMainCursor__sub_8013F1F0((void *) (arg0 + 0x4C));
    reset__11TMainCursorFv((void *) (arg0 + 0x60));
    *(s32 *)((s8 *)arg0 + 0) = (s32) main_cursor_class_name;
    set_target_index_at_60__11TMainCursorFPvPv((void *) (arg0), (void *) (arg2));
    set_target_id_at_60__11TMainCursorFiUc((void *) (arg0), (void *) (arg3));
    TMainCursor__sub_8013E724((void *) (arg0), (f32) (farg0));
    TMainCursor__sub_8013E6E0((void *) (arg0), (void *) ((s32) arg4));
    init_field_60__11TMainCursorFv((void *) (arg0), (void *) ((s32) arg5));
    set_offset_y__11TMainCursorFs((void *) (arg0), (void *) (arg6));
    return arg0;
}

int TMainCursor::check_type_and_enabled(void* _w1, void* _w2) { return matches_type_and_enabled__11TMainCursorFiUcUc((void*)(this), (void*)(_w1), (void*)(_w2)); }

}
