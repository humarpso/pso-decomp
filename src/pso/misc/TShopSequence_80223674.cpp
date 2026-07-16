#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_getField1c(u32);
s32 TObjPlayer__sub_801B12CC();
s32 clear_lobby_flag__10TObjPlayerFPv(u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AEF0(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TObjPlayer__sub_801B130C();
s32 init_effect_5f0__10TObjPlayerFPv(void *);
s32 TWindowCtrl__sub_8024AEAC(u16);
s32 is_split_screen();
s32 TAdSinglePlyChrSelectGC__sub_801D5DAC();
s32 TAdSinglePlyChrSelectGC__sub_801FF5E4(s32);
void free_member_0x28__13TShopSequenceFPv(void* p);
void TShopSequence__sub_802236A0(void* p);
void free_member_0x28_variant__13TShopSequenceFPv(void* p);
void free_member__13TShopSequenceFPv(void* p);
int send_message__22TQuestVmDownLoadServerFPvii(void*);
int format_and_send_message__22TQuestVmDownLoadServerFPvii(void*);
int display_message__22TQuestVmDownLoadServerFPvii(void*);
int show_message__17TMedicalCenterMesFPvii(void*);

void free_member_0x28__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) format_and_send_message__22TQuestVmDownLoadServerFPvii(m); }
void TShopSequence__sub_802236A0(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) send_message__22TQuestVmDownLoadServerFPvii(m); }
void free_member_0x28_variant__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) display_message__22TQuestVmDownLoadServerFPvii(m); }
void free_member__13TShopSequenceFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) show_message__17TMedicalCenterMesFPvii(m); }
void close_if_single_screen__13TShopSequenceFv(void) {
    if ((TAdSinglePlyChrSelectGC__sub_801D5DAC() != 0) && (is_split_screen() == 0)) {
        TAdSinglePlyChrSelectGC__sub_801FF5E4(0);
    }
}
void close_window__13TShopSequenceFPv(void *arg0) {
    s32 var_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindowCtrl__sub_8024AEF0(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
        if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
            var_r31 = 0;
            do {
                if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
                    TObjPlayer__sub_801B12CC();
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
                if (TPlayerBattleCtrl4P__sub_801BA74C(var_r31) != 0U) {
                    TObjPlayer__sub_801B130C();
                }
                var_r31 += 1;
            } while (var_r31 < 4);
        }
        TWindowCtrl__sub_8024AEAC(obj_getField1c(M2C_FIELD(arg0, u32 *, 0x24)));
    }
}

}
