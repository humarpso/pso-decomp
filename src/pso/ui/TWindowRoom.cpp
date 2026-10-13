#include "types.h"
#include "pso/ui/TWindowRoom.h"
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

struct RoomTitleEntry {
    u8 unknown00[8];
    f32 positionX;
    u8 unknown0C[4];
    f32 width;
};

extern "C" {
f32 TWindowSubStatusDisp__sub_802877A4(f32);
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
s32 save_position__17TWindowSubComCardFPv(void *);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s16, void *);
void refresh_status_display__9TWindowDDFv(void *);
s32 set_text_entry_string(s32, s32, s32);
s32 get_window_layout_position(int);
extern RecoveredGlobal_8026D674_lbl_804D08DC room_window_base_parameters;
extern M2C_UNK __vt__11TWindowRoom[];
extern s32 TWindowRoom__class_name;
extern const f32 lbl_805DD2F0;
extern const f32 lbl_805DD2F4;
extern const f32 lbl_805DD2F8;
s32 clamp_list_scroll_offset(struct Pos_8026D740 *a, struct Pos_8026D740 *b, struct Pos_8026D740 *c);
}

extern "C" {

void *__dt__11TWindowRoomFv(void *arg0, s16 arg1);
void draw_status__11TWindowRoomFi(s32 arg0);
void run_task__11TWindowRoomFv(void* p);
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 draw_visible_window_entries(s32, s32, s32);
int update_window_entry_list(void*, void*);
s32 set_text_entry_string(s32, s32, s32);
M2C_UNK draw_window_tab(s32, s32, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
int get_array_entry__20TWindowSubStatusDispFPvi(void*, int);
int initialize_subwindow__9TWindowDDFPv(void*);

}

void *TWindowRoom::get_title_entry() {
    return (void *)get_array_entry__20TWindowSubStatusDispFPvi(this, 0);
}

extern "C" {
void set_entry_display_value__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    set_text_entry_string(get_array_entry__20TWindowSubStatusDispFPvi((void*)(arg0), 0), arg1, 0x60);
}
}

void TWindowRoom::draw_tab(void *context) {
    draw_window_tab((s32)context, (s32)((u8 *)context + 0x10), 3, tabParameter);
}

extern "C" {
void draw_status__11TWindowRoomFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    ((TWindowRoom *)arg0)->draw_tab((void *)temp_r3);
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3);
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
}

TWindowRoom::TWindowRoom(char *title) {
    RoomTitleEntry *entry;
    construct_base__9TWindowDDFPvPvsPv(this, &room_window_base_parameters.value, 4,
                                    (void *)get_window_layout_position(0xAF));
    objectVtable = __vt__11TWindowRoom;
    className = TWindowRoom__class_name;
    entry = (RoomTitleEntry *)get_array_entry__20TWindowSubStatusDispFPvi(this, 0);
    set_text_entry_string((s32)entry, (s32)title, 0x60);
    refresh_status_display__9TWindowDDFv(entry);
    width = lbl_805DD2F0 + (entry->positionX + entry->width);
    positionX -= width;
    save_position__17TWindowSubComCardFPv(this);
    tabParameter = TWindowSubStatusDisp__sub_802877A4(unknown48 - lbl_805DD2F4);
}

extern "C" {

s32 clamp_list_scroll_offset(struct Pos_8026D740 *a, struct Pos_8026D740 *b, struct Pos_8026D740 *c) {
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
