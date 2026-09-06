#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TAdMultiPlyChrSelectGC__ct(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern u8 *lbl_805D68D0;
u8 *TAdMultiPlyChrSelectGC__sub_802DFF78(s32 arg0, s32 arg1);
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
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5BCC(void *, s32 *, s32 *);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C658C();
void * TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
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
        TAdMultiPlyChrSelectGC__sub_802C5BCC(temp_r3, &sp14, &sp10);
        init__22TAdMultiPlyChrSelectGCFv();
        set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), sp14);
        TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp10);
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    case 4:
        TAdMultiPlyChrSelectGC__sub_802C6920();
        TAdMultiPlyChrSelectGC__sub_802C658C();
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi() == 0) {
            temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6920();
            TAdMultiPlyChrSelectGC__sub_802C5BCC(temp_r3, &spC, &sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), spC);
            TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), sp8);
        }
        M2C_FIELD(arg0, s32 *, 0x9C) = 1;
        return;
    }
}

    extern int TAdMultiPlyChrSelectGC__data_805D67E0;

u8 *TAdMultiPlyChrSelectGC__sub_802DFF78(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) lbl_805D68D0 != NULL) {
        return lbl_805D68D0;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xA0));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TAdMultiPlyChrSelectGC__ct(temp_r3, arg0, arg1));
    }
    lbl_805D68D0 = var_r0;
    return var_r0;
}

int get_instance__22TAdMultiPlyChrSelectGCFv(void) {  return TAdMultiPlyChrSelectGC__data_805D67E0; }

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4ec); }
void set_state__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4e8); }

    extern int lbl_805D67E4;
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D67E4; }

s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4f8); }

    extern int TAdMultiPlyChrSelectGC__data_805D67DC;
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1) { TAdMultiPlyChrSelectGC__data_805D67DC = a1; }

}
