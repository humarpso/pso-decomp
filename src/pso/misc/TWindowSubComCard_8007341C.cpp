#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800739BC_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

typedef s32 M2C_UNK;
struct Rec_80073738 { s32 flag; u8 data[0x100]; };

struct Chal_80073738 {
    u8 pad0[0x4C];
    void *window;
    u8 pad50[0x270 - 0x50];
    Rec_80073738 recs[4];
};

extern "C" {
extern RecoveredGlobal_800739BC_lbl_8048C9D8 lbl_8048C9D8;
void TLobby__sub_800739BC(void);
s32 get_camera_id__11TCameraCtrlFv();
char *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 get_layout_id__20TWindowSubStatusDispFv(void *);
s32 fn_80071A9C(void *, void *, void *);
u8 *get_player_by_client_id(s32);
void set_position_xy(void *, f32, f32);
void set_field_1c__6TLobbyFPvf(void *, f32);
void send_and_handle__6TLobbyFPvii(void *, char *, s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void *TWindowSubComCard__sub_8026CBB8(s32);
int sprintf(char *, const char *, ...);
char *strcat(char *, const char *);
extern char lbl_80438628[];
extern char lbl_80438630[];
extern char lbl_80438638[];
extern RecoveredGlobal_800739BC_lbl_8048C9D8 lbl_8048C9D8;
extern u8 lbl_8048D150[];
extern char lbl_804FF838[];
extern char lbl_805D912C[2];
extern const f32 lbl_805D9134;
extern const f32 lbl_805D9138;
void TLobby__sub_80073738(void *arg0, void *arg1);
}

extern "C" {

void set_loss_flag__6TLobbyFPv(void* p);
int is_visible__17TWindowSubComCardFPv(void* p);

int is_visible__17TWindowSubComCardFPv(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
typedef char RecoveredGlobal_800739BC_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800739BC_lbl_8048C9D8) == 0x748 ? 1 : -1];

#define CHAL ((Chal_80073738 *)&lbl_8048C9D8)
void TLobby__sub_80073738(void *arg0, void *arg1) {
    char tmp[32];
    s32 n;
    Rec_80073738 *rec;
    s32 i;
    void *win;
    win = set_window_mode_4__6TLobbyFPvii(TWindowSubComCard__sub_8026CBB8(0x3B), lbl_8048D150, 1);
    CHAL->window = win;
    if (win == NULL) {
        return;
    }
    set_field_1c__6TLobbyFPvf(win, lbl_805D9134);
    if (get_camera_id__11TCameraCtrlFv() >= 2) {
        set_position_xy(CHAL->window, lbl_805D9138, lbl_805D9138);
    }
    sprintf(lbl_804FF838, lbl_80438628, TQuestVmDownLoadServer__sub_8006EF6C(0x4F));
    rec = CHAL->recs;
    for (i = 0; i < 4; i++, rec++) {
        if (rec->flag != 0) {
            strcat(lbl_804FF838, (char *)(get_player_by_client_id(i) + 0x85C));
            strcat(lbl_804FF838, lbl_80438630);
            n = fn_80071A9C(arg0, rec->data, arg1);
            if (n >= get_layout_id__20TWindowSubStatusDispFv(arg1)) {
                strcat(lbl_804FF838, TQuestVmDownLoadServer__sub_8006EF6C(0x52));
            } else if (n == 0) {
                strcat(lbl_804FF838, TQuestVmDownLoadServer__sub_8006EF6C(0x51));
            } else {
                sprintf(tmp, lbl_80438638, TQuestVmDownLoadServer__sub_8006EF6C(0x50), n);
                strcat(lbl_804FF838, tmp);
            }
            strcat(lbl_804FF838, lbl_805D912C);
        }
    }
    send_and_handle__6TLobbyFPvii(CHAL->window, lbl_804FF838, 0);
}

void TLobby__sub_800739BC(void) {
    M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x48) = 0;
    M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x4C) = 0;
}

}
