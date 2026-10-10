#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TProtocol__send_60(int, int, int);
M2C_UNK dispatch_6x_subcommand(void *);
extern u32 TLobby__protocol_instance;
extern s32 lbl_805D5E50;
void TLobby__send_and_handle_60(u8 *arg0);
M2C_UNK TProtocol__send_60(int, int, int);
extern u32 TLobby__protocol_instance;
void send_60_sized__6TLobbyFPv(u8 *arg0);
M2C_UNK send_subcommand_to_client__9TProtocolFPviPvi(u32, s32, void *, s32);
M2C_UNK dispatch_6x_subcommand(void *);
extern u32 local_client_id;
extern u32 TLobby__protocol_instance;
extern s32 lbl_805D5E50;
void send_subcommand_to_client__6TLobbyFPvUi(void *arg0, u32 arg1);
void tmp_buf_release__6TLobbyFi(char *);
void *tmp_buf_use_req__6TLobbyFPv(char *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(void);
void pump_frames__6TLobbyFv(void);
s32 get_resource_file_size__6TLobbyFPv(char *);
void load_sct_file__8TGStreamFii(char *, void *);
void debug_print__6TLobbyFii(const char *, ...);
void change_file_extension__6TLobbyFPvPvPv(s32, char *, char *);
s32 compare_file_extension__6TLobbyFPvPv(char *, char *);
char *strncpy(char *, const char *, u32);
s32 load_gvm_texture_archive(void *, s32);
extern char lbl_80449798[];
extern char lbl_804497C4[];
extern char lbl_804497D4[];
extern char lbl_805DC448[4];
s32 load_texture_pvm_file__6TLobbyFPvi(const char *name, s32 arg1);
void run_frame__6TLobbyFv(void);
void pump_frames__6TLobbyFv(void);
void debug_print__6TLobbyFii(const char *, ...);
s32 load_texture_list(s32 **);
extern char lbl_804497FC[];
s32 pso_load_texture__6TLobbyFPv(s32 **arg0);
}

extern "C" {

void bswap_switch_activate_token__6TLobbyFPv(void* p);
void dispatch_packet__6TLobbyFPv(void *arg0);
void send_command__6TLobbyFPvUi(void *arg0, u32 arg1);
void update_players__6TLobbyFi(s32 arg0);
M2C_UNK dispatch_6x_subcommand(void *);
M2C_UNK send_subcommand_to_client__9TProtocolFPviPvi(u32, s32, void *, s32);
int bswap_16__FPUs(void*);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK append_command_to_batch_buffer(void *, s32);
s32 get_main_phase();
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK send_pso_data_long2__9TProtocolFcR17long_game_commandUl(void*, u32, void *, s32);

extern u32 local_client_id;
extern u32 TLobby__protocol_instance;
extern s32 lbl_805D5E50;

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 4);
    bswap_32__FPUl(&sp8);
    if ((u32) local_client_id == arg1) {
        lbl_805D5E50 = 1;
        dispatch_6x_subcommand((void *)(arg0));
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__protocol_instance != 0U) {
        send_pso_data_long2__9TProtocolFcR17long_game_commandUl((void*)TLobby__protocol_instance, arg1, arg0, sp8);
    }
}

extern s32 TLobby__designated_client_id;
extern u32 TLobby__protocol_instance;
extern s32 lbl_805D5E50;

void dispatch_packet__6TLobbyFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1) * 4;
    if (get_main_phase() == 0xE) {
        lbl_805D5E50 = 1;
        dispatch_6x_subcommand((void *)(arg0));
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__protocol_instance != 0U) {
        send_subcommand_to_client__9TProtocolFPviPvi(TLobby__protocol_instance, TLobby__designated_client_id, arg0, temp_r31);
    }
}

extern s32 TLobby__join_state_flag;
extern void *game_protocol_instance;
extern s32 lbl_805D5E50;

typedef s32 M2C_UNK;

void send_subcommand_to_client__6TLobbyFPvUi(void *arg0, u32 arg1) {
    s32 size;
    size = M2C_FIELD(arg0, u8 *, 1) * 4;
    if ((u32) local_client_id == arg1) {
        lbl_805D5E50 = 1;
        dispatch_6x_subcommand(arg0);
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__protocol_instance != 0U) {
        send_subcommand_to_client__9TProtocolFPviPvi(TLobby__protocol_instance, arg1, arg0, size);
    }
}

void send_60_sized__6TLobbyFPv(u8 *arg0) {
    int size = arg0[1] * 4;
    if (TLobby__protocol_instance != 0) {
        TProtocol__send_60(TLobby__protocol_instance, (int)arg0, size);
    }
}

void TLobby__send_and_handle_60(u8 *arg0) {
    s32 var_r5;
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    var_r4 = (u8 *)((*(u8 * *)&TLobby__protocol_instance));
    var_r5 = M2C_FIELD(arg0, u8 *, 1) * 4;
    if (var_r4 != NULL) {
        var_r3 = (u8 *)(var_r4);
        var_r4 = (u8 *)(var_r31);
        TProtocol__send_60((int) (var_r3), (int) (var_r4), (int) (var_r5));
    }
    var_r3 = (u8 *)(var_r31);
    lbl_805D5E50 = 1;
    dispatch_6x_subcommand((void *)((int) (var_r3)));
    lbl_805D5E50 = 0;
}

void update_players__6TLobbyFi(s32 arg0) {
    void *var_r31;

    if ((s32) TLobby__join_state_flag == 1) {
        TLobby__send_and_handle_60((u8 *)(arg0));
        return;
    }
    if ((void *) game_protocol_instance != NULL) {
        var_r31 = M2C_FIELD(game_protocol_instance, void **, 0x14);
        while (var_r31 != NULL) {
            append_command_to_batch_buffer(var_r31, arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        }
    }
    lbl_805D5E50 = 1;
    dispatch_6x_subcommand((void *)(arg0));
    lbl_805D5E50 = 0;
}

void bswap_switch_activate_token__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
s32 load_texture_pvm_file__6TLobbyFPvi(const char *name, s32 arg1) {
    char path[0x40];
    void *buf;
    s32 allocated;
    s32 size;
    s32 ret;
    pump_frames__6TLobbyFv();
    strncpy(path, name, 0x40);
    if (compare_file_extension__6TLobbyFPvPv(path, lbl_805DC448) != 0) {
        change_file_extension__6TLobbyFPvPvPv(0, path, lbl_805DC448);
    }
    size = get_resource_file_size__6TLobbyFPv(path);
    if (size <= 0) {
        debug_print__6TLobbyFii(lbl_80449798, name);
        return -1;
    }
    allocated = 0;
    if (((size + 0x7FF) / 2048) * 2048 > 0x40000) {
        buf = alloc__22TQuestVmDownLoadServerFPv();
        if (buf == NULL) {
            return -1;
        }
        allocated = 1;
    } else {
        buf = tmp_buf_use_req__6TLobbyFPv(lbl_804497C4);
    }
    load_sct_file__8TGStreamFii(path, buf);
    ret = load_gvm_texture_archive(buf, arg1);
    if (allocated != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(buf);
    } else {
        tmp_buf_release__6TLobbyFi(lbl_804497C4);
    }
    if (ret < 0) {
        debug_print__6TLobbyFii(lbl_804497D4, name);
    }
    return ret;
}
s32 pso_load_texture__6TLobbyFPv(s32 **arg0) {
    s32 r;
    s32 ret;
    pump_frames__6TLobbyFv();
    while (1) {
        r = load_texture_list(arg0);
        if (r == 1) {
            ret = 1;
            break;
        }
        if (r == -1) {
            ret = -1;
            debug_print__6TLobbyFii(lbl_804497FC, **arg0);
            break;
        }
        run_frame__6TLobbyFv();
    }
    return ret;
}

}
