#include "pso/TSwitch.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TSwitch__sub_802292E0(s32 arg0);
s16 get_current_floor();
void TSwitch__sub_802292E0(s32 arg0);
void TSwitch__sub_802293A0(s32 arg0);
s16 get_current_floor();
void TSwitch__sub_802293A0(s32 arg0);
void TODoorAncient08__sub_80229220(s32 arg0);
u8 TSwitch__sub_802291F4(u32 id, s16 floor);
s16 get_current_floor();
void TODoorAncient08__sub_80229220(s32 arg0);
M2C_UNK memcpy(void *, void *, void *);
extern u8 TSwitch__data_80515CC8[18][32];
void TSwitch__sub_80229100(s32 arg0, s32 arg1);
M2C_UNK memset(void *, int, int);
extern u8 TSwitch__data_80515CC8[18][32];
void TSwitch__sub_8022942C(void);
M2C_UNK memset(void *, int, int);
extern u8 TSwitch__data_80515CC8[18][32];
void TSwitch__sub_8022945C(void);
extern u8 TSwitch__data_80515CC8[18][32];
M2C_UNK memcpy(void *, void *, void *);
u32 copy_switch_table(void* destination);
extern u8 TSwitch__data_80515CC8[18][32];
s32 get_floor_switch_flag(u32 id, s16 floor);
extern u8 TSwitch__data_80515CC8[18][32];
void clear_floor_switch_flag(u32 id, s16 floor);
extern u8 TSwitch__data_80515CC8[18][32];
void set_floor_switch_flag(u32 id, s16 floor);
}

extern "C" {

void *__ct__7TSwitchFv(void *arg0);
void render__7TSwitchFv(void);
void run_task__7TSwitchFv(void);
void __ct__7TObjectFP7TObject(void *);

void render__7TSwitchFv(void) {  }
void run_task__7TSwitchFv(void) {  }

void TSwitch__sub_80229100(s32 arg0, s32 arg1) {
    memcpy((void *) TSwitch__data_80515CC8, (void *) (arg0), (void *) (arg1));
}

u32 copy_switch_table(void* destination) {
    memcpy((void *)(destination), (void *)(TSwitch__data_80515CC8), (void *)(0x240));
    return 0x240;
}

s32 get_floor_switch_flag(u32 id, s16 floor) {
    u8 *row;
    s32 idx;
    s32 bit;
    if (floor < 0 || floor > 17) {
        return -1;
    }
    if ((u16)id > 0xFF) {
        return -1;
    }
    id++;
    row = TSwitch__data_80515CC8[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit > 0) {
        return (row[idx] & (1 << (8 - bit))) >> (8 - bit);
    }
    return row[idx - 1] & 1;
}

u8 TSwitch__sub_802291F4(u32 id, s16 floor) {
    return (u8) (get_floor_switch_flag((u32)(id), floor) != 0);
}

extern M2C_UNK __vt__7TSwitch[];
extern void *lbl_805D3728;

extern "C" {

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void TODoorAncient08__sub_80229220(s32 arg0) {
    TSwitch__sub_802291F4((u32)arg0, (s16)((s16)((int) (get_current_floor()))));
}

void clear_floor_switch_flag(u32 id, s16 floor) {
    u8 *row;
    s32 idx;
    s32 bit;
    if (floor < 0 || floor > 17) {
        return;
    }
    if ((u16)id > 0xFF) {
        return;
    }
    id++;
    row = TSwitch__data_80515CC8[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit != 0) {
        row[idx] &= ~(1 << (8 - bit));
    } else {
        row[idx - 1] &= ~1;
    }
}

void TSwitch__sub_802292E0(s32 arg0) {
    clear_floor_switch_flag((u32)((u32)arg0), (s16)((s16)((int) (get_current_floor()))));
}
}

extern "C" {

void set_floor_switch_flag(u32 id, s16 floor) {
    u8 *row;
    s32 idx;
    s32 bit;
    if (floor < 0 || floor > 17) {
        return;
    }
    if ((u16)id > 0xFF) {
        return;
    }
    id++;
    row = TSwitch__data_80515CC8[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit > 0) {
        row[idx] |= 1 << (8 - bit);
    } else {
        row[idx - 1] |= 1;
    }
}

void TSwitch__sub_802293A0(s32 arg0) {
    set_floor_switch_flag((u32)((u32)arg0), (s16)((s16)((int) (get_current_floor()))));
}
}

void *__ct__7TSwitchFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TSwitch;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3728;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}
void TSwitch__sub_8022942C(void) {
    memset((void *) TSwitch__data_80515CC8, (int) (0), (int) (0x240));
}
void TSwitch__sub_8022945C(void) {
    memset((void *) TSwitch__data_80515CC8, (int) (0), (int) (0x240));
}
TSwitch::~TSwitch() {}

}
