#include "types.h"
#include "pso/misc/TMainCursor_8013F104.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"
#include "pso/misc/TMainCursor.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8013BDCC___vt__11TMainCursor { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8013BDCC___vt__11TMainCursor_size[sizeof(RecoveredGlobal_8013BDCC___vt__11TMainCursor) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8013BC2C_lbl_804A7164 {
    s32 value;
    u8 remaining[0x5C];
};

extern "C" {
int matches_type_and_enabled__11TMainCursorFiUcUc(void*, void* a1, void* a2);
s32 set_offset_y__11TMainCursorFs(void *, void *);
s32 init_field_60__11TMainCursorFv(void *, void *);
s32 TMainCursor__sub_8013E6E0(void *, void *);
s32 set_target_id_at_60__11TMainCursorFUc(void *, void *);
s32 TMainCursor__sub_8013E800(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__11TMainCursor[];
extern s32 main_cursor_class_name;
u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0);
s32 check_can_pickup__11TMainCursorFi(s32 arg0);
s32 check_visible__11TMainCursorFv(void *, int, void *, int);
s32 check_field_24__11TMainCursorFv();
u8 update_sub_60__11TMainCursorFv(void *);
s32 get_rader_map__11TMainCursorFv(void *, void *);
extern RecoveredGlobal_8013BC2C_lbl_804A7164 target_cursor_color_table;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D4;
extern const f32 lbl_805DB0D8;
extern const f32 lbl_805DB0DC;
void *__dt__11TMainCursorFv(void *arg0, s16 arg1);
void *find_entity_by_id();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 destroy__11TMainCursorFis(s32 arg0, s16 arg1);

void TMainCursor::update_position() {
    s32 arg0 = (s32)this;
    void *entity;

    ((TMainCursor *)(arg0 + 0x60))->get_id();
    entity = find_entity_by_id();
    if (entity != NULL) {
        s32 base = *(s32 *)((s8 *)entity + 0xA4) + ((TMainCursor *)arg0)->is_position_moved() * 0x2C;
        VecCopy((Vec *)(arg0 + 0x40), (const Vec *)(base + 0x1C));
    }
}

typedef char RecoveredGlobal_8013BC2C_lbl_804A7164_size[sizeof(RecoveredGlobal_8013BC2C_lbl_804A7164) == 0x60 ? 1 : -1];
void TMainCursor::refresh_target_marker() {
    s32 temp_r3;
    s32 temp_r3_2;
    temp_r3 = check_field_24__11TMainCursorFv();
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv((((u8 *)this)));
        return;
    }
    temp_r3_2 = check_visible__11TMainCursorFv((void *)(temp_r3 + 0x500), temp_r3, (void *) (update_sub_60__11TMainCursorFv((void *) (((u8 *)this)))), (u8) ((TMainCursor *)((u8 *)this))->forward_13E338_at_60());
    if (temp_r3_2 == -1) {
        queue_destruction__7TObjectFv((((u8 *)this)));
        return;
    }
    this->m_1c = 0;
    *(f32 *)&this->unk_28 = (f32) lbl_805DB0D4;
    *(f32 *)&this->m_34 = *(f32 *)&this->unk_28 - TMainCursor__data_805DB0CC;
    *(f32 *)&this->unk_38 = lbl_805DB0D8 + *(f32 *)&this->unk_28;
    *(f32 *)&this->unk_30 = *(f32 *)&this->unk_38;
    this->m_3c = lbl_805DB0DC;
    ((TMainCursor *)((u8 *)this))->update_position();
    if (check_can_pickup__11TMainCursorFi((s32)(((u8 *)this))) != 0) {
        ((TMainCursor *)((u8 *)this))->check_flag_4();
    }
    if (((TMainCursor *)((u8 *)this))->update() != 0) {
        get_rader_map__11TMainCursorFv((void *) (((u8 *)this) + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + 0x40));
        return;
    }
    get_rader_map__11TMainCursorFv((void *) (((u8 *)this) + 0x4C), (void *) ((u8 *)&target_cursor_color_table.value + (temp_r3_2 * 0x10)));
}

void *__dt__11TMainCursorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TMainCursor;
        destroy__11TMainCursorFis((s32)((s8 *)arg0 + 0x60), -1);
        ((TMainCursor *)((s8 *)arg0 + 0x4C))->destroy(-1);
        ((TMainCursor *)((s8 *)arg0 + 0x24))->delete_this(-1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TMainCursor__ct(u8 *arg0, s32 arg1, s32 arg2, u8 arg3, u8 arg4, u8 arg5, s32 arg6, f32 farg0) {
    __ct__7TObjectFP7TObject((void *)arg0, (void *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8013BDCC___vt__11TMainCursor *)&__vt__11TMainCursor).value;
    ((TObjPlayer *)(arg0 + 0x20))->init_forward();
    TMainCursor__sub_8013E800(arg0 + 0x24);
    TMainCursor__sub_8013F1F0((arg0 + 0x4C));
    ((TMainCursor *)(arg0 + 0x60))->reset();
    *(s32 *)((s8 *)arg0 + 0) = (s32) main_cursor_class_name;
    ((TMainCursor *)arg0)->set_target_index_at_60((void *)arg2);
    set_target_id_at_60__11TMainCursorFUc((void *)arg0, (void *)arg3);
    ((TMainCursor *)arg0)->sub_8013E724(farg0);
    TMainCursor__sub_8013E6E0(arg0, (void *) ((s32) arg4));
    init_field_60__11TMainCursorFv(arg0, (void *) ((s32) arg5));
    set_offset_y__11TMainCursorFs((void *)arg0, (void *)arg6);
    return arg0;
}

int TMainCursor::check_type_and_enabled(void* _w1, void* _w2) { return matches_type_and_enabled__11TMainCursorFiUcUc(this, _w1, _w2); }

}
