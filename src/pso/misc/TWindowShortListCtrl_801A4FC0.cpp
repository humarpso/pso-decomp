#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowShortListCtrl.h"

struct RecoveredGlobal_801A51C0_lbl_80446980 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_801A51F0(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 short_list_ctrl_interval_table;
}

extern "C" {

void *construct_option_scene(void *arg0);
s32 TWindowShortListCtrl__sub_801A513C(void* p);
int TWindowShortListCtrl__sub_801A5144(void* p);
s32 fn_801A51F0(void);
void TKeyBoardControl__sub_8000F90C(int);
void *TWindowOptionCtrl__ct(void *, void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void *get_character_save_record();
void queue_destruction__7TObjectFv(void *);

extern s32 lbl_804C2298[];

void *TWindowShortListCtrl::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804C2298;
        TLobby::stop_audio_streams();
        if (*(void **)((s8 *)this + 0x2C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x2C)); *(s32 *)((s8 *)this + 0x2C) = 0; }
        if (*(void **)((s8 *)this + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x28)); *(s32 *)((s8 *)this + 0x28) = 0; }
        if (*(void **)((s8 *)this + 0x24) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x24)); *(s32 *)((s8 *)this + 0x24) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern void *tl_00;
extern s32 lbl_804C2298[];

void *construct_option_scene(void *arg0) {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    __ct__7TObjectFP7TObject(arg0, tl_00);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C2298;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    o3 = __nw__7TObjectFUl(0x138);
    if (o3 != NULL) {
        __ct__10TAdTitleGCFv(o3, arg0, 3);
    }
    TKeyBoardControl__sub_8000F90C(9);
    *(u32 *)((s8 *)arg0 + 0x20) = 4;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    *(u16 *)((s8 *)arg0 + 0x1E) = 0;
    o4 = __nw__7TObjectFUl(0x50);
    if (o4 != NULL) {
        o4 = TWindowOptionCtrl__ct(o4, arg0);
    }
    *(void **)((s8 *)arg0 + 0x24) = o4;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    return arg0;
}

s32 TWindowShortListCtrl__sub_801A513C(void* p) { return *(s32*)((char*)p + 0x24); }
int TWindowShortListCtrl__sub_801A5144(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }
s32 TWindowShortListCtrl::get_card_window_flags() {
    void *temp_r3;

    temp_r3 = get_character_save_record();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) *(u32 *)((s8 *)temp_r3 + 0x10) >> 0x10U) & 3;
}
s32 TWindowShortListCtrl::get_card_status_bits() {
    void *temp_r3;

    temp_r3 = get_character_save_record();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) *(u32 *)((s8 *)temp_r3 + 0x10) >> 0xDU) & 7;
}

typedef char RecoveredGlobal_801A51C0_lbl_80446980_size[sizeof(RecoveredGlobal_801A51C0_lbl_80446980) == 0x18 ? 1 : -1];
s32 TLobby::get_table_entry_by_index() {
    return *(s32 *)((s8 *)(&short_list_ctrl_interval_table.value) + (fn_801A51F0() * 4));
}

s32 fn_801A51F0(void) {
    void *temp_r3;

    temp_r3 = get_character_save_record();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) *(u32 *)((s8 *)temp_r3 + 0x10) >> 0xAU) & 7;
}

}
