#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int bswap_32__FPUl(void*);
void TLobby__sub_801F3640(s32 arg0);
}

extern "C" {

void TLobby__sub_801F3314(s32 arg0);
int TLobby__sub_801F3384(void* p);
int TLobby__sub_801F33A8(void* p);
int TLobby__sub_801F33CC(void* p);
int TLobby__sub_801F33F0(void* p);
int TLobby__sub_801F345C(void* p);
void TLobby__sub_801F34E8(int a0, int a1);
int TLobby__sub_801F34F8(void);
int TLobby__sub_801F3500(void* p);
void TLobby__sub_801F3568(void);
void TLobby__sub_801F3614(void);
int TLobby__sub_801F3694(void* p);
void TLobby__sub_801F36BC(void);
void TLobby__sub_801F36D8(void);
void TLobby__sub_801F36E4(void);
int TLobby__sub_801F36F0(void);
int TLobby__sub_801F36F8(void);
int TLobby__sub_801F3700(void);
int TLobby__sub_801F3708(void);
void TMainTask__sub_801F34D0(u8 *arg0);
void bswap_4x32__6TLobbyFPv(void* p);
void bswap_header__6TLobbyFPv(void* p);
void build_6x77_sync_quest_register(void* p);
int check_flag_24576__6TLobbyFPv(void* p);
void clear_quest_vm_flag__6TLobbyFv(void);
void close_windows__6TLobbyFv(void);
int copy_position__6TLobbyFPv(void* p);
s32 dispatch_quest__6TLobbyFi(s32 arg0);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 fn_get_field_3ac(void* p);
void free_luker_object__6TLobbyFv(void);
int get_field_6CE8__6TLobbyFv(void);
s32 get_field_d4(void* p);
int get_lobby_count__6TLobbyFv(void);
unsigned char read_packet_byte__6TLobbyFv(void);
void set_flag_40000__6TLobbyFPv(void *arg0);
int set_flag_4__6TLobbyFPv(void* p);
void set_flag_80000__6TLobbyFi(s32 arg0);
void set_flag_8000__6TLobbyFi(s32 arg0);
void set_floor__6TLobbyFPvs(void* p, s16 v);
void set_global_805D3614__6TLobbyFi(int a0);
void set_lobby_id__6TLobbyFi(int a0);
void sync_quest_register_and_send__6TLobbyFPv(void* p);
int test_flag_16__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_800822E8(void*, int);
M2C_UNK TLobby__sub_801F2EF4(s32);
M2C_UNK TLobby__sub_801F301C();
M2C_UNK TWindow__close(s32);
int VecCopy__FP3VecPC3Vec(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int check_technique_flag__10TObjPlayerFPv(void*);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void*);
s32 dispatch_quest_opcode();
int has_item_flag_4096__10TObjPlayerFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(s32);
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK set_flag_4__9TObjLukerFPv(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

    extern unsigned char* TLobby__data_805D5E70;
    extern int TLobby__data_805D5E90;
unsigned char read_packet_byte__6TLobbyFv(void) { return TLobby__data_805D5E70[TLobby__data_805D5E90++]; }

s32 dispatch_quest__6TLobbyFi(s32 arg0) {
    s32 temp_r31;

    TLobby__sub_801F301C();
    temp_r31 = dispatch_quest_opcode();
    TLobby__sub_801F2EF4(arg0);
    return temp_r31;
}

extern u32 TLobby__data_805D5E7C;
extern u32 TLobby__data_805D5E80;
extern u32 TLobby__data_805D5E84;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__data_805D5EB4;
extern u32 TLobby__data_805D5EB8;
extern u32 TLobby__data_805D5EBC;
extern u32 TLobby__data_805D5EC0;

void close_windows__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5E7C != 0U) {
        TWindow__close(TLobby__data_805D5E7C);
        TLobby__data_805D5E7C = 0U;
    }
    if ((u32) TLobby__data_805D5E80 != 0U) {
        TWindow__close(TLobby__data_805D5E80);
        TLobby__data_805D5E80 = 0U;
    }
    if ((u32) TLobby__data_805D5E84 != 0U) {
        TWindow__close(TLobby__data_805D5E84);
        TLobby__data_805D5E84 = 0U;
    }
    if ((u32) TLobby__data_805D5EB0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB0);
        TLobby__data_805D5EB0 = 0U;
    }
    if ((u32) TLobby__data_805D5EB4 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB4);
        TLobby__data_805D5EB4 = 0U;
    }
    if ((u32) TLobby__data_805D5EB8 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB8);
        TLobby__data_805D5EB8 = 0U;
    }
    if ((u32) TLobby__data_805D5EBC != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EBC);
        TLobby__data_805D5EBC = 0U;
    }
    if ((u32) TLobby__data_805D5EC0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EC0);
        TLobby__data_805D5EC0 = 0U;
    }
}

extern u32 lbl_805D5EE8;

void clear_quest_vm_flag__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv((void*)lbl_805D5EE8);
    }
}

extern u32 lbl_805D5EE8;

void free_luker_object__6TLobbyFv(void) {
    if ((u32) lbl_805D5EE8 != 0U) {
        set_flag_4__9TObjLukerFPv((void*)lbl_805D5EE8);
    }
}

void set_flag_80000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x80000);
}
void set_flag_40000__6TLobbyFPv(void *arg0) {
    TLobby__sub_800822E8(arg0, 0x40000);
}
void TLobby__sub_801F3314(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x10000);
}
void set_flag_8000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x8000);
}
int check_flag_24576__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 24576); }
int TLobby__sub_801F3384(void* p) { return TLobby__sub_800822E8(p, 1024); }
int TLobby__sub_801F33A8(void* p) { return TLobby__sub_800822E8(p, 512); }
int TLobby__sub_801F33CC(void* p) { return TLobby__sub_800822E8(p, 256); }
int TLobby__sub_801F33F0(void* p) { return TLobby__sub_800822E8(p, 224); }
int test_flag_16__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 16); }
int set_flag_4__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 4); }

int TLobby__sub_801F345C(void* p) { return TLobby__sub_800822E8(p, 2); }

int fn_801F3480(void* p) { return has_item_flag_4096__10TObjPlayerFPv(p); }
int fn_801F34A0(void* p) { return check_technique_flag__10TObjPlayerFPv(p); }
s32 get_field_d4(void* p) { return *(s32*)((char*)p + 0xd4); }
s32 fn_get_field_3ac(void* p) { return *(s32*)((char*)p + 0x3ac); }

void TMainTask__sub_801F34D0(u8 *arg0) {
    M2C_FIELD(arg0, u16 *, 4) = (u16) (M2C_FIELD(arg0, u16 *, 4) ^ 8);
}

void set_floor__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x11a) = v; }

    extern unsigned char lbl_805D6CD9;
    extern short lbl_805D6CDA;
void TLobby__sub_801F34E8(int a0, int a1) { lbl_805D6CD9 = a1; lbl_805D6CDA = (a0 + 0x1); }

    extern int TLobby__data_805D6CCC;
int TLobby__sub_801F34F8(void) {  return TLobby__data_805D6CCC; }

int TLobby__sub_801F3500(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0xc0); }
void bswap_4x32__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

    extern unsigned char lbl_805D4EE4;
void TLobby__sub_801F3568(void) { lbl_805D4EE4 = (lbl_805D4EE4 | 0x10); }

void sync_quest_register_and_send__6TLobbyFPv(void* p) { bswap_header__6TLobbyFPv((void*)((void*)((void*)(p)))); TLobby__send_and_handle_60(p); }
void bswap_header__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void build_6x77_sync_quest_register(void* p) { *(u8*)((char*)p + 0x0) = 119; *(u8*)((char*)p + 0x1) = 3; }

    extern int lbl_805D6CE8;
int get_field_6CE8__6TLobbyFv(void) {  return lbl_805D6CE8; }

    extern int lbl_805D6CF0;
int get_lobby_count__6TLobbyFv(void) {  return lbl_805D6CF0; }

    extern int lbl_805D6CF0;
void TLobby__sub_801F3614(void) { lbl_805D6CF0 = 0; }

int copy_position__6TLobbyFPv(void* p) { return VecCopy__FP3VecPC3Vec(p); }

#pragma push
#pragma fp_contract on
void TLobby__sub_801F3640(s32 arg0) {
    s32 var_r31;
    s32 temp_r30;
    s32 var_r29;
    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r30 = arg0 + var_r31;
        bswap_32__FPUl((void*)((void *) (temp_r30)));
        bswap_32__FPUl((void*)((void *) (temp_r30 + 0x18)));
        var_r29 += 1;
        var_r31 += 4;
    } while (var_r29 < 6);
}
#pragma pop

int TLobby__sub_801F3694(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x10, 2); }

    extern int lbl_805D5FDC;
void TLobby__sub_801F36BC(void) { lbl_805D5FDC = 1; }

    extern int lbl_805D5FD8;
void set_lobby_id__6TLobbyFi(int a0) { lbl_805D5FD8 = a0; }

    extern int lbl_805D3614;
void set_global_805D3614__6TLobbyFi(int a0) { lbl_805D3614 = a0; }

    extern int lbl_805D5C80;
void TLobby__sub_801F36D8(void) { lbl_805D5C80 = 1; }

    extern int lbl_805D3458;
void TLobby__sub_801F36E4(void) { lbl_805D3458 = 0; }

int TLobby__sub_801F36F0(void) { return -1; }
int TLobby__sub_801F36F8(void) { return 0; }
int TLobby__sub_801F3700(void) { return -1; }
int TLobby__sub_801F3708(void) { return 0; }

}
