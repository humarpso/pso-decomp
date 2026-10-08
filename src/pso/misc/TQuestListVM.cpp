#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_80218570 { char pad[0x18]; };
struct VObj18_80218570 : VBase18_80218570 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vf24(int, int);
};

struct VBase_18_a70a39 { char pad[0x18]; };

struct VObj_18_a70a39 : VBase_18_a70a39 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32, M2C_UNK);
};

struct RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20 { char value[0xE]; };
typedef char RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20_size[sizeof(RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20) == 0xE ? 1 : -1];

struct RecoveredGlobal_8033B9C4_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80219DE0___vt__12TQuestListVM {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Rec_80218AD4 { s32 num; s32 slot; u8 rest[0xbc - 8]; };

struct VBase_80218AD4 { char pad[0x18]; };

struct VM_80218AD4 : VBase_80218AD4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7(int a, int b);
};

struct QL_80218AD4 {
    u8 pad[0xd8];
    Rec_80218AD4 recs[1];
};

struct Rec_802193F0 { u8 pad[0x35]; char name[0xbc - 0x35]; };

struct QL_802193F0 { Rec_802193F0 recs[48]; u8 pad[0x2368 - 48 * 0xbc]; s32 count; };

struct Ent_802193F0 { u8 pad[0x10]; s8 a; s8 b; s8 c; u8 pad13; char name[1]; };

struct VBase_18_80218D40 { char pad[0x18]; };

struct VObj_80218D40 : VBase_18_80218D40 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
};

struct Pair_80218D40 { s32 a; s32 b; };

typedef s32 M2C_UNK;
struct Rec_80218E94 { u8 pad[0xB4]; s32 slot; s32 type; };

struct QL_80218E94 { u8 pad[0x28]; Rec_80218E94 recs[48]; };

struct Dl_80218E94 { u8 pad[0x58]; u8 *data; s32 size; };

struct Rec_80218918 { u8 pad[0xB4]; s32 slot; s32 type; };

struct QL_80218918 { u8 pad[0x28]; Rec_80218918 recs[48]; };

struct VBase_80218BBC { char pad[0x18]; };

struct VObj_80218BBC : VBase_80218BBC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7(s32, s32);
};

struct VBase_18_8021924C { char pad[0x18]; };

struct VObj_18_8021924C : VBase_18_8021924C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct VBase_80219064 { char pad[0x18]; };

struct VObj_80219064 : VBase_80219064 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7(s32, s32);
};

struct Ent_80219064 { char data[0xB4]; s32 id; u8 pad[4]; };

struct Q_80219064 { u8 pad[0x28]; Ent_80219064 ents[1]; };

struct VBase_18_80219748 { char pad[0x18]; };

struct VObj_18_80219748 : VBase_18_80219748 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32, M2C_UNK);
    virtual void m6();
    virtual void m7(int, int);
};

struct Rec_80219748 { char name[0xB0]; s32 num; s32 slot; u8 rest[0xBC - 0xB8]; };

struct Rec2_80219748 { s32 num; s32 slot; u8 rest[0xBC - 8]; };

struct QL2_80219748 { u8 pad[0xD8]; Rec2_80219748 recs[1]; };

struct QL_80219748 {
    u8 pad0[0x28];
    Rec_80219748 recs[48];
    s32 sel;
    u8 pad2[0x2398 - 0x236C];
    s32 cur;
    s32 slot;
    u8 pad3[0x23AC - 0x23A0];
    s32 flagA;
    s32 flagB;
};

struct Rec_8021969C { u8 data[0xB4]; s32 slot; s32 type; };

struct Obj_8021969C { u8 pad[0x28]; Rec_8021969C recs[48]; s32 sel; u8 pad2[0x1C]; u32 f2388; u8 pad3[0xC]; s32 f2398; };

struct Rec_8021916C { u8 pad[0x55]; char name[0xBC - 0x55]; };
struct Obj_8021916C {
    Rec_8021916C recs[48];
    u8 pad2340[0x236C - 0x2340];
    s32 f236C;
    s32 f2370;
    void *f2374;
    u8 pad2378[4];
    u32 f237C;
    void *f2380;
};
struct Rec_802194BC { u8 pad[0xD]; char name[0x20]; char desc[0x80]; u8 padAD[0xB4 - 0xAD]; s32 slot; s32 type; };
struct QL_802194BC { u8 pad[0x28]; Rec_802194BC recs[48]; s32 count; };
struct Dl_802194BC { u8 pad[0x58]; u8 *data; s32 size; };
struct Ent_802194BC { u8 pad[0x13]; s8 c; char name[0x20]; char desc[0x80]; };

extern "C" {
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
extern M2C_UNK TQuestListVM__data_8044BF20[];
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern RecoveredGlobal_8033B9C4_lbl_80513910 download_rng_seed_pair;
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0);
M2C_UNK tmp_buf_release__6TLobbyFi(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
extern M2C_UNK TQuestListVM__data_8044BF20[];
extern int evt2_random_enemies_mode;
void load_vm__12TQuestListVMFv(void);
u8 * __ct__15TShopWindowBaseFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D3690;
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern s32 TQuestListVM__data_805D6208;
extern s32 TQuestListVM__data_805D620C;
extern s32 lbl_805D6210;
u8 *TQuestListVM__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 update_load_status__12TQuestListVMFPv(void *arg0);
M2C_UNK handle_click__12TQuestListVMFPv(void *arg0);
M2C_UNK invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0);
M2C_UNK close_and_destroy__12TQuestListVMFPv(void *arg0);
M2C_UNK close__12TQuestListVMFPv(void *arg0);
M2C_UNK TQuestListVM__sub_8021884C(void *);
void update_close__12TQuestListVMFPv(void *arg0);
M2C_UNK quest_vm_load(void *arg0);
void update_lobby_selection__12TQuestListVMFPv(void *);
void process_download_entry__12TQuestListVMFPv(QL_802194BC *);
M2C_UNK load_quest_vm__12TQuestListVMFPv(u8 *arg0);
M2C_UNK init__12TQuestListVMFPv(void* p);
void TQuestListVM__vt9(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void close_windows__12TQuestListVMFPv(void *arg0);
int memset(void*, void*, void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(s32, char *, s32);
s32 select_cursor_entry__6TLobbyFPv(u32);
int sprintf(char *, const char *, ...);
extern char lbl_8044BEE8[];
extern char lbl_8044BF50[];
void load_selected_slot__12TQuestListVMFPv(u8 *arg0);
s32 strcmp(const char *, const char *);
extern s32 lbl_805D5544;
s32 is_downloadable_new_entry__12TQuestListVMFPvPv(QL_802193F0 *q, Ent_802193F0 *e);
int obj_getField1c(int);
s32 get_camera_id__11TCameraCtrlFv();
int set_field_20__12TQuestListVMFPvi(void*, void*);
f32 get_scale__15TShopWindowBaseFv(void *);
void set_position_xy(u32, f32, f32);
void set_field_1c__6TLobbyFPvf(u32, f32);
u32 create_yes_no_window(int, u16, int, int);
void send_and_handle__6TLobbyFPvii(u32, void *, int);
u32 create_message_window__6TLobbyFiiUis(int, Pair_80218D40 *, int, u16);
int get_window_layout_position(int);
extern Pair_80218D40 lbl_8044BF48[];
extern s32 TQuestListVM__data_805D6200;
extern const f32 lbl_805DC6B8;
extern const f32 lbl_805DC6BC;
void open_confirm_window__12TQuestListVMFPv(u8 *arg0);
s32 select_cursor_entry__6TLobbyFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1538(Dl_80218E94 *, s32);
s32 poll_download__12TQuestListVMFv(void *);
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0);
void unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(u8 *, s32);
s32 verify_checksum__22TQuestVmDownLoadServerFii(u8 *, s32);
u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *, s32, s32, s32);
void set_selected_entry__12TQuestListVMFPvPv(void *, void *);
void close_windows__12TQuestListVMFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern s32 TQuestListVM__data_805D6208;
extern s32 TQuestListVM__data_805D620C;
void poll_quest_download__12TQuestListVMFPv(void *p);
s32 select_cursor_entry__6TLobbyFPv(u32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1538(Dl_80218E94 *, s32);
s32 poll_download__12TQuestListVMFv(void *);
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0);
void unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(u8 *, s32);
s32 verify_checksum__22TQuestVmDownLoadServerFii(u8 *, s32);
u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *, s32, s32, s32);
void set_selected_entry__12TQuestListVMFPvPv(void *, void *);
void close_windows__12TQuestListVMFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
extern s32 TQuestListVM__data_805D6208;
extern s32 TQuestListVM__data_805D620C;
void load_downloaded_quest__12TQuestListVMFPv(void *p);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, void*);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void close_windows__12TQuestListVMFPv(void *arg0);
M2C_UNK TWindow__close(void *);
s32 get_selected_menu_value(void *);
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
void handle_confirm_window__12TQuestListVMFPv(u8 *arg0);
int obj_getField1c(int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
M2C_UNK reset_list__20TShopArmorListWindowFPv(void *);
M2C_UNK calc_list_content_extent(void *);
void send_and_handle__6TLobbyFPvii(u32, void *, int);
u32 set_window_mode_4__6TLobbyFPvii(int, void *, int);
int get_window_layout_position(int);
void add_list_entry__6TLobbyFPviii(u32, int, void *, int);
u32 create_item_list_window(void *, int, u16);
extern char lbl_8044BF04[];
extern char lbl_8044BF14[];
extern Pair_80218D40 lbl_8044BF40[];
extern s32 lbl_805D5544;
M2C_UNK build_download_list__12TQuestListVMFPv(void *p);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
void close_windows__12TQuestListVMFPv(void *arg0);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(s32, char *, s32);
s32 select_cursor_entry__6TLobbyFPv(u32);
void TQuestListVM__sub_80219064(u8 *arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32 chan, const char *name);
void set_selected_entry__12TQuestListVMFPvPv(void *, void *);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
int memset(void*, void*, void*);
extern char lbl_8044BEE8[];
extern char lbl_8044BF50[];
void scan_memcard_quest_files__12TQuestListVMFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(s32, char *, s32);
void load_selected_player_slot__12TQuestListVMFPv(Obj_8021969C *arg0);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
void *memcpy(void *, const void *, unsigned long);
}

extern "C" {

struct Base_802186E4_80218570 { char pad[0x18]; };
struct VObj_802186E4_80218570 : Base_802186E4_80218570 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();
    virtual void m7(int a, int b);
    virtual int m8();
};

void TQuestVmDownLoadServer__sub_80219EC4(void* p);
void *__dt__12TQuestListVMFv(void *arg0, s16 arg1);
void close_windows__12TQuestListVMFPv(void *arg0);
void set_enemy_mode_3__12TQuestListVMFv(void);
void update_close__12TQuestListVMFPv(void *arg0);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
int TKeyBoardControl__sub_8000F950(void);
M2C_UNK TLobby__sub_8001EDF4(M2C_UNK *);
M2C_UNK tmp_buf_release__6TLobbyFi(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
s32 tmp_buf_use_req__6TLobbyFPv(M2C_UNK *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
int memset(void*, void*, void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset__12TQuestListVMFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
int set_enemy_mode_flag__6TLobbyFv(void);
int set_field_20__12TQuestListVMFPvi(void*, void*);

s32 update_load_status__12TQuestListVMFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    M2C_FIELD(arg0, s32 *, 0x23A4) = 0;
    do {
        if (probe_card_slot__15TAdPlayerLoadGCFi(var_r30) != 0) {
            M2C_FIELD(arg0, s32 *, 0x23A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x23A4) | (1 << var_r30));
        }
        var_r30 += 1;
    } while (var_r30 < 2);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x23A4);
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x23A8)) {
        M2C_FIELD(arg0, s32 *, 0x23A8) = temp_r3;
        return 1;
    }
    return 0;
}

void close_windows__12TQuestListVMFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
        M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
        M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
        M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
        M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
    }
}

    extern int evt2_random_enemies_mode;
void set_enemy_mode_3__12TQuestListVMFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 3; TKeyBoardControl__sub_8000F950(); }

void load_vm__12TQuestListVMFv(void) {
    if (TLobby__sub_8001EEF4() == 0) {
        tmp_buf_release__6TLobbyFi((M2C_UNK *)((s32) &TQuestListVM__data_8044BF20));
    }
    (*(s32 *)&evt2_random_enemies_mode) = 0;
}

M2C_UNK handle_click__12TQuestListVMFPv(void *arg0) {
    VObj_802186E4_80218570 *obj = (VObj_802186E4_80218570 *) arg0;
    if (obj->m8() != 0) {
        obj->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x23B4)));
    }
}

M2C_UNK invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23C0);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

M2C_UNK close_and_destroy__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23BC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        tmp_buf_release__6TLobbyFi(TQuestListVM__data_8044BF20);
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

M2C_UNK close__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23B8);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        tmp_buf_release__6TLobbyFi(TQuestListVM__data_8044BF20);
    }
    reset__12TQuestListVMFv();
    queue_destruction__7TObjectFv(arg0);
}

M2C_UNK TQuestListVM__sub_8021884C(void * _w0) {  }

void update_close__12TQuestListVMFPv(void *arg0) {
    void *p;

    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_flag_bit2__6TLobbyFPv(p) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x2374));
            TQuestVmDownLoadServer__sub_80219EC4((void*)(M2C_FIELD(arg0, void **, 0x2374)));
        }
        ((VObj18_80218570 *) arg0)->vf24(0x19, 1);
        close_windows__12TQuestListVMFPv((void *)(arg0));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(5));
        return;
    }
    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_status_flag__6TLobbyFPv(p) != 0)) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x11));
    }
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

void load_downloaded_quest__12TQuestListVMFPv(void *p) {
    u8 *arg0 = (u8 *)p;
    Dl_80218E94 dl;
    u32 r;
    u32 win = *(u32 *)(arg0 + 0x2374);
    if (win != 0) {
    u8 *e = arg0 + select_cursor_entry__6TLobbyFPv(win) * 0xBC;
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)(e + 0xDC)) == 0) {
    switch (TAdPlayerLoadGC__sub_801E1538(&dl, *(s32 *)(arg0 + 0x2388))) {
    case 0:
        TQuestVmDownLoadServer__sub_80219ED4(poll_download__12TQuestListVMFv(arg0));
        unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(dl.data, dl.size);
        if (verify_checksum__22TQuestVmDownLoadServerFii(dl.data, dl.size) == 0) {
            *(s32 *)(arg0 + 0x2398) += 2;
            ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
            set_selected_entry__12TQuestListVMFPvPv(arg0, (void *)5);
            close_windows__12TQuestListVMFPv(arg0);
        } else {
            r = decrypt_quest_data__12TQuestListVMFPviiUi(dl.data + 8, dl.size - 8, TQuestListVM__data_805D6208, TQuestListVM__data_805D620C);
            if (r != 0) {
                TQuestListVM__data_805D620C = r;
                set_field_20__12TQuestListVMFPvi(arg0, (void *)0xD);
            } else {
                ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
                set_selected_entry__12TQuestListVMFPvPv(arg0, (void *)5);
                close_windows__12TQuestListVMFPv(arg0);
            }
        }
        break;
    case -0xDF:
        ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        break;
    case -0xE0:
        ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        break;
    }
    }
    }
}

void load_selected_slot__12TQuestListVMFPv(u8 *arg0) {
    char buf[0xd];
    s32 i;
    QL_80218AD4 *q = (QL_80218AD4 *)arg0;
    memset(buf, (void *)0, (void *)0xd);
    if (*(u32 *)(arg0 + 0x2374) != 0 && *(u32 *)(arg0 + 0x2388) != 0) {
        i = select_cursor_entry__6TLobbyFPv(*(u32 *)(arg0 + 0x2374));
        if (TAdPlayerLoadGC__sub_801E1B50(q->recs[i].slot) == 0) {
            sprintf(buf, lbl_8044BF50, lbl_8044BEE8, q->recs[i].num + 1);
            if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(q->recs[i].slot, buf, *(s32 *)(arg0 + 0x2388)) == 0) {
                set_field_20__12TQuestListVMFPvi(arg0, (void *)0xc);
                return;
            }
            ((VM_80218AD4 *)arg0)->m7(0x19, 1);
            close_windows__12TQuestListVMFPv(arg0);
            set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        }
    }
}

void handle_confirm_window__12TQuestListVMFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, void **, 0x2378) != NULL) {
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x2378)) != 0) {
            switch (get_selected_menu_value(M2C_FIELD(arg0, void **, 0x2378))) {
            case 0:
                TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
                M2C_FIELD(arg0, void **, 0x2378) = NULL;
                ((int (*)(void *, int))set_field_20__12TQuestListVMFPvi)(arg0, 0xB);
                return;
            case 1:
                TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
                M2C_FIELD(arg0, void **, 0x2378) = NULL;
                if (M2C_FIELD(arg0, void **, 0x2380) != NULL) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
                    M2C_FIELD(arg0, void **, 0x2380) = NULL;
                }
                if (M2C_FIELD(arg0, void **, 0x2374) != NULL) {
                    clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x2374));
                }
                TQuestListVM__data_805D6200 = M2C_FIELD(arg0, s32 *, 0x2384);
                TQuestListVM__data_805D6204 = 0x40000;
                ((VObj_80218BBC *)arg0)->m7(0x19, 1);
                close_windows__12TQuestListVMFPv(arg0);
                ((int (*)(void *, int))set_field_20__12TQuestListVMFPvi)(arg0, 5);
                return;
            }
        }
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x2378)) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
            M2C_FIELD(arg0, void **, 0x2378) = NULL;
            if (M2C_FIELD(arg0, void **, 0x2380) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
                M2C_FIELD(arg0, void **, 0x2380) = NULL;
            }
            if (M2C_FIELD(arg0, void **, 0x2374) != NULL) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x2374));
            }
            TQuestListVM__data_805D6200 = M2C_FIELD(arg0, s32 *, 0x2384);
            TQuestListVM__data_805D6204 = 0x40000;
            ((VObj_80218BBC *)arg0)->m7(0x19, 1);
            close_windows__12TQuestListVMFPv(arg0);
            ((int (*)(void *, int))set_field_20__12TQuestListVMFPvi)(arg0, 5);
        }
    }
}

void open_confirm_window__12TQuestListVMFPv(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x2380) == 0U) {
        Pair_80218D40 sp8 = lbl_8044BF48[0];
        u16 id = obj_getField1c(*(s32 *)(arg0 + 0x24));
        *(u32 *)(arg0 + 0x2380) = create_message_window__6TLobbyFiiUis(get_window_layout_position(0x2E), &sp8, 1, id);
        send_and_handle__6TLobbyFPvii(*(u32 *)(arg0 + 0x2380), (void *)(TQuestListVM__data_805D6200 + 0xB4), 1);
        set_field_1c__6TLobbyFPvf(*(u32 *)(arg0 + 0x2380), lbl_805DC6B8);
        if (get_camera_id__11TCameraCtrlFv() >= 2) {
            set_position_xy(*(u32 *)(arg0 + 0x2380), lbl_805DC6BC, lbl_805DC6BC);
        }
    }
    if (*(u32 *)(arg0 + 0x2380) != 0U) {
        if (*(s32 *)(arg0 + 0x2370) != 0xA) {
            set_field_20__12TQuestListVMFPvi(arg0, (void *)*(s32 *)(arg0 + 0x2370));
            return;
        }
        {
            u16 id = obj_getField1c(*(s32 *)(arg0 + 0x24));
            *(u32 *)(arg0 + 0x2378) = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
        }
        set_position_xy(*(u32 *)(arg0 + 0x2378), get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
        ((VObj_80218D40 *)(arg0))->m7(5, 1);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)*(s32 *)(arg0 + 0x2370));
    }
}

#define arg0 ((u8 *)p)
void poll_quest_download__12TQuestListVMFPv(void *p) {
    Dl_80218E94 dl;
    u32 r;
    u32 win = *(u32 *)(arg0 + 0x2374);
    if (win != 0U) {
    u8 *e = arg0 + select_cursor_entry__6TLobbyFPv(win) * 0xBC;
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)(e + 0xDC)) == 0) {
    switch (TAdPlayerLoadGC__sub_801E1538(&dl, *(s32 *)(arg0 + 0x2388))) {
    case 0:
        TQuestVmDownLoadServer__sub_80219ED4(poll_download__12TQuestListVMFv(arg0));
        unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(dl.data, dl.size);
        if (verify_checksum__22TQuestVmDownLoadServerFii(dl.data, dl.size) == 0) {
            *(s32 *)(arg0 + 0x2398) += 2;
            ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
            set_selected_entry__12TQuestListVMFPvPv(arg0, (void *)5);
            close_windows__12TQuestListVMFPv(arg0);
        } else {
            r = decrypt_quest_data__12TQuestListVMFPviiUi(dl.data + 8, dl.size - 8, TQuestListVM__data_805D6200, TQuestListVM__data_805D6204);
            if (r != 0) {
                TQuestListVM__data_805D6208 = TQuestListVM__data_805D6200 + r;
                TQuestListVM__data_805D620C = TQuestListVM__data_805D6204 - r;
                set_field_20__12TQuestListVMFPvi(arg0, (void *)0xF);
            } else {
                ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
                set_selected_entry__12TQuestListVMFPvPv(arg0, (void *)5);
                close_windows__12TQuestListVMFPv(arg0);
            }
        }
        break;
    case -0xDF:
        ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        break;
    case -0xE0:
        ((VObj_802186E4_80218570 *)arg0)->m7(0x1A, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        break;
    }
    }
    }
}
#undef arg0

void TQuestListVM__sub_80219064(u8 *arg0) {
    s32 i;
    Q_80219064 *q = (Q_80219064 *)arg0;
    if (*(u32 *)(arg0 + 0x2374) != 0 && *(u32 *)(arg0 + 0x2388) != 0) {
        i = select_cursor_entry__6TLobbyFPv(*(u32 *)(arg0 + 0x2374));
        if (TAdPlayerLoadGC__sub_801E1B50(q->ents[i].id) == 0) {
            if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(q->ents[i].id, q->ents[i].data, *(s32 *)(arg0 + 0x2388)) == 0) {
                set_field_20__12TQuestListVMFPvi(arg0, (void *)9);
                return;
            }
            ((VObj_80219064 *)arg0)->m7(0x19, 1);
            close_windows__12TQuestListVMFPv(arg0);
            set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        }
    }
}

M2C_UNK quest_vm_load(void *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = tmp_buf_use_req__6TLobbyFPv(TQuestListVM__data_8044BF20);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x2370)));
    }
}

#define arg0 ((Obj_8021916C *)arg0_)
void update_lobby_selection__12TQuestListVMFPv(void *arg0_) {
    s32 sel;

    if (arg0->f2374 != NULL && get_flag_bit2__6TLobbyFPv(arg0->f2374) != 0) {
        set_field_20__12TQuestListVMFPvi(arg0, (void *)0x10);
        return;
    }
    if (arg0->f2374 != NULL && get_status_flag__6TLobbyFPv(arg0->f2374) != 0) {
        arg0->f2370 = 0xA;
        set_field_20__12TQuestListVMFPvi(arg0, (void *)8);
        return;
    }
    if (arg0->f2374 != NULL && arg0->f237C != 0) {
        sel = select_cursor_entry__6TLobbyFPv((u32)arg0->f2374);
        if (sel != arg0->f236C) {
            send_and_handle__6TLobbyFPvii(arg0->f237C, arg0->recs[sel].name, 0x80);
            arg0->f236C = sel;
            if (arg0->f2380 != NULL) {
                TWindow__close(arg0->f2380);
                arg0->f2380 = NULL;
            }
        }
    }
}
#undef arg0

#define arg0 ((u8 *)p)
M2C_UNK build_download_list__12TQuestListVMFPv(void *p) {
    s32 off;
    s32 i;
    u8 *e;
    if (((VObj_18_8021924C *)(arg0))->m8() != 0) {
        if (*(u32 *)(arg0 + 0x2374) != 0U) {
            reset_list__20TShopArmorListWindowFPv(*(void **)(arg0 + 0x2374));
        } else {
            switch (lbl_805D5544) {
            case 0:
                *(u32 *)(arg0 + 0x2374) = create_item_list_window(lbl_8044BF04, 0x40, obj_getField1c(*(s32 *)(arg0 + 0x24)));
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                *(u32 *)(arg0 + 0x2374) = create_item_list_window(lbl_8044BF14, 0x40, obj_getField1c(*(s32 *)(arg0 + 0x24)));
                break;
            }
        }
        if (*(u32 *)(arg0 + 0x2374) != 0U) {
            for (i = 0, off = 0; i < *(s32 *)(arg0 + 0x2368); i++, off += 0xBC) {
                e = arg0 + off;
                switch (*(s32 *)(e + 0xE0)) {
                case 0:
                    add_list_entry__6TLobbyFPviii(*(u32 *)(arg0 + 0x2374), 0x17, e + 0x35, i);
                    break;
                case 1:
                    add_list_entry__6TLobbyFPviii(*(u32 *)(arg0 + 0x2374), 0x31, e + 0x35, i);
                    break;
                default:
                    add_list_entry__6TLobbyFPviii(*(u32 *)(arg0 + 0x2374), 0x17, e + 0x35, i);
                    break;
                }
            }
            calc_list_content_extent(*(void **)(arg0 + 0x2374));
            set_field_20__12TQuestListVMFPvi(arg0, (void *)6);
        }
        if (*(u32 *)(arg0 + 0x237C) == 0U) {
            Pair_80218D40 sp8 = lbl_8044BF40[0];
            *(u32 *)(arg0 + 0x237C) = set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0x2D), &sp8, 1);
            send_and_handle__6TLobbyFPvii(*(u32 *)(arg0 + 0x237C), arg0 + 0x55, 0x80);
            *(s32 *)(arg0 + 0x236C) = 0;
        }
    }
}
#undef arg0

s32 is_downloadable_new_entry__12TQuestListVMFPvPv(QL_802193F0 *q, Ent_802193F0 *e) {
    s32 i;
    if (e->a == -1 || e->c == -1) {
        return 0;
    }
    if (e->a != lbl_805D5544) {
        return 0;
    }
    if (e->b != 0 && e->b != 2) {
        return 0;
    }
    for (i = 0; i < q->count; i++) {
        if (strcmp(q->recs[i].name, e->name) == 0) {
            return 0;
        }
    }
    return 1;
}

#define arg0 ((u8 *)q)
#define count (q->count)
void process_download_entry__12TQuestListVMFPv(QL_802194BC *q) {
    Dl_802194BC dl;
    Ent_802194BC *e;

    if (TAdPlayerLoadGC__sub_801E1B50(q->recs[count].slot) == 0) {
        switch (TAdPlayerLoadGC__sub_801E1538((Dl_80218E94 *)&dl, *(s32 *)(arg0 + 0x2388))) {
        case 0:
            TQuestVmDownLoadServer__sub_80219ED4(poll_download__12TQuestListVMFv(arg0));
            unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(dl.data, dl.size);
            if (verify_checksum__22TQuestVmDownLoadServerFii(dl.data, dl.size) == 0) {
                *(s32 *)(arg0 + 0x23B0) = 1;
                *(s32 *)(arg0 + 0x2398) += 2;
                set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
            } else if (decrypt_quest_data__12TQuestListVMFPviiUi(dl.data + 8, dl.size - 8, TQuestListVM__data_805D6200, TQuestListVM__data_805D6204) != 0) {
                e = (Ent_802194BC *)TQuestListVM__data_805D6200;
                if (is_downloadable_new_entry__12TQuestListVMFPvPv((QL_802193F0 *)arg0, (Ent_802193F0 *)e) != 0) {
                    memcpy(q->recs[count].name, e->name, 0x20);
                    memcpy(q->recs[count].desc, e->desc, 0x80);
                    q->recs[count].type = e->c;
                    count++;
                }
                *(s32 *)(arg0 + 0x2398) += 2;
                set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
            } else {
                *(s32 *)(arg0 + 0x23B0) = 1;
                *(s32 *)(arg0 + 0x2398) += 2;
                set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
            }
            break;
        case -0xDF:
            *(s32 *)(arg0 + 0x23B0) = 1;
            *(s32 *)(arg0 + 0x2398) += 2;
            set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
            break;
        case -0xE0:
            *(s32 *)(arg0 + 0x23B0) = 1;
            *(s32 *)(arg0 + 0x2398) += 2;
            set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
            break;
        }
    }
}
#undef count
#undef q
#undef arg0

#define q ((QL_80219748 *)arg0)

void load_selected_player_slot__12TQuestListVMFPv(Obj_8021969C *arg0) {
    if (arg0->f2388 != 0) {
        if (TAdPlayerLoadGC__sub_801E1B50(arg0->recs[arg0->sel].slot) == 0) {
            if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(arg0->recs[arg0->sel].slot, (char *)&arg0->recs[arg0->sel], arg0->f2388) == 0) {
                set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)((void *)4));
                return;
            }
            arg0->f2398 += 2;
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)((void *)2));
        }
    } else {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)((void *)0x12));
    }
}

void scan_memcard_quest_files__12TQuestListVMFPv(void *arg0) {
    char buf[13];
    s32 ok;
    while (q->cur < 0x5F) {
        memset(buf, (void *)0, (void *)0xD);
        sprintf(buf, lbl_8044BF50, lbl_8044BEE8, q->cur + 1);
        switch (find_card_file__15TAdPlayerLoadGCFiPv(q->slot, buf)) {
        case 0:
            ok = 1;
            break;
        case -191:
            ok = 0;
            q->flagA = 1;
            break;
        case -255:
        case -253:
        case -251:
        case -1:
        default:
            ok = 0;
            break;
        }
        memset(buf, (void *)0, (void *)0xD);
        sprintf(buf, lbl_8044BF50, lbl_8044BEE8, q->cur);
        switch (find_card_file__15TAdPlayerLoadGCFiPv(q->slot, buf)) {
        case 0:
            if (ok == 0) {
                q->flagA = 1;
                break;
            }
            strcpy(q->recs[q->sel].name, buf);
            {
            QL_80219748 *p = q;
            p->recs[p->sel].num = p->cur;
            p->recs[p->sel].slot = p->slot;
            }
            set_field_20__12TQuestListVMFPvi(q, (void *)3);
            return;
        case -191:
            q->flagA = 1;
            break;
        case -251:
            if (ok != 0) {
                q->flagA = 1;
            }
            break;
        case -255:
        case -253:
        case -1:
        default:
            break;
        }
        q->cur += 2;
    }
    if (q->slot < 7) {
        q->slot++;
        q->cur = 0;
        return;
    }
    if (q->sel != 0) {
        if (q->flagB != 0) {
            ((VObj_18_80219748 *)q)->m7(0x1B, 1);
            set_selected_entry__12TQuestListVMFPvPv(q, (void *)5);
            return;
        }
        if (q->flagA != 0) {
            ((VObj_18_80219748 *)q)->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x66), 1);
            set_selected_entry__12TQuestListVMFPvPv(q, (void *)5);
            return;
        }
        ((VObj_18_80219748 *)q)->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi(q, (void *)5);
        return;
    }
    if (q->flagB != 0) {
        ((VObj_18_80219748 *)q)->m7(0x1B, 1);
        set_field_20__12TQuestListVMFPvi(q, (void *)0x12);
        return;
    }
    if (q->flagA != 0) {
        ((VObj_18_80219748 *)q)->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x66), 1);
        set_field_20__12TQuestListVMFPvi(q, (void *)0x12);
        return;
    }
    ((VObj_18_80219748 *)q)->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x44), 1);
    set_field_20__12TQuestListVMFPvi(q, (void *)0x12);
}
#undef q

M2C_UNK load_quest_vm__12TQuestListVMFPv(u8 *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = tmp_buf_use_req__6TLobbyFPv((M2C_UNK *)((s32) &(*(RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20 *)&TQuestListVM__data_8044BF20).value));
        TQuestListVM__data_805D6200 = M2C_FIELD(arg0, s32 *, 0x2384);
        TQuestListVM__data_805D6204 = 0x40000;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
        ((VObj_18_a70a39 *)(arg0))->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x3F), 1);
    }
}

M2C_UNK init__12TQuestListVMFPv(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern M2C_UNK TQuestListVM__data_8044BF20[];
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D6210;

void TQuestListVM__vt9(u8 *arg0) {
    u32 temp_r0;
    if (update_load_status__12TQuestListVMFPv((void *)(arg0)) != 0) {
        ((VObj_18_a70a39 *)(arg0))->m5(TQuestVmDownLoadServer__sub_8006EF6C((s32)((int) (0x44))), 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0x12)));
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        init__12TQuestListVMFPv((void*)((void *) (arg0)));
        return;
    case 1:
        load_quest_vm__12TQuestListVMFPv((u8 *)((void *) (arg0)));
        return;
    case 2:
        scan_memcard_quest_files__12TQuestListVMFPv((void *)((void *) (arg0)));
        return;
    case 3:
        load_selected_player_slot__12TQuestListVMFPv((Obj_8021969C *)((void *) (arg0)));
        return;
    case 4:
        process_download_entry__12TQuestListVMFPv((QL_802194BC *) (arg0));
        return;
    case 5:
        build_download_list__12TQuestListVMFPv((void *)((void *) (arg0)));
        return;
    case 6:
        update_lobby_selection__12TQuestListVMFPv((void *) (arg0));
        return;
    case 7:
        quest_vm_load((void *) (arg0));
        return;
    case 8:
        TQuestListVM__sub_80219064((u8 *)((void *) (arg0)));
        return;
    case 9:
        poll_quest_download__12TQuestListVMFPv((void *)((void *) (arg0)));
        return;
    case 15:
        open_confirm_window__12TQuestListVMFPv((u8 *)((void *) (arg0)));
        return;
    case 10:
        handle_confirm_window__12TQuestListVMFPv((u8 *)((void *) (arg0)));
        return;
    case 11:
        load_selected_slot__12TQuestListVMFPv((u8 *)((void *) (arg0)));
        return;
    case 12:
        load_downloaded_quest__12TQuestListVMFPv((void *)((void *) (arg0)));
        return;
    case 13:
        update_close__12TQuestListVMFPv((void *) (arg0));
        return;
    case 14:
        TQuestListVM__sub_8021884C((void *)((void *) (arg0)));
        return;
    case 16:
        close__12TQuestListVMFPv((void *) (arg0));
        return;
    case 18:
        close_and_destroy__12TQuestListVMFPv((void *) (arg0));
        return;
    case 17:
        invoke_callback_and_queue_destruction__12TQuestListVMFPv((void *) (arg0));
        return;
    case 20:
        handle_click__12TQuestListVMFPv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__12TQuestListVMFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **) ((s8 *) arg0 + 0x18) = __vt__12TQuestListVM;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
            M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
            M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
            M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2388) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x2388));
            M2C_FIELD(arg0, u32 *, 0x2388) = 0U;
        }
        lbl_805D6210 = 0;
        TLobby__sub_8001EDF4(TQuestListVM__data_8044BF20);
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80219DE0___vt__12TQuestListVM_size[sizeof(RecoveredGlobal_80219DE0___vt__12TQuestListVM) == 0x30 ? 1 : -1];
u8 *TQuestListVM__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80219DE0___vt__12TQuestListVM *)&__vt__12TQuestListVM).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3690;
    M2C_FIELD(arg0, s32 *, 0x2368) = 0;
    M2C_FIELD(arg0, s32 *, 0x2370) = 0;
    M2C_FIELD(arg0, s32 *, 0x2374) = 0;
    M2C_FIELD(arg0, s32 *, 0x237C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2380) = 0;
    M2C_FIELD(arg0, s32 *, 0x2378) = 0;
    M2C_FIELD(arg0, s32 *, 0x2384) = 0;
    M2C_FIELD(arg0, s32 *, 0x2388) = alloc__22TQuestVmDownLoadServerFPv((int) ((void *)0x20000));
    M2C_FIELD(arg0, s32 *, 0x2390) = 0;
    TQuestListVM__data_805D6200 = 0;
    TQuestListVM__data_805D6204 = 0;
    TQuestListVM__data_805D6208 = 0;
    TQuestListVM__data_805D620C = 0;
    M2C_FIELD(arg0, s32 *, 0x2398) = 4;
    M2C_FIELD(arg0, s32 *, 0x239C) = 0;
    M2C_FIELD(arg0, s32 *, 0x23A0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x23B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x23BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C0) = 0;
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0)));
    (*(u8 * *)&lbl_805D6210) = arg0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x23A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x23A4) = 0;
    update_load_status__12TQuestListVMFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x23AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x23B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x23B4) = 0;
    return arg0;
}

void TQuestVmDownLoadServer__sub_80219EC4(void* p) { *(u16*)((char*)p + 0x70) |= 0x8; }
typedef char RecoveredGlobal_8033B9C4_lbl_80513910_size[sizeof(RecoveredGlobal_8033B9C4_lbl_80513910) == 0x10 ? 1 : -1];
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0) {
    M2C_FIELD(&download_rng_seed_pair.value, s32 *, 4) = arg0;
    M2C_FIELD(&download_rng_seed_pair.value, s32 *, 0) = arg0;
}

}
