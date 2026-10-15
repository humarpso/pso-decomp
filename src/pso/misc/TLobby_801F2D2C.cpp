#include "types.h"

struct RecoveredGlobal_801F301C_TLobby__data_80512220 { s32 value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_801F301C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F301C_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801F301C_TLobby__data_80512240 { s32 value; u8 remaining[0xFC]; };
typedef char RecoveredGlobal_801F301C_TLobby__data_80512240_size[sizeof(RecoveredGlobal_801F301C_TLobby__data_80512240) == 0x100 ? 1 : -1];

struct RecoveredGlobal_801F2EF4_TLobby__data_80512220 { s32 value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_801F2EF4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F2EF4_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801F2EF4_TLobby__data_80512240 { s32 value; u8 remaining[0xFC]; };
typedef char RecoveredGlobal_801F2EF4_TLobby__data_80512240_size[sizeof(RecoveredGlobal_801F2EF4_TLobby__data_80512240) == 0x100 ? 1 : -1];

struct RecoveredGlobal_801F3268_lbl_80512B18 {
    s32 value;
    u8 remaining[0xC];
};

struct Op_801F2E64 { void (*fn)(s32); u32 pad; };

struct Hdr_801F3124 {
    u32 off0;
    u32 off4;
    u32 off8;
    u16 hC;
    u16 hE;
    u16 h10;
    s8 b12;
};

struct Ctx_801F3124 {
    u8 *p0;
    u32 *p4;
    u8 *p8;
    s32 x0C;
    s32 x10;
    u8 x14;
    u8 pad15[7];
    s32 x1C;
    s32 x20;
    s32 x24;
    s32 x28;
    s32 pad2C;
    s32 x30;
    u8 x34[0x20];
    u8 x54[0x100];
    u8 pad154[8];
    s32 x15C;
    s32 x160;
    s32 x164;
    s32 x168;
    s32 x16C;
    s16 x170;
    s16 x172;
};

extern "C" {
int bswap_32__FPUl(void*);
void bswap_entry_words__6TLobbyFi(s32 arg0);
s32 memcpy(void *, void *, int);
extern RecoveredGlobal_801F301C_TLobby__data_80512220 TLobby__quest_argument_stack;
extern RecoveredGlobal_801F301C_TLobby__data_80512240 TLobby__script_value_stack;
extern unsigned char* TLobby__quest_data_base;
extern s32 TLobby__data_805D5E74;
extern s32 TLobby__script_reg_array;
extern u32 TLobby__quest_message_window;
extern u32 TLobby__quest_choice_window;
extern u8 TLobby__active_window_index;
extern s32 TLobby__script_stack_depth;
extern int TLobby__quest_script_pc;
extern s32 lbl_805D5E94;
extern s32 lbl_805D5E9C;
extern s32 quest_message_speaker_id;
extern s32 TLobby__quest_arg_stack_count;
extern u8 TLobby__data_805D5EA8;
extern u8 TLobby__data_805D5EA9;
extern u16 TLobby__data_805D5EAA;
extern u16 TLobby__data_805D5EAC;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__quest_window_object;
extern u32 TLobby__menu_state_object;
extern u32 TLobby__quest_state_object_168;
extern u32 TLobby__quest_state_object_16c;
extern u16 TLobby__quest_state_word_170;
extern u16 TLobby__quest_state_word_172;
void load_quest_globals__6TLobbyFPv(u8 *arg0);
s32 memcpy(void *, void *, int);
extern RecoveredGlobal_801F301C_TLobby__data_80512220 TLobby__quest_argument_stack;
extern RecoveredGlobal_801F301C_TLobby__data_80512240 TLobby__script_value_stack;
extern unsigned char* TLobby__quest_data_base;
extern s32 TLobby__data_805D5E74;
extern s32 TLobby__script_reg_array;
extern u32 TLobby__quest_message_window;
extern u32 TLobby__quest_choice_window;
extern u8 TLobby__active_window_index;
extern s32 TLobby__script_stack_depth;
extern int TLobby__quest_script_pc;
extern s32 lbl_805D5E94;
extern s32 lbl_805D5E9C;
extern s32 quest_message_speaker_id;
extern s32 TLobby__quest_arg_stack_count;
extern u8 TLobby__data_805D5EA8;
extern u8 TLobby__data_805D5EA9;
extern u16 TLobby__data_805D5EAA;
extern u16 TLobby__data_805D5EAC;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__quest_window_object;
extern u32 TLobby__menu_state_object;
extern u32 TLobby__quest_state_object_168;
extern u32 TLobby__quest_state_object_16c;
extern u16 TLobby__quest_state_word_170;
extern u16 TLobby__quest_state_word_172;
void save_quest_state_to_record__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_801F3268_lbl_80512B18 lbl_80512B18;
s32 *TObjItemOKWindow__sub_801F3268(void);
unsigned char read_packet_byte__6TLobbyFv(void);
extern struct Op_801F2E64 qst_opcode_table[];
extern s32 TLobby__quest_window_state;
s32 dispatch_quest_opcode(void);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
void *memset(void *, int, u32);
extern u8 TLobby__data_805D5EA8;
extern u8 TLobby__data_805D5EA9;
extern u16 TLobby__data_805D5EAA;
extern u16 TLobby__data_805D5EAC;
extern s16 TLobby__data_805D5ECC;
void init_quest_script_context(Hdr_801F3124 *h, Ctx_801F3124 *c);
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
int test_action_mask__10TObjPlayerFPvi(void*, int);
s32 TWindow__close(s32);
int VecCopy__FP3VecPC3Vec(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int check_technique_flag__10TObjPlayerFPv(void*);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void*);
int has_item_flag_4096__10TObjPlayerFPv(void*);
s32 queue_destruction__7TObjectFv(s32);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 set_flag_4__9TObjLukerFPv(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

    extern unsigned char* TLobby__quest_data_base;
    extern int TLobby__quest_script_pc;
unsigned char read_packet_byte__6TLobbyFv(void) { return TLobby__quest_data_base[TLobby__quest_script_pc++]; }

s32 dispatch_quest__6TLobbyFi(s32 arg0) {
    s32 temp_r31;

    load_quest_globals__6TLobbyFPv((u8 *)(arg0));
    temp_r31 = dispatch_quest_opcode();
    save_quest_state_to_record__6TLobbyFPv((u8 *)(arg0));
    return temp_r31;
}

extern u32 TLobby__quest_message_window;
extern u32 TLobby__quest_secondary_window;
extern u32 TLobby__quest_choice_window;
extern u32 TLobby__data_805D5EB0;
extern u32 TLobby__quest_window_object;
extern u32 TLobby__menu_state_object;
extern u32 TLobby__quest_state_object_168;
extern u32 TLobby__quest_state_object_16c;

void close_windows__6TLobbyFv(void) {
    if ((u32) TLobby__quest_message_window != 0U) {
        TWindow__close(TLobby__quest_message_window);
        TLobby__quest_message_window = 0U;
    }
    if ((u32) TLobby__quest_secondary_window != 0U) {
        TWindow__close(TLobby__quest_secondary_window);
        TLobby__quest_secondary_window = 0U;
    }
    if ((u32) TLobby__quest_choice_window != 0U) {
        TWindow__close(TLobby__quest_choice_window);
        TLobby__quest_choice_window = 0U;
    }
    if ((u32) TLobby__data_805D5EB0 != 0U) {
        queue_destruction__7TObjectFv(TLobby__data_805D5EB0);
        TLobby__data_805D5EB0 = 0U;
    }
    if ((u32) TLobby__quest_window_object != 0U) {
        queue_destruction__7TObjectFv(TLobby__quest_window_object);
        TLobby__quest_window_object = 0U;
    }
    if ((u32) TLobby__menu_state_object != 0U) {
        queue_destruction__7TObjectFv(TLobby__menu_state_object);
        TLobby__menu_state_object = 0U;
    }
    if ((u32) TLobby__quest_state_object_168 != 0U) {
        queue_destruction__7TObjectFv(TLobby__quest_state_object_168);
        TLobby__quest_state_object_168 = 0U;
    }
    if ((u32) TLobby__quest_state_object_16c != 0U) {
        queue_destruction__7TObjectFv(TLobby__quest_state_object_16c);
        TLobby__quest_state_object_16c = 0U;
    }
}

extern u32 quest_mission_manager;

s32 dispatch_quest_opcode(void) {
    s32 op;
    TLobby__quest_window_state = 0;
    while (TLobby__quest_window_state == 0) {
        op = read_packet_byte__6TLobbyFv();
        switch (op) {
        case 0xF8:
            op = read_packet_byte__6TLobbyFv() + 0x100;
            break;
        case 0xF9:
            op = read_packet_byte__6TLobbyFv() + 0x200;
            break;
        }
        qst_opcode_table[op].fn(op);
    }
    return TLobby__quest_window_state;
}

void save_quest_state_to_record__6TLobbyFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) (*(s32 *)&TLobby__quest_data_base);
    *(s32 *)((s8 *)arg0 + 4) = (s32) TLobby__data_805D5E74;
    *(s32 *)((s8 *)arg0 + 8) = (s32) TLobby__script_reg_array;
    *(s32 *)((s8 *)arg0 + 0xC) = (s32) (*(s32 *)&TLobby__quest_message_window);
    *(s32 *)((s8 *)arg0 + 0x10) = (s32) (*(s32 *)&TLobby__quest_choice_window);
    *(u8 *)((s8 *)arg0 + 0x14) = (u8) TLobby__active_window_index;
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) TLobby__script_stack_depth;
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)&TLobby__quest_script_pc);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) lbl_805D5E94;
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) lbl_805D5E9C;
    *(s32 *)((s8 *)arg0 + 0x2C) = (s32) quest_message_speaker_id;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) TLobby__quest_arg_stack_count;
    memcpy((void *) (arg0 + 0x34), (void *) (&TLobby__quest_argument_stack.value), (int) (0x20));
    memcpy((void *) (arg0 + 0x54), (void *) (&TLobby__script_value_stack.value), (int) (0x100));
    (*(s32 *)&TLobby__quest_message_window) = 0;
    (*(s32 *)&TLobby__quest_choice_window) = 0;
    *(u8 *)((s8 *)arg0 + 0x154) = (u8) TLobby__data_805D5EA8;
    *(u8 *)((s8 *)arg0 + 0x155) = (u8) TLobby__data_805D5EA9;
    *(u16 *)((s8 *)arg0 + 0x156) = (u16) TLobby__data_805D5EAA;
    *(u16 *)((s8 *)arg0 + 0x158) = (u16) TLobby__data_805D5EAC;
    *(s32 *)((s8 *)arg0 + 0x15C) = (s32) (*(s32 *)&TLobby__data_805D5EB0);
    (*(s32 *)&TLobby__data_805D5EB0) = 0;
    *(s32 *)((s8 *)arg0 + 0x160) = (s32) (*(s32 *)&TLobby__quest_window_object);
    (*(s32 *)&TLobby__quest_window_object) = 0;
    *(s32 *)((s8 *)arg0 + 0x164) = (s32) (*(s32 *)&TLobby__menu_state_object);
    (*(s32 *)&TLobby__menu_state_object) = 0;
    *(s32 *)((s8 *)arg0 + 0x168) = (s32) (*(s32 *)&TLobby__quest_state_object_168);
    (*(s32 *)&TLobby__quest_state_object_168) = 0;
    *(s32 *)((s8 *)arg0 + 0x16C) = (s32) (*(s32 *)&TLobby__quest_state_object_16c);
    (*(s32 *)&TLobby__quest_state_object_16c) = 0;
    *(u16 *)((s8 *)arg0 + 0x170) = (u16) TLobby__quest_state_word_170;
    *(u16 *)((s8 *)arg0 + 0x172) = (u16) TLobby__quest_state_word_172;
}

void load_quest_globals__6TLobbyFPv(u8 *arg0) {
    (*(s32 *)&TLobby__quest_data_base) = *(s32 *)((s8 *)arg0 + 0);
    TLobby__data_805D5E74 = *(s32 *)((s8 *)arg0 + 4);
    TLobby__script_reg_array = *(s32 *)((s8 *)arg0 + 8);
    (*(s32 *)&TLobby__quest_message_window) = *(s32 *)((s8 *)arg0 + 0xC);
    (*(s32 *)&TLobby__quest_choice_window) = *(s32 *)((s8 *)arg0 + 0x10);
    TLobby__active_window_index = *(u8 *)((s8 *)arg0 + 0x14);
    TLobby__script_stack_depth = *(s32 *)((s8 *)arg0 + 0x1C);
    (*(s32 *)&TLobby__quest_script_pc) = *(s32 *)((s8 *)arg0 + 0x20);
    lbl_805D5E94 = *(s32 *)((s8 *)arg0 + 0x24);
    lbl_805D5E9C = *(s32 *)((s8 *)arg0 + 0x28);
    quest_message_speaker_id = *(s32 *)((s8 *)arg0 + 0x2C);
    TLobby__quest_arg_stack_count = *(s32 *)((s8 *)arg0 + 0x30);
    memcpy((void *) (&TLobby__quest_argument_stack.value), (void *) (arg0 + 0x34), (int) (0x20));
    memcpy((void *) (&TLobby__script_value_stack.value), (void *) (arg0 + 0x54), (int) (0x100));
    TLobby__data_805D5EA8 = *(u8 *)((s8 *)arg0 + 0x154);
    TLobby__data_805D5EA9 = *(u8 *)((s8 *)arg0 + 0x155);
    TLobby__data_805D5EAA = *(u16 *)((s8 *)arg0 + 0x156);
    TLobby__data_805D5EAC = *(u16 *)((s8 *)arg0 + 0x158);
    (*(s32 *)&TLobby__data_805D5EB0) = *(s32 *)((s8 *)arg0 + 0x15C);
    (*(s32 *)&TLobby__quest_window_object) = *(s32 *)((s8 *)arg0 + 0x160);
    (*(s32 *)&TLobby__menu_state_object) = *(s32 *)((s8 *)arg0 + 0x164);
    (*(s32 *)&TLobby__quest_state_object_168) = *(s32 *)((s8 *)arg0 + 0x168);
    (*(s32 *)&TLobby__quest_state_object_16c) = *(s32 *)((s8 *)arg0 + 0x16C);
    TLobby__quest_state_word_170 = *(u16 *)((s8 *)arg0 + 0x170);
    TLobby__quest_state_word_172 = *(u16 *)((s8 *)arg0 + 0x172);
}

typedef char RecoveredGlobal_801F3268_lbl_80512B18_size[sizeof(RecoveredGlobal_801F3268_lbl_80512B18) == 0x10 ? 1 : -1];

void init_quest_script_context(Hdr_801F3124 *h, Ctx_801F3124 *c) {
    u32 n;
    u32 i;
    bswap_32__FPUl((void*)(&h->off0));
    bswap_32__FPUl((void*)(&h->off4));
    bswap_32__FPUl((void*)(&h->off8));
    bswap_16__FPUs((void*)(&h->hC));
    bswap_16__FPUs((void*)(&h->hE));
    bswap_16__FPUs((void*)((u8 *)h + 0x12));
    TLobby__data_805D5ECC = h->b12;
    c->p0 = (u8 *)h + h->off0;
    c->p4 = (u32 *)((u8 *)h + h->off4);
    c->p8 = (u8 *)h + h->off8;
    c->x0C = 0;
    c->x10 = 0;
    c->x14 = 0;
    c->x1C = 0;
    c->x20 = 0;
    c->x24 = 0;
    c->x28 = 0;
    c->x30 = 0;
    memset(c->x34, 0, 0x20);
    memset(c->p8, 0, 0x400);
    memset(c->x54, 0, 0x100);
    n = (h->off8 - h->off4) / 4;
    for (i = 0; i < n; i++) {
        bswap_32__FPUl((void*)(&c->p4[i]));
    }
    (*(s8 *)&TLobby__data_805D5EA8) = 0;
    (*(s8 *)&TLobby__data_805D5EA9) = 0;
    (*(s16 *)&TLobby__data_805D5EAA) = 0;
    (*(s16 *)&TLobby__data_805D5EAC) = 0;
    c->x15C = 0;
    c->x160 = 0;
    c->x164 = 0;
    c->x168 = 0;
    c->x16C = 0;
    c->x170 = 0;
    c->x172 = 0;
}

s32 *TObjItemOKWindow__sub_801F3268(void) {
    return &lbl_80512B18.value;
}

void clear_quest_vm_flag__6TLobbyFv(void) {
    if ((u32) quest_mission_manager != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv((void*)quest_mission_manager);
    }
}

extern u32 quest_mission_manager;

void free_luker_object__6TLobbyFv(void) {
    if ((u32) quest_mission_manager != 0U) {
        set_flag_4__9TObjLukerFPv((void*)quest_mission_manager);
    }
}

void set_flag_80000__6TLobbyFi(s32 arg0) {
    test_action_mask__10TObjPlayerFPvi((void*)(arg0), 0x80000);
}
void set_flag_40000__6TLobbyFPv(void *arg0) {
    test_action_mask__10TObjPlayerFPvi(arg0, 0x40000);
}
void TLobby__sub_801F3314(s32 arg0) {
    test_action_mask__10TObjPlayerFPvi((void*)(arg0), 0x10000);
}
void set_flag_8000__6TLobbyFi(s32 arg0) {
    test_action_mask__10TObjPlayerFPvi((void*)(arg0), 0x8000);
}
int check_flag_24576__6TLobbyFPv(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 24576); }
int TLobby__sub_801F3384(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 1024); }
int TLobby__sub_801F33A8(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 512); }
int TLobby__sub_801F33CC(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 256); }
int TLobby__sub_801F33F0(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 224); }
int test_flag_16__6TLobbyFPv(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 16); }
int set_flag_4__6TLobbyFPv(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 4); }

int TLobby__sub_801F345C(void* p) { return test_action_mask__10TObjPlayerFPvi(p, 2); }

int fn_801F3480(void* p) { return has_item_flag_4096__10TObjPlayerFPv(p); }
int fn_801F34A0(void* p) { return check_technique_flag__10TObjPlayerFPv(p); }
s32 get_field_d4(void* p) { return *(s32*)((char*)p + 0xd4); }
s32 fn_get_field_3ac(void* p) { return *(s32*)((char*)p + 0x3ac); }

void TMainTask__sub_801F34D0(u8 *arg0) {
    *(u16 *)((s8 *)arg0 + 4) = (u16) (*(u16 *)((s8 *)arg0 + 4) ^ 8);
}

void set_floor__6TLobbyFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x11a) = v; }

    extern unsigned char lbl_805D6CD9;
    extern short lbl_805D6CDA;
void TLobby__sub_801F34E8(int a0, int a1) { lbl_805D6CD9 = a1; lbl_805D6CDA = (a0 + 0x1); }

    extern int TLobby__data_805D6CCC;
int TLobby__sub_801F34F8(void) {  return TLobby__data_805D6CCC; }

int TLobby__sub_801F3500(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0xc0); }
void bswap_4x32__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

    extern unsigned char camera_capture_flags;
void TLobby__sub_801F3568(void) { camera_capture_flags = (camera_capture_flags | 0x10); }

void sync_quest_register_and_send__6TLobbyFPv(void* p) { bswap_header__6TLobbyFPv((void*)((void*)((void*)(p)))); TLobby__send_and_handle_60(p); }
void bswap_header__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void build_6x77_sync_quest_register(void* p) { *(u8*)((char*)p + 0x0) = 119; *(u8*)((char*)p + 0x1) = 3; }

    extern int warning_aram_load_done_flag;
int get_field_6CE8__6TLobbyFv(void) {  return warning_aram_load_done_flag; }

    extern int lobby_count_value;
int get_lobby_count__6TLobbyFv(void) {  return lobby_count_value; }

    extern int lobby_count_value;
void TLobby__sub_801F3614(void) { lobby_count_value = 0; }

int copy_position__6TLobbyFPv(void* p) { return VecCopy__FP3VecPC3Vec(p); }

#pragma push
#pragma fp_contract on
void bswap_entry_words__6TLobbyFi(s32 arg0) {
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

    extern int lobby_online_ready_flag;
void TLobby__sub_801F36BC(void) { lobby_online_ready_flag = 1; }

    extern int current_lobby_id;
void set_lobby_id__6TLobbyFi(int a0) { current_lobby_id = a0; }

    extern int lbl_805D3614;
void set_global_805D3614__6TLobbyFi(int a0) { lbl_805D3614 = a0; }

    extern int lobby_quest_progress_flag;
void TLobby__sub_801F36D8(void) { lobby_quest_progress_flag = 1; }

    extern int quest_warp_enabled;
void TLobby__sub_801F36E4(void) { quest_warp_enabled = 0; }

int TLobby__sub_801F36F0(void) { return -1; }
int TLobby__sub_801F36F8(void) { return 0; }
int TLobby__sub_801F3700(void) { return -1; }
int TLobby__sub_801F3708(void) { return 0; }

}
