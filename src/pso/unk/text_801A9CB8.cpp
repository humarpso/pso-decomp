#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_801AA17C {
    s32 kinds[4];
    s32 participants[4];
    s32 state;
};

struct Obj_801A9CB8 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x20];
    u16 id;
    u8 pad3e[0xe];
    s32 active;
    u8 pad50[0x10];
    u32 ids[4];
};

extern "C" {
extern struct Rec_801AA17C lbl_8050E890[];
s32 get_photon_blast_chain(struct Rec_801AA17C *output, s32 player);
void __dt__7TObjectFv(void *, int);
void TCameraCtrl__sub_80069D7C(void);
void restore_player_cameras(void);
void reset_cameras_to_actor(void *, int);
void TFogCtrl__sub_800FAC10(int, int);
void *get_player_by_client_id(s32);
void TObjPlayer__sub_801CBFA4(void *);
void set_and_notify_default__6TLobbyFv(void);
void __dl__7TObjectFPv(void *);
void TLobby__sub_8024AC20(s32);
extern u8 lbl_804C349C[];
extern struct Rec_801AA17C lbl_8050E890[];
extern s32 lbl_805D53A0;
Obj_801A9CB8 *destroy_photon_blast_sequence(Obj_801A9CB8 *self, s16 flag);
}

extern "C" {

Obj_801A9CB8 *destroy_photon_blast_sequence(Obj_801A9CB8 *self, s16 flag) {
    s32 i;
    s32 j;
    if (self != NULL) {
        self->vt = lbl_804C349C;
        if (self->active != 0) {
            set_and_notify_default__6TLobbyFv();
            TObjPlayer__sub_801CBFA4((u8 *)self + 0x90);
            if (get_player_by_client_id(lbl_805D53A0) != NULL) {
                TLobby__sub_8024AC20(lbl_805D53A0);
                TCameraCtrl__sub_80069D7C();
                restore_player_cameras();
                reset_cameras_to_actor(get_player_by_client_id(lbl_805D53A0), 0);
            }
        } else {
            TFogCtrl__sub_800FAC10(self->id, 0);
        }
        if (self->id != 0xFFFF && self->id < 4) {
            for (i = 0; i < 4; i++) {
                if (self->ids[i] < 4) {
                    for (j = 0; j < 4; j++) {
                        lbl_8050E890[self->ids[i]].kinds[j] = -1;
                        lbl_8050E890[self->ids[i]].participants[j] = 0xFFFF;
                    }
                    lbl_8050E890[self->ids[i]].state = 0;
                }
            }
        }
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

s32 get_photon_blast_chain(struct Rec_801AA17C *output, s32 player) {
    s32 i;
    if (lbl_8050E890[player].state == 0) {
        return 0;
    }
    if (lbl_8050E890[player].state == 2) {
        for (i = 0; i < 4; i++) {
            output->kinds[i] = lbl_8050E890[player].kinds[i];
            output->participants[i] = lbl_8050E890[player].participants[i];
        }
        return 2;
    }
    if (lbl_8050E890[player].state == 1) {
        for (i = 0; i < 4; i++) {
            output->kinds[i] = lbl_8050E890[player].kinds[i];
            output->participants[i] = lbl_8050E890[player].participants[i];
        }
        return 1;
    }
    return 0;
}

}
