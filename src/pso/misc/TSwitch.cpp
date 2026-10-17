#include "pso/TSwitch.h"

#include "types.h"

extern "C" {
void clear_current_floor_switch(s32 arg0);
s32 get_current_floor(void);
void set_current_floor_switch(s32 arg0);
void is_current_floor_switch_set(s32 arg0);
u8 is_floor_switch_set(u32 id, s16 floor);
s32 memcpy(void *, void *, void *);
extern u8 TSwitch__floor_switch_table[18][32];
void restore_switch_table(s32 arg0, s32 arg1);
s32 memset(void *, int, int);
void clear_switch_table(void);
void init_switch_table(void);
u32 copy_switch_table(void* destination);
s32 get_floor_switch_flag(u32 id, s16 floor);
void clear_floor_switch_flag(u32 id, s16 floor);
void set_floor_switch_flag(u32 id, s16 floor);
void *__ct__7TSwitchFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

void TSwitch::render() {  }
void TSwitch::run_task() {  }

void restore_switch_table(s32 arg0, s32 arg1) {
    memcpy((void *) TSwitch__floor_switch_table, (void *) (arg0), (void *) (arg1));
}

u32 copy_switch_table(void* destination) {
    memcpy((void *)(destination), (void *)(TSwitch__floor_switch_table), (void *)(0x240));
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
    row = TSwitch__floor_switch_table[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit > 0) {
        return (row[idx] & (1 << (8 - bit))) >> (8 - bit);
    }
    return row[idx - 1] & 1;
}

u8 is_floor_switch_set(u32 id, s16 floor) {
    return (u8) (get_floor_switch_flag((u32)(id), floor) != 0);
}

extern s32 __vt__7TSwitch[];
extern void *TSwitch__name;

extern "C" {

void is_current_floor_switch_set(s32 id) {
    is_floor_switch_set((u32)id, (s16)((s16)((int) (get_current_floor()))));
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
    row = TSwitch__floor_switch_table[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit != 0) {
        row[idx] &= ~(1 << (8 - bit));
    } else {
        row[idx - 1] &= ~1;
    }
}

void clear_current_floor_switch(s32 id) {
    clear_floor_switch_flag((u32)((u32)id), (s16)((s16)((int) (get_current_floor()))));
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
    row = TSwitch__floor_switch_table[floor];
    idx = (u16)id / 8;
    bit = (u16)id % 8;
    if (bit > 0) {
        row[idx] |= 1 << (8 - bit);
    } else {
        row[idx - 1] |= 1;
    }
}

void set_current_floor_switch(s32 id) {
    set_floor_switch_flag((u32)((u32)id), (s16)((s16)((int) (get_current_floor()))));
}
}

void *__ct__7TSwitchFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__7TSwitch;
    *(void * *)&((TSwitch *)arg0)->m_name = TSwitch__name;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}
void clear_switch_table(void) {
    memset((void *) TSwitch__floor_switch_table, (int) (0), (int) (0x240));
}
void init_switch_table(void) {
    memset((void *) TSwitch__floor_switch_table, (int) (0), (int) (0x240));
}
TSwitch::~TSwitch() {}

}
