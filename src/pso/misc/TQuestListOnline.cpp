#include "types.h"
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

#define QL_80217C1C ((QList_80217C1C *)TQuestListOnline__data_805D6190)
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
extern u32 TQuestListOnline__data_805D6194;
extern const f32 lbl_805DC6A4;
extern const f32 lbl_805DC6A8;
void show_info_window__16TQuestListOnlineFPv(u8 *arg0);
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
extern u8 *TQuestListOnline__data_805D6190;
void build_list_window__16TQuestListOnlineFPv(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);
M2C_UNK send_action__9TProtocolFR13GameListEntryUcPcPc(void *, void *, int, void *, void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 check_party_gathered__22THunterGuildSeqOfflineFv();
M2C_UNK close_windows__16TQuestListOnlineFPv(void *, int);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
s32 get_selected_menu_value(void *);
extern void *TLobby__data_805D5580;
extern u8 lbl_805DC6A0;
void handle_quest_confirm__16TQuestListOnlineFPv(u8 *arg0);
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
extern void *TLobby__data_805D5580;
extern u8 *TQuestListOnline__data_805D6190;
extern s32 lbl_805D61F8;
extern u8 lbl_805DC6A0;
void TQuestListOnline__sub_80217C1C(Obj_80217C1C *arg0);
extern T_80217B30 TQuestListOnline__data_80513E24;
extern T_80217B30 TQuestListOnline__data_80513DE8;
extern s32 TQuestListOnline__data_805D61E4;
extern s32 lbl_805D61E8;
extern s32 lbl_805D61EC;
extern s32 lbl_805D61F0;
extern s32 lbl_805D61F4;
s32 prs_decompress_buffer(s32, s32);
int set_field_20__12TQuestListVMFPvi(void*, int);
void TQuestListOnline__sub_80217B30(void *self);
}

extern "C" {

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void request_quest_list__16TQuestListOnlineFi(s32 arg0);
int run_task__16TQuestListOnlineFPv(void* p);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, int);

void invoke_callback_30_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x30);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK lbl_8044BEB0[];
extern s32 TQuestListOnline__data_805D61E4;

void handle_quest_confirm__16TQuestListOnlineFPv(u8 *arg0) {
    s32 v;
    s32 n;
    if (M2C_FIELD(arg0, void **, 0x44) != NULL && is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44)) != 0) {
        v = get_selected_menu_value(M2C_FIELD(arg0, void **, 0x44));
        if (v == 0) {
            if (check_party_gathered__22THunterGuildSeqOfflineFv() == 1) {
                if (M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C) != NULL) {
                    M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C)->m7(0x14, 1);
                }
                send_action__9TProtocolFR13GameListEntryUcPcPc(TLobby__data_805D5580, arg0 + 0x4C, 0, &lbl_805DC6A0, &lbl_805DC6A0);
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x44));
                M2C_FIELD(arg0, void **, 0x44) = NULL;
                if (M2C_FIELD(arg0, void **, 0x40) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40));
                    M2C_FIELD(arg0, void **, 0x40) = NULL;
                }
                if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
                    M2C_FIELD(arg0, void **, 0x3C) = NULL;
                }
                if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
                    M2C_FIELD(arg0, void **, 0x38) = NULL;
                }
                set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(0xC));
                return;
            }
            if (M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C) != NULL) {
                M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C)->m7(0x10, 1);
            }
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44));
            return;
        }
        if (v == 1) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, void **, 0x44) = NULL;
            if (M2C_FIELD(arg0, void **, 0x40) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, void **, 0x40) = NULL;
            }
            if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x38));
            }
            n = M2C_FIELD(arg0, s32 *, 0x68);
            M2C_FIELD(arg0, s32 *, 0x68) = n - 1;
            close_windows__16TQuestListOnlineFPv(arg0, n);
            if (M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C) != NULL) {
                M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C)->m7(0x19, 1);
            }
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
            return;
        }
    }
    if (M2C_FIELD(arg0, void **, 0x44) != NULL && get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44)) != 0) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, void **, 0x44) = NULL;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, void **, 0x40) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x38));
        }
        n = M2C_FIELD(arg0, s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x68) = n - 1;
        close_windows__16TQuestListOnlineFPv(arg0, n);
        if (M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C) != NULL) {
            M2C_FIELD(arg0, VObj_18_802178E4 **, 0x6C)->m7(0x19, 1);
        }
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(1));
    }
}

#pragma push
#pragma optimization_level 2
#pragma dont_inline on
void TQuestListOnline__sub_80217B30(void *self) {
    lbl_805D61F0 = prs_decompress_buffer(TQuestListOnline__data_80513E24.f38, TQuestListOnline__data_805D61E4);
    lbl_805D61E8 = TQuestListOnline__data_805D61E4;
    TQuestListOnline__data_805D61E4 += lbl_805D61F0;
    lbl_805D61F4 = prs_decompress_buffer(TQuestListOnline__data_80513DE8.f38, TQuestListOnline__data_805D61E4);
    lbl_805D61EC = TQuestListOnline__data_805D61E4;
    set_field_20__12TQuestListVMFPvi((void*)(self), (int)((void *)7));
}
#pragma pop

void request_quest_list__16TQuestListOnlineFi(s32 arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        TQuestListOnline__data_805D61E4 = tmp_buf_use_req__6TLobbyFPv(lbl_8044BEB0);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (int)(6));
    }
}

int run_task__16TQuestListOnlineFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (int)(5)); }

void TQuestListOnline__sub_80217C1C(Obj_80217C1C *arg0) {
    if (arg0->f6C->m8() == 0) {
        return;
    }
    if (arg0->f38 != 0) {
        s32 sel = select_cursor_entry__6TLobbyFPv(arg0->f38);
        if (arg0->f3C != 0 && sel != arg0->f48) {
            send_and_handle__6TLobbyFPvii(arg0->f3C, QL_80217C1C->ents[sel].name, 0x80);
        }
        if (arg0->f40 != 0 && sel != arg0->f48) {
            TWindow__close((void *)arg0->f40);
            arg0->f40 = 0;
        }
        arg0->f48 = sel;
    }
    if (arg0->f38 != 0 && get_status_flag__6TLobbyFPv(arg0->f38) != 0) {
        if (arg0->f68 == 0) {
            s32 idx = select_cursor_entry__6TLobbyFPv(arg0->f38);
            __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(arg0->tag, &QL_80217C1C->ents[idx]);
            switch ((TQuestListOnline__data_805D6190 + idx * 0x98)[4]) {
            case 1:
                lbl_805D61F8 = 0;
                break;
            case 2:
                lbl_805D61F8 = 1;
                break;
            default:
                lbl_805D61F8 = 0;
                break;
            }
            send_action__9TProtocolFR13GameListEntryUcPcPc(TLobby__data_805D5580, arg0->tag, get_unlocked_tier__16TQuestListOnlineFv(arg0), &lbl_805DC6A0, &lbl_805DC6A0);
            if (arg0->f3C != 0) {
                TWindow__close((void *)arg0->f3C);
                arg0->f3C = 0;
            }
            TWindow__close((void *)arg0->f38);
            arg0->f38 = 0;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            arg0->f68++;
            return;
        } else if (arg0->f68 == 1) {
            s32 idx = select_cursor_entry__6TLobbyFPv(arg0->f38);
            __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(arg0->tag, &QL_80217C1C->ents[idx]);
            send_info__9TProtocolFR16TPlyGuildCardTag(TLobby__data_805D5580, arg0->tag);
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            arg0->f68++;
            return;
        } else if (arg0->f68 == 2) {
            if (arg0->f44 == 0) {
                u16 id = obj_getField1c(arg0->f24);
                arg0->f44 = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
                set_position_xy(arg0->f44, get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
                if (arg0->f6C != NULL) {
                    arg0->f6C->m7(5, 1);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 8);
            }
        }
    }
    if (arg0->f38 != 0 && get_flag_bit2__6TLobbyFPv(arg0->f38) != 0) {
        set_field_20__12TQuestListVMFPvi(arg0, 9);
    }
}

void show_info_window__16TQuestListOnlineFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80217EC4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80217EC4, spC) == 0x4) ? 1 : -1];
    Stack_80217EC4 stack;
    u16 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        stack.sp8 = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_8044BEDC.value, s32 *, 4);
        temp_r31 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        M2C_FIELD(arg0, u32 *, 0x40) = create_message_window__6TLobbyFiiUis((int) (get_window_layout_position((int) (0x2E))), (void *) (&stack.sp8), (int) (1), (int) ((s32) temp_r31));
        set_field_1c__6TLobbyFPvf((int) (M2C_FIELD(arg0, u32 *, 0x40)), (f32) (lbl_805DC6A4));
        if (get_camera_id__11TCameraCtrlFv() >= 2) {
            set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x40)), (f32) (lbl_805DC6A8), (f32) (lbl_805DC6A8));
        }
    }
    if ((u32) TQuestListOnline__data_805D6194 != 0U) {
        send_and_handle__6TLobbyFPvii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (void *) (TQuestListOnline__data_805D6194 + 4), (int) (0x80));
    }
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (int)((int) (3)));
}
void build_list_window__16TQuestListOnlineFPv(u8 *arg0) {
    u16 id;
    s32 off;
    s32 i;
    u8 *e;
    if (((VObj_18_80217F88 *)M2C_FIELD(arg0, void **, 0x6C))->m8() != 0) {
        if (M2C_FIELD(arg0, u32 *, 0x38) == 0U) {
            id = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x38) = create_item_list_window(get_guild_text(0), 0x40, id);
        } else {
            reset_list__20TShopArmorListWindowFPv(M2C_FIELD(arg0, u32 *, 0x38));
        }
        if (TQuestListOnline__data_805D6190 != NULL && TQuestListOnline__data_805D6190[1] == 0) {
            set_field_20__12TQuestListVMFPvi(arg0, 0xB);
            return;
        }
        if (TQuestListOnline__data_805D6190 != NULL) {
            for (i = 0, off = 0; i < TQuestListOnline__data_805D6190[1]; i++, off += 0x98) {
                e = TQuestListOnline__data_805D6190 + off;
                switch (e[5]) {
                case 0:
                    add_list_entry__6TLobbyFPviii(M2C_FIELD(arg0, u32 *, 0x38), 0x2C, e + 0xC, i);
                    break;
                case 1:
                    add_list_entry__6TLobbyFPviii(M2C_FIELD(arg0, u32 *, 0x38), 0x17, e + 0xC, i);
                    break;
                case 2:
                    add_list_entry__6TLobbyFPviii(M2C_FIELD(arg0, u32 *, 0x38), 0x31, e + 0xC, i);
                    break;
                default:
                    add_list_entry__6TLobbyFPviii(M2C_FIELD(arg0, u32 *, 0x38), 0x17, e + 0xC, i);
                    break;
                }
            }
            calc_list_content_extent(M2C_FIELD(arg0, u32 *, 0x38));
        }
        if (M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            Stack_80217EC4 sp8 = lbl_8044BED4[0];
            M2C_FIELD(arg0, u32 *, 0x3C) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x2D), &sp8, 1);
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), TQuestListOnline__data_805D6190 + 0x2C, 0x80);
        } else {
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), TQuestListOnline__data_805D6190 + 0x2C, 0x80);
        }
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

}
