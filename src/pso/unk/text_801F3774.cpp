#include "types.h"

struct Stack_801F37CC {
    s32 sp8;
    s16 spC;
    s16 spE;
    s16 sp10;
    s16 sp12;
};

struct Stack_801F3778 {
    s32 sp8;
    s16 spC;
    s16 spE;
    s16 sp10;
    s16 sp12;
};

extern "C" {
void read_be16_field2__10TObjPlayerFPv(void *);
s32 bswap_16__FPUs(s32);
void byteswap_6x75_packet__6TLobbyFPv(void *arg0);
void byteswap_6x75_packet__6TLobbyFPv(void *arg0);
s32 TLobby__send_and_handle_60(s32);
void build_6x75_update_quest_flag_dc(void* p);
extern s32 game_difficulty_selection;
void send_6x75_quest_flag_cur_difficulty__6TLobbyFss(s16 arg0, s16 arg1);
void send_and_handle_6x75(void *arg0);
void build_6x75_update_quest_flag_dc(void* p);
void send_6x75_quest_flag__6TLobbyFsss(s16 arg0, s16 arg1, s16 arg2);
void byteswap_6x75_packet__6TLobbyFPv(void *arg0);
s32 clear_story_flag_in_bank(int, int);
s32 set_story_flag_in_bank(int, int);
void handle_6x75_update_quest_flag_dc(u8 *arg0);
extern s32 current_language;
extern char lbl_80512790[],lbl_805127B0[];
extern char lbl_80449CD8[],lbl_80449CE0[],lbl_80449CE8[],lbl_80449CF0[],lbl_80449CF8[],lbl_80449D00[];
void replace_file_extension__6TLobbyFPvPvPv(char*,const char*,const char*);
void prepare_offline_quest_filenames(const char* identity);
}

extern "C" {

void TLobby__sub_801F3774(void);
void build_6x75_update_quest_flag_dc(void* p);
s32 TLobby__send_and_handle_60(s32);
s32 read_disc_file(s32, s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 bswap_16__FPUs(s32);
s32 rebuild_all__6TLobbyFi(s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 update_lobby_scene__6TSceneFPv();

void TLobby__sub_801F3774(void) {  }

void send_6x75_quest_flag__6TLobbyFsss(s16 arg0, s16 arg1, s16 arg2) {
    Stack_801F3778 stack;
    build_6x75_update_quest_flag_dc((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    stack.spE = arg1;
    stack.sp10 = arg2;
    stack.sp12 = 0;
    send_and_handle_6x75(&stack.sp8);
}

void send_6x75_quest_flag_cur_difficulty__6TLobbyFss(s16 arg0, s16 arg1) {
    Stack_801F37CC stack;
    build_6x75_update_quest_flag_dc((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    stack.spE = arg1;
    stack.sp10 = (s16) game_difficulty_selection;
    stack.sp12 = 0;
    send_and_handle_6x75(&stack.sp8);
}

void handle_6x75_update_quest_flag_dc(u8 *arg0) {
    u16 temp_r0;
    byteswap_6x75_packet__6TLobbyFPv((void *) (arg0));
    temp_r0 = *(u16 *)((s8 *)arg0 + 6);
    if (temp_r0 == 0) {
        set_story_flag_in_bank((int) ((s32) *(s16 *)((s8 *)arg0 + 8)), (int) ((s32) *(u16 *)((s8 *)arg0 + 4)));
        return;
    }
    if (temp_r0 == 1) {
        clear_story_flag_in_bank((int) ((s32) *(s16 *)((s8 *)arg0 + 8)), (int) ((s32) *(u16 *)((s8 *)arg0 + 4)));
    }
}

void prepare_offline_quest_filenames(const char* identity) {
 switch(current_language) {
 case 0:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CD8);break;
 case 1:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE0);break;
 case 2:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE8);break;
 case 3:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CF0);break;
 case 4:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CF8);break;
 default:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE0);break;
 }
 replace_file_extension__6TLobbyFPvPvPv(lbl_805127B0,identity,lbl_80449D00);
}

void send_and_handle_6x75(void *arg0) {
    byteswap_6x75_packet__6TLobbyFPv(arg0);
    TLobby__send_and_handle_60((s32)(arg0));
}

void byteswap_6x75_packet__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 10)));
}

void build_6x75_update_quest_flag_dc(void* p) { *(u8*)((char*)p + 0x0) = 117; *(u8*)((char*)p + 0x1) = 3; }

}
