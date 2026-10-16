#include "types.h"
#include "pso/misc/TWindowLockOn.h"
#include "pso/misc/TKeyBoardControl.h"
#include "pso/misc/TWindowKeyBoardSoft.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"

struct RecoveredGlobal_80131C5C_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct Obj_8013206C { s8 f0; u8 pad1[3]; u8 f4; };

struct K_80132368 { u8 pad[0x90]; u32 tab[4]; };

struct K_8013239C { u8 pad0[2]; u8 count; u8 pad3[0x82]; u8 tab[1]; };

struct K_801323C8 { u8 pad[0x90]; u32 bits[8]; };

struct P_8013276C { u8 a; u8 b; };

struct K_8013276C { u8 pad0[2]; u8 f2; u8 pad3[0x82]; u8 t85[8]; u32 t90[4]; P_8013276C p[8]; };

typedef struct Kb_80131FC8 { s8 f0; s8 f1; u8 pad; u8 f3; u8 pad2; u8 buf[0x80]; } Kb_80131FC8;

typedef struct Ent_801324F8 { u8 key; s8 timer; } Ent_801324F8;

typedef struct Kb_801324F8 { u8 pad[0xA0]; Ent_801324F8 ents[8]; } Kb_801324F8;

struct Kb_80132650 {
    s8 f0;
    u8 pad1;
    s8 f2;
    u8 count;
    s8 f4;
    u8 keys[0x8B];
    u32 tab[4];
};

struct K_8013276C;
extern "C" {
void render__16TKeyBoardControlFv(void);
void render__16TKeyBoardControlFv(void);
s32 TKeyBoardControl__sub_803F0E90(s32, s32);
s32 poll_keyboard_port(s32, s32 *);
void disable_disconnected_ports__16TKeyBoardControlFv(void);
bool TKeyBoardControl__sub_801321B4(s32);
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0);
bool is_key_57_pressed__16TKeyBoardControlFi(s32 arg0);
s32 TKeyBoardControl__sub_80132310(s32 arg0);
u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
s32 fn_803F1864(s32 *);
void reset_input__16TKeyBoardControlFi(s32 arg0);
s32 TKeyBoardControl__sub_803F0E90(s32, s32);
s32 poll_keyboard_port(s32, s32 *);
void TKeyBoardControl__sub_801327DC(s32 arg0, u8 arg1);
int is_key_held__16TKeyBoardControlFPv(void* p);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
s32 window_request_show(void *);
s32 is_player_input_active(int);
s32 TKeyBoardControl__sub_8025EC04(int);
extern RecoveredGlobal_80131C5C_lbl_8050E208 controller_input_state;
void run_task__16TKeyBoardControlFv(u8 *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void append_next_char_global__16TKeyBoardControlFv(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void reset_global_keys_a__16TKeyBoardControlFv(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void reset_global_keys_b__16TKeyBoardControlFv(void);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
bool TKeyBoardControl__sub_80132274(s32 arg0);
void append_next_char__16TKeyBoardControlFPv(Obj_8013206C *arg0);
s32 has_any_key_pressed__16TKeyBoardControlFPv(K_80132368 *arg0);
u8 TKeyBoardControl__sub_8013239C(K_8013239C *arg0, u8 arg1);
s32 TKeyBoardControl__sub_801323C8(K_801323C8 *arg0, u8 arg1);
void clear_key_state__16TKeyBoardControlFPv(K_8013276C *arg0);
s8 TKeyBoardControl__sub_803F1548(s32);
s32 poll_keyboard_port(s32, s32 *);
s32 append_char__16TKeyBoardControlFPvc(Kb_80131FC8 *arg0, s8 arg1);
void tick_key_repeat_timer__16TKeyBoardControlFPvUc(Kb_801324F8 *arg0, u8 arg1);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void TKeyBoardControl__sub_80132598(Kb_80132650 *, u8, u32 *);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
void clear_key_state__16TKeyBoardControlFPv(K_8013276C *arg0);
void TKeyBoardControl__sub_80132650(Kb_80132650 *kb);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void push_key_to_buffer__16TKeyBoardControlFPvUc(Kb_801324F8 *self, u8 arg1);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
void clear_key_state__16TKeyBoardControlFPv(K_8013276C *arg0);
void TKeyBoardControl__sub_801327DC(s32 arg0, u8 arg1);
void reset_state__16TKeyBoardControlFi(s32 arg0);
}

extern "C" {

void TKeyBoardControl__sub_80131F5C(void);
void TKeyBoardControl__sub_80131F60(void);
void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1);
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p);
int is_active__16TKeyBoardControlFPv(void* p);
int is_key_active__16TKeyBoardControlFPv(void* p);
int is_key_held__16TKeyBoardControlFPv(void* p);
void set_flag60_bit200__16TKeyBoardControlFPv(void* p);
void set_flag62_bit2__16TKeyBoardControlFPv(void* p);
void set_flag62_bit8__16TKeyBoardControlFPv(void* p);
s32 export_keyboard_text(s32, s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 mem_alloc();

extern s32 __vt__16TKeyBoardControl[];

void render__16TKeyBoardControlFv(void) {  }

typedef char RecoveredGlobal_80131C5C_lbl_8050E208_size[sizeof(RecoveredGlobal_80131C5C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__16TKeyBoardControlFv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    temp_r3 = is_player_input_active((int) (*(s16 *)((s8 *)arg0 + 0x1E)));
    if (*(u16 *)((s8 *)arg0 + 0x1C) & 1) {
        temp_r5 = temp_r3 * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + temp_r5 + 0x20), (int) (0x200), (int) (temp_r5)) != 0) {
            *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (*(u16 *)((s8 *)arg0 + 0x1C) & 0xFFFE);
            TKeyBoardControl__sub_8025EC04((int) (*(s32 *)((s8 *)arg0 + 0x24)));
            if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
                window_request_show(*(void **)((s8 *)arg0 + 0x28));
            }
        }
    } else if (((s32)is_key_held__16TKeyBoardControlFPv((void*)((int) (*(s32 *)((s8 *)arg0 + 0x24))))) == 0) {
        *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (*(u16 *)((s8 *)arg0 + 0x1C) | 1);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            ((TWindowLockOn *)(*(void **)((s8 *)arg0 + 0x28)))->request_close();
        }
    }
}

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TKeyBoardControl;
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x28)); }
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x24)); }
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x20)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TKeyBoardControl__sub_80131F5C(void) {  }
void TKeyBoardControl__sub_80131F60(void) {  }
void set_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) |= 0x200; }
void clear_flag60_bit200__16TKeyBoardControlFPv(void* p) { *(u32*)((char*)p + 0x60) &= 0xfffffdff; }
int is_key_held__16TKeyBoardControlFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 8) & 0x1; }
void set_flag62_bit2__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x2; }
int is_active__16TKeyBoardControlFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 5) & 0x1; }
int is_key_active__16TKeyBoardControlFPv(void* p) { return *(u16*)((char*)p + 0x60) & 0x1; }
void set_flag62_bit8__16TKeyBoardControlFPv(void* p) { *(u16*)((char*)p + 0x62) |= 0x8; }

typedef char RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];

s32 append_char__16TKeyBoardControlFPvc(Kb_80131FC8 *arg0, s8 arg1) {
    s32 r;
    u8 *p;
    if (arg0->f3 >= 0x7C) {
        return 1;
    }
    r = poll_keyboard_port((s32)(arg1), (s32 *)((s32 *)&arg0->buf[arg0->f3]));
    if (r == -1) {
        return 0;
    }
    if (r == 0) {
        p = arg0->buf;
        while (*p != 0) {
            p++;
            arg0->f3++;
        }
    }
    arg0->f1 = TKeyBoardControl__sub_803F1548(arg1);
    arg0->f0 = arg1;
    return 1;
}

void append_next_char__16TKeyBoardControlFPv(Obj_8013206C *arg0) {
    s32 i = 0;
    arg0->f4 = arg0->f4 + 1;
    do {
        if (((s32)append_char__16TKeyBoardControlFPvc((Kb_80131FC8 *)((void *)(arg0)), (s8)((s8)(i)))) != 0) {
            return;
        }
        i++;
    } while (i < 4);
    arg0->f0 = 4;
}

void append_next_char_global__16TKeyBoardControlFv(void) { append_next_char__16TKeyBoardControlFPv((Obj_8013206C *)((void *)((void *) (&TKeyBoardControl__global_key_state.value)))); }

void disable_disconnected_ports__16TKeyBoardControlFv(void) {
    s32 sp8;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = 0;
    do {
        temp_r3 = poll_keyboard_port(var_r31, &sp8);
        if ((temp_r3 == -1) || (temp_r3 == -0x80)) {
            TKeyBoardControl__sub_803F0E90(var_r31, 0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0) {
    if (TKeyBoardControl__sub_80132310((s32)(arg0)) != 0) {
        return 0;
    }
    if (((s32 (*)(s32))is_key_57_pressed__16TKeyBoardControlFi)((s32)(arg0)) != 0) {
        return 0;
    }
    if (((s32 (*)(s32))TKeyBoardControl__sub_801321B4)(arg0) != 0) {
        return 0;
    }
    return 1;
}
bool TKeyBoardControl__sub_801321B4(s32 arg0) {
    if (TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x56U))) != 0) {
        return 1;
    }
    if (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__global_key_state.value)) == 0) {
        return 0;
    }
    if ((get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__global_key_state.value)) == 2) || (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__global_key_state.value)) == 4) || (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__global_key_state.value)) == 3)) {
        return 0;
    }
    return TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x5BU))) != 0;
}

typedef char RecoveredGlobal_80132274_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
bool TKeyBoardControl__sub_80132274(s32 arg0) {
    if ((get_key_state__16TKeyBoardControlFPv((void*)(&(*(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)) == 0) || (get_key_state__16TKeyBoardControlFPv((void*)(&(*(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)) == 1)) {
        return 0;
    }
    return ((s32)TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x5BU)))) != 0;
}

bool is_key_57_pressed__16TKeyBoardControlFi(s32 arg0) {
    return TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x57U))) != 0;
}
s32 TKeyBoardControl__sub_80132310(s32 arg0) {
    if ((TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x54U))) != 0) || (TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x55U))) != 0)) {
        return 1;
    }
    return 0;
}

s32 has_any_key_pressed__16TKeyBoardControlFPv(K_80132368 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (arg0->tab[i] != 0) {
            return 1;
        }
    }
    return 0;
}

u8 TKeyBoardControl__sub_8013239C(K_8013239C *arg0, u8 arg1) {
    if (arg1 >= arg0->count) {
        return 0;
    }
    return arg0->tab[arg1];
}

u8 get_key_state_2__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x2); }

s32 TKeyBoardControl__sub_801323C8(K_801323C8 *arg0, u8 arg1) {
    return (arg0->bits[arg1 / 32] & (1 << (arg1 % 32))) != 0 ? 1 : 0;
}

u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }

void push_key_to_buffer__16TKeyBoardControlFPvUc(Kb_801324F8 *self, u8 arg1) {
    K_8013239C *arg0 = (K_8013239C *)self;
    u8 t;
    if ((get_key_state__16TKeyBoardControlFPv(&TKeyBoardControl__global_key_state) != 0 && arg1 == 0x5B) || (u8)(arg1 - 0x54) <= 2 || arg1 == 0x57) {
        return;
    }
    t = arg0->count;
    if (t < 8) {
        arg0->count = t + 1;
        arg0->tab[t] = arg1;
    }
}

void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;
    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)((void *) (arg0))), (u8)((int)((int) (*(u8 *)((s8 *)var_r28 + 0))))) == 0) {
            *(u8 *)((s8 *)var_r28 + 0) = 0U;
            *(s8 *)((s8 *)var_r28 + 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}

void tick_key_repeat_timer__16TKeyBoardControlFPvUc(Kb_801324F8 *arg0, u8 arg1) {
    Ent_801324F8 *p;
    Ent_801324F8 *q;
    s32 i;
    p = arg0->ents;
    for (i = 0; i < 8; i++, p++) {
        if (p->key == arg1) {
            p->timer--;
            if (p->timer <= 0) {
                push_key_to_buffer__16TKeyBoardControlFPvUc((Kb_801324F8 *)(arg0), arg1);
                p->timer += 6;
            }
            return;
        }
    }
    q = arg0->ents;
    for (i = 0; i < 8; i++, q++) {
        if (q->key == 0) {
            q->key = arg1;
            q->timer = 0x23;
        }
    }
}

struct K_8013276C;
void TKeyBoardControl__sub_80132650(Kb_80132650 *kb) {
    u32 bits[4];
    s32 i;
    if (kb->f4 <= 0) {
        kb->f2 = 0;
        return;
    }
    kb->f4 = 0;
    if (kb->f0 >= 4) {
        clear_key_state__16TKeyBoardControlFPv((K_8013276C *)kb);
        reset_keys__16TKeyBoardControlFPv(kb);
        return;
    }
    kb->f2 = 0;
    for (i = 0; i < 4; i++) {
        bits[i] = 0;
    }
    for (i = 0; i < kb->count; i++) {
        TKeyBoardControl__sub_80132598(kb, kb->keys[i], bits);
        kb->keys[i] = 0;
    }
    kb->count = 0;
    for (i = 0; i < 4; i++) {
        kb->tab[i] = bits[i];
    }
    reset_inactive_keys__16TKeyBoardControlFi((s32)kb);
}

void reset_keys__16TKeyBoardControlFPv(void *arg0) {
    s32 i;
    ((u8 *)arg0)[4] = 0;
    ((u8 *)arg0)[3] = 0;
    for (i = 0; i < 128; i++) {
        ((u8 *)arg0)[i + 5] = 0;
    }
}

void clear_key_state__16TKeyBoardControlFPv(K_8013276C *arg0) {
    s32 i;
    arg0->f2 = 0;
    for (i = 0; i < 8; i++) {
        arg0->t85[i] = 0;
    }
    for (i = 0; i < 8; i++) {
        arg0->p[i].a = 0;
        arg0->p[i].b = 0x23;
    }
    for (i = 0; i < 4; i++) {
        arg0->t90[i] = 0;
    }
}

void TKeyBoardControl__sub_801327DC(s32 arg0, u8 arg1) {
    s32 sp8;
    if (poll_keyboard_port((s32)((void *) (arg1)), (s32 *)((void *) (&sp8))) == 0) {
        TKeyBoardControl__sub_803F0E90((s32)((void *) (arg1)), (s32)((int) (0)));
    }
}

#pragma push
#pragma opt_loop_invariants off
void reset_state__16TKeyBoardControlFi(s32 arg0) {
    s32 i;
    ((u8 *)arg0)[0] = 4;
    ((u8 *)arg0)[1] = 1;
    clear_key_state__16TKeyBoardControlFPv((K_8013276C *)arg0);
    reset_keys__16TKeyBoardControlFPv((void *)arg0);
    for (i = 0; i < 4; i++) {
        TKeyBoardControl__sub_801327DC((s32)arg0, i);
    }
}
#pragma pop

void reset_input__16TKeyBoardControlFi(s32 arg0) {
    TKeyBoardControl::init_pad_states();
    reset_state__16TKeyBoardControlFi((s32)(arg0));
    fn_803F1864(((s32 *)append_next_char_global__16TKeyBoardControlFv));
}
typedef char RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void reset_global_keys_a__16TKeyBoardControlFv(void) {
    clear_key_state__16TKeyBoardControlFPv((K_8013276C *)((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value));
}
typedef char RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void reset_global_keys_b__16TKeyBoardControlFv(void) {
    clear_key_state__16TKeyBoardControlFPv((K_8013276C *)((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value));
}

}
