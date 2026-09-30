#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8013630C_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_8013630C_main_task_size[sizeof(RecoveredGlobal_8013630C_main_task) == 0x34 ? 1 : -1];

struct Base_801361E8 { u8 pad[0x18]; };

struct Obj_801361E8 : Base_801361E8 { virtual ~Obj_801361E8(); };

struct Node_801361E8 {
    u8 pad0[6];
    u16 id;
    u8 pad8[4];
    Node_801361E8 *next;
    u8 pad10[8];
    void *vt;
    u8 b1c, b1d, b1e, b1f;
};

struct Mgr_801361E8 { u8 pad[0x14]; Node_801361E8 *head; };

extern "C" {
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_8013630C_main_task main_task;
extern u32 TLobby__data_805D55D8;
void handle_6x72_done_loading_into_game(void);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 TWindow__close(int);
char *strncpy(char *, const char *, u32);
extern char lbl_8043EF4C[];
extern char TLobby__data_8050AAE8[][16];
extern const char TLobby__data_805DB0B0[4];
extern RecoveredGlobal_8013630C_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern u32 TLobby__data_805D55D8;
extern s16 TLobby__data_805D5CE8;
extern Mgr_801361E8 *lbl_805D5E48;
extern s32 lbl_805D61AC;
void TLobby__sub_801361E8(u32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_801361E8(u32 arg0, s32 arg1, s32 arg2) {
    Obj_801361E8 *p;
    Node_801361E8 *n;
    TLobby__data_805D53AC = arg1;
    TLobby__data_805D5598 = arg2;
    p = (Obj_801361E8 *)TPlayerBattleCtrl4P__sub_801BA74C((void *)arg0);
    if (p != NULL) {
        for (n = lbl_805D5E48->head; n != NULL; n = n->next) {
            if (n->id == arg0) {
                TLobby__sub_8013A170(lbl_8043EF4C, n->b1c, n->b1d, n->b1e, n->b1f);
                delete (Obj_801361E8 *)n;
                break;
            }
        }
        delete p;
    }
    strncpy(TLobby__data_8050AAE8[arg0], TLobby__data_805DB0B0, 0x10);
    if (TLobby__data_805D5594 == 0xE) {
        TLobby__data_805D5CE8 = 1;
    }
    if (TLobby__data_805D55D8 != 0) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0;
    }
    if (lbl_805D61AC == 0) {
        clear_flag3_all_tasks__9TMainTaskFv(&main_task.value);
    }
}

void handle_6x72_done_loading_into_game(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((int) (TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
}

}
