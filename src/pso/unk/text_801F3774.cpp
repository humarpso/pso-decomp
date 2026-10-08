#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_801F37CC {
    M2C_UNK sp8;
    s16 spC;
    s16 spE;
    s16 sp10;
    s16 sp12;
};

struct Stack_801F3778 {
    M2C_UNK sp8;
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
extern s32 lbl_805D5550;
void TLobby__sub_801F37CC(s16 arg0, s16 arg1);
void TLobby__sub_801F3990(void *arg0);
void build_6x75_update_quest_flag_dc(void* p);
void TLobby__sub_801F3778(s16 arg0, s16 arg1, s16 arg2);
void byteswap_6x75_packet__6TLobbyFPv(void *arg0);
s32 fn_801F4560(int, int);
s32 fn_801F469C(int, int);
void handle_6x75_update_quest_flag_dc(u8 *arg0);
extern s32 lbl_805D5544;
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

void TLobby__sub_801F3778(s16 arg0, s16 arg1, s16 arg2) {
    Stack_801F3778 stack;
    build_6x75_update_quest_flag_dc((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    stack.spE = arg1;
    stack.sp10 = arg2;
    stack.sp12 = 0;
    TLobby__sub_801F3990(&stack.sp8);
}

void TLobby__sub_801F37CC(s16 arg0, s16 arg1) {
    Stack_801F37CC stack;
    build_6x75_update_quest_flag_dc((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    stack.spE = arg1;
    stack.sp10 = (s16) lbl_805D5550;
    stack.sp12 = 0;
    TLobby__sub_801F3990(&stack.sp8);
}

void handle_6x75_update_quest_flag_dc(u8 *arg0) {
    u16 temp_r0;
    byteswap_6x75_packet__6TLobbyFPv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, u16 *, 6);
    if (temp_r0 == 0) {
        fn_801F469C((int) ((s32) M2C_FIELD(arg0, s16 *, 8)), (int) ((s32) M2C_FIELD(arg0, u16 *, 4)));
        return;
    }
    if (temp_r0 == 1) {
        fn_801F4560((int) ((s32) M2C_FIELD(arg0, s16 *, 8)), (int) ((s32) M2C_FIELD(arg0, u16 *, 4)));
    }
}

void prepare_offline_quest_filenames(const char* identity) {
 switch(lbl_805D5544) {
 case 0:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CD8);break;
 case 1:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE0);break;
 case 2:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE8);break;
 case 3:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CF0);break;
 case 4:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CF8);break;
 default:replace_file_extension__6TLobbyFPvPvPv(lbl_80512790,identity,lbl_80449CE0);break;
 }
 replace_file_extension__6TLobbyFPvPvPv(lbl_805127B0,identity,lbl_80449D00);
}

void TLobby__sub_801F3990(void *arg0) {
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
