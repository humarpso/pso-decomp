#include "pso/TObjDeadListWin.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80073CEC { u8 b; u8 pad[0xF]; };

struct Obj_80073CEC {
    const char *name;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    s32 f20;
    s32 f24;
    Ent_80073CEC e[4];
};

typedef s32 M2C_UNK;
struct Name_80073B38 {
    char text[15];
    char term;
};

struct Win_80073B38 {
    u8 pad0[0x1C];
    s32 built;
    u8 pad20[8];
    Name_80073B38 names[4];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
void update_countdown__15TObjDeadListWinFPv(void *arg0);
s32 get_player_by_client_id(s32);
extern s32 local_client_id;
void run_task__15TObjDeadListWinFv(u8 *arg0);
void *__ct__7TObjectFP7TObject(void *, void *);
extern char __vt__15TObjDeadListWin[];
extern const char *TObjDeadListWin__class_name;
void *TObjDeadListWin__ct(Obj_80073CEC *self, void *parent);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
s32 get_flagged_table_entry__6TLobbyFi(s32);
void build_dead_list_window__15TObjDeadListWinFPv(u8 *arg0);
s32 get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TWindowCtrlMain__sub_8024CE58(void);
M2C_UNK strncpy(void *, void *, int);
extern s32 local_client_id;
M2C_UNK refresh_names__15TObjDeadListWinFPv(Win_80073B38 *self);
}

extern "C" {

void build_dead_list_window__15TObjDeadListWinFPv(u8 *arg0);
void *create__15TObjDeadListWinFPv(void *arg0);
void update_countdown__15TObjDeadListWinFPv(void *arg0);
M2C_UNK strcat(void *, void *);
s32 get_player_by_client_id(s32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(int);
s32 check_player_flag1__6TLobbyFPv(s32);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, void *, M2C_UNK);
u32 set_window_mode_4__6TLobbyFPvii(void *, void *, M2C_UNK);

extern M2C_UNK dead_list_window_position[];
extern M2C_UNK lbl_805D9140;
extern M2C_UNK lbl_805D9144;

void build_dead_list_window__15TObjDeadListWinFPv(u8 *arg0) {
    s8 sp8[0x44];
    s32 var_r31;
    s32 var_r30;
    u8 *temp_r4;

    M2C_FIELD(arg0, u32 *, 0x20) = set_window_mode_4__6TLobbyFPvii((void *) get_window_layout_position(0x3C), dead_list_window_position, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        sp8[0] = 0;
        strcat(sp8, &lbl_805D9140);
        var_r30 = 0;
        var_r31 = 0;
        do {
            temp_r4 = arg0 + var_r31;
            if ((s8) M2C_FIELD(temp_r4, u8 *, 0x28) != 0) {
                strcat(sp8, temp_r4 + 0x28);
                if (var_r30 != 3) {
                    strcat(sp8, &lbl_805D9144);
                }
            }
            var_r30 += 1;
            var_r31 += 0x10;
        } while (var_r30 < 4);
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x20), sp8, 2);
    }
}

extern s32 local_client_id;

void update_countdown__15TObjDeadListWinFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(local_client_id);
    if ((temp_r3 == 0) || (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((check_player_flag1__6TLobbyFPv(temp_r3) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0x5A)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x5A;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 < 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

M2C_UNK refresh_names__15TObjDeadListWinFPv(Win_80073B38 *self) {
    s32 i;
    u8 *player;
    u8 *me;
    for (i = 0; i < 4; i++) {
        player = ((u8 *)get_player_by_client_id(i));
        if (self->names[i].text[0] == 0 && player != NULL && get_flagged_table_entry__6TLobbyFi(i) != 0) {
            strncpy(self->names[i].text, player + 0x85C, 15);
            self->names[i].term = 0;
        }
    }
    me = ((u8 *)get_player_by_client_id(local_client_id));
    if ((get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0x12)
        && TWindowCtrlMain__sub_8024CE58() != 0 && me != NULL
        && obj_testFlags30((M2C_UNK)me, 0x02000000) == 0) {
        build_dead_list_window__15TObjDeadListWinFPv((u8 *)self);
        self->built = 1;
    }
}

void run_task__15TObjDeadListWinFv(u8 *arg0) {
    s32 temp_r0;
    if (get_player_by_client_id((s32)((void *) (local_client_id))) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        refresh_names__15TObjDeadListWinFPv((Win_80073B38 *)((void *) (arg0)));
        return;
    case 1:
        update_countdown__15TObjDeadListWinFPv((void *) (arg0));
        return;
    }
}

TObjDeadListWin::~TObjDeadListWin() {}
void *TObjDeadListWin__ct(Obj_80073CEC *self, void *parent) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__15TObjDeadListWin;
    self->name = TObjDeadListWin__class_name;
    self->f20 = 0;
    self->f24 = 0x12C;
    for (i = 0; i < 4; i++) {
        self->e[i].b = 0;
    }
    self->f1c = 0;
    return self;
}

void *create__15TObjDeadListWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TObjDeadListWin__ct((Obj_80073CEC *)(o), (void *)(arg0));
    }
    return o;
}

}
