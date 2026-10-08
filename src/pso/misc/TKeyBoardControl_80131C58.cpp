#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80131C5C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
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

extern "C" {
void render__16TKeyBoardControlFv(void);
void render__16TKeyBoardControlFv(void);
M2C_UNK TKeyBoardControl__sub_803F0E90(s32, M2C_UNK);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);
void disable_disconnected_ports__16TKeyBoardControlFv(void);
bool TKeyBoardControl__sub_801321B4(s32);
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0);
bool TKeyBoardControl__sub_801322E4(s32 arg0);
s32 TKeyBoardControl__sub_80132310(s32 arg0);
u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_80132824(s32);
M2C_UNK TKeyBoardControl__sub_803F0C50();
M2C_UNK fn_803F1864(M2C_UNK *);
void reset_input__16TKeyBoardControlFi(s32 arg0);
M2C_UNK TKeyBoardControl__sub_803F0E90(s32, M2C_UNK);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);
void TKeyBoardControl__sub_801327DC(M2C_UNK arg0, u8 arg1);
int is_key_held__16TKeyBoardControlFPv(void* p);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
M2C_UNK request_close__19TWindowSubTradeMainFPv(void *);
M2C_UNK window_request_show(void *);
s32 is_player_input_active(int);
M2C_UNK TKeyBoardControl__sub_8025EC04(int);
extern RecoveredGlobal_80131C5C_lbl_8050E208 lbl_8050E208;
void run_task__16TKeyBoardControlFv(u8 *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_801320CC(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_801328C4(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_801328F8(void);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
bool TKeyBoardControl__sub_80132274(s32 arg0);
void TKeyBoardControl__sub_8013206C(Obj_8013206C *arg0);
s32 TKeyBoardControl__sub_80132368(K_80132368 *arg0);
u8 TKeyBoardControl__sub_8013239C(K_8013239C *arg0, u8 arg1);
s32 TKeyBoardControl__sub_801323C8(K_801323C8 *arg0, u8 arg1);
void TKeyBoardControl__sub_8013276C(K_8013276C *arg0);
s8 TKeyBoardControl__sub_803F1548(s32);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);
s32 TKeyBoardControl__sub_80131FC8(Kb_80131FC8 *arg0, s8 arg1);
void TKeyBoardControl__sub_8013240C(Kb_801324F8 *, u8);
void TKeyBoardControl__sub_801324F8(Kb_801324F8 *arg0, u8 arg1);
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0);
void TKeyBoardControl__sub_80132598(Kb_80132650 *, u8, u32 *);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
void TKeyBoardControl__sub_8013276C(K_8013276C *arg0);
void TKeyBoardControl__sub_80132650(Kb_80132650 *kb);
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
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv();
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);

extern M2C_UNK __vt__16TKeyBoardControl[];

void render__16TKeyBoardControlFv(void) {  }

typedef char RecoveredGlobal_80131C5C_lbl_8050E208_size[sizeof(RecoveredGlobal_80131C5C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__16TKeyBoardControlFv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r5;
    temp_r3 = is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x1E)));
    if (M2C_FIELD(arg0, u16 *, 0x1C) & 1) {
        temp_r5 = temp_r3 * 0x50;
        if (TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + temp_r5 + 0x20), (int) (0x200), (int) (temp_r5)) != 0) {
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) & 0xFFFE);
            TKeyBoardControl__sub_8025EC04((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
                window_request_show(M2C_FIELD(arg0, void **, 0x28));
            }
        }
    } else if (((s32)is_key_held__16TKeyBoardControlFPv((void*)((int) (M2C_FIELD(arg0, s32 *, 0x24))))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) | 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            request_close__19TWindowSubTradeMainFPv(M2C_FIELD(arg0, void **, 0x28));
        }
    }
}

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TKeyBoardControl;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x20)); }
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

s32 TKeyBoardControl__sub_80131FC8(Kb_80131FC8 *arg0, s8 arg1) {
    s32 r;
    u8 *p;
    if (arg0->f3 >= 0x7C) {
        return 1;
    }
    r = TKeyBoardControl__sub_803F1604((s32)(arg1), (M2C_UNK *)((s32 *)&arg0->buf[arg0->f3]));
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

void TKeyBoardControl__sub_8013206C(Obj_8013206C *arg0) {
    s32 i = 0;
    arg0->f4 = arg0->f4 + 1;
    do {
        if (((s32)TKeyBoardControl__sub_80131FC8((Kb_80131FC8 *)((void *)(arg0)), (s8)((s8)(i)))) != 0) {
            return;
        }
        i++;
    } while (i < 4);
    arg0->f0 = 4;
}

void TKeyBoardControl__sub_801320CC(void) { TKeyBoardControl__sub_8013206C((Obj_8013206C *)((void *)((void *) (&TKeyBoardControl__data_80506270.value)))); }

void disable_disconnected_ports__16TKeyBoardControlFv(void) {
    M2C_UNK sp8;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = 0;
    do {
        temp_r3 = TKeyBoardControl__sub_803F1604(var_r31, &sp8);
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
    if (((s32 (*)(s32))TKeyBoardControl__sub_801322E4)((s32)(arg0)) != 0) {
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
    if (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__data_80506270.value)) == 0) {
        return 0;
    }
    if ((get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__data_80506270.value)) == 2) || (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__data_80506270.value)) == 4) || (get_key_state__16TKeyBoardControlFPv((void *)(&TKeyBoardControl__data_80506270.value)) == 3)) {
        return 0;
    }
    return TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x5BU))) != 0;
}

typedef char RecoveredGlobal_80132274_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
bool TKeyBoardControl__sub_80132274(s32 arg0) {
    if ((get_key_state__16TKeyBoardControlFPv((void*)(&(*(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)) == 0) || (get_key_state__16TKeyBoardControlFPv((void*)(&(*(RecoveredGlobal_80132274_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)) == 1)) {
        return 0;
    }
    return ((s32)TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x5BU)))) != 0;
}

bool TKeyBoardControl__sub_801322E4(s32 arg0) {
    return TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x57U))) != 0;
}
s32 TKeyBoardControl__sub_80132310(s32 arg0) {
    if ((TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x54U))) != 0) || (TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)(arg0)), (u8)((int)(0x55U))) != 0)) {
        return 1;
    }
    return 0;
}

s32 TKeyBoardControl__sub_80132368(K_80132368 *arg0) {
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
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;
    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((K_801323C8 *)((void *)((void *) (arg0))), (u8)((int)((int) (M2C_FIELD(var_r28, u8 *, 0))))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}

void TKeyBoardControl__sub_801324F8(Kb_801324F8 *arg0, u8 arg1) {
    Ent_801324F8 *p;
    Ent_801324F8 *q;
    s32 i;
    p = arg0->ents;
    for (i = 0; i < 8; i++, p++) {
        if (p->key == arg1) {
            p->timer--;
            if (p->timer <= 0) {
                TKeyBoardControl__sub_8013240C(arg0, arg1);
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
        TKeyBoardControl__sub_8013276C((K_8013276C *)kb);
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

void TKeyBoardControl__sub_8013276C(K_8013276C *arg0) {
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

void TKeyBoardControl__sub_801327DC(M2C_UNK arg0, u8 arg1) {
    M2C_UNK sp8;
    if (TKeyBoardControl__sub_803F1604((s32)((void *) (arg1)), (M2C_UNK *)((void *) (&sp8))) == 0) {
        TKeyBoardControl__sub_803F0E90((s32)((void *) (arg1)), (M2C_UNK)((int) (0)));
    }
}

void reset_input__16TKeyBoardControlFi(s32 arg0) {
    TKeyBoardControl__sub_803F0C50();
    TKeyBoardControl__sub_80132824(arg0);
    fn_803F1864(((M2C_UNK *)TKeyBoardControl__sub_801320CC));
}
typedef char RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_801328C4(void) {
    TKeyBoardControl__sub_8013276C((K_8013276C *)((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
}
typedef char RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_801328F8(void) {
    TKeyBoardControl__sub_8013276C((K_8013276C *)((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
}

}
