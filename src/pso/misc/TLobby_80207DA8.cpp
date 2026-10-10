#include "pso/map/FloorLifecycleTables.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80207E88_lbl_804C8FC0 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

struct RecoveredGlobal_80207E88_lbl_804C9270 {
    M2C_UNK value;
    u8 remaining[0x11C];
};

extern "C" {
s32 is_online_ready__6TLobbyFv();
extern RecoveredGlobal_80207E88_lbl_804C8FC0 lbl_804C8FC0;
extern RecoveredGlobal_80207E88_lbl_804C9270 floor_scene_table;
s32 get_floor_scene_table(s32 arg0);
}

extern "C" {

void reset_story_select__6TLobbyFv(void);
s32 is_scene_ready__6TLobbyFv(void);
int TLobby__sub_80207E24(void* p);
void TLobby__sub_80207E44(void);
int TLobby__sub_80207E48(void* p);
int lookup_scene_object__6TLobbyFPv(void* p);
int set_state__16TAdStorySelectGCFi(void*);
s32 get_floor_map_selection(int, void *);
int copy_table_entries__6TLobbyFPvUi(void*);
int randomize_adventure_maps(void*);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_status__6TSceneFv();

    extern int story_select_pending_state;
void reset_story_select__6TLobbyFv(void) { set_state__16TAdStorySelectGCFi((void*)0); story_select_pending_state = -1; }

s32 is_scene_ready__6TLobbyFv(void) {
    s32 temp_r3;

    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        return 0;
    }
    temp_r3 = get_status__6TSceneFv();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80207E24(void* p) { return copy_table_entries__6TLobbyFPvUi(p); }
void TLobby__sub_80207E44(void) {  }
int TLobby__sub_80207E48(void* p) { return randomize_adventure_maps(p); }
int lookup_scene_object__6TLobbyFPv(void* p) { return ((int (*)(void*))get_floor_map_selection)(p); }
typedef char RecoveredGlobal_80207E88_lbl_804C8FC0_size[sizeof(RecoveredGlobal_80207E88_lbl_804C8FC0) == 0x120 ? 1 : -1];
typedef char RecoveredGlobal_80207E88_lbl_804C9270_size[sizeof(RecoveredGlobal_80207E88_lbl_804C9270) == 0x120 ? 1 : -1];
s32 get_floor_scene_table(s32 arg0) {
    if (arg0 > 0x23) {
        return 0;
    }
    if (is_online_ready__6TLobbyFv() != 0) {
        return M2C_FIELD(((u8 *)(&floor_scene_table.value) + (arg0 * 8)), s32 *, 0);
    }
    return M2C_FIELD(((u8 *)(&lbl_804C8FC0.value) + (arg0 * 8)), s32 *, 0);
}

}

extern "C" {

int reset_story_select__6TLobbyFPv(void* p);
int TLobby__sub_80207F10(void* p);

int reset_story_select__6TLobbyFPv(void* p) { return ((int (*)(void*))reset_story_select__6TLobbyFv)(p); }
int TLobby__sub_80207F10(void* p) { return ((int (*)(void*))reset_story_select__6TLobbyFv)(p); }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct R_80207F30 { s16 a; s16 b; u16 c; };

extern "C" {
s32 get_current_floor();
void *memset(void *, int, unsigned long);
int TLobby__sub_80207F30(R_80207F30 *arg0);
}

extern "C" {

void bswap_enemy_set_row(void *arg0);
void bswap_enemy_set_row_fields(void *arg0);
void swap_object_row_endian(void *arg0);
void bswap_object_row_fields(void *arg0);
void update_current_floor__6TLobbyFv(void);
void update_key_machine__6TLobbyFv(void);
int TLobby__sub_80207F10(void* p);
typedef FloorLifecycleEntry E_80207F80;
typedef FloorLifecycleCallback Fn_80208020;
typedef FloorLifecycleEntry E_80208020;
s32 is_area_transfer_pending();
void run_floor_cleanup_callbacks__6TLobbyFi(s32 arg0);
s32 run_floor_initialize_callbacks(s32 arg0);
M2C_UNK bswap_16__FPUs(u16 *, s32);
M2C_UNK bswap_32__FPUl(s32 *, s32);
int reset_story_select__6TLobbyFPv(void* p);

int TLobby__sub_80207F30(R_80207F30 *arg0) {
    s32 r;
    memset(arg0, 0, 0x3C);
    arg0->a = -1;
    r = get_current_floor();
    arg0->b = r;
    arg0->c = 0xFFFF;
    return r;
}

void run_floor_cleanup_callbacks__6TLobbyFi(s32 arg0) {
    E_80207F80 *p = (E_80207F80 *)floor_lifecycle_callback_tables[arg0];
    s32 n;
    s32 i;
    if (p != 0) {
        n = 0;
        while (p->cleanup != 0) {
            p++;
            n++;
        }
        for (i = 0; i < n; i++) {
            (p--)[-1].cleanup();
        }
    }
}

void update_current_floor__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); ((void (*)(void))run_floor_cleanup_callbacks__6TLobbyFi)(); }
s32 run_floor_initialize_callbacks(s32 arg0) {
    E_80208020 *p = floor_lifecycle_callback_tables[arg0];
    Fn_80208020 f;
    if (p == 0) {
        return 1;
    }
    while ((f = p->initialize) != 0) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        f();
        p++;
    }
    return 1;
}

void update_key_machine__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); ((int (*)(void))run_floor_initialize_callbacks)(); }
void bswap_enemy_set_row(void *arg0) {
    ((s32 (*)(s32))bswap_16__FPUs)((s32)(arg0));
    bswap_enemy_set_row_fields((void *)((void *)((char *)arg0 + 4)));
}

void bswap_enemy_set_row_fields(void *arg0) {
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 2)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 4)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 12)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 8)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 10)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 16)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 20)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 24)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 28)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 32)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 36)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 40)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 44)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 48)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 52)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 56)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 60)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 62)));
}

void swap_object_row_endian(void *arg0) {
    ((s32 (*)(s32))bswap_16__FPUs)((s32)(arg0));
    bswap_object_row_fields((void *)((void *)((char *)arg0 + 4)));
}

void bswap_object_row_fields(void *arg0) {
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 2)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 6)));
    ((s32 (*)(s32))bswap_16__FPUs)((s32)((void *)((char *)arg0 + 8)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 12)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 16)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 20)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 24)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 28)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 32)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 36)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 40)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 44)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 48)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 52)));
    ((s32 (*)(s32))bswap_32__FPUl)((s32)((void *)((char *)arg0 + 56)));
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_drop_item_mode__6TLobbyFv(void);
s32 get_instance__6TLobbyFv();
s32 get_main_phase();
s32 is_split_screen();

extern s32 game_difficulty_selection;

s32 get_drop_item_mode__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_main_phase();
    switch (temp_r3) {
    case 15:
        if ((get_instance__6TLobbyFv() == 0) && ((s32) game_difficulty_selection == 3)) {
            return 3;
        }
        return 2;
    case 14:
        if (is_split_screen() == 1) {
            if ((get_instance__6TLobbyFv() == 0) && ((s32) game_difficulty_selection == 3)) {
                return 3;
            }
            return 2;
        }
        if ((get_instance__6TLobbyFv() == 0) && ((s32) game_difficulty_selection == 3)) {
            return 1;
        }
        return 0;
    default:
        return 3;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_drop_item__6TLobbyFv(void);
s32 *load_relocatable_file(s32, u32);
s32 update_lobby_scene__6TSceneFPv(s32);
s32 get_drop_item_mode__6TLobbyFv();

extern s32 forest_rel_filename_table[];
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 forest_rel_work_buffer;

void update_drop_item__6TLobbyFv(void) {
    s32 *temp_r3;
    s32 temp_r0;
    s32 temp_r30;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    if ((u32) forest_rel_work_buffer != 0U) {
        temp_r30 = get_drop_item_mode__6TLobbyFv();
        if (update_lobby_scene__6TSceneFPv(forest_rel_filename_table[temp_r30]) <= 0x24B8) {
            temp_r3 = load_relocatable_file(forest_rel_filename_table[temp_r30], forest_rel_work_buffer);
            lbl_805D6070 = temp_r3;
            if (temp_r3 != NULL) {
                temp_r0 = *temp_r3;
                lbl_805D606C = temp_r0;
                TLobby__data_805D6068 = temp_r0;
            }
        }
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802083C0(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
#define lbl_805D6070 (*(s32 *)&lbl_805D6070)
extern u32 forest_rel_work_buffer;

void TLobby__sub_802083C0(void) {
    if ((u32) forest_rel_work_buffer != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)forest_rel_work_buffer);
        forest_rel_work_buffer = 0U;
        lbl_805D6070 = 0;
        lbl_805D606C = 0;
        TLobby__data_805D6068 = 0;
    }
}

}

#undef lbl_805D6070

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_802084B0 { u8 hdr[2]; u16 a; s32 b; s32 c; s32 d; };

struct Pkt_8020857C { u8 hdr[2]; u16 a; s16 b; s16 pad; s16 c; s8 d; s8 e; };

struct Pkt_8020851C {
    u8 cmd;
    u8 size;
    u16 a;
    u16 b;
    u16 pad;
    u16 c;
    u8 d;
    u8 e;
};

extern "C" {
s32 get_current_floor();
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
void set_destroy_event__6TLobbyFi(int a0);
extern s32 local_client_id;
extern s32 wave_event_trigger_count;
void send_6x67_wave_trigger_event(s32 arg0);
s32 get_current_floor();
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
extern s32 wave_event_first_switch_set;
void send_6x05_wave_set_switch(s16 arg0);
s32 get_current_floor();
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void send_6x05_wave_clear_switch(s32 arg0);
}

extern "C" {

void load_item_data__6TLobbyFv(void);
void relink_objects__6TLobbyFv(void);
s32 *load_relocatable_file(s32, u32);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 get_drop_item_mode__6TLobbyFv();
int link_matching_objects__6TLobbyFss(void);
s32 update_lobby_scene__6TSceneFPv(s32);

extern s32 forest_rel_filename_table[];
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 forest_rel_work_buffer;

void load_item_data__6TLobbyFv(void) {
    s32 *temp_r3_2;
    s32 temp_r0;
    s32 temp_r30;
    u32 temp_r3;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x24B8);
    forest_rel_work_buffer = temp_r3;
    if (temp_r3 != 0U) {
        temp_r30 = get_drop_item_mode__6TLobbyFv();
        if (update_lobby_scene__6TSceneFPv(forest_rel_filename_table[temp_r30]) <= 0x24B8) {
            temp_r3_2 = load_relocatable_file(forest_rel_filename_table[temp_r30], forest_rel_work_buffer);
            lbl_805D6070 = temp_r3_2;
            if (temp_r3_2 != NULL) {
                temp_r0 = *temp_r3_2;
                lbl_805D606C = temp_r0;
                TLobby__data_805D6068 = temp_r0;
            }
        }
    }
}

    extern int wave_event_stop_requested;
void relink_objects__6TLobbyFv(void) { link_matching_objects__6TLobbyFss(); wave_event_stop_requested = 1; }
void send_6x67_wave_trigger_event(s32 arg0) {
    Pkt_802084B0 pkt;
    s32 t = wave_event_trigger_count;
    wave_event_trigger_count = t + 1;
    ((void (*)(int, int))set_destroy_event__6TLobbyFi)(1, t);
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = get_current_floor();
    pkt.c = arg0;
    pkt.d = local_client_id;
    byteswap_and_send__6TLobbyFi(&pkt);
}

void send_6x05_wave_clear_switch(s32 arg0) {
    Pkt_8020851C pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.b = 0;
    pkt.a = 0xFFFF;
    pkt.c = arg0;
    pkt.d = ((s32 (*)(s32))get_current_floor)(0xFFFF);
    pkt.e = 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void send_6x05_wave_set_switch(s16 arg0) {
    Pkt_8020857C pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = arg0;
    pkt.d = ((s8)get_current_floor());
    if (wave_event_first_switch_set != 0) {
        pkt.e = 3;
        wave_event_first_switch_set = 0;
    } else {
        pkt.e = 1;
    }
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int link_matching_objects__6TLobbyFPv(void* p);
int spawn_objects_at_pos__6TLobbyFPv(void* p);
void request_wave_event_stop(void);
void TLobby__sub_80208648(void);
void dispatch_wave_event_action(s32 arg0);
void dispatch_opcode_two_u16__6TLobbyFUc(u8 arg0);
int spawn_objects_at_pos__6TLobbyFss(void*);

int link_matching_objects__6TLobbyFPv(void* p) { return ((int (*)(void *))link_matching_objects__6TLobbyFss)(p); }
int spawn_objects_at_pos__6TLobbyFPv(void* p) { return spawn_objects_at_pos__6TLobbyFss(p); }

    extern int wave_event_stop_requested;
void request_wave_event_stop(void) { wave_event_stop_requested = 1; }

void TLobby__sub_80208648(void) {  }

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_8020864C;

s32 read_be_u32(void);
extern Ent_8020864C wave_event_action_table[];

void dispatch_wave_event_action(s32 arg0) {
    Ent_8020864C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = wave_event_action_table;
    temp_r3 += (u8)arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(((M2C_UNK (*)(void *))read_be_u32)(temp_r3));
}

u16 read_stream_u16(void);
void dispatch_opcode_two_u16__6TLobbyFUc(u8 arg0) {
    void (*f)(s32, s32) = (void (*)(s32, s32))wave_event_action_table[arg0].fn;
    s32 a = ((s32 (*)(void))read_stream_u16)();
    f(a, ((s32 (*)(void))read_stream_u16)());
}

}

#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void dispatch_stream_command__6TLobbyFUc(u8 arg0);

typedef struct Ent_ {
    s32 a;
    M2C_UNK (*fn)(M2C_UNK);
} Ent;
#define wave_event_action_table (*(Ent (*)[1])&wave_event_action_table)
void dispatch_stream_command__6TLobbyFUc(u8 arg0) {
    M2C_UNK (*temp_r31)(M2C_UNK);
    Ent *temp_r3;
    temp_r3 = wave_event_action_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(((M2C_UNK (*)(void *))read_stream_u16)(temp_r3));
}

}

#undef wave_event_action_table

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_command__6TLobbyFi(s32 arg0);

#define wave_event_action_table (*(u8 (*)[1])&wave_event_action_table)

void invoke_command__6TLobbyFi(s32 arg0) {
    u8 *temp_r3 = wave_event_action_table;
    temp_r3 += ((u8)arg0) * 8;

    M2C_FIELD(temp_r3, M2C_UNK (**)(void *), 4)(temp_r3);
}

}

#undef wave_event_action_table

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_32__FPUl(s32 *, s32);
M2C_UNK memcpy(s32 *, s32, M2C_UNK);
extern s32 wave_event_stream_base;
extern s32 wave_event_stream_cursor;

s32 read_be_u32(void) {
    s32 sp8;
    s32 temp_r4;

    memcpy(&sp8, wave_event_stream_base + wave_event_stream_cursor, 4);
    temp_r4 = wave_event_stream_cursor;
    wave_event_stream_cursor = temp_r4 + 4;
    bswap_32__FPUl(&sp8, temp_r4);
    return sp8;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(u16 *, s32);

extern s32 wave_event_stream_base;
extern s32 wave_event_stream_cursor;

u16 read_stream_u16(void) {
    u16 sp8;
    s32 temp_r4;

    ((M2C_UNK (*)(u16 *, s32, M2C_UNK))memcpy)(&sp8, wave_event_stream_base + wave_event_stream_cursor, 2);
    temp_r4 = wave_event_stream_cursor;
    wave_event_stream_cursor = temp_r4 + 2;
    ((M2C_UNK (*)(u16 *, s32))bswap_16__FPUs)(&sp8, temp_r4);
    return sp8;
}

}

#include "types.h"

extern "C" {

unsigned char read_stream_u8(void);
typedef void (*Fn_8020881C)();
struct H_8020881C { Fn_8020881C fn; u32 b; };
#define wave_event_action_table (*(H_8020881C (*)[1])&wave_event_action_table)
#define wave_event_stop_requested (*(s32 *)&wave_event_stop_requested)
extern s32 wave_event_trigger_count;
extern s32 wave_event_first_switch_set;
s32 run_wave_event_actions(void);

#define wave_event_stream_base (*(unsigned char * *)&wave_event_stream_base)
#define wave_event_stream_cursor (*(int *)&wave_event_stream_cursor)
unsigned char read_stream_u8(void) { return wave_event_stream_base[wave_event_stream_cursor++]; }

s32 run_wave_event_actions(void) {
    wave_event_stop_requested = 0;
    wave_event_trigger_count = 0;
    wave_event_first_switch_set = 1;
    while (wave_event_stop_requested == 0) {
        wave_event_action_table[read_stream_u8()].fn();
    }
    return wave_event_trigger_count;
}

}

#undef wave_event_action_table
#undef wave_event_stream_base
#undef wave_event_stream_cursor
#undef wave_event_stop_requested

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80208D28_lbl_805139F8 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct Ent_80208A04 { u8 pad[8]; s32 n; };

struct Rec_80208B7C { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208B7C { u8 pad[8]; s32 count; s32 pad3; Rec_80208B7C recs[1]; };

typedef s32 M2C_UNK;
struct Rec_80208904 { s32 id; s16 f4; s16 f6; s16 f8; s16 fa; s32 fc; s32 f10; };

struct Grp_80208904 { s32 a; s32 b; s32 count; s32 pad; Rec_80208904 recs[1]; };

struct Rec_80208A40 { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208A40 { u8 pad[8]; s32 count; s32 pad3; Rec_80208A40 recs[1]; };

struct Rec_80208AD8 { s32 id; s16 f4; u8 pad[0xE]; };

struct Grp_80208AD8 { u8 pad[8]; s32 count; s32 pad3; Rec_80208AD8 recs[1]; };

struct Rec_80208BD8 { s32 id; s16 f4; s16 f6; u8 pad[0xC]; };
struct Grp_80208BD8 { u8 pad[8]; s32 count; s32 pad3; Rec_80208BD8 recs[1]; };
typedef void (*Fn_80208BD8)(Rec_80208BD8 *);

struct Rec_802089B0 { u8 pad[4]; s16 f4; u8 pad2[0xE]; };

struct Grp_802089B0 { u8 pad[8]; s32 count; s32 pad3; Rec_802089B0 recs[1]; };

extern "C" {
s32 get_current_floor();
extern Fn_80208BD8 floor_event_create_table[];
void activate_triggered_floor_events(void);
s32 activate_first_floor_event(s32 idx, s32 id);
u8 * heap_alloc__5THeapFUl(void *, s32);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
extern u8 *area_event_set_heap;
u8 *alloc_heap_slot__6TLobbyFii(s32 arg0, s32 arg1);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
s32 count_sync_record_bytes__6TLobbyFv(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
s32 set_floor_event_flags(s32 arg0, s32 arg1, s32 arg2);
#define BS16 ((void (*)(void *))bswap_16__FPUs)
#define BS32 ((void (*)(void *))bswap_32__FPUl)
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
void bswap_floor_event_set(s32 idx);
#define BS16 ((void (*)(void *))bswap_16__FPUs)
s32 count_sync_record_bytes__6TLobbyFv(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
void import_sync_records__6TLobbyFPv(s16 *arg0);
#define BS16 ((void (*)(void *))bswap_16__FPUs)
s32 count_sync_record_bytes__6TLobbyFv(void);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
s32 export_sync_records__6TLobbyFPv(s16 *arg0);
extern RecoveredGlobal_80208D28_lbl_805139F8 lobby_slot_ptr_table;
void clear_floor_event_flags(void);
}

extern "C" {

void TLobby__sub_80208884(void* a0);
void spawn_destroy_event__6TLobbyFPv(void *arg0);
void create_empty_floor_event(void);
int get_destroy_event_obj__6TLobbyFv(void);
M2C_UNK show_partner_chatter_for_key(s16);
M2C_UNK __ct__14TSetEvtDestroyFP7TObjectP21SetDestroyEventRecord(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);

#define wave_event_stream_base (*(int *)&wave_event_stream_base)
#define wave_event_stream_cursor (*(int *)&wave_event_stream_cursor)
void TLobby__sub_80208884(void* a0) { wave_event_stream_base = *(int*)((char*)a0 + 0x0); wave_event_stream_cursor = *(int*)((char*)a0 + 0x4); }

    extern int set_event_destroy_id;
void set_destroy_event__6TLobbyFi(int a0) { set_event_destroy_id = a0; }

extern s32 tl_01;

void spawn_destroy_event__6TLobbyFPv(void *arg0) {
    void *obj;

    if (((s32 (*)(void))get_destroy_event_obj__6TLobbyFv)() != -1) {
        show_partner_chatter_for_key(M2C_FIELD(arg0, s16 *, 8));
    }
    obj = __nw__7TObjectFUl(0x34);
    if (obj != NULL) {
        __ct__14TSetEvtDestroyFP7TObjectP21SetDestroyEventRecord(obj, tl_01, arg0);
    }
    set_destroy_event__6TLobbyFi(-1);
}

void create_empty_floor_event(void) {  }
typedef char RecoveredGlobal_80208D28_lbl_805139F8_size[sizeof(RecoveredGlobal_80208D28_lbl_805139F8) == 0x48 ? 1 : -1];

void bswap_floor_event_set(s32 idx) {
    Rec_80208904 *r = ((Rec_80208904 **)&lobby_slot_ptr_table)[idx];
    s32 n;
    s32 i;
    if (r != NULL) {
        BS32((u8 *)r);
        BS32((u8 *)r + 4);
        BS32((u8 *)r + 8);
        n = ((Grp_80208904 *)r)->count;
        r = ((Grp_80208904 *)r)->recs;
        i = 0;
        for (; i < n; i++, r++) {
            BS32(&r->id);
            BS16(&r->f4);
            BS16(&r->f6);
            BS16(&r->f8);
            BS16(&r->fa);
            BS32(&r->fc);
            BS32(&r->f10);
        }
    }
}

void clear_floor_event_flags(void) {
    Grp_802089B0 **t;
    Grp_802089B0 *g;
    s32 i;
    s32 n;
    Rec_802089B0 *r;
    s32 j;
    i = 0;
    t = (Grp_802089B0 **)&lobby_slot_ptr_table;
    do {
        g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, r++) {
                r->f4 = 0;
            }
        }
        i++;
    } while (i < 0x12);
}

s32 count_sync_record_bytes__6TLobbyFv(void) {
    s32 sum = 0;
    s32 i;
    for (i = 0; i < 18; i++) {
        if (((Ent_80208A04 * *)&lobby_slot_ptr_table)[i] != 0) sum += ((Ent_80208A04 * *)&lobby_slot_ptr_table)[i]->n;
    }
    return sum * 2;
}

void import_sync_records__6TLobbyFPv(s16 *arg0) {
    Grp_80208A40 **t;
    s16 *src;
    s32 i;
    s32 n;
    Rec_80208A40 *r;
    s32 j;
    s16 tmp;
    count_sync_record_bytes__6TLobbyFv();
    src = arg0;
    t = (Grp_80208A40 **)&lobby_slot_ptr_table;
    i = 0;
    do {
        Grp_80208A40 *g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, src++, r++) {
                tmp = *src;
                BS16(&tmp);
                r->f4 = tmp;
            }
        }
        i++;
    } while (i < 0x12);
}

s32 export_sync_records__6TLobbyFPv(s16 *arg0) {
    s32 ret;
    Grp_80208AD8 **t;
    s16 *src;
    s32 i;
    s32 n;
    Rec_80208AD8 *r;
    s32 j;
    s16 tmp;
    ret = count_sync_record_bytes__6TLobbyFv();
    src = arg0;
    t = (Grp_80208AD8 **)&lobby_slot_ptr_table;
    i = 0;
    do {
        Grp_80208AD8 *g = t[i];
        if (g != NULL) {
            n = g->count;
            r = g->recs;
            for (j = 0; j < n; j++, src++, r++) {
                tmp = r->f4 & ~2;
                BS16(&tmp);
                *src = tmp;
            }
        }
        i++;
    } while (i < 0x12);
    return ret;
}

s32 set_floor_event_flags(s32 arg0, s32 arg1, s32 arg2) {
    Grp_80208B7C *g = ((Grp_80208B7C * *)&lobby_slot_ptr_table)[arg0];
    Rec_80208B7C *r;
    s32 n;
    if (g == 0) {
        return 0;
    }
    n = g->count;
    r = g->recs;
    s32 i;
    for (i = 0; i < n; i++) {
        if (r->id == arg1) {
            r->f4 |= arg2;
        }
        r++;
    }
    return 1;
}

void activate_triggered_floor_events(void) {
    Fn_80208BD8 *tbl;
    s32 n;
    Rec_80208BD8 *r;
    s32 i;
    Grp_80208BD8 *g = ((Grp_80208BD8 **)&lobby_slot_ptr_table)[get_current_floor()];
    if (g != NULL) {
        n = g->count;
        r = g->recs;
        i = 0;
        tbl = floor_event_create_table;
        for (; i < n; i++, r++) {
            if (!(r->f4 & 2) && (r->f4 & 4)) {
                tbl[r->f6](r);
                r->f4 |= 6;
            }
        }
    }
}

s32 activate_first_floor_event(s32 idx, s32 id) {
    Grp_80208BD8 *g = ((Grp_80208BD8 **)&lobby_slot_ptr_table)[idx];
    Rec_80208BD8 *r;
    s32 i;
    if (g == NULL) {
        return 0;
    }
    r = g->recs;
    for (i = g->count; i > 0; i--, r++) {
        if (r->id == id && !(r->f4 & 2)) {
            floor_event_create_table[r->f6](r);
            r->f4 |= 6;
            return 1;
        }
    }
    return 0;
}

u8 *alloc_heap_slot__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    u8 *temp_r3;
    if (arg0 > 0x11) {
        return NULL;
    }
    temp_r30 = arg0 * 4;
    if ((u32) M2C_FIELD(&lobby_slot_ptr_table.value, M2C_UNK *, temp_r30) != 0U) {
        return NULL;
    }
    temp_r3 = (u8 *)(heap_alloc__5THeapFUl(area_event_set_heap, arg1));
    if (temp_r3 != NULL) {
        M2C_FIELD(&lobby_slot_ptr_table.value, M2C_UNK *, temp_r30) = (long) (temp_r3);
        return temp_r3;
    }
    return NULL;
}

}

#undef wave_event_stream_base
#undef wave_event_stream_cursor

#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80208E8C { u8 pad[4]; void *data; u8 pad2[4]; };

struct Terr_80208E8C { Ent_80208E8C *ents; s32 count; };

struct Area_80208E8C { Terr_80208E8C *terrs; s32 count; };

struct Buf_80208E8C { u8 data[0x20]; };

extern "C" {
#define TLobby__data_805D6068 (*(Area_80208E8C * *)&TLobby__data_805D6068)
extern u8 lbl_8044BAC8[];
#define area_event_set_heap (*(s32 *)&area_event_set_heap)
#define lobby_slot_ptr_table (*(M2C_UNK (*)[1])&lobby_slot_ptr_table)
void replace_file_extension__6TLobbyFPvPvPv(Buf_80208E8C *, void *, void *);

#define HA2 ((s32 (*)(s32, s32))heap_alloc__5THeapFUl)
void read_disc_file(Buf_80208E8C *, void *);

s32 load_area_event_set(s32 floor, s32 area, s32 terrain, s32 entities);
void heap_free__5THeapFPv(void *, void *);
#define lobby_slot_ptr_table (*(M2C_UNK (*)[1])&lobby_slot_ptr_table)
#define area_event_set_heap (*(s32 *)&area_event_set_heap)
void free_team_buffers__6TLobbyFv(void);
}

extern "C" {

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);

M2C_UNK move_data__6TLobbyFv(s32, s32, s32);

#define lobby_slot_ptr_table (*(M2C_UNK (*)[1])&lobby_slot_ptr_table)
#define area_event_set_heap (*(s32 *)&area_event_set_heap)

s32 add_player__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r29;
    s32 temp_r3;

    if (arg0 > 0x11) {
        return 0;
    }
    temp_r29 = arg0 * 4;
    if ((u32) *((s32 *)((s8 *)lobby_slot_ptr_table + temp_r29)) != 0U) {
        return 0;
    }
    temp_r3 = HA2(area_event_set_heap, arg2);
    if (temp_r3 != 0) {
        move_data__6TLobbyFv(temp_r3, arg1, arg2);
        *((s32 *)((s8 *)lobby_slot_ptr_table + temp_r29)) = temp_r3;
        bswap_floor_event_set(arg0);
        return 1;
    }
    return 0;
}

void free_team_buffers__6TLobbyFv(void) {
    s32 i;
    for (i = 17; i >= 0; i--) {
        if ((u32)((s32 *)&lobby_slot_ptr_table)[i] != 0) {
            heap_free__5THeapFPv((void *)area_event_set_heap, (void *)((s32 *)&lobby_slot_ptr_table)[i]);
            ((s32 *)&lobby_slot_ptr_table)[i] = 0;
        }
    }
}

s32 load_area_event_set(s32 floor, s32 area, s32 terrain, s32 entities) {
    Buf_80208E8C buf;
    s32 n;
    void *p;
    if (TLobby__data_805D6068[area].terrs == 0 || TLobby__data_805D6068[area].count - 1 < terrain) {
        return 0;
    }
    if (TLobby__data_805D6068[area].terrs[terrain].ents == 0 || TLobby__data_805D6068[area].terrs[terrain].count - 1 < entities) {
        return 0;
    }
    replace_file_extension__6TLobbyFPvPvPv(&buf, TLobby__data_805D6068[area].terrs[terrain].ents[entities].data, lbl_8044BAC8);
    n = ((s32 (*)(Buf_80208E8C *))update_lobby_scene__6TSceneFPv)(&buf);
    if (n > 0) {
        p = ((void *)HA2((s32)((*(void * *)&area_event_set_heap)), (s32)(n)));
        if (p != 0) {
            read_disc_file(&buf, p);
            ((void * *)&lobby_slot_ptr_table)[floor] = p;
            bswap_floor_event_set(floor);
            return 1;
        }
    }
    return 0;
}

}

#undef TLobby__data_805D6068
#undef area_event_set_heap
#undef lobby_slot_ptr_table

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80208F7C {
    s32 sp8;
    M2C_UNK spC;
    M2C_UNK sp10;
};

extern "C" {
s32 is_area_transfer_pending();
s32 get_floor_map_selection(int, void *);

s32 load_all_floor_event_sets__6TLobbyFv(void);
}

extern "C" {

int get_team_state__6TLobbyFPv(void* p);

s32 load_all_floor_event_sets__6TLobbyFv(void) {
    Stack_80208F7C stack;
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((get_floor_map_selection((int) (var_r31), (void *) (&stack.sp8)) == 1) && (stack.sp8 >= 0)) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        ((M2C_UNK (*)(int, int, int, int))load_area_event_set)((int) (var_r31), (int) (stack.sp8), (int) (stack.spC), (int) (stack.sp10));
        goto block_6;
    }
block_6:
    var_r31 += 1;
    if (var_r31 >= 0x12) {
        return 1;
    }
    goto loop_1;
}

}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * __ct__5THeapFUli(void *, s32, s32);
u8 *__nw__5THeapFUl(M2C_UNK);
#define area_event_set_heap (*(int *)&area_event_set_heap)
void create_heap_8000__6TLobbyFv(void);
void TItemDrop__sub_800FDDF4();
void TItemDrop__sub_800FDE7C(void *);
s32 load_all_floor_event_sets__6TLobbyFv();
extern u8 lbl_8044BAD0[];
#define lobby_slot_ptr_table (*(s32 (*)[1])&lobby_slot_ptr_table)
extern int set_event_destroy_id;
extern s32 lbl_805D6098;
void load_set_event_gsl__6TLobbyFv(void);
}

extern "C" {

void free_heap__6TLobbyFv(void);

int get_team_state__6TLobbyFPv(void* p);

int __dt__5THeapFv(void*, void*);

int get_team_state__6TLobbyFPv(void* p) { return ((int (*)(void *))free_team_buffers__6TLobbyFv)(p); }

#define area_event_set_heap (*(int *)&area_event_set_heap)

void load_set_event_gsl__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        lobby_slot_ptr_table[i] = 0;
    }
    (*(s32 *)&set_event_destroy_id) = -1;
    lbl_805D6098 = 0;
    TItemDrop__sub_800FDE7C(lbl_8044BAD0);
    if (load_all_floor_event_sets__6TLobbyFv() == 0) {
        TItemDrop__sub_800FDDF4();
        return;
    }
    TItemDrop__sub_800FDDF4();
}

void free_heap__6TLobbyFv(void) { __dt__5THeapFv((void*)(area_event_set_heap), (void*)1); area_event_set_heap = 0; }

    extern int set_event_destroy_id;

void create_heap_8000__6TLobbyFv(void) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__5THeapFUl(0x14));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__5THeapFUli(temp_r3, 0x8000, 0x20));
    }
    (*(u8 * *)&area_event_set_heap) = var_r0;
}

int get_destroy_event_obj__6TLobbyFv(void) {  return set_event_destroy_id; }

}

#undef area_event_set_heap
#undef lobby_slot_ptr_table
