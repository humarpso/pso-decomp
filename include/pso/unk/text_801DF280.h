#ifndef PSO_UNK_TEXT_801DF280_H
#define PSO_UNK_TEXT_801DF280_H

#include "types.h"

void bswap_c0_lobby_entries(void *p);
void bswap_choice_search_config(void *p);
void bswap_cmd_88_body(void *p);
void bswap_cmd_88_marker_record(void *p);
int bswap_cmd_8a_header(void *p);
int bswap_packet_header_cmd_b1(void *p);
void bswap_save_packet(s32 arg0);
extern "C" {
s32 *copy_entry_table(s32 *arg0, s32 *arg1);
void fn_801DF280(void *arg0);
s32 fn_801DF2BC(s32 arg0);
void *fn_801DF3F0(void *p, void *a1);
void fn_801DF42C(void *p);
void fn_801DF47C(void *arg0);
void fn_801DF4B8(s32 arg0);
s32 *fn_801DF4FC(s32 *arg0, s32 *arg1);
int fn_801DF558(int arg0, int arg1);
void fn_801DF6BC(void *p);
void fn_801DF740(void *p);
void fn_801DF7F8(void *p);
void fn_801DF874(void *p);
s32 fn_801DF8A8(s32 arg0);
}

#endif
