#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_802235A0_8022356C {
    virtual void m0(int);
};

struct RecoveredGlobal_802238D8___vt__13TShopSequence { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_802238D8___vt__13TShopSequence_size[sizeof(RecoveredGlobal_802238D8___vt__13TShopSequence) == 0x38 ? 1 : -1];
struct Del_80223850 {
    virtual ~Del_80223850();
};

extern "C" {
s32 obj_getField1c(u32);
u32 create_message_window__17TMedicalCenterMesFPviii(void *, s32, s32, s32);
u32 create_window__17TMedicalCenterMesFPvii(void *, s32, s32);
u32 create_message_window__13TShopSequenceFPvii(u8 *arg0, s32 arg1, s32 arg2);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * fn_80222BCC(void *);
u8 * __ct__15TShopWindowBaseFv(void *);
extern RecoveredGlobal_802238D8___vt__13TShopSequence __vt__13TShopSequence;
extern s32 lbl_805D36F8;
u8 *TShopSequence__ct(u8 *arg0);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
}

extern "C" {

void TShopSequence__sub_802236A0(void* p);
void close_if_single_screen__13TShopSequenceFv(void);
void close_message_window__13TShopSequenceFPv(void *arg0);
void close_window__13TShopSequenceFPv(void *arg0);
void free_member_0x28__13TShopSequenceFPv(void* p);
void free_member_0x28_variant__13TShopSequenceFPv(void* p);
void free_member__13TShopSequenceFPv(void* p);
void restore_player_state__13TShopSequenceFPv(void *arg0);
s32 update_download_server__13TShopSequenceFPv(void *arg0);
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFi(s32);
s32 activate_body_collision__10TObjPlayerFPv();
s32 deactivate_body_collision__10TObjPlayerFPv();
u32 get_player_by_client_id(s32);
s32 suppress_slot__11TWindowCtrlFi(u16);
s32 unsuppress_slot__11TWindowCtrlFi(u16);
s32 clear_lobby_flag__10TObjPlayerFPv(u32);
M2C_UNK close__17TMedicalCenterMesFPv(void *);
int display_message__22TQuestVmDownLoadServerFPvii(void*);
int format_and_send_message__22TQuestVmDownLoadServerFPvii(void*);
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
s32 init_effect_5f0__10TObjPlayerFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_split_screen();
s32 obj_getField1c(u32);
s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *);
int send_message__22TQuestVmDownLoadServerFPvii(void*);
int show_message__17TMedicalCenterMesFPvii(void*);

s32 update_download_server__13TShopSequenceFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r3 != NULL) {
        return poll_field_20c__22TQuestVmDownLoadServerFPv(temp_r3);
    }
    return 1;
}

void close_message_window__13TShopSequenceFPv(void *arg0) {
    VObj_802235A0_8022356C *temp_r3;

    if (M2C_FIELD(arg0, VObj_802235A0_8022356C **, 0x28) != NULL) {
        close__17TMedicalCenterMesFPv(M2C_FIELD(arg0, VObj_802235A0_8022356C **, 0x28));
        temp_r3 = M2C_FIELD(arg0, VObj_802235A0_8022356C **, 0x28);
        if (temp_r3 != NULL) {
            temp_r3->m0(1);
        }
        M2C_FIELD(arg0, VObj_802235A0_8022356C **, 0x28) = NULL;
    }
}

u32 create_message_window__13TShopSequenceFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r0;
    u8 *temp_r3;
    temp_r0 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x28));
    if (temp_r0 != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x24));
        if (temp_r3 != NULL) {
            return create_message_window__17TMedicalCenterMesFPviii(M2C_FIELD(arg0, u8 **, 0x28), arg1, arg2, (s32) ((u16)obj_getField1c((u32)(temp_r3))));
        }
        return create_window__17TMedicalCenterMesFPvii(temp_r0, arg1, arg2);
    }
    return 0U;
}

void free_member_0x28__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) format_and_send_message__22TQuestVmDownLoadServerFPvii(m); }
void TShopSequence__sub_802236A0(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) send_message__22TQuestVmDownLoadServerFPvii(m); }
void free_member_0x28_variant__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) display_message__22TQuestVmDownLoadServerFPvii(m); }
void free_member__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) show_message__17TMedicalCenterMesFPvii(m); }
void close_if_single_screen__13TShopSequenceFv(void) {
    if ((get_game_mode__23TAdSinglePlyChrSelectGCFv() != 0) && (is_split_screen() == 0)) {
        load_character_from_card__23TAdSinglePlyChrSelectGCFi(0);
    }
}
void close_window__13TShopSequenceFPv(void *arg0) {
    s32 var_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        unsuppress_slot__11TWindowCtrlFi(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
        if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
            var_r31 = 0;
            do {
                if (get_player_by_client_id(var_r31) != 0U) {
                    activate_body_collision__10TObjPlayerFPv();
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        }
        clear_lobby_flag__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0x24));
    }
}
void restore_player_state__13TShopSequenceFPv(void *arg0) {
    s32 var_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        init_effect_5f0__10TObjPlayerFPv(M2C_FIELD(arg0, void **, 0x24));
        if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
            var_r31 = 0;
            do {
                if (get_player_by_client_id(var_r31) != 0U) {
                    deactivate_body_collision__10TObjPlayerFPv();
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        }
        suppress_slot__11TWindowCtrlFi(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
    }
}
void *__dt__13TShopSequenceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TShopSequence.value;
        if (M2C_FIELD(arg0, Del_80223850 **, 0x28) != NULL) {
            delete M2C_FIELD(arg0, Del_80223850 **, 0x28);
            M2C_FIELD(arg0, Del_80223850 **, 0x28) = NULL;
        }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TShopSequence__ct(u8 *arg0) {
    s32 temp_r3;
    s32 var_r0;
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TShopSequence.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36F8;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x210);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (fn_80222BCC((void *) temp_r3));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0;
    return arg0;
}

}
