#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_80215ABC_lbl_804CA0B8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Pair_802156E0 { s8 key; u8 val; };

struct G_802156E0 { u8 pad[0xc]; Pair_802156E0 *tbl; };

struct Pair_802156A0 { s8 key; u8 val; };

struct G_802156A0 { u8 pad[0x10]; Pair_802156A0 *tbl; };

struct Ent_8021587C { u8 id; u8 n1; u8 n2; };

struct Tbl_8021587C { Ent_8021587C *base; s32 count; };

struct G_8021587C { u8 pad[4]; Tbl_8021587C *t; };

struct Item_8021587C { u8 pad[3]; u8 f3; };

struct Ent_8021599C { u8 id; u8 n1; u8 n2; };

struct Tbl_8021599C { Ent_8021599C *base; s32 count; };

struct G_8021599C { Tbl_8021599C *t; };

struct Obj_8021599C { u8 pad[4]; u8 slot; };

struct G_802156E0;
struct Ent_80215720 { u8 id; u8 n1; u8 n2; };

struct Tbl_80215720 { Ent_80215720 *base; s32 count; };

struct G_80215720 { u8 pad[8]; Tbl_80215720 *t; };

struct Obj_80215720 { u8 pad[7]; s8 a; u8 p8; s8 b; u8 pa; s8 c; };

struct Ctr_80215720 { u8 buf[0x68]; };

typedef s32 M2C_UNK;
struct Pair_802150E8 { s32 a; s32 b; };

struct Slot_802150E8 { char name[0x34]; s32 size; void *buf; };

struct Ent_802150E8 { u8 pad[0x28]; char name[0x10]; s32 size; };

struct Pair_80215380 { s32 a; s32 b; };

extern "C" {
void TQuestListOnline__sub_8013ACF4(s32);
M2C_UNK memcpy(int, void *, int);
extern u32 TQuestListOnline__quest_list_buffer;
void copy_quest_list_data__16TQuestListOnlineFi(s32 arg0);
int alloc__22TQuestVmDownLoadServerFPv(void *);
int memset(void*, void*, void*);
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern u32 TQuestListOnline__quest_list_buffer;
extern s32 TQuestListOnline__selected_quest_info;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern int TQuestListOnline__download_window;
extern int TQuestListOnline__quest_info_window;
extern int TQuestListOnline__download_barrier_window;
extern int quest_download_active;
extern s32 TQuestListOnline__instance;
void init_download_buffers__16TQuestListOnlineFv(void);
int memset(void*, void*, void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(int);
s32 free__11TOBoss4RockFUi(int);
s32 TWindow__close(int);
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern u32 TQuestListOnline__quest_list_buffer;
extern s32 TQuestListOnline__selected_quest_info;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern int TQuestListOnline__download_window;
extern int TQuestListOnline__quest_info_window;
extern int TQuestListOnline__download_barrier_window;
extern int quest_download_active;
extern s32 TQuestListOnline__instance;
void release_resources__16TQuestListOnlineFv(void);
extern RecoveredGlobal_80215ABC_lbl_804CA0B8 section_id_favored_grind_table;
extern s32 lbl_805D6238;
bool is_slot_match__6TLobbyFPv(u8 *arg0);
extern G_802156E0 *item_appraisal_rules;
u8 lookup_key_value__6TLobbyFc(s8 x);
extern G_802156E0 *item_appraisal_rules;
u8 lookup_table_value__6TLobbyFc(s8 x);
s32 is_rare_item__9TItemDataFPv(Item_8021587C *);
u8 get_entry_field16__9TItemDataFv(Item_8021587C *);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
u8 lookup_table_value__6TLobbyFc(s8 x);
extern s8 lbl_8044BD30[];
extern G_802156E0 *item_appraisal_rules;
extern s32 item_appraisal_favored_weapon;
extern s32 item_appraisal_score;
extern s32 lbl_805D6238;
void roll_item_grind_bonus__6TLobbyFPv(Item_8021587C *item);
u8 find_adjacent_matching_slot__10TObjPlayerFUc(u8);
u8 get_next_matching_special_index__10TObjPlayerFUc(u8);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
u8 lookup_key_value__6TLobbyFc(s8 x);
extern s8 lbl_8044BD30[];
extern G_802156E0 *item_appraisal_rules;
extern s32 item_appraisal_favored_weapon;
extern s32 item_appraisal_score;
extern s32 lbl_805D6238;
void adjust_appraisal_special(Obj_8021599C *obj);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
u8 lookup_key_value__6TLobbyFc(s8 x);
extern s8 lbl_8044BD30[];
extern G_802156E0 *item_appraisal_rules;
extern s32 item_appraisal_favored_weapon;
extern s32 item_appraisal_score;
extern s32 lbl_805D6238;
void adjust_appraisal_percentages(Obj_80215720 *arg0);
void update_graph__8TDLGraphFii(s32, s32);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void render_tick__Fv();
s32 get_guild_text(s32);
void render_screen_overlay__9TMainTaskFv(void *);
void some_empty_func__9TMainTaskFv(void *);
void run_all_lists__9TMainTaskFv(void *);
void run_tl_camera_tasks__9TMainTaskFv(void *);
void render__9TMainTaskFv(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(int, f32);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
void complete_reveal__14TWindowMessageFPv(int);
M2C_UNK send_and_handle__6TLobbyFPvii(int, s32, s32);
int update_window_mode_from_progress__6TLobbyFiPv(s32, Pair_802150E8 *);
s32 get_window_layout_position(s32);
char *strtok(char *, const char *);
s32 strncmp(const char *, const char *, u32);
char *strncpy(char *, const char *, u32);
int memset(void*, void*, void*);
extern Pair_802150E8 lbl_8044BCC0[];
extern unsigned char TQuestListOnline__dat_download_state[];
extern unsigned char TQuestListOnline__bin_download_state[];
extern u8 main_task[];
extern s32 local_client_id;
extern int TQuestListOnline__bin_download_complete;
extern int TQuestListOnline__dat_download_complete;
extern int TQuestListOnline__download_window;
extern int quest_download_active;
extern int lbl_805D61B0;
extern int lbl_805D61B4;
extern const f32 lbl_805DC664;
extern char lbl_805DC668[4];
extern char lbl_805DC66C[4];
extern char lbl_805DC670[4];
extern char lbl_805DC674[4];
void begin_file_download__16TQuestListOnlineFPv(Ent_802150E8 *arg0);
s32 get_camera_id__11TCameraCtrlFv();
void TQuestListOnline__sub_8013ACF4(s32);
s32 THunterGuildSeqOffline__sub_80212074();
M2C_UNK set_position_xy(int, f32, f32);
s32 TWindow__close(int);
M2C_UNK set_field_1c__6TLobbyFPvf(int, f32);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK send_and_handle__6TLobbyFPvii(int, s32, s32);
int create_message_window__6TLobbyFiiUis(s32, Pair_80215380 *, s32, s32);
s32 get_window_layout_position(s32);
M2C_UNK memcpy(int, void *, int);
extern Pair_80215380 lbl_8044BCB8[];
extern s32 local_client_id;
extern s32 TQuestListOnline__selected_quest_info;
extern int TQuestListOnline__quest_info_window;
extern const f32 lbl_805DC664;
extern const f32 lbl_805DC678;
void receive_quest_info__16TQuestListOnlineFPv(void *arg0);
}

extern "C" {
    int memset(void*, void*, void*);
    extern unsigned char TQuestListOnline__dat_download_state[];
    extern unsigned char TQuestListOnline__bin_download_state[];
    extern int TQuestListOnline__bin_download_complete;
    extern int TQuestListOnline__dat_download_complete;
    extern int TQuestListOnline__download_window;
    extern int TQuestListOnline__quest_info_window;
    extern int TQuestListOnline__download_barrier_window;
    extern int quest_download_active;
    extern int lbl_805D61B0;
    extern int lbl_805D61B4;

void begin_file_download__16TQuestListOnlineFPv(Ent_802150E8 *arg0) {
    Pair_802150E8 p;
    char buf[0x10];
    char *tok;
    Slot_802150E8 *s;
    if ((u32) TQuestListOnline__download_window == 0U) {
        p.a = lbl_8044BCC0[0].a;
        p.b = lbl_8044BCC0[0].b;
        TQuestListOnline__download_window = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0x2C), &p);
        send_and_handle__6TLobbyFPvii(TQuestListOnline__download_window, get_guild_text(0x14), 1);
        complete_reveal__14TWindowMessageFPv(TQuestListOnline__download_window);
        set_field_1c__6TLobbyFPvf(TQuestListOnline__download_window, lbl_805DC664);
        some_empty_func__9TMainTaskFv(main_task);
        run_tl_camera_tasks__9TMainTaskFv(main_task);
        render__9TMainTaskFv(main_task);
        render_screen_overlay__9TMainTaskFv(main_task);
        render_tick__Fv();
        some_empty_func__9TMainTaskFv(main_task);
        run_tl_camera_tasks__9TMainTaskFv(main_task);
        render__9TMainTaskFv(main_task);
        render_screen_overlay__9TMainTaskFv(main_task);
        render_tick__Fv();
        some_empty_func__9TMainTaskFv(main_task);
        run_tl_camera_tasks__9TMainTaskFv(main_task);
        render__9TMainTaskFv(main_task);
        render_screen_overlay__9TMainTaskFv(main_task);
        render_tick__Fv();
        suppress_slot__11TWindowCtrlFi(local_client_id);
        run_all_lists__9TMainTaskFv(main_task);
        quest_download_active = 1;
        lbl_805D61B0 = 0;
        lbl_805D61B4 = 0;
    }
    if (arg0 == NULL) {
        return;
    }
    memset(buf, 0, (void *)0x10);
    strncpy(buf, arg0->name, 0x10);
    if (strtok(buf, lbl_805DC668) == NULL) {
        return;
    }
    tok = strtok(NULL, lbl_805DC66C);
    if (tok == NULL) {
        return;
    }
    if (strncmp(tok, lbl_805DC670, 4) == 0) {
        s = (Slot_802150E8 *)TQuestListOnline__dat_download_state;
        if (s->buf == NULL) {
            strncpy(s->name, arg0->name, 0x10);
            ((Slot_802150E8 *)TQuestListOnline__dat_download_state)->size = arg0->size;
            s->buf = alloc_buffer__11TOBoss4RockFPv(arg0->size);
            memset(s->buf, 0, (void *)arg0->size);
            TQuestListOnline__dat_download_complete = 0;
            lbl_805D61B0 += arg0->size;
        }
    } else if (strncmp(tok, lbl_805DC674, 4) == 0) {
        s = (Slot_802150E8 *)TQuestListOnline__bin_download_state;
        if (s->buf == NULL) {
            strncpy(s->name, arg0->name, 0x10);
            ((Slot_802150E8 *)TQuestListOnline__bin_download_state)->size = arg0->size;
            s->buf = alloc_buffer__11TOBoss4RockFPv(arg0->size);
            memset(s->buf, 0, (void *)arg0->size);
            TQuestListOnline__bin_download_complete = 0;
            update_graph__8TDLGraphFii(lbl_805D61B4, lbl_805D61B0 += arg0->size);
        }
    }
}

void receive_quest_info__16TQuestListOnlineFPv(void *arg0) {
    Pair_80215380 p;
    if ((u32) TQuestListOnline__selected_quest_info != 0U) {
        memcpy(TQuestListOnline__selected_quest_info, arg0, 0x124);
        TQuestListOnline__sub_8013ACF4(2);
        if (THunterGuildSeqOffline__sub_80212074() != 0) {
            suppress_slot__11TWindowCtrlFi(local_client_id);
            if ((u32) TQuestListOnline__quest_info_window != 0U) {
                TWindow__close(TQuestListOnline__quest_info_window);
                TQuestListOnline__quest_info_window = 0;
            }
            p.a = lbl_8044BCB8[0].a;
            p.b = lbl_8044BCB8[0].b;
            TQuestListOnline__quest_info_window = create_message_window__6TLobbyFiiUis(get_window_layout_position(0x2E), &p, 1, local_client_id);
            set_field_1c__6TLobbyFPvf(TQuestListOnline__quest_info_window, lbl_805DC664);
            send_and_handle__6TLobbyFPvii(TQuestListOnline__quest_info_window, TQuestListOnline__selected_quest_info + 4, 0x80);
            if (get_camera_id__11TCameraCtrlFv() >= 2) {
                set_position_xy(TQuestListOnline__quest_info_window, lbl_805DC678, lbl_805DC678);
            }
        }
    }
}

void copy_quest_list_data__16TQuestListOnlineFi(s32 arg0) {
    if ((u32) TQuestListOnline__quest_list_buffer != 0U) {
        memcpy((int) (TQuestListOnline__quest_list_buffer), (void *) (arg0), (int) (0x11D4));
        TQuestListOnline__sub_8013ACF4(1);
    }
}

typedef char RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8_size[sizeof(RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24_size[sizeof(RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24) == 0x3C ? 1 : -1];

typedef char RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8_size[sizeof(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_80215498_TQuestListOnline__data_80513E24_size[sizeof(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24) == 0x3C ? 1 : -1];
void release_resources__16TQuestListOnlineFv(void) {
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__bin_download_state).value, u32 *, 0x38) != 0U) {
        free__11TOBoss4RockFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__bin_download_state).value, u32 *, 0x38)));
        M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__bin_download_state).value, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__dat_download_state).value, u32 *, 0x38) != 0U) {
        free__11TOBoss4RockFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__dat_download_state).value, u32 *, 0x38)));
        M2C_FIELD(&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__dat_download_state).value, u32 *, 0x38) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__selected_quest_info) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) ((*(u32 *)&TQuestListOnline__selected_quest_info)));
        (*(u32 *)&TQuestListOnline__selected_quest_info) = 0U;
    }
    if ((u32) TQuestListOnline__quest_list_buffer != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((int) (TQuestListOnline__quest_list_buffer));
        TQuestListOnline__quest_list_buffer = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__download_window) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__download_window)));
        (*(u32 *)&TQuestListOnline__download_window) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__quest_info_window) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__quest_info_window)));
        (*(u32 *)&TQuestListOnline__quest_info_window) = 0U;
    }
    if ((u32) (*(u32 *)&TQuestListOnline__download_barrier_window) != 0U) {
        TWindow__close((int) ((*(u32 *)&TQuestListOnline__download_barrier_window)));
        (*(u32 *)&TQuestListOnline__download_barrier_window) = 0U;
    }
    (*(s32 *)&quest_download_active) = 0;
    memset((void*)((void *) (&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__dat_download_state).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    memset((void*)((void *) (&(*(RecoveredGlobal_80215498_TQuestListOnline__data_80513E24 *)&TQuestListOnline__bin_download_state).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    (*(s32 *)&TQuestListOnline__bin_download_complete) = 0;
    (*(s32 *)&TQuestListOnline__dat_download_complete) = 0;
    TQuestListOnline__instance = 0;
}

void init_download_buffers__16TQuestListOnlineFv(void) {
    (*(s32 *)&TQuestListOnline__quest_list_buffer) = alloc__22TQuestVmDownLoadServerFPv((void *)0x11D4);
    TQuestListOnline__selected_quest_info = alloc__22TQuestVmDownLoadServerFPv((void *)0x124);
    (*(s32 *)&TQuestListOnline__download_window) = 0;
    (*(s32 *)&TQuestListOnline__quest_info_window) = 0;
    (*(s32 *)&TQuestListOnline__download_barrier_window) = 0;
    (*(s32 *)&quest_download_active) = 0;
    memset((void*)((void *) (&(*(RecoveredGlobal_802155B4_TQuestListOnline__data_80513DE8 *)&TQuestListOnline__dat_download_state).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    memset((void*)((void *) (&(*(RecoveredGlobal_802155B4_TQuestListOnline__data_80513E24 *)&TQuestListOnline__bin_download_state).value)), (void*)((int) (0)), (void*)((int) (0x3C)));
    (*(s32 *)&TQuestListOnline__bin_download_complete) = 0;
    (*(s32 *)&TQuestListOnline__dat_download_complete) = 0;
    TQuestListOnline__instance = 0;
}

void reset_globals(void) { TQuestListOnline__download_window = 0; TQuestListOnline__quest_info_window = 0; TQuestListOnline__download_barrier_window = 0; quest_download_active = 0; memset(TQuestListOnline__dat_download_state, (void*)0, (void*)60); memset(TQuestListOnline__bin_download_state, (void*)0, (void*)60); TQuestListOnline__bin_download_complete = 0; TQuestListOnline__dat_download_complete = 0; lbl_805D61B0 = 0; lbl_805D61B4 = 0; }
typedef char RecoveredGlobal_80215ABC_lbl_804CA0B8_size[sizeof(RecoveredGlobal_80215ABC_lbl_804CA0B8) == 0x28 ? 1 : -1];

u8 lookup_table_value__6TLobbyFc(s8 x) {
    Pair_802156A0 *p = (*(G_802156A0 * *)&item_appraisal_rules)->tbl;
    while (p->key != -1) {
        if (p->key == x) {
            return p->val;
        }
        p++;
    }
    return 0;
}

u8 lookup_key_value__6TLobbyFc(s8 x) {
    Pair_802156E0 *p = item_appraisal_rules->tbl;
    while (p->key != -1) {
        if (p->key == x) {
            return p->val;
        }
        p++;
    }
    return 0;
}

struct G_802156E0;

void adjust_appraisal_percentages(Obj_80215720 *arg0) {
    Ctr_80215720 ctr;
    Ent_80215720 *e;
    s32 count;
    s32 n;
    s32 r;
    reset_counter_64__6TLobbyFPv(&ctr);
    count = ((G_80215720 *)item_appraisal_rules)->t->count;
    e = &((G_80215720 *)item_appraisal_rules)->t->base[count * lbl_805D6238];
    while (count-- > 0) {
        if (item_appraisal_favored_weapon != 0) {
            n = e->n2;
        } else {
            n = e->n1;
        }
        while (n-- != 0) {
            push_shop_pool_entry(&ctr, e->id);
        }
        e++;
    }
    shuffle_shop_pool_n_times(&ctr, 4);
    r = pop_byte__6TLobbyFPv(&ctr);
    if (r != -1) {
        s8 v = lbl_8044BD30[r];
        arg0->a += v;
        arg0->b += v;
        arg0->c += v;
    } else {
        arg0->a = 0;
        arg0->b = 0;
        arg0->c = 0;
    }
    if (arg0->a > 100) {
        arg0->a = 100;
    }
    if (arg0->b > 100) {
        arg0->b = 100;
    }
    if (arg0->c > 100) {
        arg0->c = 100;
    }
    item_appraisal_score += ((s8 (*)(s8))lookup_key_value__6TLobbyFc)(r);
}

void roll_item_grind_bonus__6TLobbyFPv(Item_8021587C *item) {
    u8 buf[0x68];
    Ent_8021587C *e;
    s32 n;
    s32 c;
    s32 r;
    if (is_rare_item__9TItemDataFPv(item) == 0) {
        reset_counter_64__6TLobbyFPv(buf);
        Tbl_8021587C *t = (*(G_8021587C **)&item_appraisal_rules)->t;
        n = t->count;
        e = &t->base[n * lbl_805D6238];
        while (n-- > 0) {
            if (item_appraisal_favored_weapon != 0) {
                c = e->n2;
            } else {
                c = e->n1;
            }
            while (c-- != 0) {
                push_shop_pool_entry(buf, e->id);
            }
            e++;
        }
        shuffle_shop_pool_n_times(buf, 4);
        r = pop_byte__6TLobbyFPv(buf);
        if (r != -1) {
            s32 v = item->f3 + lbl_8044BD30[r];
            if (v < 0) {
                v = 0;
            }
            item->f3 = v;
        }
        u8 m = get_entry_field16__9TItemDataFv(item);
        if (item->f3 > m) {
            item->f3 = m;
        }
        item_appraisal_score += (s8)lookup_table_value__6TLobbyFc(r);
    }
}

void adjust_appraisal_special(Obj_8021599C *obj) {
    u8 buf[0x68];
    Ent_8021599C *e;
    s32 n;
    s32 c;
    s32 r;
    reset_counter_64__6TLobbyFPv(buf);
    Tbl_8021599C *t = (*(G_8021599C **)&item_appraisal_rules)->t;
    n = t->count;
    e = &t->base[n * lbl_805D6238];
    while (n-- > 0) {
        if (item_appraisal_favored_weapon != 0) {
            c = e->n2;
        } else {
            c = e->n1;
        }
        while (c-- != 0) {
            push_shop_pool_entry(buf, e->id);
        }
        e++;
    }
    shuffle_shop_pool_n_times(buf, 4);
    r = pop_byte__6TLobbyFPv(buf);
    if (r != -1) {
        switch (lbl_8044BD30[r]) {
        case -1:
            obj->slot = find_adjacent_matching_slot__10TObjPlayerFUc(obj->slot);
            break;
        case 1:
            obj->slot = get_next_matching_special_index__10TObjPlayerFUc(obj->slot);
            break;
        }
    }
    item_appraisal_score += (s8)lookup_key_value__6TLobbyFc(r);
}

bool is_slot_match__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, u8 *, 1) == M2C_FIELD(&section_id_favored_grind_table.value, M2C_UNK *, (lbl_805D6238 * 4));
}

}
