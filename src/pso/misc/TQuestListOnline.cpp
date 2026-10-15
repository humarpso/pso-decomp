#include "types.h"
#include "pso/misc/TQuestListOnline.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80217EC4 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_80217EC4_lbl_8044BEDC { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_80217EC4_lbl_8044BEDC_size[sizeof(RecoveredGlobal_80217EC4_lbl_8044BEDC) == 0xC ? 1 : -1];

typedef s32 M2C_UNK;
struct VBase_18_80217F88 { char pad[0x18]; };

struct VObj_18_80217F88 : VBase_18_80217F88 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct VBase_18_802178E4 { char pad[0x18]; };

struct VObj_18_802178E4 : VBase_18_802178E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
};

#define QL_80217C1C ((QList_80217C1C *)TQuestListOnline__quest_list_buffer)
struct VBase_18_80217C1C { char pad[0x18]; };

struct VObj_18_80217C1C : VBase_18_80217C1C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

struct Obj_80217C1C {
    u8 pad0[0x24]; s32 f24; u8 pad28[0x38 - 0x28];
    u32 f38; u32 f3C; u32 f40; u32 f44; s32 f48; u8 tag[0x68 - 0x4C]; s32 f68;
    VObj_18_80217C1C *f6C;
};

struct QEnt_80217C1C { u8 type; u8 pad1[0x27]; u8 name[0x98 - 0x28]; };

struct QList_80217C1C { u8 f0; u8 count; u8 pad2[2]; QEnt_80217C1C ents[1]; };

struct T_80217B30 { u8 pad[0x38]; s32 f38; };

extern "C" {
s32 obj_getField1c(int);
s32 get_camera_id__11TCameraCtrlFv();
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_position_xy(int, f32, f32);
s32 set_field_1c__6TLobbyFPvf(int, f32);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
u32 create_message_window__6TLobbyFiiUis(int, void *, int, int);
s32 get_window_layout_position(int);
extern RecoveredGlobal_80217EC4_lbl_8044BEDC lbl_8044BEDC;
extern u32 TQuestListOnline__selected_quest_info;
extern const f32 lbl_805DC6A4;
extern const f32 lbl_805DC6A8;

s32 obj_getField1c(int);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 get_guild_text(int);
M2C_UNK reset_list__20TShopArmorListWindowFPv(u32);
M2C_UNK calc_list_content_extent(u32);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
u32 set_window_mode_4__6TLobbyFPvii(s32, void *, int);
s32 get_window_layout_position(int);
void add_list_entry__6TLobbyFPviii(u32, int, void *, int);
u32 create_item_list_window(s32, int, u16);
extern Stack_80217EC4 lbl_8044BED4[];
extern u8 *TQuestListOnline__quest_list_buffer;

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
M2C_UNK send_action__9TProtocolFR13GameListEntryUcPcPc(void *, void *, int, void *, void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 check_party_gathered__22THunterGuildSeqOfflineFv();

M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
s32 get_selected_menu_value(void *);
extern void *TLobby__protocol_instance;
extern u8 lbl_805DC6A0;

s32 obj_getField1c(int);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_position_xy(int, f32, f32);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
s32 get_window_layout_position(int);
M2C_UNK __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
s32 get_status_flag__6TLobbyFPv(u32);
s32 get_flag_bit2__6TLobbyFPv(u32);
M2C_UNK send_info__9TProtocolFR16TPlyGuildCardTag(void *, void *);
M2C_UNK send_action__9TProtocolFR13GameListEntryUcPcPc(void *, void *, int, void *, void *);
s32 get_unlocked_tier__16TQuestListOnlineFv(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK TWindow__close(void *);
u32 create_yes_no_window(int, int, int, int);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern void *TLobby__protocol_instance;
extern u8 *TQuestListOnline__quest_list_buffer;
extern s32 online_quest_list_state;
extern u8 lbl_805DC6A0;

extern T_80217B30 TQuestListOnline__bin_download_state;
extern T_80217B30 TQuestListOnline__dat_download_state;
extern s32 TQuestListOnline__decompression_cursor;
extern s32 online_quest_bin_data;
extern s32 online_quest_dat_buffer;
extern s32 quest_bin_decompressed_size;
extern s32 online_quest_list_decompressed_size;
s32 prs_decompress_buffer(s32, s32);
int set_field_20__12TQuestListVMFPvi(void*, int);

}

extern "C" {

s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);

}
void TQuestListOnline::invoke_callback_30_and_queue_destruction() {
    M2C_UNK (*temp_r12)();

    temp_r12 = callback30;
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(this);
}
extern "C" {

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__decompression_cursor;

}
void TQuestListOnline::handle_quest_confirm() {
    s32 v;
    s32 n;
    if (M2C_FIELD(this, void **, 0x44) != NULL && is_visible__17TWindowSubComCardFPv(M2C_FIELD(this, void **, 0x44)) != 0) {
        v = get_selected_menu_value(M2C_FIELD(this, void **, 0x44));
        if (v == 0) {
            if (check_party_gathered__22THunterGuildSeqOfflineFv() == 1) {
                if (M2C_FIELD(this, VObj_18_802178E4 **, 0x6C) != NULL) {
                    M2C_FIELD(this, VObj_18_802178E4 **, 0x6C)->m7(0x14, 1);
                }
                send_action__9TProtocolFR13GameListEntryUcPcPc(TLobby__protocol_instance, selected_entry, 0, &lbl_805DC6A0, &lbl_805DC6A0);
                queue_destruction__7TObjectFv(M2C_FIELD(this, void **, 0x44));
                M2C_FIELD(this, void **, 0x44) = NULL;
                if (M2C_FIELD(this, void **, 0x40) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(this, void **, 0x40));
                    M2C_FIELD(this, void **, 0x40) = NULL;
                }
                if (M2C_FIELD(this, void **, 0x3C) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(this, void **, 0x3C));
                    M2C_FIELD(this, void **, 0x3C) = NULL;
                }
                if (M2C_FIELD(this, void **, 0x38) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(this, void **, 0x38));
                    M2C_FIELD(this, void **, 0x38) = NULL;
                }
                set_field_20__12TQuestListVMFPvi((void*)(this), (int)(0xC));
                return;
            }
            if (M2C_FIELD(this, VObj_18_802178E4 **, 0x6C) != NULL) {
                M2C_FIELD(this, VObj_18_802178E4 **, 0x6C)->m7(0x10, 1);
            }
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(this, void **, 0x44));
            return;
        }
        if (v == 1) {
            TWindow__close(M2C_FIELD(this, void **, 0x44));
            M2C_FIELD(this, void **, 0x44) = NULL;
            if (M2C_FIELD(this, void **, 0x40) != NULL) {
                TWindow__close(M2C_FIELD(this, void **, 0x40));
                M2C_FIELD(this, void **, 0x40) = NULL;
            }
            if (M2C_FIELD(this, void **, 0x38) != NULL) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(this, void **, 0x38));
            }
            n = selection_stage;
            selection_stage = n - 1;
            close_windows();
            if (M2C_FIELD(this, VObj_18_802178E4 **, 0x6C) != NULL) {
                M2C_FIELD(this, VObj_18_802178E4 **, 0x6C)->m7(0x19, 1);
            }
            set_field_20__12TQuestListVMFPvi((void*)(this), (int)(1));
            return;
        }
    }
    if (M2C_FIELD(this, void **, 0x44) != NULL && get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(this, void **, 0x44)) != 0) {
        TWindow__close(M2C_FIELD(this, void **, 0x44));
        M2C_FIELD(this, void **, 0x44) = NULL;
        if (M2C_FIELD(this, void **, 0x40) != NULL) {
            TWindow__close(M2C_FIELD(this, void **, 0x40));
            M2C_FIELD(this, void **, 0x40) = NULL;
        }
        if (M2C_FIELD(this, void **, 0x38) != NULL) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(this, void **, 0x38));
        }
        n = selection_stage;
        selection_stage = n - 1;
        close_windows();
        if (M2C_FIELD(this, VObj_18_802178E4 **, 0x6C) != NULL) {
            M2C_FIELD(this, VObj_18_802178E4 **, 0x6C)->m7(0x19, 1);
        }
        set_field_20__12TQuestListVMFPvi((void*)(this), (int)(1));
    }
}
extern "C" {

#pragma push
#pragma optimization_level 2
#pragma dont_inline on
}
void TQuestListOnline::decompress_quest_list_buffers() {
    quest_bin_decompressed_size = prs_decompress_buffer(TQuestListOnline__bin_download_state.f38, TQuestListOnline__decompression_cursor);
    online_quest_bin_data = TQuestListOnline__decompression_cursor;
    TQuestListOnline__decompression_cursor += quest_bin_decompressed_size;
    online_quest_list_decompressed_size = prs_decompress_buffer(TQuestListOnline__dat_download_state.f38, TQuestListOnline__decompression_cursor);
    online_quest_dat_buffer = TQuestListOnline__decompression_cursor;
    set_field_20__12TQuestListVMFPvi((void*)(this), (int)((void *)7));
}
extern "C" {

#pragma pop

}
void TQuestListOnline::request_download_buffer() {
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__decompression_cursor = tmp_buf_use_req__6TLobbyFPv(lbl_8044BEB0);
        set_field_20__12TQuestListVMFPvi((void*)(this), (int)(6));
    }
}
extern "C" {

}
int TQuestListOnline::begin_buffer_request() { return set_field_20__12TQuestListVMFPvi((void*)(this), (int)(5)); }
extern "C" {

}
void TQuestListOnline::handle_list_selection() {
    if (((VObj_18_80217C1C*)sequence)->m8() == 0) {
        return;
    }
    if (list_window != 0) {
        s32 sel = select_cursor_entry__6TLobbyFPv(list_window);
        if (description_window != 0 && sel != selected_index) {
            send_and_handle__6TLobbyFPvii(description_window, QL_80217C1C->ents[sel].name, 0x80);
        }
        if (info_window != 0 && sel != selected_index) {
            TWindow__close((void *)info_window);
            info_window = 0;
        }
        selected_index = sel;
    }
    if (list_window != 0 && get_status_flag__6TLobbyFPv(list_window) != 0) {
        if (selection_stage == 0) {
            s32 idx = select_cursor_entry__6TLobbyFPv(list_window);
            __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(selected_entry, &QL_80217C1C->ents[idx]);
            switch ((TQuestListOnline__quest_list_buffer + idx * 0x98)[4]) {
            case 1:
                online_quest_list_state = 0;
                break;
            case 2:
                online_quest_list_state = 1;
                break;
            default:
                online_quest_list_state = 0;
                break;
            }
            send_action__9TProtocolFR13GameListEntryUcPcPc(TLobby__protocol_instance, selected_entry, get_unlocked_tier__16TQuestListOnlineFv(this), &lbl_805DC6A0, &lbl_805DC6A0);
            if (description_window != 0) {
                TWindow__close((void *)description_window);
                description_window = 0;
            }
            TWindow__close((void *)list_window);
            list_window = 0;
            set_field_20__12TQuestListVMFPvi(this, 0xC);
            selection_stage++;
            return;
        } else if (selection_stage == 1) {
            s32 idx = select_cursor_entry__6TLobbyFPv(list_window);
            __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(selected_entry, &QL_80217C1C->ents[idx]);
            send_info__9TProtocolFR16TPlyGuildCardTag(TLobby__protocol_instance, selected_entry);
            set_field_20__12TQuestListVMFPvi(this, 0xC);
            selection_stage++;
            return;
        } else if (selection_stage == 2) {
            if (confirm_window == 0) {
                u16 id = obj_getField1c(window_owner);
                confirm_window = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
                set_position_xy(confirm_window, get_scale__15TShopWindowBaseFv(this), get_scale__15TShopWindowBaseFv(this));
                if (sequence != NULL) {
                    ((VObj_18_80217C1C*)sequence)->m7(5, 1);
                }
                set_field_20__12TQuestListVMFPvi(this, 8);
            }
        }
    }
    if (list_window != 0 && get_flag_bit2__6TLobbyFPv(list_window) != 0) {
        set_field_20__12TQuestListVMFPvi(this, 9);
    }
}
extern "C" {

}
void TQuestListOnline::show_info_window() {
    typedef char sp8_offset[(offsetof(Stack_80217EC4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80217EC4, spC) == 0x4) ? 1 : -1];
    Stack_80217EC4 stack;
    u16 temp_r31;
    if ((u32) info_window == 0U) {
        stack.sp8 = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 4);
        temp_r31 = obj_getField1c((int) (window_owner));
        info_window = create_message_window__6TLobbyFiiUis((int) (get_window_layout_position((int) (0x2E))), (void *) (&stack.sp8), (int) (1), (int) ((s32) temp_r31));
        set_field_1c__6TLobbyFPvf((int) (info_window), (f32) (lbl_805DC6A4));
        if (get_camera_id__11TCameraCtrlFv() >= 2) {
            set_position_xy((int) (info_window), (f32) (lbl_805DC6A8), (f32) (lbl_805DC6A8));
        }
    }
    if ((u32) TQuestListOnline__selected_quest_info != 0U) {
        send_and_handle__6TLobbyFPvii((int) (info_window), (void *) (TQuestListOnline__selected_quest_info + 4), (int) (0x80));
    }
    set_field_20__12TQuestListVMFPvi((void*)((void *) (this)), (int)((int) (3)));
}
extern "C" {

}
void TQuestListOnline::build_list_window() {
    u16 id;
    s32 off;
    s32 i;
    u8 *e;
    if (((VObj_18_80217F88 *)M2C_FIELD(this, void **, 0x6C))->m8() != 0) {
        if (list_window == 0U) {
            id = obj_getField1c(window_owner);
            list_window = create_item_list_window(get_guild_text(0), 0x40, id);
        } else {
            reset_list__20TShopArmorListWindowFPv(list_window);
        }
        if (TQuestListOnline__quest_list_buffer != NULL && TQuestListOnline__quest_list_buffer[1] == 0) {
            set_field_20__12TQuestListVMFPvi(this, 0xB);
            return;
        }
        if (TQuestListOnline__quest_list_buffer != NULL) {
            for (i = 0, off = 0; i < TQuestListOnline__quest_list_buffer[1]; i++, off += 0x98) {
                e = TQuestListOnline__quest_list_buffer + off;
                switch (e[5]) {
                case 0:
                    add_list_entry__6TLobbyFPviii(list_window, 0x2C, e + 0xC, i);
                    break;
                case 1:
                    add_list_entry__6TLobbyFPviii(list_window, 0x17, e + 0xC, i);
                    break;
                case 2:
                    add_list_entry__6TLobbyFPviii(list_window, 0x31, e + 0xC, i);
                    break;
                default:
                    add_list_entry__6TLobbyFPviii(list_window, 0x17, e + 0xC, i);
                    break;
                }
            }
            calc_list_content_extent(list_window);
        }
        if (description_window == 0U) {
            Stack_80217EC4 sp8 = lbl_8044BED4[0];
            description_window = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x2D), &sp8, 1);
            send_and_handle__6TLobbyFPvii(description_window, TQuestListOnline__quest_list_buffer + 0x2C, 0x80);
        } else {
            send_and_handle__6TLobbyFPvii(description_window, TQuestListOnline__quest_list_buffer + 0x2C, 0x80);
        }
        selected_index = 0;
        set_field_20__12TQuestListVMFPvi(this, 3);
    }
}
extern "C" {

}
