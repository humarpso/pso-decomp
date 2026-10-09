#ifndef PSO_CLASS_PACKAGE

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

extern "C" {

void dispatch_by_index__6TLobbyFi(s32 arg0);
s32 get_option_state__6TLobbyFv(void);
int render__6TLobbyFv(void* p);
M2C_UNK clear_serial_buffer__22TAdEnterSerialAccessGCFv();
M2C_UNK clear_state();
int get_instance__15TAdPlayerLoadGCFv(void*);
s32 get_option_field_C__17TWindowOptionCtrlFv();
M2C_UNK store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32, s32, s32);

void *__nw__7TObjectFUl(int);
void *TAdScrollWinGC__ct(void *, s32, s32, void *);
s32 strncpy(void *, s32, s32);
extern u8 lbl_8050AEB8[];
extern s32 TLobby__data_805D5594;
extern void *lbl_805D55F8;
extern s32 tl_window;
void on_game_player_add__6TLobbyFiii();
void handle_game_join__6TLobbyFPv();

extern s32 TLobby__data_805D5580;

void dispatch_by_index__6TLobbyFi(s32 arg0) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 > 3) || (var_r3 < 0)) {
        var_r3 = 0;
    }
    switch (var_r3) {
    case 0:
        clear_state();
        return;
    case 1:
        store_serial_access_key__22TAdEnterSerialAccessGCFiii(TLobby__data_805D5580 + 0x3F8A, TLobby__data_805D5580 + 0x3F9B, TLobby__data_805D5580 + 0x3F3A);
        return;
    case 2:
        clear_serial_buffer__22TAdEnterSerialAccessGCFv();
        return;
    }
}

void open_scroll_text_window__6TLobbyFi(s32 arg0) {
    void *obj;
    if (lbl_805D55F8 == 0) {
        strncpy(lbl_8050AEB8, arg0, 0x1000);
        lbl_8050AEB8[0xFFF] = 0;
        obj = __nw__7TObjectFUl(0x54);
        if (obj != 0) {
            obj = TAdScrollWinGC__ct(obj, tl_window, 2, lbl_8050AEB8);
        }
        lbl_805D55F8 = obj;
    }
    TLobby__data_805D5594 = 0x1A;
}

int render__6TLobbyFv(void* p) { return get_instance__15TAdPlayerLoadGCFv(p); }

struct E_80134B58 { u8 d[0x11C]; };
struct In_80134B58 { u32 type; u8 rest[0x118]; };
extern E_80134B58 lbl_80509D5C[];
void copy_player_record__6TLobbyFPvPv(u8 *, u8 *);
void copy_player_records__6TLobbyFPvi(In_80134B58 *arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        if (arg0[i].type > 0xC) {
            return;
        }
        copy_player_record__6TLobbyFPvPv((u8 *)&lbl_80509D5C[arg0[i].type], (u8 *)&arg0[i]);
    }
}

struct M2CCopy_100 { u8 bytes[0x100]; };
void copy_player_record__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    *(M2CCopy_100 *)((s32) arg0 + 4) = *(const M2CCopy_100 *)((s32) arg1 + 4);
    M2C_FIELD(arg0, u16 *, 0x104) = (u16) M2C_FIELD(arg1, u16 *, 0x104);
    M2C_FIELD(arg0, u16 *, 0x106) = (u16) M2C_FIELD(arg1, u16 *, 0x106);
    M2C_FIELD(arg0, u16 *, 0x108) = (u16) M2C_FIELD(arg1, u16 *, 0x108);
    M2C_FIELD(arg0, u16 *, 0x10A) = (u16) M2C_FIELD(arg1, u16 *, 0x10A);
    M2C_FIELD(arg0, u16 *, 0x10C) = (u16) M2C_FIELD(arg1, u16 *, 0x10C);
    M2C_FIELD(arg0, u16 *, 0x10E) = (u16) M2C_FIELD(arg1, u16 *, 0x10E);
    M2C_FIELD(arg0, u16 *, 0x110) = (u16) M2C_FIELD(arg1, u16 *, 0x110);
    M2C_FIELD(arg0, u16 *, 0x112) = (u16) M2C_FIELD(arg1, u16 *, 0x112);
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) M2C_FIELD(arg1, s32 *, 0x114);
    M2C_FIELD(arg0, s32 *, 0x118) = (s32) M2C_FIELD(arg1, s32 *, 0x118);
}

struct Ent_80134C44 { u8 pad[4]; u32 key; u32 val; };
struct Obj_80134C44 { u8 pad0; u8 count; u8 pad2[2]; Ent_80134C44 e[1]; };
void* get_player_by_client_id(s32);
void get_or_create_lobby_font__10TObjPlayerFPvi(void*, int);
void TLobby__sub_80134C44(Obj_80134C44 *o) {
    Ent_80134C44 *e = o->e;
    s32 i;
    for (i = 0; i < o->count; i++, e++) {
        s32 j;
        for (j = 0; j < 12; j++) {
            u8 *p = (u8*)get_player_by_client_id(j);
            if (p != NULL && *(u32*)(p + 0xDB0) == e->key) {
                get_or_create_lobby_font__10TObjPlayerFPvi(p, (u8)e->val);
            }
        }
    }
}

extern s32 TLobby__net_session_mode;

s32 get_option_state__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_option_field_C__17TWindowOptionCtrlFv();
    switch (temp_r3) {
    case 0:
        return TLobby__net_session_mode;
    case 1:
        return 0;
    case 2:
        return 1;
    default:
        return 0;
    }
}

void install_game_join_handlers__6TLobbyFv(void) {
    *(void (**)())(TLobby__data_805D5580 + 0xBC04) = handle_game_join__6TLobbyFPv;
    *(void (**)())(TLobby__data_805D5580 + 0xBC18) = on_game_player_add__6TLobbyFiii;
}

}
#else

#if PSO_CLASS_PACKAGE == 0x800F9F4C
#include "types.h"

extern "C" {

void free_static_buffer__6TLobbyFPv(void* a0);
void alloc_from_heap__6TLobbyFPv(void* a0);
void pump_frames__6TLobbyFv(void);
int run_frame__6TLobbyFv();
s32 TLobby__sub_800F9FD0();
int TLobby__sub_800FA464();
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

    extern int lbl_805D537C;
void free_static_buffer__6TLobbyFPv(void* a0) { heap_free__5THeapFPv((void*)(lbl_805D537C), a0); }

    extern int lbl_805D537C;
void alloc_from_heap__6TLobbyFPv(void* a0) { heap_alloc__5THeapFUl((void*)(lbl_805D537C), a0); }

void pump_frames__6TLobbyFv(void) {
loop_1:
    if (TLobby__sub_800F9FD0() != 0) {
        TLobby__sub_800FA464();
        run_frame__6TLobbyFv();
        goto loop_1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA044
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *var_r31;

    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy(var_r31 + 8, arg1, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 4;
    M2C_FIELD(var_r31, s32 *, 0x64) = arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA0A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_and_close__6TLobbyFv(void);
M2C_UNK pop_and_close__6TLobbyFv();

extern u8 *lbl_805D5360;
extern s32 lbl_805D536C;

void notify_and_close__6TLobbyFv(void) {
    M2C_UNK (*temp_r12)(void *);
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(lbl_805D5360, s32 **, 0x34);
    if (temp_r3 != NULL) {
        *temp_r3 = 1;
    }
    temp_r12 = M2C_FIELD(lbl_805D5360, M2C_UNK (**)(void *), 0x40);
    if (temp_r12 != NULL) {
        temp_r12(lbl_805D5360 + 0x44);
    }
    pop_and_close__6TLobbyFv();
    lbl_805D536C = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA100
#include "types.h"

extern "C" {

void destroy_instance__6TLobbyFv(void);
int TLobby__sub_803CCE9C(void*);

    extern int lbl_805D5374;
void destroy_instance__6TLobbyFv(void) { TLobby__sub_803CCE9C((void*)(lbl_805D5374)); lbl_805D5374 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA12C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void pop_and_close__6TLobbyFv(void);
M2C_UNK pop_stack_entry__6TLobbyFPvs(void *, M2C_UNK);

extern void *lbl_805D5360;

void pop_and_close__6TLobbyFv(void) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(lbl_805D5360, void **, 0x38);
    pop_stack_entry__6TLobbyFPvs(lbl_805D5360, 1);
    lbl_805D5360 = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA164
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 adxf_get_fsize_byte__6TLobbyFPv();
s32 TLobby__sub_803CC53C(s32);
M2C_UNK TLobby__sub_803CCE9C(s32);
s32 adxf_open__6TLobbyFUii(s32, M2C_UNK);
M2C_UNK move_words__6TLobbyFPvPvi(void *, s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa164;

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    struct Ent_800fa164 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = adxf_open__6TLobbyFUii(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    if (adxf_get_fsize_byte__6TLobbyFPv() > 0x40000) {
        TLobby__sub_803CCE9C(temp_r3);
        return -3;
    }
    var_r31 = (struct Ent_800fa164 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa164 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 2;
    M2C_FIELD(var_r31, s32 *, 0x3C) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    TLobby__sub_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        move_words__6TLobbyFPvPvi((u8 *)var_r31 + 0x44, arg3, 8);
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA2A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_named_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
s32 adxf_get_fsize_byte__6TLobbyFPv(int);
s32 TLobby__sub_803CC53C(int);
M2C_UNK TLobby__sub_803CCE9C(int);
s32 adxf_open__6TLobbyFUii(void *, int);
M2C_UNK move_words__6TLobbyFPvPvi(void *, void *, int);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, void *, int);

s32 create_named_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    u8 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = adxf_open__6TLobbyFUii((void *) (arg0), (int) (0));
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy((void *) (var_r31 + 8), (void *) (arg0), (int) (0x20));
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = adxf_get_fsize_byte__6TLobbyFPv((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C((int) (temp_r3));
    TLobby__sub_803CCE9C((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        move_words__6TLobbyFPvPvi((void *) (var_r31 + 0x44), (void *) (arg3), (int) (8));
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA388
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 adxf_get_fsize_byte__6TLobbyFPv(s32);
s32 TLobby__sub_803CC53C(s32);
M2C_UNK TLobby__sub_803CCE9C(s32);
s32 adxf_open__6TLobbyFUii(s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa388;

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3) {
    struct Ent_800fa388 *var_r31;
    s32 temp_r3;

    if (arg3 != NULL) {
        *arg3 = NULL;
    }
    temp_r3 = adxf_open__6TLobbyFUii(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = (struct Ent_800fa388 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa388 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = adxf_get_fsize_byte__6TLobbyFPv(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    TLobby__sub_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 **, 0x34) = arg2;
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    M2C_FIELD(var_r31, s32 *, 0x40) = 0;
    if (arg3 != NULL) {
        *arg3 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA73C
#include "types.h"

extern "C" {

void destroy_game_heap__6TLobbyFv(void);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
int free_chr_select_data__6TLobbyFv(void);
int process_pending_resources(void);
int __dt__5THeapFv(void*, void*);

    extern int lbl_805D5370;
    extern int lbl_805D537C;
void destroy_game_heap__6TLobbyFv(void) { process_pending_resources(); safe_free__23TAdSinglePlyChrSelectGCFUi((void*)(lbl_805D5370)); free_chr_select_data__6TLobbyFv(); __dt__5THeapFv((void*)(lbl_805D537C), (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_download_state__6TLobbyFv(void);
M2C_UNK init_download_buffers__6TLobbyFv();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 __ct__5THeapFUli(M2C_UNK, M2C_UNK, M2C_UNK);
s32 __nw__5THeapFUl(M2C_UNK);

extern s32 lbl_805D5360;
extern s32 lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D536C;
extern s32 lbl_805D5370;
extern s32 lbl_805D5374;
extern s32 lbl_805D5378;
extern s32 lbl_805D537C;

void init_download_state__6TLobbyFv(void) {
    s32 var_r0;

    init_download_buffers__6TLobbyFv();
    lbl_805D5370 = alloc__22TQuestVmDownLoadServerFPv(0x800);
    lbl_805D5364 = 0;
    lbl_805D5360 = 0;
    lbl_805D5374 = 0;
    lbl_805D536C = 0;
    lbl_805D5368 = 0;
    lbl_805D5378 = 0;
    var_r0 = __nw__5THeapFUl(0x14);
    if (var_r0 != 0) {
        var_r0 = __ct__5THeapFUli(var_r0, 0x4000, 0x20);
    }
    lbl_805D537C = var_r0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FA848
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void link_into_list__6TLobbyFPv(void *arg0);

extern void *lbl_805D5360;
extern void *lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D5378;

void link_into_list__6TLobbyFPv(void *arg0) {
    if ((void *) lbl_805D5360 == NULL) {
        lbl_805D5360 = arg0;
    }
    if ((void *) lbl_805D5364 != NULL) {
        M2C_FIELD(lbl_805D5364, void **, 0x38) = arg0;
    }
    lbl_805D5364 = arg0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    lbl_805D5368 += 1;
    M2C_FIELD(arg0, s32 *, 4) = lbl_805D5378++;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);

void *free_boss4rock__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 4));
        __dl__FPv(M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020970C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_swapped_u32__6TLobbyFPv(s32 *arg0);
void append_entity_entry__6TLobbyFi(s32 arg0);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK move_data__6TLobbyFv(s32, s32 *, M2C_UNK);

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_swapped_u32__6TLobbyFPv(s32 *arg0) {
    s32 sp8;

    if ((u32) lbl_805D60C4 != 0U) {
        sp8 = *arg0;
        bswap_32__FPUl(&sp8);
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(&sp8), (M2C_UNK)(4));
        lbl_805D60C8 += 4;
    }
}

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_entity_entry__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D60C4 != 0U) {
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(arg0), (M2C_UNK)(1));
        lbl_805D60C8 += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209BD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pick_random_slot__6TLobbyFPv(s16 *arg0);
M2C_UNK pick_random_entry__6TLobbyFPv(s16 *);
M2C_UNK TLobby__sub_802099FC(s16 *, s32);
M2C_UNK pick_weighted_entry__6TLobbyFPvPv(s32 *, s32 *);

extern s32 lbl_8044BAF8[];

s32 pick_random_slot__6TLobbyFPv(s16 *arg0) {
    s32 spC;
    s32 sp8;

    pick_weighted_entry__6TLobbyFPvPv(&spC, &sp8);
    if ((spC != -1) && (sp8 != -1)) {
        *arg0 = (s16) lbl_8044BAF8[sp8];
        TLobby__sub_802099FC(arg0, spC);
        pick_random_entry__6TLobbyFPv(arg0);
        return 0;
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80209CF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 clamp_min_drop__6TLobbyFUi(u32 arg0);
u32 item_drop_rng_below(s32);

extern s32 lbl_805D60A0;

u32 clamp_min_drop__6TLobbyFUi(u32 arg0) {
    u32 var_r3;

    var_r3 = item_drop_rng_below(lbl_805D60A0);
    if (var_r3 < arg0) {
        var_r3 = arg0;
    }
    return var_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1);
void free_boss4rock__6TLobbyFv(void);
int free_boss4rock__6TLobbyFPvs(void*, void*);
u32 find_type5_header__6TLobbyFPvi(s32, s32);
u32 find_chunk_by_id__6TLobbyFPvi(s32, s32);
u32 find_header_by_id__6TLobbyFPvi(s32, s32);
M2C_UNK TLobby__sub_80209D34(s32);
int __dl__FPv(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);

extern u32 lbl_805D60A8;
extern u32 lbl_805D60AC;
extern u32 lbl_805D60B0;
extern s32 lbl_805D60B4;
extern s32 lbl_805D60BC;
extern s32 lbl_805D60C0;
extern s32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void init_buffers__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 temp_r3;

    lbl_805D60A8 = find_header_by_id__6TLobbyFPvi(arg1, arg0);
    lbl_805D60AC = find_chunk_by_id__6TLobbyFPvi(arg1, arg0);
    temp_r3 = find_type5_header__6TLobbyFPvi(arg1, arg0);
    lbl_805D60B0 = temp_r3;
    if (((u32) lbl_805D60A8 != 0U) && ((u32) lbl_805D60AC != 0U) && (temp_r3 != 0U)) {
        lbl_805D60B4 = alloc__22TQuestVmDownLoadServerFPv(0x9000);
        lbl_805D60BC = alloc__22TQuestVmDownLoadServerFPv(0x1400);
        lbl_805D60C0 = 0;
        lbl_805D60C4 = alloc__22TQuestVmDownLoadServerFPv(0x1000);
        lbl_805D60C8 = 0;
        TLobby__sub_80209D34(arg0);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60C4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60BC);
        lbl_805D60BC = 0;
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D60B4);
        lbl_805D60B4 = 0;
    }
}

    extern int lbl_805D60A0;
    extern int lbl_805D60A4;
void free_boss4rock__6TLobbyFv(void) { free_boss4rock__6TLobbyFPvs((void*)(lbl_805D60A4), (void*)1); lbl_805D60A4 = 0; __dl__FPv((void*)(lbl_805D60A0)); lbl_805D60A0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A350
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_quad_word__6TLobbyFPv(void* p);
void TLobby__sub_8020A394(void* p);
void TLobby__sub_8020A3D0(void *arg0, void *arg1);
void bswap_vec3__6TLobbyFPv(void* p);
void swap_header_endian__6TLobbyFPv(void* p);
void TLobby__sub_8020A48C(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_quad_word__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void TLobby__sub_8020A394(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8020A3D0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void bswap_vec3__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void swap_header_endian__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); }

void TLobby__sub_8020A48C(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_16__FPUs((char*)p + 0x1c); bswap_16__FPUs((char*)p + 0x1e); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A568
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020A568(void* p);
void bswap__6TLobbyFPv(void* p);
void TLobby__sub_8020A618(void *arg0, void *arg1);
void swap_endian_header__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8020A568(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void bswap__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap_16__FPUs((char*)p + 0x12); bswap_32__FPUl((char*)p + 0x14); }

void TLobby__sub_8020A618(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s16 *, 0x12);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
}

void swap_endian_header__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020A744
#include "types.h"

extern "C" {

void init_sub_objects__6TLobbyFv(void);
int rebuild_entry__6TLobbyFPv(void);
int init_sub_state__6TLobbyFPv(void);

void init_sub_objects__6TLobbyFv(void) { init_sub_state__6TLobbyFPv(); rebuild_entry__6TLobbyFPv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020AB30
#include "types.h"

extern "C" {

int rebuild_entry__6TLobbyFPv(void* p);
int clear_record_flags_a__6TLobbyFv(void*);

int rebuild_entry__6TLobbyFPv(void* p) { return clear_record_flags_a__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020AD20
#include "types.h"

extern "C" {

int init_sub_state__6TLobbyFPv(void* p);
int clear_record_flags_b__6TLobbyFv(void*);

int init_sub_state__6TLobbyFPv(void* p) { return clear_record_flags_b__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B03C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32 arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv();

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

void free_data_60F0__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D60F0 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D60F0);
        TLobby__data_805D60F0 = 0U;
        TLobby__data_805D60F4 = 0;
    }
}

extern u32 TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;

s32 init_handle__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D60F0 = temp_r3;
    if (temp_r3 != 0U) {
        TLobby__data_805D60F4 = arg0;
        return 1;
    }
    TLobby__data_805D60F0 = 0U;
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B334
#include "types.h"

extern "C" {

int resolve_matching_object__6TLobbyFPv(void* p);
int get_object_count__6TLobbyFPv(void* p);
int get_matching_object__6TLobbyFv(void*);
int get_object_count__6TLobbyFv(void*);

int resolve_matching_object__6TLobbyFPv(void* p) { return get_matching_object__6TLobbyFv(p); }
int get_object_count__6TLobbyFPv(void* p) { return get_object_count__6TLobbyFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020B588
#include "types.h"

extern "C" {

void bswap_4_words__6TLobbyFPv(void* p);
int bswap_32__FPUl(void*);

void bswap_4_words__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020BC08
#include "types.h"

extern "C" {

void init_scene_objects__6TLobbyFv(void);
int get_current_floor(void);
int create_floor_quest_thread(void);
int set_piece_flags__13TRaderMapCoreFi(int);
int clear_floor_event_flags(void);
int init_sub_objects__6TLobbyFv(void);
int create_objects__6TLobbyFi(void);
int attach_objects_by_id__6TLobbyFi(void);
int reset_id_tables__6TLobbyFv(void);
int init_switch_table(void);

void init_scene_objects__6TLobbyFv(void) { init_sub_objects__6TLobbyFv(); reset_id_tables__6TLobbyFv(); clear_floor_event_flags(); init_switch_table(); set_piece_flags__13TRaderMapCoreFi(1); get_current_floor(); attach_objects_by_id__6TLobbyFi(); get_current_floor(); create_objects__6TLobbyFi(); create_floor_quest_thread(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020C608
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(s32);
};

extern "C" {

s32 spawn_matching_objects__6TLobbyFssi(s16 arg0, s16 arg1, s32 arg2);
u8 *construct_enemy_from_set_row(void *);
u8 *resolve_matching_object__6TLobbyFPv(s32);
s32 get_object_type__6TLobbyFi(s32);
M2C_UNK append_wave_member(s32, void *);

extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6144;

s32 spawn_matching_objects__6TLobbyFssi(s16 arg0, s16 arg1, s32 arg2) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    if ((s32) TLobby__data_805D60FC < 0) {
        return 0;
    }
    var_r29 = resolve_matching_object__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_object_type__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28 += 1, var_r29 += 0x48) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xE) == arg1)) {
            temp_r3_2 = construct_enemy_from_set_row(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x44) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *)temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
                append_wave_member(arg2, temp_r3_2);
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x44) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020C8A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(s32);
};

extern "C" {

s32 link_matching_objects__6TLobbyFss(s16 arg0, s16 arg1);
u8 *construct_enemy_from_set_row(void *);
u8 *resolve_matching_object__6TLobbyFPv(s32);
s32 get_object_type__6TLobbyFi(s32);

extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6144;

s32 link_matching_objects__6TLobbyFss(s16 arg0, s16 arg1) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    if ((s32) TLobby__data_805D60FC < 0) {
        return 0;
    }
    var_r29 = resolve_matching_object__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_object_type__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28 += 1, var_r29 += 0x48) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xE) == arg1)) {
            temp_r3_2 = construct_enemy_from_set_row(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x44) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *)temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x44) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CB34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1);
u8 *create_set_object_from_row(void *);
u8 *get_object_count__6TLobbyFPv(s32);
s32 get_obj_table_entry__6TLobbyFi(s32);

struct VObj8020 {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};
extern s32 TLobby__data_805D60FC;
extern s32 TLobby__data_805D6140;

s32 spawn_objects_at_pos__6TLobbyFss(s16 arg0, s16 arg1) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    var_r29 = get_object_count__6TLobbyFPv(TLobby__data_805D60FC);
    temp_r31 = get_obj_table_entry__6TLobbyFi(TLobby__data_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28++, var_r29 += 0x44) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xA) == arg1)) {
            temp_r3_2 = create_set_object_from_row(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x40) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 0x12);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xA);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj8020*)temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x40) = NULL;
            }
        }
    }
    return var_r30;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CCD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020CCD0(void *arg0, void *arg1);

void TLobby__sub_8020CCD0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CD44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77(s32);
};

extern "C" {

void create_objects__6TLobbyFi(s32 arg0);
u8 *construct_enemy_from_set_row(void *);
u8 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi(s32);

extern s32 TLobby__data_805D6144;

void create_objects__6TLobbyFi(s32 arg0) {
    s16 temp_r3;
    s16 temp_r0;
    s32 count;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = resolve_matching_object__6TLobbyFPv();
    count = get_object_type__6TLobbyFi(arg0);
    for (i = 0; i < count; i++, ptr += 0x48) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xE) == 0))) {
            temp_r3_2 = construct_enemy_from_set_row(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x44) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(ptr, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *) temp_r3_2)->m77(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
            } else {
                M2C_FIELD(ptr, void **, 0x44) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CE4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct CE4C_VBase_8020ce4c { char pad[0x18]; };
struct CE4C_VObj_8020ce4c : CE4C_VBase_8020ce4c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m79(s32);
};

extern "C" {

void assign_display_objects__6TLobbyFPvi(u8 *arg0, s32 arg1);
u8 *construct_enemy_from_set_row(void *);

extern s32 TLobby__data_805D6144;

void assign_display_objects__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r3;
    s16 temp_r0;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = arg0;
    for (i = 0; i < arg1; i++, ptr += 0x48) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xE) == 0))) {
            temp_r3_2 = construct_enemy_from_set_row(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x44) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(ptr, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((CE4C_VObj_8020ce4c *) temp_r3_2)->m79(TLobby__data_805D6144 + (temp_r0 * 0xC));
                }
            } else {
                M2C_FIELD(ptr, void **, 0x44) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020CFC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020CFC8(void *arg0, void *arg1);

void TLobby__sub_8020CFC8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D0B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void attach_objects_by_id__6TLobbyFi(s32 arg0);
u8 *create_set_object_from_row(void *);
u8 *get_object_count__6TLobbyFPv();
s32 get_obj_table_entry__6TLobbyFi(s32);

extern s32 TLobby__data_805D6140;

void attach_objects_by_id__6TLobbyFi(s32 arg0) {
    s16 temp_r3;
    s16 temp_r0;
    s32 count;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = get_object_count__6TLobbyFPv();
    count = get_obj_table_entry__6TLobbyFi(arg0);
    for (i = 0; i < count; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = create_set_object_from_row(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *) temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D1BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8020d1bc { char pad[0x18]; };
struct VObj_8020d1bc : VBase_8020d1bc {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

extern "C" {

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1);
u8 *create_set_object_from_row(void *);

extern s32 TLobby__data_805D6140;

void assign_objects_to_slots__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r3;
    s16 temp_r0;
    u8 *ptr;
    s32 i;
    u8 *temp_r3_2;

    ptr = arg0;
    for (i = 0; i < arg1; i++, ptr += 0x44) {
        temp_r3 = M2C_FIELD(ptr, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && (M2C_FIELD(ptr, s16 *, 0) != -1) && ((temp_r3 & 0x10) || (temp_r3 & 1) || (M2C_FIELD(ptr, s16 *, 0xA) == 0))) {
            temp_r3_2 = create_set_object_from_row(ptr);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(ptr, void **, 0x40) = temp_r3_2;
                M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(ptr, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(ptr, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = ptr;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj_8020d1bc *) temp_r3_2)->m4(TLobby__data_805D6140 + (temp_r0 * 4), 0);
                }
            } else {
                M2C_FIELD(ptr, void **, 0x40) = NULL;
            }
            M2C_FIELD(ptr, s16 *, 2) = (s16) (M2C_FIELD(ptr, s16 *, 2) & 0xFFFFFFFE);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020DFD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__6TLobbyFv(void);
void __dt__5THeapFv(void*, int);
void free_and_delete__6TLobbyFPvs(void*, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);

extern u32 TLobby__data_805D6104;
extern u32 TLobby__data_805D6108;
extern u32 TLobby__data_805D6138;
extern u32 TLobby__data_805D613C;
extern u32 TLobby__data_805D6140;
extern u32 TLobby__data_805D6144;

void free_resources__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D6144 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6144);
        TLobby__data_805D6144 = 0U;
    }
    if ((u32) TLobby__data_805D6140 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6140);
        TLobby__data_805D6140 = 0U;
    }
    if ((u32) TLobby__data_805D6108 != 0U) {
        __dt__5THeapFv((void*)TLobby__data_805D6108, 1);
        TLobby__data_805D6108 = 0U;
    }
    if ((u32) TLobby__data_805D6104 != 0U) {
        free_and_delete__6TLobbyFPvs((void*)TLobby__data_805D6104, 1);
        TLobby__data_805D6104 = 0U;
    }
    if ((u32) TLobby__data_805D613C != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D613C);
        TLobby__data_805D613C = 0U;
    }
    if ((u32) TLobby__data_805D6138 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TLobby__data_805D6138);
        TLobby__data_805D6138 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020E3BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020E3BC(void);
void TLobby__sub_8020E3C0(void);
int get_matching_object__6TLobbyFv(void);
int get_object_count__6TLobbyFv(void);
s32 Dolphin_ARAlloc(M2C_UNK);

void TLobby__sub_8020E3BC(void) {  }

extern s32 lbl_805D612C;
extern s32 lbl_805D6130;

void TLobby__sub_8020E3C0(void) {
    lbl_805D6130 = 0x100000;
    lbl_805D612C = Dolphin_ARAlloc(0x100000);
}

    extern int TLobby__data_805D6114;
int get_matching_object__6TLobbyFv(void) {  return TLobby__data_805D6114; }

    extern int TLobby__data_805D610C;
int get_object_count__6TLobbyFv(void) {  return TLobby__data_805D610C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020ED20
#include "types.h"

extern "C" {

void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1);
int generate_armor_shop_stock(void);

    extern int lbl_805D615C;
void set_shop_armor_list_flag__6TLobbyFii(int a0, int a1) { lbl_805D615C = a1; generate_armor_shop_stock(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020EDBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_rocks__6TLobbyFv(void);
M2C_UNK free_nodes_with_id__6TLobbyFUi(u32);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern u32 lbl_80513D78[];
extern u32 lbl_805D6158;

void free_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    u32 *var_r29 = lbl_80513D78;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (u32)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6158 != 0U) {
        free_nodes_with_id__6TLobbyFUi(lbl_805D6158);
        lbl_805D6158 = var_r30;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020EED8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 pop_byte__6TLobbyFPv(u8 *arg0);

s32 pop_byte__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r4 > 0) {
        temp_r0 = temp_r4 - 1;
        M2C_FIELD(arg0, s32 *, 0x64) = temp_r0;
        return (u8)*(arg0 + temp_r0);
    }
    return -1;
}

}
#endif

#if PSO_CLASS_PACKAGE == 0x80211C1C
#include "types.h"

extern "C" {

int get_selected_quest_id__6TLobbyFPv(void* p);
int get_selected_quest_id__16TQuestListOnlineFv(void*);

int get_selected_quest_id__6TLobbyFPv(void* p) { return get_selected_quest_id__16TQuestListOnlineFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211CE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_main_phase__6TLobbyFi(s32 arg0);
s32 create_lobby_object_05(s32);
s32 create_tl05_object__6TLobbyFPv(s32);
s32 create__22THunterGuildSeqOfflineFPv(s32);

s32 get_main_phase();
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

s32 handle_main_phase__6TLobbyFi(s32 arg0) {
    if (get_main_phase() == 0xE) {
        return create__22THunterGuildSeqOfflineFPv(arg0);
    }
    if (get_main_phase() == 0xF) {
        if ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC) {
            return create_tl05_object__6TLobbyFPv(arg0);
        }
        return create_lobby_object_05(arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211F0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_guild_or_quest_phase__6TLobbyFv(void);
M2C_UNK THunterGuildSeqOffline__sub_8021339C();
M2C_UNK THunterGuildWarning__sub_8021170C();
M2C_UNK init_download_buffers__16TQuestListOnlineFv();
M2C_UNK THunterGuildSeqOffline__sub_80213CA4();
M2C_UNK zero_four_slots__22THunterGuildSeqOfflineFv();
s32 get_main_phase();

void update_guild_or_quest_phase__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildSeqOffline__sub_8021339C();
        THunterGuildWarning__sub_8021170C();
    }
    if (get_main_phase() == 0xF) {
        init_download_buffers__16TQuestListOnlineFv();
        zero_four_slots__22THunterGuildSeqOfflineFv();
        THunterGuildSeqOffline__sub_80213CA4();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211FA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_tl05_object__6TLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *THunterGuildSeqOffline__sub_80214B3C(void *, void *, void *);

extern void *tl_05;

void *create_tl05_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = THunterGuildSeqOffline__sub_80214B3C(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBE88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_step_60c8__6TLobbyFv(void);
M2C_UNK set_buffer_params_checked__6TLobbyFUiUii();

void run_step_60c8__6TLobbyFv(void) {
    set_buffer_params_checked__6TLobbyFUiUii();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_field__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D4408();

void apply_field__6TLobbyFv(void) {
    TLobby__sub_803D4408();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBEC8(void);
M2C_UNK TLobby__sub_803D4418();

void TLobby__sub_803CBEC8(void) {
    TLobby__sub_803D4418();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBEE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 run_step_4430__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D4430();

s32 run_step_4430__6TLobbyFv(void) {
    TLobby__sub_803D4430();
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF0C(void);

void TLobby__sub_803CBF0C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF10(void);
M2C_UNK TLobby__sub_803D4428();

void TLobby__sub_803CBF10(void) {
    TLobby__sub_803D4428();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF30(void);
M2C_UNK TLobby__sub_803D4438();

void TLobby__sub_803CBF30(void) {
    TLobby__sub_803D4438();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CBF50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CBF50(void);
void trigger_sub_task__6TLobbyFv(void);
void TLobby__sub_803CBF90(void);
void TLobby__sub_803CBFB0(void);
void run_sequence__6TLobbyFv(void);
void TLobby__sub_803CBFF0(void);
void query_available_size__6TLobbyFv(void);
void TLobby__sub_803CC030(void);
void dispatch_packet__6TLobbyFv(void);
M2C_UNK set_stream_channel_pan__6TLobbyFPvii();
M2C_UNK set_sound_stream_volume();
M2C_UNK set_stream_frequency__6TLobbyFPvi();
M2C_UNK TLobby__sub_803D4704();
M2C_UNK update_active_streams__6TLobbyFv();
M2C_UNK get_packet_size__6TLobbyFPv();
M2C_UNK get_available_size__6TLobbyFPv();
M2C_UNK TLobby__sub_803D4CA0();
M2C_UNK TLobby__sub_803D504C();

void TLobby__sub_803CBF50(void) {
    set_stream_channel_pan__6TLobbyFPvii();
}

void trigger_sub_task__6TLobbyFv(void) {
    set_sound_stream_volume();
}

void TLobby__sub_803CBF90(void) {
    set_stream_frequency__6TLobbyFPvi();
}

void TLobby__sub_803CBFB0(void) {
    TLobby__sub_803D4704();
}

void run_sequence__6TLobbyFv(void) {
    update_active_streams__6TLobbyFv();
}

void TLobby__sub_803CBFF0(void) {
    get_packet_size__6TLobbyFPv();
}

void query_available_size__6TLobbyFv(void) {
    get_available_size__6TLobbyFPv();
}

void TLobby__sub_803CC030(void) {
    TLobby__sub_803D4CA0();
}

void dispatch_packet__6TLobbyFv(void) {
    TLobby__sub_803D504C();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CC0B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_step_5210__6TLobbyFv(void);
void flush_update__6TLobbyFv(void);
void shutdown_cleanup__6TLobbyFv(void);
void TLobby__sub_803CC114(void);
M2C_UNK TLobby__sub_803D5210();
M2C_UNK TLobby__sub_803D5DD0();
M2C_UNK TLobby__sub_803D5F10();
M2C_UNK TLobby__sub_803D60A8();

void run_step_5210__6TLobbyFv(void) {
    TLobby__sub_803D5210();
}

void flush_update__6TLobbyFv(void) {
    TLobby__sub_803D60A8();
}

void shutdown_cleanup__6TLobbyFv(void) {
    TLobby__sub_803D5DD0();
}

void TLobby__sub_803CC114(void) {
    TLobby__sub_803D5F10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CC274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invalidate_cache__6TLobbyFv(void);
M2C_UNK DCInvalidateRange();

void invalidate_cache__6TLobbyFv(void) {
    DCInvalidateRange();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CD804
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CD804(void);
M2C_UNK TLobby__sub_803CCE9C(void *);

extern s32 lobby_adxf_current_file_id;
extern s32 lobby_adxf_open_file_handle;
extern s32 lobby_afs_toc_entry_index;
extern s32 lbl_805D75E8;

void TLobby__sub_803CD804(void) {
    TLobby__sub_803CCE9C((void *) (lobby_adxf_open_file_handle));
    lobby_adxf_open_file_handle = 0;
    lobby_adxf_current_file_id = -1;
    lobby_afs_toc_entry_index = 0;
    lbl_805D75E8 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE1D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_scroll_offset__6TLobbyFPv(u8 *arg0);

s32 get_scroll_offset__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE1E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1);

void set_flag_4__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 4) = arg1;
}

void set_client_slot__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 3) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE200
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_impl__6TLobbyFv(void);
void TLobby__sub_803CE220(void);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();

void update_scroll_impl__6TLobbyFv(void) {
    restore_interrupts_nested__6TLobbyFv();
}

void TLobby__sub_803CE220(void) {
    lock_enter__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CE478
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803CE544(u32 arg0, s32 arg1);
M2C_UNK set_scroll_position__6TLobbyFPvi(int, void *);
M2C_UNK init_stream_position__6TLobbyFPv(int);
M2C_UNK set_scroll_offset__6TLobbyFPvi(int, int);
M2C_UNK get_entry_pair__6TLobbyFPviPvPv(int, int, void *, void *);
s32 get_scroll_offset__6TLobbyFPv(int);
M2C_UNK update_scroll_impl__6TLobbyFv();
M2C_UNK TLobby__sub_803CE220();

void update_scroll__6TLobbyFPv(u8 *arg0) {
    s32 spC;
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B0) + 1);
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A8) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) >= (s32) M2C_FIELD(arg0, s32 *, 0x1BC))) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(arg0, s32 *, 0x1B8);
    }
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A9) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) < get_scroll_offset__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4))))) {
        TLobby__sub_803CE220();
        get_entry_pair__6TLobbyFPviPvPv((int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0x1B0)), (void *) (&spC), (void *) (&sp8));
        set_scroll_offset__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (spC / 2048));
        set_scroll_position__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (void *) ((s32) (spC + sp8) / 2048));
        init_stream_position__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 8)));
        update_scroll_impl__6TLobbyFv();
    }
}

extern u32 lbl_805D75F8;
extern s32 lbl_805D75FC;

void TLobby__sub_803CE544(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D75F8 = 0U;
        lbl_805D75FC = 0;
        return;
    }
    lbl_805D75F8 = arg0;
    lbl_805D75FC = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803CFE68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_callback__6TLobbyFv(void);
void TLobby__sub_803CFE9C(void);
extern M2C_UNK (*lbl_805D75F8)(s32);

extern s32 lbl_805D75FC;

void call_callback__6TLobbyFv(void) {
    if (((M2C_UNK (*)(s32)) lbl_805D75F8) != NULL) {
        lbl_805D75F8(lbl_805D75FC);
    }
}

void TLobby__sub_803CFE9C(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0C28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D0C28(s32 arg0, s32 arg1);

extern s32 lbl_805D7608;
extern s32 lbl_805D760C;

void TLobby__sub_803D0C28(s32 arg0, s32 arg1) {
    lbl_805D760C = arg0;
    lbl_805D7608 = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0EB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1);
void notify_dvd_read__6TLobbyFv(void);
void enter_lock__6TLobbyFv(void);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();

extern u32 lbl_805D7618;
extern s32 lbl_805D761C;

void set_callback__6TLobbyFUii(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D7618 = 0U;
        lbl_805D761C = 0;
        return;
    }
    lbl_805D7618 = arg0;
    lbl_805D761C = arg1;
}

void notify_dvd_read__6TLobbyFv(void) {
    restore_interrupts_nested__6TLobbyFv();
}

void enter_lock__6TLobbyFv(void) {
    lock_enter__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D0F58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D0F58(void);
extern M2C_UNK (*lbl_805D7620)(s32, s32);

extern s32 lbl_805D7624;
extern s32 lbl_805D7628;

void TLobby__sub_803D0F58(void) {
    if (((M2C_UNK (*)(s32, s32)) lbl_805D7620) != NULL) {
        lbl_805D7620(lbl_805D7624, lbl_805D7628);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void lock_enter__6TLobbyFv(void);
s32 OSDisableInterrupts();

extern s32 lbl_805D7638;
extern s32 lbl_805D763C;

void lock_enter__6TLobbyFv(void) {
    if ((s32) lbl_805D7638 == 0) {
        lbl_805D763C = OSDisableInterrupts();
    }
    lbl_805D7638 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D23B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_count_or_cancel__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803D240C(u8 *arg0);
void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D242C(u8 *arg0);

s32 get_count_or_cancel__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return 0;
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x20), -3);
    }
    return 0;
}

void TLobby__sub_803D240C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void TLobby__sub_803D2420(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}

s32 TLobby__sub_803D242C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D25DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D25DC(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK lbl_80587400[];
extern s32 lbl_805D7640;

void TLobby__sub_803D25DC(void) {
    if ((s32) lbl_805D7640 == 0) {
        memset((void *) (lbl_80587400), (int) (0), (int) (0x480));
    }
    lbl_805D7640 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2628
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field_24__6TLobbyFPv(u8 *arg0);
s32 get_field20__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803D2638(u8 *arg0);

s32 get_field_24__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

s32 get_field20__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

s32 TLobby__sub_803D2638(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2BA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1);
void TLobby__sub_803D2C04(u8 *arg0);
void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2);
s32 TLobby__sub_803D2C2C(u8 *arg0);
void clear_entry__6TLobbyFPv(u8 *arg0);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();
M2C_UNK memset(void *, int, int);

s32 get_slot_count__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x2C), -3);
    }
    return 0;
}

void TLobby__sub_803D2C04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void TLobby__sub_803D2C20(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
}

s32 TLobby__sub_803D2C2C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void clear_entry__6TLobbyFPv(u8 *arg0) {
    lock_enter__6TLobbyFv();
    if (arg0 != NULL) {
        memset((void *) (arg0), (int) (0), (int) (0x30));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    restore_interrupts_nested__6TLobbyFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D2ED4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D2ED4(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK lbl_8058A880[];
extern s32 lbl_805D7650;

void TLobby__sub_803D2ED4(void) {
    if ((s32) lbl_805D7650 == 0) {
        memset((void *) (lbl_8058A880), (int) (0), (int) (0xC00));
    }
    lbl_805D7650 += 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3194
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D3194(void);

extern s32 lbl_805D7658;

void TLobby__sub_803D3194(void) {
    lbl_805D7658 -= 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3988
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);

extern M2C_UNK lbl_805D7664;

void TLobby__sub_803D3988(void) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D7664, s32 *, 4));
    }
}

extern M2C_UNK lbl_805D766C;

void TLobby__sub_803D39C0(void) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D766C, s32 *, 4));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D3B84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_handle__6TLobbyFPv(u8 *arg0);
extern M2C_UNK (*lbl_805D7678)(s32, M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_803D3988();
M2C_UNK TLobby__sub_803D39C0();

extern M2C_UNK lbl_8047E0C8[];
extern s32 lbl_805D767C;

void release_handle__6TLobbyFPv(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, lbl_8047E0C8, 0);
        }
    } else {
        TLobby__sub_803D39C0();
        M2C_FIELD(arg0, s8 *, 1) = 0;
        TLobby__sub_803D3988();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D439C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D439C(s32 arg0, s32 arg1);

extern s32 lbl_805D7678;
extern s32 lbl_805D767C;

void TLobby__sub_803D439C(s32 arg0, s32 arg1) {
    lbl_805D7678 = arg0;
    lbl_805D767C = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D43C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_pending_request__6TLobbyFv(void);
void acquire_lock__6TLobbyFv(void);
void TLobby__sub_803D4408(u8 *arg0, s32 arg1);
M2C_UNK restore_interrupts_nested__6TLobbyFv();
M2C_UNK lock_enter__6TLobbyFv();

void process_pending_request__6TLobbyFv(void) {
    restore_interrupts_nested__6TLobbyFv();
}

void acquire_lock__6TLobbyFv(void) {
    lock_enter__6TLobbyFv();
}

void TLobby__sub_803D4408(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x74) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_803D4428(void);
s32 TLobby__sub_803D4430(void);
void TLobby__sub_803D4438(u8 *arg0, s32 arg1);

s32 TLobby__sub_803D4428(void) {
    return 0;
}

s32 TLobby__sub_803D4430(void) {
    return 0;
}

void TLobby__sub_803D4438(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4704
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D4704(u8 *arg0, s32 arg1);

void TLobby__sub_803D4704(u8 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D4B68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_packet_size__6TLobbyFPv(u8 *arg0);
u32 get_available_size__6TLobbyFPv(u8 *arg0);

u32 get_packet_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 0, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 > 0)) {
            var_r3 = 0x2000;
        }
    }
    return (u32) var_r3 >> 1U;
}

u32 get_available_size__6TLobbyFPv(u8 *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    void **temp_r3;
    u8 *temp_r5;

    if (arg0 == NULL) {
        return -1U;
    }
    temp_r3 = M2C_FIELD(arg0, void ***, 0x28);
    temp_r5 = (unsigned char *) (*temp_r3);
    var_r3 = M2C_FIELD(temp_r5, s32 (**)(void **, M2C_UNK, void *), 0x24)(temp_r3, 1, temp_r5);
    if (arg0 == NULL) {
        var_r0 = -1;
    } else {
        var_r0 = M2C_FIELD(arg0, u32 *, 8) & 1;
    }
    if (var_r0 == 1) {
        if (arg0 == NULL) {
            var_r0_2 = -1;
        } else {
            var_r0_2 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1U) & 1;
        }
        if ((var_r0_2 == 0) && (var_r3 < 0x2000)) {
            var_r3 = 0;
        }
    }
    return (u32) var_r3 >> 1U;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D60A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D60A8(void);
M2C_UNK TLobby__sub_803D6190();

void TLobby__sub_803D60A8(void) {
    TLobby__sub_803D6190();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803D6190
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D6190(s32 arg0, s32 arg1);

extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;

void TLobby__sub_803D6190(s32 arg0, s32 arg1) {
    lbl_805D76A0 = arg0;
    lbl_805D76A4 = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015ABD0
#include "types.h"

extern "C" {

void TLobby__sub_8015ABD0(void);
void TLobby__sub_8015ABD4(void);

void TLobby__sub_8015ABD0(void) {  }
void TLobby__sub_8015ABD4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9A60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2);
void *__nw__7TObjectFUl(int);
void apply_rel_relocations(void *);
void *ct_object__9TItemDropFPv(void *, void *);
void memset(void *, int, int);
void strncpy(void *, void *, int);

extern M2C_UNK lbl_8050113C[];
struct VOff_800F9A60_o_800f9a60 { char pad_0[0x28]; char f_28[1]; };

void TLobby__sub_800F9A60(void *arg0, void *arg1, void *arg2) {
    struct VOff_800F9A60_o_800f9a60 *o;
    o = (struct VOff_800F9A60_o_800f9a60 *)__nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = (struct VOff_800F9A60_o_800f9a60 *)ct_object__9TItemDropFPv(o, lbl_8050113C);
    }
    memset(o->f_28, 0, 17);
    strncpy(o->f_28, arg0, 16);
    M2C_FIELD(o, void **, 0x0) = o->f_28;
    M2C_FIELD(o, void **, 0x1C) = arg1;
    M2C_FIELD(o, void **, 0x20) = arg2;
    apply_rel_relocations(o);
}

}
#endif
#endif
