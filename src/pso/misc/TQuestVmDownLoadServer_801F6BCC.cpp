#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F6C74_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801F6C0C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct QVm_801F6D24 {
    u8 pad0[0x294];
    u32 f294;
    u8 pad1[4];
    s32 f29C_pad;
    s32 f2A0;
};

extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
s32 get_localized_text_entry(int, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, int, int);
M2C_UNK update_state__13TAdMcSelectGCFv();
M2C_UNK select_if_mc_present__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F6C74_lbl_8050E208 lbl_8050E208;
extern s32 TQuestVmDownLoadServer__data_805D5F18;
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
M2C_UNK return_to_main_menu__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(int, int);
extern RecoveredGlobal_801F6C74_lbl_8050E208 lbl_8050E208;
void TQuestVmDownLoadServer__sub_801F6C0C(u8 *arg0);
s32 get_localized_text_entry(int, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, int, int);
s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK update_state__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F6C74_lbl_8050E208 lbl_8050E208;
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
}

extern "C" {

void create__22TQuestVmDownLoadServerFv(void);
M2C_UNK TQuestVmDownLoadServer__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern u32 TQuestVmDownLoadServer__data_805D5F24;
extern s32 tl_00;

void create__22TQuestVmDownLoadServerFv(void) {
    void *temp_r3;

    if ((u32) TQuestVmDownLoadServer__data_805D5F24 == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            TQuestVmDownLoadServer__ct(temp_r3, tl_00);
        }
    }
}
typedef char RecoveredGlobal_801F6C74_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C74_lbl_8050E208) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_801F6C0C_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C0C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TQuestVmDownLoadServer__sub_801F6C0C(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&(*(RecoveredGlobal_801F6C0C_lbl_8050E208 *)&lbl_8050E208).value + 0x20;
    if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0)) {
        return_to_main_menu__6TLobbyFv();
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x15;
    }
}

void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
    TQuestVmDownLoadServer__data_805D5F18 = 0;
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) {
        update_state__13TAdMcSelectGCFv();
        TQuestVmDownLoadServer__sub_801F6E08((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (1))), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    }
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        TQuestVmDownLoadServer__sub_801F6E08((void *) (arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0x42))), (int) (1));
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x14;
    }
}
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self) {
    u8 *p;
    if (self->f294 == 0 || poll_field_20c__22TQuestVmDownLoadServerFPv((u8 *)self + 0x1C) != 0) {
        p = ((u8 *)&lbl_8050E208) + 0x20;
        if (TWindowShortListCtrl__check_controller_button((int)(p), (int)(4)) != 0 || TWindowShortListCtrl__check_controller_button((int)(p), (int)(2)) != 0) {
            update_state__13TAdMcSelectGCFv();
            TQuestVmDownLoadServer__sub_801F6E08((void *)(self), (int)(get_localized_text_entry((int)(0x29), (int)(1))), (int)(1));
            self->f2A0 = 4;
        }
    }
}

}
