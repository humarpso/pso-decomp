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

extern "C" {
void render__16TKeyBoardControlFv(void);
void render__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_80131FC8(void);
M2C_UNK TKeyBoardControl__sub_803F0E90(s32, M2C_UNK);
s32 TKeyBoardControl__sub_803F1604(s32, M2C_UNK *);
void disable_disconnected_ports__16TKeyBoardControlFv(void);
s32 TKeyBoardControl__sub_801321B4(s32);
s32 check_input_ready__16TKeyBoardControlFi(s32 arg0);
int TKeyBoardControl__sub_801322E4(s32 _w0);
s32 TKeyBoardControl__sub_80132310(s32 arg0);
int TKeyBoardControl__sub_80132368(void);
int TKeyBoardControl__sub_8013239C(void);
u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
int TKeyBoardControl__sub_801323C8(void *, int);
u8 get_key_state__16TKeyBoardControlFPv(void* p);
int TKeyBoardControl__sub_801323C8(void *, int);
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
M2C_UNK TWindowSubTradeMain__sub_80244A4C(void *);
M2C_UNK window_request_show(void *);
s32 is_player_input_active(int);
M2C_UNK TKeyBoardControl__sub_8025EC04(int);
extern RecoveredGlobal_80131C5C_lbl_8050E208 lbl_8050E208;
void run_task__16TKeyBoardControlFv(u8 *arg0);
int TKeyBoardControl__sub_8013206C(void *);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
int TKeyBoardControl__sub_801320CC(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8013276C(void *);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_801328C4(void);
void reset_keys__16TKeyBoardControlFPv(void *arg0);
M2C_UNK TKeyBoardControl__sub_8013276C(void *);
extern RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void TKeyBoardControl__sub_801328F8(void);
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
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
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
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, void **, 0x28));
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
int TKeyBoardControl__sub_80131FC8(void) { return 0; }
int TKeyBoardControl__sub_8013206C(void * _w0) { return 0; }

typedef char RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801320CC_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
int TKeyBoardControl__sub_801320CC(void) { return TKeyBoardControl__sub_8013206C((void *)((void *) (&TKeyBoardControl__data_80506270.value))); }

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
    if (TKeyBoardControl__sub_801322E4((s32)(arg0)) != 0) {
        return 0;
    }
    if (TKeyBoardControl__sub_801321B4(arg0) != 0) {
        return 0;
    }
    return 1;
}
int TKeyBoardControl__sub_801322E4(s32 _w0) { return 0; }
s32 TKeyBoardControl__sub_80132310(s32 arg0) {
    if ((TKeyBoardControl__sub_801323C8((void *)(arg0), (int)(0x54U)) != 0) || (TKeyBoardControl__sub_801323C8((void *)(arg0), (int)(0x55U)) != 0)) {
        return 1;
    }
    return 0;
}
int TKeyBoardControl__sub_80132368(void) { return 0; }
int TKeyBoardControl__sub_8013239C(void) { return 0; }
u8 get_key_state_2__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x2); }
int TKeyBoardControl__sub_801323C8(void *, int) { return 0; }
u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }
void reset_inactive_keys__16TKeyBoardControlFi(s32 arg0) {
    s32 var_r29;
    u8 *var_r28;
    var_r29 = 0;
    var_r28 = (unsigned char *) (arg0 + 0xA0);
    do {
        if (TKeyBoardControl__sub_801323C8((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(var_r28, u8 *, 0)))) == 0) {
            M2C_FIELD(var_r28, u8 *, 0) = 0U;
            M2C_FIELD(var_r28, s8 *, 1) = 0x23;
        }
        var_r29 += 1;
        var_r28 += 2;
    } while (var_r29 < 8);
}
void reset_keys__16TKeyBoardControlFPv(void *arg0) {
    s32 i;
    ((u8 *)arg0)[4] = 0;
    ((u8 *)arg0)[3] = 0;
    for (i = 0; i < 128; i++) {
        ((u8 *)arg0)[i + 5] = 0;
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
    TKeyBoardControl__sub_8013276C((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328C4_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
}
typedef char RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_801328F8(void) {
    TKeyBoardControl__sub_8013276C((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
    reset_keys__16TKeyBoardControlFPv((void *) (&(*(RecoveredGlobal_801328F8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
}

}
