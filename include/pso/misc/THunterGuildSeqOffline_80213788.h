#ifndef PSO_MISC_THUNTERGUILDSEQOFFLINE_80213788_H
#define PSO_MISC_THUNTERGUILDSEQOFFLINE_80213788_H

#include "types.h"

extern "C" {
void THunterGuildSeqOffline__sub_80213B18(u8 *arg0);
void THunterGuildSeqOffline__sub_80213CA4(void);
void THunterGuildSeqOffline__sub_80213E64(void);
void THunterGuildSeqOffline__sub_80213EBC(void);
void THunterGuildSeqOffline__sub_80213F78(void);
void THunterGuildSeqOffline__sub_802145F8(u8 *arg0);
u8 *__dt__28THunterGuildSeqOnline_ClientFv(u8 *arg0, s16 arg1);
u8 *__dt__28THunterGuildSeqOnline_ServerFv(u8 *arg0, s16 arg1);
void clear_slot_flags__22THunterGuildSeqOfflineFv(void);
void clear_slots__22THunterGuildSeqOfflineFv(void);
void confirm_and_close_if_valid__15TShopWindowBaseFv(void *arg0);
void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0);
void fn_80214254(u8 *arg0);
void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void init_window__22THunterGuildSeqOfflineFPv(u8 *arg0);
void reset_quest_list_vm__22THunterGuildSeqOfflineFv(void);
void reset_random_enemies_mode(void);
void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0);
void restore_shop_and_init_quest_state(void *arg0);
}
void set_random_enemies_mode(void);
extern "C" {
void update__15TShopWindowBaseFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
void zero_four_slots__22THunterGuildSeqOfflineFv(void);
}

#endif
