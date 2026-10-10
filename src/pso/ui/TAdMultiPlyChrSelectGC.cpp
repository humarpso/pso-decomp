#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802DFF0C___vt__22TAdMultiPlyChrSelectGC {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802DFD9C___vt__22TAdMultiPlyChrSelectGC { M2C_UNK value; u8 remaining[0x14]; };

struct O_802DFFE8 { u8 pad[0x4ac]; s32 tbl[4][3]; u8 pad2[0x4ec - 0x4ac - 0x30]; s32 idx; };

struct O_802E0024 { u8 pad[0x4ac]; s32 tbl[4][3]; u8 pad2[0x4ec - 0x4ac - 0x30]; s32 idx; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
extern u8 *TAdMultiPlyChrSelectGC__instance;
u8 *get_or_create__22TAdMultiPlyChrSelectGCFii(s32 arg0, s32 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
void create_widgets__22TAdMultiPlyChrSelectGCFPv(void *);
void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
s32 get_select_flag__22TAdMultiPlyChrSelectGCFv(void);
extern RecoveredGlobal_802DFF0C___vt__22TAdMultiPlyChrSelectGC __vt__22TAdMultiPlyChrSelectGC;
extern s32 lbl_805D3F68;
u8 *TAdMultiPlyChrSelectGC__ct(u8 *arg0, u8 *arg1, s32 arg2);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(s32);
int get_global_state__22TAdMultiPlyChrSelectGCFv(void);
M2C_UNK __dt__7TObjectFv(void *, int);
extern RecoveredGlobal_802DFF0C___vt__22TAdMultiPlyChrSelectGC __vt__22TAdMultiPlyChrSelectGC;
extern u8 *TAdMultiPlyChrSelectGC__instance;
u8 *__dt__22TAdMultiPlyChrSelectGCFv(u8 *arg0, s16 arg1);
extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(O_802DFFE8 *self);
extern s32 TAdMultiPlyChrSelectGC__data_805D67D8;
void TAdMultiPlyChrSelectGC__sub_802E0024(O_802E0024 *self, s32 v);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv(void);
extern s32 lbl_805D68C8;
void initialize_selection_state__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
}

extern "C" {

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_instance__22TAdMultiPlyChrSelectGCFv(void);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p);
void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1);
void set_state__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p);
M2C_UNK split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(void *, s32 *, s32 *);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C();
void * TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK init__22TAdMultiPlyChrSelectGCFv();
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi();
M2C_UNK set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(s32, s32);

void handle_event__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    switch (arg1) {
    case 10:
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
        split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(temp_r3, &sp14, &sp10);
        init__22TAdMultiPlyChrSelectGCFv();
        set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), sp14);
        TAdMultiPlyChrSelectGC__sub_802E0024((O_802E0024 *)(M2C_FIELD(arg0, s32 *, 0x5C)), (s32)(sp10));
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    case 4:
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) {
            temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
            split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(temp_r3, &spC, &sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), spC);
            TAdMultiPlyChrSelectGC__sub_802E0024((O_802E0024 *)(M2C_FIELD(arg0, s32 *, 0x5C)), (s32)(sp8));
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    }
}

    extern int TAdMultiPlyChrSelectGC__selected_slot;

typedef char RecoveredGlobal_802DFF0C___vt__22TAdMultiPlyChrSelectGC_size[sizeof(RecoveredGlobal_802DFF0C___vt__22TAdMultiPlyChrSelectGC) == 0x18 ? 1 : -1];

#pragma push
#pragma optimization_level 2
#pragma opt_propagation off
#pragma dont_inline on
void initialize_selection_state__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    s32 v;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = 2;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    v = get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x4C) = v;
    M2C_FIELD(arg0, s32 *, 0x2C) = 2;
    v = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    M2C_FIELD(arg0, s32 *, 0x74) = v;
    lbl_805D68C8 = v;
    M2C_FIELD(arg0, s32 *, 0x50) = v;
    M2C_FIELD(arg0, s32 *, 0x54) = 1;
    M2C_FIELD(arg0, s32 *, 0x68) = v;
    M2C_FIELD(arg0, s32 *, 0x60) = v;
    M2C_FIELD(arg0, s32 *, 0x5C) = v;
    M2C_FIELD(arg0, s32 *, 0x78) = v;
    M2C_FIELD(arg0, s32 *, 0x70) = v;
    M2C_FIELD(arg0, s32 *, 0x7C) = v;
    M2C_FIELD(arg0, s32 *, 0x80) = v;
    M2C_FIELD(arg0, s32 *, 0x84) = v;
    M2C_FIELD(arg0, s32 *, 0x88) = v;
    M2C_FIELD(arg0, s32 *, 0x8C) = v;
    M2C_FIELD(arg0, s32 *, 0x90) = v;
    M2C_FIELD(arg0, s32 *, 0x94) = v;
    M2C_FIELD(arg0, s32 *, 0x98) = v;
    M2C_FIELD(arg0, s32 *, 0x3C) = v;
    M2C_FIELD(arg0, s32 *, 0x40) = v;
    M2C_FIELD(arg0, s32 *, 0x9C) = v;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 1) {
        v = 0x1D;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = v;
}
#pragma pop

u8 *__dt__22TAdMultiPlyChrSelectGCFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    u8 *temp_r3_10;
    u8 *temp_r3_11;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    u8 *temp_r3_6;
    u8 *temp_r3_7;
    u8 *temp_r3_8;
    u8 *temp_r3_9;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802DFD9C___vt__22TAdMultiPlyChrSelectGC *)&__vt__22TAdMultiPlyChrSelectGC).value;
        temp_r3 = (u8 *)(get_global_state__22TAdMultiPlyChrSelectGCFv());
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x5C));
        if (temp_r3_2 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_2);
            M2C_FIELD(arg0, u8 **, 0x5C) = NULL;
        }
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        if (temp_r3_3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_3);
            M2C_FIELD(arg0, u8 **, 0x78) = NULL;
        }
        temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x88));
        if (temp_r3_4 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_4);
            M2C_FIELD(arg0, u8 **, 0x88) = NULL;
        }
        temp_r3_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x8C));
        if (temp_r3_5 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_5);
            M2C_FIELD(arg0, u8 **, 0x8C) = NULL;
        }
        temp_r3_6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x90));
        if (temp_r3_6 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_6);
            M2C_FIELD(arg0, u8 **, 0x90) = NULL;
        }
        temp_r3_7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x94));
        if (temp_r3_7 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_7);
            M2C_FIELD(arg0, u8 **, 0x94) = NULL;
        }
        temp_r3_8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x98));
        if (temp_r3_8 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_8);
            M2C_FIELD(arg0, u8 **, 0x98) = NULL;
        }
        temp_r3_9 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x7C));
        if (temp_r3_9 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_9);
            M2C_FIELD(arg0, u8 **, 0x7C) = NULL;
        }
        temp_r3_10 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x80));
        if (temp_r3_10 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_10);
            M2C_FIELD(arg0, u8 **, 0x80) = NULL;
        }
        temp_r3_11 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x84));
        if (temp_r3_11 != NULL) {
            queue_destruction__7TObjectFv(temp_r3_11);
            M2C_FIELD(arg0, u8 **, 0x84) = NULL;
        }
        if ((u32) (*(u32 *)&TAdMultiPlyChrSelectGC__instance) != 0U) {
            (*(u32 *)&TAdMultiPlyChrSelectGC__instance) = 0U;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TAdMultiPlyChrSelectGC__ct(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__22TAdMultiPlyChrSelectGC.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F68;
    initialize_selection_state__22TAdMultiPlyChrSelectGCFPvi((void *)(arg0), (s32)(arg2));
    create_widgets__22TAdMultiPlyChrSelectGCFPv(arg0);
    handle_event__22TAdMultiPlyChrSelectGCFPvi(arg0, get_select_flag__22TAdMultiPlyChrSelectGCFv());
    return arg0;
}

u8 *get_or_create__22TAdMultiPlyChrSelectGCFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) TAdMultiPlyChrSelectGC__instance != NULL) {
        return TAdMultiPlyChrSelectGC__instance;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xA0));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TAdMultiPlyChrSelectGC__ct((u8 *)(temp_r3), (u8 *)(arg0), (s32)(arg1)));
    }
    TAdMultiPlyChrSelectGC__instance = var_r0;
    return var_r0;
}

int get_instance__22TAdMultiPlyChrSelectGCFv(void) {  return TAdMultiPlyChrSelectGC__selected_slot; }

s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(O_802DFFE8 *self) {
    return self->tbl[TAdMultiPlyChrSelectGC__data_805D67D8][self->idx];
}

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4ec); }
void set_state__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

void TAdMultiPlyChrSelectGC__sub_802E0024(O_802E0024 *self, s32 v) {
    self->tbl[TAdMultiPlyChrSelectGC__data_805D67D8][self->idx] = v;
}

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4e8); }

    extern int ad_chr_sel_ply_plate_instance;
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void) {  return ad_chr_sel_ply_plate_instance; }

s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4f8); }

    extern int TAdMultiPlyChrSelectGC__select_mode;
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1) { TAdMultiPlyChrSelectGC__select_mode = a1; }

}
