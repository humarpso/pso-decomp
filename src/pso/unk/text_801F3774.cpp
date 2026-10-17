#include "types.h"
#include "pso/misc/TLobby_801E43E4.h"
#include "pso/unk/text_801F3774.h"
#include "pso/unk/text_801F4560.h"
#include "pso/unk/text_801F469C.h"
#include "pso/system/byteswap.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TScene.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

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
void read_be16_field2__10TObjPlayerFv(void *);
extern s32 game_difficulty_selection;
extern s32 current_language;
extern char offline_quest_filename_buffer_a[],offline_quest_filename_buffer_b[];
extern char lbl_80449CD8[],lbl_80449CE0[],lbl_80449CE8[],lbl_80449CF0[],lbl_80449CF8[],lbl_80449D00[];
void replace_file_extension__6TLobbyFPvPvPv(char*,const char*,const char*);

void TLobby__sub_801F3774(void) {  }

void TLobby::send_6x75_quest_flag(s16 arg0, s16 arg1, s16 arg2) {
    Stack_801F3778 stack;
    build_6x75_update_quest_flag_dc((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    stack.spE = arg1;
    stack.sp10 = arg2;
    stack.sp12 = 0;
    send_and_handle_6x75(&stack.sp8);
}

void TLobby::send_6x75_quest_flag_cur_difficulty(s16 arg0, s16 arg1) {
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
    ((TLobby *)arg0)->byteswap_6x75_packet();
    temp_r0 = *(u16 *)((s8 *)arg0 + 6);
    if (temp_r0 == 0) {
        set_story_flag_in_bank(((s32) *(s16 *)((s8 *)arg0 + 8)), ((s32) *(u16 *)((s8 *)arg0 + 4)));
        return;
    }
    if (temp_r0 == 1) {
        clear_story_flag_in_bank(((s32) *(s16 *)((s8 *)arg0 + 8)), ((s32) *(u16 *)((s8 *)arg0 + 4)));
    }
}

void prepare_offline_quest_filenames(const char* identity) {
 switch(current_language) {
 case 0:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CD8);break;
 case 1:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CE0);break;
 case 2:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CE8);break;
 case 3:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CF0);break;
 case 4:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CF8);break;
 default:replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_a,identity,lbl_80449CE0);break;
 }
 replace_file_extension__6TLobbyFPvPvPv(offline_quest_filename_buffer_b,identity,lbl_80449D00);
}

void send_and_handle_6x75(void *arg0) {
    ((TLobby *)arg0)->byteswap_6x75_packet();
    TLobby__send_and_handle_60((u8 *)(arg0));
}

void TLobby::byteswap_6x75_packet() {
    read_be16_field2__10TObjPlayerFv(this);
    bswap_16((u16 *)((void *)((char *)this + 4)));
    bswap_16((u16 *)((void *)((char *)this + 6)));
    bswap_16((u16 *)((void *)((char *)this + 8)));
    bswap_16((u16 *)((void *)((char *)this + 10)));
}

void build_6x75_update_quest_flag_dc(void* p) { *(u8*)((char*)p + 0x0) = 117; *(u8*)((char*)p + 0x1) = 3; }

}
