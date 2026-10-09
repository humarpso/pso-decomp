#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Obj_8004D8C8;
struct Obj_8004D92C;
extern "C" void get_defeat_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out);
extern "C" void get_demo2_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D92C *self, u16 *a, u16 *b, u16 *out);
extern "C" s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0);
extern "C" void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v);
struct Stack_8004C5E8 {
    u8 * sp8;
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    s16 sp14;
    u8 trailing_storage[0x36];
};

struct RecoveredGlobal_8004C5E8_TBoss4DarkFalz__data_804FF1E8 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
int VecCopy__FP3VecPC3Vec(void*, void* a1);
extern f32 lbl_805D9AA0;
int set_position_from__14TBoss4DarkFalzFPvPv(void* p, void* _w1);
int freeze_all_players__14TBoss4DarkFalzFPv(void*);
M2C_UNK create__11TObjDFDemo5FPvPvPv(void *, void *, s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK check_ready__12TBoss4ThanksFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK obj_setArrS16_FC(void *, s32, u16);
extern M2C_UNK lbl_80485454[];
extern int TBoss4DarkFalz__data_805D4D64;
void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0);
extern int TBoss4DarkFalz__data_805D4D64;
    extern int lbl_805D4D68;
void TBoss4DarkFalz__sub_8004C540(void);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
M2C_UNK send_action_packet__14TBoss4DarkFalzFPvi(s32, M2C_UNK);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void request_action_e__14TBoss4DarkFalzFi(s32 arg0);
int refresh_player_equipment__14TBoss4DarkFalzFPv(void*);
int end_player_camera_pans__14TBoss4DarkFalzFPv(void*);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void start_phase__14TBoss4DarkFalzFPv(void* p);
int push_players_out_of_zone__14TBoss4DarkFalzFii(void*, void*);
int TBoss4DarkFalz__sub_8004B7DC(void);
extern int TBoss4DarkFalz__data_805D4D64;
extern int lbl_805D4D68;
void enter_state_126__14TBoss4DarkFalzFPv(void* a0);
int freeze_all_players__14TBoss4DarkFalzFPv(void*);
void play_area_music(void *);
void create__11TObjDFDemo4FPvPvPv(void *, void *, void *);
extern M2C_UNK lbl_80437298[];
extern s32 game_difficulty_selection;
void init_state__14TBoss4DarkFalzFPv(void *arg0);
extern M2C_UNK lbl_80437298[];
extern s32 game_difficulty_selection;
void TBoss4DarkFalz__sub_8004C8A8(void);
int freeze_all_players__14TBoss4DarkFalzFPv(void*);
int create__11TObjDFDemo3FPvPvPv(void*, void*, void*);
extern M2C_UNK lbl_80437298[];
extern s32 game_difficulty_selection;
void enter_state_142__14TBoss4DarkFalzFPv(void* p);
void change_state__14TBoss4DarkFalzFPvi(void*, M2C_UNK);
extern M2C_UNK lbl_80437298[];
extern s32 game_difficulty_selection;
void update_timer__14TBoss4DarkFalzFPv(void *arg0);
void change_state__14TBoss4DarkFalzFPvi(void*, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
extern const f32 TBoss4DarkFalz__data_805D893C;
extern const f32 lbl_805D8944;
void update_countdown_shrink__14TBoss4DarkFalzFPv(u8 *arg0);
void change_state__14TBoss4DarkFalzFPvi(void*, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
s32 create__11TBoss4Type3Fi(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
extern RecoveredGlobal_8004C5E8_TBoss4DarkFalz__data_804FF1E8 TBoss4DarkFalz__data_804FF1E8;
extern int TBoss4DarkFalz__data_805D4D64;
extern const f32 lbl_805D8940;
void TBoss4DarkFalz__sub_8004C5E8(u8 *arg0);
void handle_defeat__14TBoss4DarkFalzFPv(void *);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
int refresh_player_equipment__14TBoss4DarkFalzFPv(void*);
void TBoss4DarkFalz__sub_8004C2D8(void *arg0);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void change_state__14TBoss4DarkFalzFPvi(void *, s32);
void handle_defeat__14TBoss4DarkFalzFPv(void *);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
void update_fade_countdown__14TBoss4DarkFalzFPv(void *arg0);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void change_state__14TBoss4DarkFalzFPvi(void *, s32);
void handle_defeat__14TBoss4DarkFalzFPv(void *);
s32 TBoss4DarkFalz__sub_8004B730(void *, f32, int);
void TBoss4DarkFalz__sub_8004C7E8(void *arg0);
}

extern "C" {

int TBoss4DarkFalz__sub_8004C1AC(void);
s32 TBoss4DarkFalz__sub_8004C1B4(void);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
s32 get_instance__14TBoss4DarkFalzFv(void);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
void save_position__14TBoss4DarkFalzFi(s32 arg0);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
void set_state__14TBoss4DarkFalzFPv(void* p);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int create__16TObjOnlineEndingFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

    extern int TBoss4DarkFalz__data_805D4D64;
int TBoss4DarkFalz__sub_8004C1AC(void) {  return TBoss4DarkFalz__data_805D4D64; }

extern s32 TBoss4DarkFalz__data_805D4D60;

s32 TBoss4DarkFalz__sub_8004C1B4(void) {
    return TBoss4DarkFalz__data_805D4D60;
}

extern s32 TBoss4DarkFalz__data_805D4D5C;

s32 get_instance__14TBoss4DarkFalzFv(void) {
    return TBoss4DarkFalz__data_805D4D5C;
}

int is_field378_zero__14TBoss4DarkFalzFPv(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 get_action_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_phase__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void* get_hit_data__14TBoss4DarkFalzFPv(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)((void*)(arg0 + 0x44)), (void*)((void*)(arg0 + 0x38)));
}

struct A7B00Base_800a7b00_800A7764 { char pad[0x14]; };
struct A7B00Obj_800a7b00_800A7764 : A7B00Base_800a7b00_800A7764 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};
int set_position_from__14TBoss4DarkFalzFPvPv(void* p, void* _w1) { return VecCopy__FP3VecPC3Vec((void*)((char*)p + 0x38), (void*)(_w1)); }

void swap_and_send__14TBoss4DarkFalzFPv(void* p) { swap_bytes__14TBoss4DarkFalzFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

void TBoss4DarkFalz__sub_8004C2D8(void *arg0) {
    f32 v;
    s32 t;
    t = M2C_FIELD(arg0, s32 *, 0x380);
    if (t > 0x1BC) {
        v = (f32)(t - 0x1BC) / 6.0f;
        if (v > 1.0f) {
            v = 1.0f;
        }
        TBoss4DarkFalz__sub_8004B730(arg0, v, 0xFFFFFF);
    }
    t = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = t;
    if (t < 0) {
        refresh_player_equipment__14TBoss4DarkFalzFPv((void*)(arg0));
        handle_defeat__14TBoss4DarkFalzFPv(arg0);
    }
}

void set_state__14TBoss4DarkFalzFPv(void* p) { freeze_all_players__14TBoss4DarkFalzFPv((void*)(p)); create__16TObjOnlineEndingFPv(p); *(int*)((char*)p + 0x380) = 454; }

void update_fade_countdown__14TBoss4DarkFalzFPv(void *arg0) {
    f32 v;
    s32 t;
    if (is_ending_or_split_screen__14TBoss4DarkFalzFv() != 0) {
        t = M2C_FIELD(arg0, s32 *, 0x380);
        if (t < 0xA) {
            v = (f32)(0xA - t) / 6.0f;
            if (v > 1.0f) {
                v = 1.0f;
            }
            TBoss4DarkFalz__sub_8004B730(arg0, v, 0xFFFFFF);
        }
    }
    t = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = t;
    if (t < 0) {
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() != 0) {
            change_state__14TBoss4DarkFalzFPvi(arg0, 0xF);
            return;
        }
        handle_defeat__14TBoss4DarkFalzFPv(arg0);
    }
}

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0) {
    u16 sp8[4];
    s32 var_r29;
    freeze_all_players__14TBoss4DarkFalzFPv((void*)(arg0));
    stop_audio_streams__6TLobbyFv();
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x37);
    check_ready__12TBoss4ThanksFv();
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) != NULL) {
        create__11TObjDFDemo5FPvPvPv(arg0, (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) + 0x38, M2C_FIELD((*(u8 * *)&TBoss4DarkFalz__data_805D4D64), s32 *, 0x60));
    } else {
        create__11TObjDFDemo5FPvPvPv(arg0, lbl_80485454, 0);
    }
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) != NULL) {
        ((M2C_UNK (*)(void *, void *, void *, void *))get_defeat_params__14TBoss4DarkFalzFPvPvPvPv)((*(u8 * *)&TBoss4DarkFalz__data_805D4D64), arg0 + 0x2D6, arg0 + 0x2D4, sp8);
        queue_destruction__7TObjectFv((*(u8 * *)&TBoss4DarkFalz__data_805D4D64));
        (*(u8 * *)&TBoss4DarkFalz__data_805D4D64) = NULL;
        var_r29 = 0;
        do {
            obj_setArrS16_FC(arg0, var_r29, sp8[var_r29]);
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12E;
}
void TBoss4DarkFalz__sub_8004C540(void) {  }
void request_action_e__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) (*(u32 *)&TBoss4DarkFalz__data_805D4D64) == 0U) || (get_action_state__14TBoss4DarkFalzFPv((void*)((*(u32 *)&TBoss4DarkFalz__data_805D4D64))) == 3) || (get_action_state__14TBoss4DarkFalzFPv((void*)((*(u32 *)&TBoss4DarkFalz__data_805D4D64))) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        send_action_packet__14TBoss4DarkFalzFPvi(arg0, 0xE);
    }
}
void start_phase__14TBoss4DarkFalzFPv(void* p) { end_player_camera_pans__14TBoss4DarkFalzFPv(p); refresh_player_equipment__14TBoss4DarkFalzFPv(p); }

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8004C5E8_TBoss4DarkFalz__data_804FF1E8_size[sizeof(RecoveredGlobal_8004C5E8_TBoss4DarkFalz__data_804FF1E8) == 0x40 ? 1 : -1];
void TBoss4DarkFalz__sub_8004C5E8(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8004C5E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8004C5E8, spC) == 0x4) ? 1 : -1];
    typedef char sp12_offset[(offsetof(Stack_8004C5E8, sp12) == 0xA) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8004C5E8, sp14) == 0xC) ? 1 : -1];
    Stack_8004C5E8 stack;
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x380) / lbl_805D8940;
    TBoss4DarkFalz__sub_8004B730((void *) (arg0), (f32) (temp_f1 * (temp_f1 * (temp_f1 * temp_f1))), (int) (0xFFFFFF));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 <= 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs((M2C_UNK)((int) (0x36U)));
        stack.sp8 = (u8 *)(arg0);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (&TBoss4DarkFalz__data_804FF1E8.value));
        stack.sp14 = 2;
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x1FE;
        stack.sp12 = M2C_FIELD(arg0, u16 *, 0x1C) + 0x1FE;
        (*(s32 *)&TBoss4DarkFalz__data_805D4D64) = create__11TBoss4Type3Fi((void *) (&stack.sp8));
        change_state__14TBoss4DarkFalzFPvi((void*)((void *) (arg0)), (M2C_UNK)((int) (0xD)));
    }
}
#pragma pop

void enter_state_126__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 126; lbl_805D4D68 = 2; TBoss4DarkFalz__sub_8004B7DC(); push_players_out_of_zone__14TBoss4DarkFalzFii(a0, (void*)2); }

void update_countdown_shrink__14TBoss4DarkFalzFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = TBoss4DarkFalz__data_805D893C - ((f32) M2C_FIELD(arg0, s32 *, 0x380) / lbl_805D8944);
    TBoss4DarkFalz__sub_8004B730((void *) (arg0), (f32) (temp_f1 * (temp_f1 * (temp_f1 * temp_f1))), (int) (0xFFFFFF));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 <= 0) {
        change_state__14TBoss4DarkFalzFPvi((void*)((void *) (arg0)), (M2C_UNK)((int) (0xC)));
    }
}

void init_state__14TBoss4DarkFalzFPv(void *arg0) {
    freeze_all_players__14TBoss4DarkFalzFPv((void*)(arg0));
    create__11TObjDFDemo4FPvPvPv(arg0, (void *)((char *)arg0 + 924), M2C_FIELD(arg0, void **, 0x3A8));
    play_area_music(lbl_80437298);
    M2C_FIELD(arg0, u32 *, 0x380) = 114;
}

void TBoss4DarkFalz__sub_8004C7E8(void *arg0) {
    f32 v;
    s32 t;
    if (is_ending_or_split_screen__14TBoss4DarkFalzFv() != 0) {
        t = M2C_FIELD(arg0, s32 *, 0x380);
        if (t < 0xA) {
            v = (f32)(0xA - t) / 6.0f;
            if (v > 1.0f) {
                v = 1.0f;
            }
            TBoss4DarkFalz__sub_8004B730(arg0, v, 0xFFFFFF);
        }
    }
    t = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = t;
    if (t < 0) {
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() != 0) {
            change_state__14TBoss4DarkFalzFPvi(arg0, 0xF);
            return;
        }
        handle_defeat__14TBoss4DarkFalzFPv(arg0);
    }
}

void TBoss4DarkFalz__sub_8004C8A8(void) {  }
void enter_state_142__14TBoss4DarkFalzFPv(void* p) { freeze_all_players__14TBoss4DarkFalzFPv((void*)(p)); create__11TObjDFDemo3FPvPvPv(p, (char*)p + 0x39c, *(void**)((char*)p + 0x3a8)); *(int*)((char*)p + 0x380) = 142; }
void update_timer__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 < 0) {
        if ((s32) game_difficulty_selection == 0) {
            change_state__14TBoss4DarkFalzFPvi(arg0, 0xA);
            return;
        }
        change_state__14TBoss4DarkFalzFPvi(arg0, 0xB);
    }
}

}

struct RecoveredGlobal_8004CBC0_lbl_80485448 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Obj_8004CD08 { u8 pad0[0x1C]; u16 id; u8 pad1e[0xE]; s16 f2c; u8 pad2e[0x352]; s32 f380; };

struct Sub_8004CD08 { s16 x; u8 pad2[4]; s16 id; s16 f8; u8 pada[0x42]; };

struct Params_8004CD08 { void *owner; Sub_8004CD08 sub; };

struct D_8004CB28 {
    s16 a0, a2, a4;
    u16 a6;
    s16 a8, aa, ac, ae;
    u8 pad10[0x30];
};

struct Arg_8004CB28 { void *owner; D_8004CB28 d; };

struct S_8004CB28 {
    u8 pad0[0x1c];
    u16 f1c;
    u8 pad1e[0x0e];
    s16 f2c;
    u8 pad2e[0x352];
    s32 f380;
};

typedef struct Vec_8004C940 {
    f32 x, y, z;
} Vec_8004C940;

typedef struct Obj_8004C940 {
    u8 pad0[0x2D4];
    u16 f2d4;
    u16 f2d6;
    u8 pad2d8[0x380 - 0x2D8];
    s32 f380;
    u8 pad384[0x39C - 0x384];
    Vec_8004C940 pos;
    s32 f3a8;
} Obj_8004C940;

extern "C" {
u8 * create_demo1__14TBoss4DarkFalzFPvPvPv(void *, void *, void *);
extern RecoveredGlobal_8004CBC0_lbl_80485448 lbl_80485448;
void start_demo1__14TBoss4DarkFalzFPv(u8 *arg0);
s32 create__11TBoss4Type1Fi(void *params);
int refresh_player_equipment__14TBoss4DarkFalzFPv(void*);
int end_player_camera_pans__14TBoss4DarkFalzFPv(void*);
void spawn_type1__14TBoss4DarkFalzFPv(Obj_8004CD08 *self);
void change_state__14TBoss4DarkFalzFPvi(void *, s32);
void *create__11TBoss4Type2Fi(void *);
void update_spawn_type2_countdown__14TBoss4DarkFalzFPv(S_8004CB28 *o);
void create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *, Vec_8004C940 *, s32, s32);
s32 stop_audio_streams__6TLobbyFv();
void normalize_vector(Vec_8004C940 *);
extern s32 game_difficulty_selection;
extern const f32 lbl_805D8948;
extern const f32 lbl_805D894C;
void enter_demo2_phase__14TBoss4DarkFalzFPv(Obj_8004C940 *arg0);
}

extern "C" {

void TBoss4DarkFalz__sub_8004C93C(void);
void TBoss4DarkFalz__sub_8004CA80(void);
void TBoss4DarkFalz__sub_8004CBBC(void);
void TBoss4DarkFalz__sub_8004CE90(void);
void check_timeout__14TBoss4DarkFalzFi(s32 arg0);
void request_action_7__14TBoss4DarkFalzFi(s32 arg0);
void request_action_9__14TBoss4DarkFalzFi(s32 arg0);
void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0);
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0);
void start_effect__14TBoss4DarkFalzFPv(void *arg0);
void update_parts__14TBoss4DarkFalzFPv(void* p);
void update_parts__14TBoss4DarkFalzFi(s32 arg0);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TBoss4DarkFalz__sub_8004B07C(s32);
s32 send_action_packet__14TBoss4DarkFalzFPvi(s32, s32);
s32 spawn_zako_rings__14TBoss4DarkFalzFPv(s32);
int refresh_player_equipment__14TBoss4DarkFalzFPv(void*);
int end_player_camera_pans__14TBoss4DarkFalzFPv(void*);
s32 stop_audio_streams__6TLobbyFv();
s32 play_persistent_sound(s32, s32, s32, s32, s32);
s32 is_timer_expired__14TBoss4DarkFalzFPv();

void TBoss4DarkFalz__sub_8004C93C(void) {  }

#pragma fp_contract on
void enter_demo2_phase__14TBoss4DarkFalzFPv(Obj_8004C940 *arg0) {
    u16 arr[4];
    Vec_8004C940 v;
    s32 flag;
    s32 i;
    ((s32 (*)(void))freeze_all_players__14TBoss4DarkFalzFPv)();
    stop_audio_streams__6TLobbyFv();
    if ((u32)TBoss4DarkFalz__data_805D4D60 != 0) {
        VecCopy__FP3VecPC3Vec(&v, (void *)VecCopy__FP3VecPC3Vec(&arg0->pos, (Vec_8004C940 *)(TBoss4DarkFalz__data_805D4D60 + 0x38)));
        v.y = lbl_805D8948;
        normalize_vector(&v);
        arg0->pos.x -= lbl_805D894C * v.x;
        arg0->pos.z -= lbl_805D894C * v.z;
        arg0->pos.y = lbl_805D8948;
        arg0->f3a8 = *(s32 *)(TBoss4DarkFalz__data_805D4D60 + 0x60);
    } else {
        arg0->pos.x = arg0->pos.y = arg0->pos.z = lbl_805D8948;
        arg0->f3a8 = 0;
    }
    flag = 0;
    if (game_difficulty_selection != 0) {
        flag = 1;
    }
    create_demo2__14TBoss4DarkFalzFPvPvPvPv(arg0, &arg0->pos, arg0->f3a8, flag);
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x35);
    if ((u32)TBoss4DarkFalz__data_805D4D60 != 0) {
        ((void (*)(void *, u16 *, u16 *, u16 *))get_demo2_params__14TBoss4DarkFalzFPvPvPvPv)((void *)TBoss4DarkFalz__data_805D4D60, &arg0->f2d6, &arg0->f2d4, arr);
        queue_destruction__7TObjectFv((void *)TBoss4DarkFalz__data_805D4D60);
        TBoss4DarkFalz__data_805D4D60 = 0;
        for (i = 0; i < 4; i++) {
            obj_setArrS16_FC(arg0, i, arr[i]);
        }
    }
    arg0->f380 = 0x118;
}

void TBoss4DarkFalz__sub_8004CA80(void) {  }

void request_action_9__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D60 == 0U) || (get_phase__14TBoss4DarkFalzFPv((void *)TBoss4DarkFalz__data_805D4D60) == 3) || (get_phase__14TBoss4DarkFalzFPv((void *)TBoss4DarkFalz__data_805D4D60) == 2) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        send_action_packet__14TBoss4DarkFalzFPvi((s32)(arg0), (s32)(9));
    }
}

void update_parts__14TBoss4DarkFalzFPv(void* p) { end_player_camera_pans__14TBoss4DarkFalzFPv((void*)(p)); refresh_player_equipment__14TBoss4DarkFalzFPv((void*)(p)); }

void update_spawn_type2_countdown__14TBoss4DarkFalzFPv(S_8004CB28 *o) {
    Arg_8004CB28 a;
    o->f380 = o->f380 - 1;
    if (o->f380 < 0) {
        a.owner = o;
        TBoss4DarkFalz__sub_8004B4F0(&a.d, (u8 *)&TBoss4DarkFalz__data_804FF1E8);
        a.d.a8 = 1;
        a.d.a0 = o->f2c + 0x1FF;
        a.d.a6 = o->f1c + 0x1FF;
        (*(void * *)&TBoss4DarkFalz__data_805D4D60) = create__11TBoss4Type2Fi(&a);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x34);
        change_state__14TBoss4DarkFalzFPvi(o, 8);
    }
}

void TBoss4DarkFalz__sub_8004CBBC(void) {  }

typedef char RecoveredGlobal_8004CBC0_lbl_80485448_size[sizeof(RecoveredGlobal_8004CBC0_lbl_80485448) == 0xC ? 1 : -1];
void start_demo1__14TBoss4DarkFalzFPv(u8 *arg0) {
    ((s32 (*)(void))freeze_all_players__14TBoss4DarkFalzFPv)();
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) != NULL) {
        create_demo1__14TBoss4DarkFalzFPvPvPv(arg0, (u8 *)((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C)) + 0x38, M2C_FIELD((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C), u8 **, 0x60));
    } else {
        create_demo1__14TBoss4DarkFalzFPvPvPv(arg0, &lbl_80485448.value, NULL);
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x33U);
    if ((void *) (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) != NULL) {
        queue_destruction__7TObjectFv((*(u8 * *)&TBoss4DarkFalz__data_805D4D5C));
        (*(u8 * *)&TBoss4DarkFalz__data_805D4D5C) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12C;
}

void spawn_ancient_trap__14TBoss4DarkFalzFi(s32 arg0) {
    if (((s32 (*)(void))TBoss4DarkFalz__sub_8004D990)() > 0) {
        play_persistent_sound((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x20), (s32)(2));
    }
}

void request_action_7__14TBoss4DarkFalzFi(s32 arg0) {
    if (((u32) TBoss4DarkFalz__data_805D4D5C == 0U) || (get_state__14TBoss4DarkFalzFPv((void *)TBoss4DarkFalz__data_805D4D5C) == 3) || (get_state__14TBoss4DarkFalzFPv((void *)TBoss4DarkFalz__data_805D4D5C) == 4) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        send_action_packet__14TBoss4DarkFalzFPvi((s32)(arg0), (s32)(7));
    }
}

void spawn_type1__14TBoss4DarkFalzFPv(Obj_8004CD08 *self) {
    Params_8004CD08 params;
    params.owner = self;
    TBoss4DarkFalz__sub_8004B4F0(&params.sub, (u8 *)&TBoss4DarkFalz__data_804FF1E8);
    params.sub.f8 = 1;
    params.sub.x = self->f2c + 0x200;
    params.sub.id = self->id + 0x200;
    TBoss4DarkFalz__data_805D4D5C = create__11TBoss4Type1Fi(&params);
    self->f380 = 0;
    end_player_camera_pans__14TBoss4DarkFalzFPv((void*)(self));
    refresh_player_equipment__14TBoss4DarkFalzFPv((void*)(self));
}

M2C_UNK create__11TObjDFDemo0FPv(void *);
extern M2C_UNK lbl_804372A4[];
extern const f32 lbl_805D8950;

void update_intro_demo__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
    if (temp_r0 < 4) {
        ((void (*)(void *, s32, f32))TBoss4DarkFalz__sub_8004B730)(arg0, 0xFFFFFF, (f32) (4 - temp_r0) * lbl_805D8950);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0x2D) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) {
            ((M2C_UNK (*)(M2C_UNK, M2C_UNK))TBoss4DarkFalz__sub_8004D9A0)(M2C_FIELD(arg0, u32 *, 0x394), 1);
        }
        create__11TObjDFDemo0FPv(arg0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0xB9) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) {
            ((M2C_UNK (*)(M2C_UNK, M2C_UNK))TBoss4DarkFalz__sub_8004D9A0)(M2C_FIELD(arg0, u32 *, 0x394), 2);
        }
        play_area_music(lbl_804372A4);
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x380);
    if (temp_r3 > 0x145) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x394));
            M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        }
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x32);
        change_state__14TBoss4DarkFalzFPvi(arg0, 6);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_r3 + 1);
}

void TBoss4DarkFalz__sub_8004CE90(void) {  }
void start_effect__14TBoss4DarkFalzFPv(void *arg0) {
    ((s32 (*)(void))freeze_all_players__14TBoss4DarkFalzFPv)();
    stop_audio_streams__6TLobbyFv();
    play_sound_effect(0x4003A80B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}
void spawn_trap__14TBoss4DarkFalzFi(s32 arg0) {
    play_persistent_sound((s32)(0x4003A30A), (s32)(arg0), (s32)(0), (s32)(-0x18), (s32)(2));
}
void check_timeout__14TBoss4DarkFalzFi(s32 arg0) {
    if ((is_timer_expired__14TBoss4DarkFalzFPv() != 0) || (TBoss4DarkFalz__sub_8004B07C(arg0) != 0)) {
        send_action_packet__14TBoss4DarkFalzFPvi((s32)(arg0), (s32)(5));
    }
}
void update_parts__14TBoss4DarkFalzFi(s32 arg0) {
    play_sound_effect(0x4003AD0C, 0, 0, 0);
    end_player_camera_pans__14TBoss4DarkFalzFPv((void*)(arg0));
    refresh_player_equipment__14TBoss4DarkFalzFPv((void*)(arg0));
    spawn_zako_rings__14TBoss4DarkFalzFPv(arg0);
}

extern const f32 lbl_805D8954;

void TBoss4DarkFalz__sub_8004CFC4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;

    temp_f1 = (f32) M2C_FIELD(arg0, s32 *, 0x380) / lbl_805D8954;
    TBoss4DarkFalz__sub_8004B730(arg0, temp_f1 * (temp_f1 * (temp_f1 * temp_f1)), 0xFFFFFF);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380) - 1;
    M2C_FIELD(arg0, s32 *, 0x380) = temp_r0;
    if (temp_r0 <= 0) {
        change_state__14TBoss4DarkFalzFPvi((void *) (arg0), (int) (4));
    }
}

}

struct Obj_8004D8C8 { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct Obj_8004D92C { u8 pad[0x2D4]; u16 f2d4; u16 f2d6; };

struct V_8004D1E4 { f32 x, y, z; };

extern "C" {
s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0);
u16 obj_getArrU16_FC(void *obj, s32 i);
void get_defeat_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out);
u16 obj_getArrU16_FC(void *obj, s32 i);
void get_demo2_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D92C *self, u16 *a, u16 *b, u16 *out);
void *get_player_data__10TObjPlayerFi(s32);
f32 horizontal_distance_squared(void *, void *);
extern s32 lbl_805D586C;
extern const f32 lbl_805D895C;
extern const f32 lbl_805D8960;
extern const f32 lbl_805D8964;
void check_players_near_center__14TBoss4DarkFalzFPv(void *self);
}

extern "C" {

void TBoss4DarkFalz__sub_8004D29C(void* p);
void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v);
void init_timer__14TBoss4DarkFalzFPv(void* a0);
void start_demo__14TBoss4DarkFalzFPv(void* p);
int push_players_out_of_zone__14TBoss4DarkFalzFii(void*, void*);
int refresh_player_equipment__14TBoss4DarkFalzFPv(void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int freeze_all_players__14TBoss4DarkFalzFPv(void*);
int set_dark_falz_music_request(void*);
int check_demo_mode__10TObjPlayerFv(void*);
int create__11TObjDFDemoFFPv(void*);
int create__14TObjDFUsoTowerFPv(void);
int fn_8036A514(void*);

    extern int lbl_805D4D68;
void init_timer__14TBoss4DarkFalzFPv(void* a0) { *(int*)((char*)a0 + 0x380) = 30; lbl_805D4D68 = 1; *(int*)((char*)a0 + 0x394) = create__14TObjDFUsoTowerFPv(); refresh_player_equipment__14TBoss4DarkFalzFPv(a0); }

extern const f32 lbl_805D8954;
extern const f32 lbl_805D8958;
void TBoss4DarkFalz__sub_8004D098(u8 *arg0) {
    f32 t;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    if (temp_r4 > 0x71) {
        t = (f32) (temp_r4 - 0x71) / lbl_805D8958;
        t *= t;
        ((void (*)(void *, s32, f32))TBoss4DarkFalz__sub_8004B730)(arg0, 0xFFFFFF, t);
    } else if (temp_r4 < 0x20) {
        t = TBoss4DarkFalz__data_805D893C - ((f32) (temp_r4 - 2) / lbl_805D8954);
        if (t > TBoss4DarkFalz__data_805D893C) {
            t = TBoss4DarkFalz__data_805D893C;
        }
        t *= t;
        ((void (*)(void *, s32, f32))TBoss4DarkFalz__sub_8004B730)(arg0, 0xFFFFFF, t);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x380) < 0) {
        change_state__14TBoss4DarkFalzFPvi((void *) (arg0), 3);
    }
}

void start_demo__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); push_players_out_of_zone__14TBoss4DarkFalzFii(p, (void*)1); freeze_all_players__14TBoss4DarkFalzFPv(p); create__11TObjDFDemoFFPv(p); set_dark_falz_music_request((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

void check_players_near_center__14TBoss4DarkFalzFPv(void *self) {
    V_8004D1E4 v;
    void *p;
    s32 i;
    f32 lim;
    v.x = lbl_805D895C;
    v.z = lbl_805D8960;
    lim = lbl_805D8964;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0 && horizontal_distance_squared(&v, (u8 *)p + 0x2FC) <= lim) {
            ((void (*)(void *, s32))send_action_packet__14TBoss4DarkFalzFPvi)(self, 2);
            return;
        }
    }
    if (((s32 (*)(void *))TBoss4DarkFalz__sub_8004B07C)(self) != 0) {
        ((void (*)(void *, s32))send_action_packet__14TBoss4DarkFalzFPvi)(self, 2);
    }
}

void TBoss4DarkFalz__sub_8004D29C(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { ((int (*)(void*, void*))change_state__14TBoss4DarkFalzFPvi)(p, (void*)1); } }

void get_defeat_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D8C8 *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}

void get_demo2_params__14TBoss4DarkFalzFPvPvPvPv(Obj_8004D92C *self, u16 *a, u16 *b, u16 *out) {
    s32 i;
    *a = self->f2d6;
    *b = self->f2d4;
    for (i = 0; i < 4; i++) {
        out[i] = obj_getArrU16_FC(self, i);
    }
}

s32 TBoss4DarkFalz__sub_8004D990(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x388) - M2C_FIELD(arg0, s32 *, 0x38C);
}

void TBoss4DarkFalz__sub_8004D9A0(void* p, s32 v) { *(s32*)((char*)p + 0x90) = v; }

}
