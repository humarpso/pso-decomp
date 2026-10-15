#include "types.h"
#include "pso/ui/TAdChrSelASlotGC.h"

struct RecoveredGlobal_8030DE58_lbl_80475808 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030DE58_lbl_80475808_size[sizeof(RecoveredGlobal_8030DE58_lbl_80475808) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8030DE58_lbl_80475848 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030DE58_lbl_80475848_size[sizeof(RecoveredGlobal_8030DE58_lbl_80475848) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8030CEEC_lbl_80475818 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8030CEEC_lbl_80475858 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8030CEEC_lbl_80475878 {
    s32 value;
    u8 remaining[0x14];
};

struct Slot_8030C404 { u8 pad[0x34]; void *a; void *b; };

struct G_8030C45C { s32 a; s32 b; s32 c; f32 v[2]; };

struct S_8030C45C { s32 x; s32 y; };

struct V2_8030C750 { f32 x, y; };

struct V2_8030C814 { f32 x, y; };

extern "C" {
s32 get_localized_text_entry(s32, s32);
s32 free_windows__17TWindowSubComCardFv(s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern const f32 lbl_805DF214;
s32 TAdChrSelASlotGC__sub_8030CA84(s32 arg0, s32 arg1);
s32 get_localized_text_entry(s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
extern const f32 lbl_805DF20C;
s32 TAdChrSelASlotGC__sub_8030C978(void *arg0, s32 arg1, s32 arg2);
void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2);
u8 *__nw__7TObjectFUl(s32);
extern u32 TAdChrSel__global_slot_data;
u8 *get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(s32 arg0, s32 arg1);
u8 *__nw__7TObjectFUl(s32);
s32 __ct__19TAdPlyChrSelPlateGCFv(int, void *, void *);
s32 __ct__15TAdChrSelSlotGCFv(int, void *);
s32 __ct__15TAdPlayerLoadGCFv(int, void *, int);
s32 __ct__15TAdSubPlyItemGCFv(int, void *);
s32 __ct__20TAdChrSelMovePlateGCFv(int, void *);
extern RecoveredGlobal_8030DE58_lbl_80475808 chr_sel_a_slot_plate_layout;
extern RecoveredGlobal_8030DE58_lbl_80475848 chr_sel_a_slot_plate_layout_b;
u32 create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, s32, f32);
s32 push_plate_position__19TAdPlyChrSelPlateGCFv(int, void *);
extern RecoveredGlobal_8030CEEC_lbl_80475818 lbl_80475818;
extern RecoveredGlobal_8030CEEC_lbl_80475858 lbl_80475858;
extern RecoveredGlobal_8030CEEC_lbl_80475878 lbl_80475878;
extern const f32 lbl_805DF218;
void TAdChrSelASlotGC__sub_8030CEEC(u8 *arg0);
u8 * TAdSinglePlyChrSelectGC__sub_801FE4BC(u32);
bool TAdChrSelASlotGC__sub_8030C3C0(s32 arg0, u32 arg1);
s32 get_state_flag__9TMainTaskFv();
s32 is_slot_value_ready__19TAdPlyChrSelPlateGCFl(void *, int);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void *, void *);
s32 get_localized_text_entry(s32, s32);
u8 * TAdSinglePlyChrSelectGC__sub_801FE4BC(u32);
extern G_8030C45C lbl_80542E60;
G_8030C45C *TAdChrSelASlotGC__sub_8030C45C(s32 arg0, s32 arg1, s32 arg2, void *arg3);
s32 get_localized_text_entry(s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
int sprintf(char *, const char *, ...);
void *memset(void *, int, unsigned long);
extern char lbl_80542D60[];
extern const f32 lbl_805DF20C;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void *, void *);
s32 get_localized_text_entry(s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
extern u8 TAdChrSelASlotGC__data_804758A8[];
extern u8 TAdChrSelASlotGC__data_804758B0[];
extern u8 TAdChrSelASlotGC__data_804758B8[];
extern const f32 TAdChrSelASlotGC__data_805DF208;
void copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void *, void *);
s32 get_localized_text_entry(s32, s32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
extern u8 TAdChrSelASlotGC__data_804758A8[];
extern u8 TAdChrSelASlotGC__data_804758B0[];
extern u8 TAdChrSelASlotGC__data_804758B8[];
extern const f32 TAdChrSelASlotGC__data_805DF208;
}

extern "C" {

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2);
void TAdChrSelASlotGC__sub_8030CBD0(void);
void TAdChrSelASlotGC__sub_8030CBD4(void);
void TAdChrSelASlotGC__sub_8030CCE0(void);
void TAdChrSelASlotGC__sub_8030D5DC(void *arg0);
void *__dt__16TAdChrSelASlotGCFv(void *arg0, s16 arg1);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, s32, s32);
s32 clear_entries__20TAdChrSelMovePlateGCFv(s32);
s32 TAdChrSelSlotGC__sub_802C7498(s32, s32);
u32 create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, s32, f32);
s32 init_slot__13TAdMcSelectGCFlPv(s32, s32, s32 *);
s32 reset_selection_slots__19TAdPlyChrSelPlateGCFv(s32);
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC();
s32 write_encrypted_save__23TAdSinglePlyChrSelectGCFv();
s32 TAdSubPlyItemGC__sub_802D6D88(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
s32 TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s16);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(s32, s32, s32, f32);
s32 free_member__17TWindowSubComCardFv(s32, s32);
s32 free_windows__17TWindowSubComCardFv(s32);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFPv(s32);
s32 queue_destruction__7TObjectFv(void *);
s32 reset_all_slots__15TAdChrSelSlotGCFv(s32);

extern f32 lbl_805DF210;

void TAdChrSelASlotGC::render(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

bool TAdChrSelASlotGC__sub_8030C3C0(s32 arg0, u32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TAdSinglePlyChrSelectGC__sub_801FE4BC(arg1));
    if ((u32)(temp_r3) == 0) {
        return 0;
    }
    return *(s32 *)((s8 *)temp_r3 + 8) == 1;
}

s32 TAdChrSelASlotGC::get_plate_value_for_slot(s32 k) {
    Slot_8030C404 *o = (Slot_8030C404 *)this;
    switch (k) {
    case 0:
    case 1:
        return is_slot_value_ready__19TAdPlyChrSelPlateGCFl(o->a, 2);
    case 2:
        return is_slot_value_ready__19TAdPlyChrSelPlateGCFl(o->b, 2);
    }
    return 0;
}

G_8030C45C *TAdChrSelASlotGC__sub_8030C45C(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    S_8030C45C *e = (S_8030C45C *)TAdSinglePlyChrSelectGC__sub_801FE4BC(arg2);
    lbl_80542E60.a = arg1;
    lbl_80542E60.b = e != NULL ? e->x : get_localized_text_entry((s32)(0x16), (s32)(0x1C));
    lbl_80542E60.c = e != NULL ? e->y + 1 : 0;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv(lbl_80542E60.v, arg3);
    return &lbl_80542E60;
}

s32 TAdChrSelASlotGC::open_confirm_message(s32 arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    V2_8030C750 pos;
    s32 w;
    w = create__19TWindowMessageYesNoFPvPvPvPv((s32)arg0, arg2, 0, 0);
    switch (arg1) {
    case 0:
        copy_vec2__28TWindowSubSymbolChatPartsSetFPv(&pos, *(s32 *)(arg0 + 0x20) == 2 ? TAdChrSelASlotGC__data_804758B0 : TAdChrSelASlotGC__data_804758A8);
        break;
    case 1:
        copy_vec2__28TWindowSubSymbolChatPartsSetFPv(&pos, TAdChrSelASlotGC__data_804758B8);
        break;
    }
    forward_slot_selection__16TAdChrSelASlotGCFPvPv(w, get_localized_text_entry(0x16, arg1 + 0x25), (s32)&pos, TAdChrSelASlotGC__data_805DF208);
    free_member__17TWindowSubComCardFv(w, 1);
    return w;
}

s32 TAdChrSelASlotGC::create_message_window(s32 arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    V2_8030C814 pos;
    s32 w;
    w = create__19TWindowMessageYesNoFPvPvPvPv((s32)arg0, arg2, 0, 0);
    switch (arg1) {
    case 0:
        copy_vec2__28TWindowSubSymbolChatPartsSetFPv(&pos, *(s32 *)(arg0 + 0x20) == 2 ? TAdChrSelASlotGC__data_804758B0 : TAdChrSelASlotGC__data_804758A8);
        break;
    case 1:
        copy_vec2__28TWindowSubSymbolChatPartsSetFPv(&pos, TAdChrSelASlotGC__data_804758B8);
        break;
    }
    forward_slot_selection__16TAdChrSelASlotGCFPvPv(w, get_localized_text_entry(0x16, arg1 + 0x23), (s32)&pos, TAdChrSelASlotGC__data_805DF208);
    free_member__17TWindowSubComCardFv(w, 1);
    return w;
}

s32 TAdChrSelASlotGC::create_format_message_window(s32 arg0, s32 arg1, s32 arg2) {
    s32 w;
    w = create__19TWindowMessageYesNoFPvPvPvPv((s32)(arg0), (s32)(arg2), (s32)(0), (s32)(0));
    memset(lbl_80542D60, 0, 0x100);
    sprintf(lbl_80542D60, (const char *)get_localized_text_entry((s32)(0x16), (s32)(0x1E)), 0x2710);
    forward_slot_selection__16TAdChrSelASlotGCFPvPv(w, (s32)lbl_80542D60, arg1, lbl_805DF20C);
    free_member__17TWindowSubComCardFv((s32)(w), (s32)(1));
    return w;
}

#pragma push
#pragma fp_contract on
s32 TAdChrSelASlotGC__sub_8030C978(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv((s32)(arg0), (s32)((void *) (arg2)), (s32)((int) (0)), (s32)((int) (0)));
    forward_slot_selection__16TAdChrSelASlotGCFPvPv((s32)((int) (temp_r31)), (s32)((int) (get_localized_text_entry((s32)((int) (0x16)), (s32)((int) (0x1D))))), (s32)((void *) (arg1)), (f32) (lbl_805DF20C));
    free_member__17TWindowSubComCardFv((s32)((int) (temp_r31)), (s32)((int) (1)));
    return temp_r31;
}
#pragma pop

s32 TAdChrSelASlotGC::open_yes_no_window(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    play_sound_effect(0x53F06, 0, 0, 0);
    temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv(arg0, arg2, 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPv(temp_r31, get_localized_text_entry(0x16, 0x1B), arg1, lbl_805DF210);
    free_member__17TWindowSubComCardFv(temp_r31, 1);
    free_windows__17TWindowSubComCardFv(temp_r31);
    return temp_r31;
}

s32 TAdChrSelASlotGC__sub_8030CA84(s32 arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = create__19TWindowMessageYesNoFPvPvPvPv((s32)((void *) (arg0)), (s32)((int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv())), (s32)((int) (0)), (s32)((int) (0)));
    forward_slot_selection__16TAdChrSelASlotGCFPvPv((s32)((int) (temp_r31)), (s32)((int) (get_localized_text_entry((int) (0x16), (int) (0x1A)))), (s32)((void *) (arg1)), (f32) (lbl_805DF214));
    free_member__17TWindowSubComCardFv((s32)((int) (temp_r31)), (s32)((int) (1)));
    free_windows__17TWindowSubComCardFv((s32)((int) (temp_r31)));
    return temp_r31;
}

void TAdChrSelASlotGC__sub_8030CBD0(void) {  }
void TAdChrSelASlotGC__sub_8030CBD4(void) {  }
void TAdChrSelASlotGC::update_load_state() {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        if ((u32) (get_load_result__15TAdPlayerLoadGCFPv(0) + 0x10000) == 0xFF81U) {
            *(s32 *)((s8 *)this + 0x24) = 0x13;
            return;
        }
        *(s32 *)((s8 *)this + 0x24) = 0x14;
    }
}
void TAdChrSelASlotGC::set_state() {
    write_encrypted_save__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FDAAC();
    *(s32 *)((s8 *)this + 0x24) = 0x12;
}
void TAdChrSelASlotGC::check_load_state() {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        *(s32 *)((s8 *)this + 0x24) = 1;
    }
}
void TAdChrSelASlotGC::init_selection() {
    write_encrypted_save__23TAdSinglePlyChrSelectGCFv();
    TAdSinglePlyChrSelectGC__sub_801FDAAC();
    *(s32 *)((s8 *)this + 0x24) = 0x10;
}
void TAdChrSelASlotGC__sub_8030CCE0(void) {  }

typedef char RecoveredGlobal_8030CEEC_lbl_80475818_size[sizeof(RecoveredGlobal_8030CEEC_lbl_80475818) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8030CEEC_lbl_80475858_size[sizeof(RecoveredGlobal_8030CEEC_lbl_80475858) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8030CEEC_lbl_80475878_size[sizeof(RecoveredGlobal_8030CEEC_lbl_80475878) == 0x18 ? 1 : -1];
void TAdChrSelASlotGC__sub_8030CEEC(u8 *arg0) {
    s32 temp_r0;
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)arg0 + 0x30)))->get_slot_index() >= 0xC) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x20);
        switch (temp_r0) {
        case 0:
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) (&lbl_80475818.value));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475818.value + 8));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475818.value + 0x10));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475818.value + 0x18));
            break;
        case 1:
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) (&lbl_80475858.value));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475858.value + 8));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475858.value + 0x10));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) ((u8 *)&lbl_80475858.value + 0x18));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) (&lbl_80475878.value));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) ((u8 *)&lbl_80475878.value + 8));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) ((u8 *)&lbl_80475878.value + 0x10));
            *(s32 *)((s8 *)arg0 + 0x4C) = ((s32)create_draw_line_ctrl__13TAdMcSelectGCFiif((void *)((void *) (arg0)), (s32)((int) (0x12)), (f32) (lbl_805DF218)));
            *(s32 *)((s8 *)arg0 + 0x50) = ((s32)create_draw_line_ctrl__13TAdMcSelectGCFiif((void *)((void *) (arg0)), (s32)((int) (0x13)), (f32) (lbl_805DF218)));
            break;
        case 2:
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) (&lbl_80475858.value));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) ((u8 *)&lbl_80475858.value + 8));
            push_plate_position__19TAdPlyChrSelPlateGCFv((int) (*(s32 *)((s8 *)arg0 + 0x38)), (void *) ((u8 *)&lbl_80475858.value + 0x10));
            break;
        }
        *(s32 *)((s8 *)arg0 + 0x24) = 0xD;
    }
}

void TAdChrSelASlotGC::update_window_78() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 0xB) {
        if ((u32) *(u32 *)((s8 *)this + 0x78) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x78));
            *(u32 *)((s8 *)this + 0x78) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 0xC;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x78) == 0U)) {
        *(u32 *)((s8 *)this + 0x78) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0x12);
    }
}

void TAdChrSelASlotGC::update_window_7c() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 0xA) {
        if ((u32) *(u32 *)((s8 *)this + 0x7C) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x7C));
            *(u32 *)((s8 *)this + 0x7C) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 0xB;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xF) && ((u32) *(u32 *)((s8 *)this + 0x7C) == 0U)) {
        *(u32 *)((s8 *)this + 0x7C) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0x14);
    }
}

void TAdChrSelASlotGC::update_window_74() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 8) {
        if ((u32) *(u32 *)((s8 *)this + 0x74) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x74));
            *(u32 *)((s8 *)this + 0x74) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 0xA;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x74) == 0U)) {
        *(u32 *)((s8 *)this + 0x74) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0x10);
    }
}

void TAdChrSelASlotGC::update_window_70() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 7) {
        if ((u32) *(u32 *)((s8 *)this + 0x70) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x70));
            *(u32 *)((s8 *)this + 0x70) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 9;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x70) == 0U)) {
        *(u32 *)((s8 *)this + 0x70) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0xE);
    }
}

void TAdChrSelASlotGC::update_window_6c() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 6) {
        if ((u32) *(u32 *)((s8 *)this + 0x6C) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x6C));
            *(u32 *)((s8 *)this + 0x6C) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 8;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x6C) == 0U)) {
        *(u32 *)((s8 *)this + 0x6C) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0xC);
    }
}

void TAdChrSelASlotGC::update_slot5() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 5) {
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 7;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x68) == 0U)) {
        *(u32 *)((s8 *)this + 0x68) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 0xA);
    }
}

void TAdChrSelASlotGC::update_slot4() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 4) {
        if ((u32) *(u32 *)((s8 *)this + 0x64) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x64));
            *(u32 *)((s8 *)this + 0x64) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 6;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x64) == 0U)) {
        *(u32 *)((s8 *)this + 0x64) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 8);
    }
}

void TAdChrSelASlotGC::update_slot3() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 3) {
        if ((u32) *(u32 *)((s8 *)this + 0x60) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x60));
            *(u32 *)((s8 *)this + 0x60) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 5;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x60) == 0U)) {
        *(u32 *)((s8 *)this + 0x60) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 6);
    }
}

void TAdChrSelASlotGC::update_slot2() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 2) {
        if ((u32) *(u32 *)((s8 *)this + 0x5C) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x5C));
            *(u32 *)((s8 *)this + 0x5C) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 4;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x5C) == 0U)) {
        *(u32 *)((s8 *)this + 0x5C) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 4);
    }
}

void TAdChrSelASlotGC::update_slot1() {
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)this + 0x30)))->get_slot_index() > 1) {
        if ((u32) *(u32 *)((s8 *)this + 0x58) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x58));
            *(u32 *)((s8 *)this + 0x58) = 0U;
        }
        *(s32 *)((s8 *)this + 0x24) = 3;
        return;
    }
    if (((s32) *(s32 *)((s8 *)this + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)this + 0x58) == 0U)) {
        *(u32 *)((s8 *)this + 0x58) = TAdChrSelASlotGC__sub_8030CB08(this, 0, 2);
    }
}

void TAdChrSelASlotGC__sub_8030D5DC(void *arg0) {
    s32 temp_r0;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x58));
        *(u32 *)((s8 *)arg0 + 0x58) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x5C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x5C));
        *(u32 *)((s8 *)arg0 + 0x5C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x60));
        *(u32 *)((s8 *)arg0 + 0x60) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x64));
        *(u32 *)((s8 *)arg0 + 0x64) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x68));
        *(u32 *)((s8 *)arg0 + 0x68) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x6C));
        *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x70));
        *(u32 *)((s8 *)arg0 + 0x70) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x74));
        *(u32 *)((s8 *)arg0 + 0x74) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x78));
        *(u32 *)((s8 *)arg0 + 0x78) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x7C));
        *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)arg0 + 0x34));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)arg0 + 0x3C));
        clear_entries__20TAdChrSelMovePlateGCFv(*(s32 *)((s8 *)arg0 + 0x44));
        break;
    case 1:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)arg0 + 0x34));
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)arg0 + 0x38));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)arg0 + 0x3C));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)arg0 + 0x40));
        clear_entries__20TAdChrSelMovePlateGCFv(*(s32 *)((s8 *)arg0 + 0x44));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x4C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x4C));
            *(u32 *)((s8 *)arg0 + 0x4C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x50));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        break;
    case 2:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)arg0 + 0x38));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)arg0 + 0x40));
        break;
    }
    TAdChrSelSlotGC__sub_802C7498(*(s32 *)((s8 *)arg0 + 0x2C), 0);
    TAdChrSelSlotGC__sub_802C7498(*(s32 *)((s8 *)arg0 + 0x2C), 1);
    TAdChrSelSlotGC__sub_802C7498(*(s32 *)((s8 *)arg0 + 0x2C), 2);
    if (((TAdChrSelASlotGC *)(*(s32 *)((s8 *)arg0 + 0x30)))->get_slot_index() > 0) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x54));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x24) = 2;
        return;
    }
    if (((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 0xA) && ((u32) *(u32 *)((s8 *)arg0 + 0x54) == 0U)) {
        *(u32 *)((s8 *)arg0 + 0x54) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0);
    }
}

extern s32 lbl_80475840[];
extern s32 lbl_804758A0[];
extern const f32 lbl_805DF218;

void TAdChrSelASlotGC::close_windows() {
    s32 temp_r0;
    s32 temp_r0_2;

    reset_all_slots__15TAdChrSelSlotGCFv(*(s32 *)((s8 *)this + 0x2C));
    if ((u32) *(u32 *)((s8 *)this + 0x48) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x48));
        *(u32 *)((s8 *)this + 0x48) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x4C) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x4C));
        *(u32 *)((s8 *)this + 0x4C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x50) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x50));
        *(u32 *)((s8 *)this + 0x50) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x54) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x54));
        *(u32 *)((s8 *)this + 0x54) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x58) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x58));
        *(u32 *)((s8 *)this + 0x58) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x5C) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x5C));
        *(u32 *)((s8 *)this + 0x5C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x60) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x60));
        *(u32 *)((s8 *)this + 0x60) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x64) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x64));
        *(u32 *)((s8 *)this + 0x64) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x68));
        *(u32 *)((s8 *)this + 0x68) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x6C) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x6C));
        *(u32 *)((s8 *)this + 0x6C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x70) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x70));
        *(u32 *)((s8 *)this + 0x70) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x74) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x74));
        *(u32 *)((s8 *)this + 0x74) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x78) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x78));
        *(u32 *)((s8 *)this + 0x78) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x7C) != 0U) {
        TWindow__close(*(void **)((s8 *)this + 0x7C));
        *(u32 *)((s8 *)this + 0x7C) = 0U;
    }
    temp_r0 = *(s32 *)((s8 *)this + 0x20);
    switch (temp_r0) {
    case 0:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)this + 0x34));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)this + 0x3C));
        break;
    case 1:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)this + 0x34));
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)this + 0x38));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)this + 0x3C));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)this + 0x40));
        break;
    case 2:
        reset_selection_slots__19TAdPlyChrSelPlateGCFv(*(s32 *)((s8 *)this + 0x38));
        TAdSubPlyItemGC__sub_802D6D88(*(s32 *)((s8 *)this + 0x40));
        break;
    }
    temp_r0_2 = *(s32 *)((s8 *)this + 0x20);
    switch (temp_r0_2) {
    case 0:
        *(u32 *)((s8 *)this + 0x4C) = create_draw_line_ctrl__13TAdMcSelectGCFiif(this, 0xC, lbl_805DF218);
        init_slot__13TAdMcSelectGCFlPv(*(s32 *)((s8 *)this + 0x2C), 0, lbl_80475840);
        *(u32 *)((s8 *)this + 0x48) = create_draw_line_ctrl__13TAdMcSelectGCFiif(this, 0xB, lbl_805DF218);
        break;
    case 1:
        init_slot__13TAdMcSelectGCFlPv(*(s32 *)((s8 *)this + 0x2C), 0, lbl_80475840);
        *(u32 *)((s8 *)this + 0x48) = create_draw_line_ctrl__13TAdMcSelectGCFiif(this, 0xB, lbl_805DF218);
        break;
    case 2:
        init_slot__13TAdMcSelectGCFlPv(*(s32 *)((s8 *)this + 0x2C), 0, lbl_804758A0);
        *(u32 *)((s8 *)this + 0x48) = create_draw_line_ctrl__13TAdMcSelectGCFiif(this, 0xD, lbl_805DF218);
        *(u32 *)((s8 *)this + 0x4C) = create_draw_line_ctrl__13TAdMcSelectGCFiif(this, 0x14, lbl_805DF218);
        break;
    }
    *(s32 *)((s8 *)this + 0x24) = 1;
}

void TAdChrSelASlotGC::create_children(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_13;
    s32 temp_r3_14;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    temp_r3 = ((s32)__nw__7TObjectFUl((s32)((int) (0x128))));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = __ct__15TAdChrSelSlotGCFv((int) (temp_r3), (void *) (arg0));
    }
    *(s32 *)((s8 *)arg0 + 0x2C) = var_r0;
    switch (arg1) {
    case 0:
        temp_r3_2 = ((s32)__nw__7TObjectFUl((s32)((int) (0x24))));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = __ct__15TAdPlayerLoadGCFv((int) (temp_r3_2), (void *) (arg0), (int) (0));
        }
        *(s32 *)((s8 *)arg0 + 0x30) = var_r0_2;
        temp_r3_3 = ((s32)__nw__7TObjectFUl((s32)((int) (0x3B4))));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = __ct__19TAdPlyChrSelPlateGCFv((int) (temp_r3_3), (void *) (arg0), (void *) (&chr_sel_a_slot_plate_layout.value));
        }
        *(s32 *)((s8 *)arg0 + 0x34) = var_r0_3;
        temp_r3_4 = ((s32)__nw__7TObjectFUl((s32)((int) (0x48C))));
        var_r0_4 = temp_r3_4;
        if (var_r0_4 != 0) {
            var_r0_4 = __ct__15TAdSubPlyItemGCFv((int) (temp_r3_4), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x3C) = var_r0_4;
        temp_r3_5 = ((s32)__nw__7TObjectFUl((s32)((int) (0x208))));
        var_r0_5 = temp_r3_5;
        if (var_r0_5 != 0) {
            var_r0_5 = __ct__20TAdChrSelMovePlateGCFv((int) (temp_r3_5), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x44) = var_r0_5;
        return;
    case 1:
        temp_r3_6 = ((s32)__nw__7TObjectFUl((s32)((int) (0x24))));
        var_r0_6 = temp_r3_6;
        if (var_r0_6 != 0) {
            var_r0_6 = __ct__15TAdPlayerLoadGCFv((int) (temp_r3_6), (void *) (arg0), (int) (1));
        }
        *(s32 *)((s8 *)arg0 + 0x30) = var_r0_6;
        temp_r3_7 = ((s32)__nw__7TObjectFUl((s32)((int) (0x3B4))));
        var_r0_7 = temp_r3_7;
        if (var_r0_7 != 0) {
            var_r0_7 = __ct__19TAdPlyChrSelPlateGCFv((int) (temp_r3_7), (void *) (arg0), (void *) (&chr_sel_a_slot_plate_layout.value));
        }
        *(s32 *)((s8 *)arg0 + 0x34) = var_r0_7;
        temp_r3_8 = ((s32)__nw__7TObjectFUl((s32)((int) (0x3B4))));
        var_r0_8 = temp_r3_8;
        if (var_r0_8 != 0) {
            var_r0_8 = __ct__19TAdPlyChrSelPlateGCFv((int) (temp_r3_8), (void *) (arg0), (void *) (&chr_sel_a_slot_plate_layout_b.value));
        }
        *(s32 *)((s8 *)arg0 + 0x38) = var_r0_8;
        temp_r3_9 = ((s32)__nw__7TObjectFUl((s32)((int) (0x48C))));
        var_r0_9 = temp_r3_9;
        if (var_r0_9 != 0) {
            var_r0_9 = __ct__15TAdSubPlyItemGCFv((int) (temp_r3_9), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x3C) = var_r0_9;
        temp_r3_10 = ((s32)__nw__7TObjectFUl((s32)((int) (0x48C))));
        var_r0_10 = temp_r3_10;
        if (var_r0_10 != 0) {
            var_r0_10 = __ct__15TAdSubPlyItemGCFv((int) (temp_r3_10), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x40) = var_r0_10;
        temp_r3_11 = ((s32)__nw__7TObjectFUl((s32)((int) (0x208))));
        var_r0_11 = temp_r3_11;
        if (var_r0_11 != 0) {
            var_r0_11 = __ct__20TAdChrSelMovePlateGCFv((int) (temp_r3_11), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x44) = var_r0_11;
        return;
    case 2:
        temp_r3_12 = ((s32)__nw__7TObjectFUl((s32)((int) (0x24))));
        var_r0_12 = temp_r3_12;
        if (var_r0_12 != 0) {
            var_r0_12 = __ct__15TAdPlayerLoadGCFv((int) (temp_r3_12), (void *) (arg0), (int) (1));
        }
        *(s32 *)((s8 *)arg0 + 0x30) = var_r0_12;
        temp_r3_13 = ((s32)__nw__7TObjectFUl((s32)((int) (0x3B4))));
        var_r0_13 = temp_r3_13;
        if (var_r0_13 != 0) {
            var_r0_13 = __ct__19TAdPlyChrSelPlateGCFv((int) (temp_r3_13), (void *) (arg0), (void *) (&chr_sel_a_slot_plate_layout_b.value));
        }
        *(s32 *)((s8 *)arg0 + 0x38) = var_r0_13;
        temp_r3_14 = ((s32)__nw__7TObjectFUl((s32)((int) (0x48C))));
        var_r0_14 = temp_r3_14;
        if (var_r0_14 != 0) {
            var_r0_14 = __ct__15TAdSubPlyItemGCFv((int) (temp_r3_14), (void *) (arg0));
        }
        *(s32 *)((s8 *)arg0 + 0x40) = var_r0_14;
        return;
    }
}

void TAdChrSelASlotGC::init(s32 arg1) {
    *(s32 *)((s8 *)this + 0x24) = 0;
    *(s32 *)((s8 *)this + 0x28) = 0;
    *(s32 *)((s8 *)this + 0x20) = arg1;
    *(s32 *)((s8 *)this + 0x1C) = -1;
    *(s32 *)((s8 *)this + 0x2C) = 0;
    *(s32 *)((s8 *)this + 0x30) = 0;
    *(s32 *)((s8 *)this + 0x34) = 0;
    *(s32 *)((s8 *)this + 0x38) = 0;
    *(s32 *)((s8 *)this + 0x3C) = 0;
    *(s32 *)((s8 *)this + 0x40) = 0;
    *(s32 *)((s8 *)this + 0x44) = 0;
    *(s32 *)((s8 *)this + 0x48) = 0;
    *(s32 *)((s8 *)this + 0x4C) = 0;
    *(s32 *)((s8 *)this + 0x50) = 0;
    *(s32 *)((s8 *)this + 0x54) = 0;
    *(s32 *)((s8 *)this + 0x58) = 0;
    *(s32 *)((s8 *)this + 0x5C) = 0;
    *(s32 *)((s8 *)this + 0x60) = 0;
    *(s32 *)((s8 *)this + 0x64) = 0;
    *(s32 *)((s8 *)this + 0x68) = 0;
    *(s32 *)((s8 *)this + 0x6C) = 0;
    *(s32 *)((s8 *)this + 0x70) = 0;
    *(s32 *)((s8 *)this + 0x74) = 0;
    *(s32 *)((s8 *)this + 0x78) = 0;
    *(s32 *)((s8 *)this + 0x7C) = 0;
}

extern s32 __vt__16TAdChrSelASlotGC[];
extern u32 TAdChrSel__global_slot_data;

void *__dt__16TAdChrSelASlotGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdChrSelASlotGC;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x54) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x54));
            *(u32 *)((s8 *)arg0 + 0x54) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x58));
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x5C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x5C));
            *(u32 *)((s8 *)arg0 + 0x5C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x60));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x64) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)((s8 *)arg0 + 0x64) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x6C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x6C));
            *(u32 *)((s8 *)arg0 + 0x6C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x74));
            *(u32 *)((s8 *)arg0 + 0x74) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x78));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x7C));
            *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
        }
        if ((u32) TAdChrSel__global_slot_data != 0U) {
            TAdChrSel__global_slot_data = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__16TAdChrSelASlotGC[];
extern void *TAdChrSelASlotGC__name;

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TAdChrSelASlotGC;
    *(void **)((s8 *)arg0 + 0x0) = TAdChrSelASlotGC__name;
    ((TAdChrSelASlotGC *)arg0)->init((s32)(arg2));
    ((TAdChrSelASlotGC *)arg0)->create_children((s32)(arg2));
    return arg0;
}

u8 *get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) (*(u8 * *)&TAdChrSel__global_slot_data) != NULL) {
        return (*(u8 * *)&TAdChrSel__global_slot_data);
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x80));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(((u8 *)TAdChrSelASlotGC__ct((void *)(temp_r3), (void *)(arg0), (void *)(arg1))));
    }
    (*(u8 * *)&TAdChrSel__global_slot_data) = var_r0;
    return var_r0;
}

s32 TAdChrSelASlotGC::get_slot_index() { return *(s32*)((char*)this + 0x1c); }

}
