#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_801CD078 { u8 pad[0x10]; s16 cost; };

struct Player_801CD078 { u8 pad[0x32E]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

struct Node_801CD424 { u8 pad[0x1C]; f32 pos[3]; u8 pad28[0x2C - 0x28]; };

struct Obj_801CD424 { u8 pad[0xA4]; Node_801CD424 *nodes; };

struct TechData_801CD424 { u16 target; s16 node; };

struct Player_801CD424 {
    u8 pad[0x60];
    s32 f60;
    u8 pad64[0xBA - 0x64];
    s16 fba;
    u8 padbc[0x326 - 0xBC];
    s16 f326;
    s16 f328;
    u8 pad32a[0x33C - 0x32A];
    s32 f33c;
    u8 pad340[0x3F0 - 0x340];
    s32 f3f0;
    u8 pad3f4[0x428 - 0x3F4];
    u8 techs[0x744 - 0x428];
    u8 f744[4];
};

struct Sub_801CD188 { u8 pad[0x508]; u16 f508; };

struct Player_801CD188 { u8 pad[0xB0]; u32 flags; u8 padb4[0x424 - 0xB4]; Sub_801CD188 *sub; };

typedef struct Msg1_801CD72C {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg1_801CD72C;

typedef struct Msg2_801CD72C {
    u8 pad0[2];
    s16 id;
    u8 tech;
    u8 pad5;
    u8 lv;
    u8 count;
    u32 data[13];
} Msg2_801CD72C;

typedef struct Player_801CD72C {
    u8 pad0[0x424];
    void *cursor;
    u8 techs[4];
} Player_801CD72C;

typedef struct Msg_801CD6BC {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg_801CD6BC;

extern "C" {
void TFontSmallLobby__sub_801C0274(void *);
u8 *get_player_by_client_id(u16);
void TFontSmallLobby__sub_801C01BC(void *);
void TFontSmallLobby__sub_801C01DC(void *, void *);
void TObjPlayer__sub_801D97C8(void *, u8);
s32 validate_6x9B_level_up_all_techniques(void *);
void handle_6x9B_level_up_all_techniques(void *arg0);
}

extern "C" {

void handle_6x9B_level_up_all_techniques(void *arg0) {
    Msg_801CD6BC m;
    u8 *p;
    TFontSmallLobby__sub_801C0274(&m);
    TFontSmallLobby__sub_801C01DC(&m, arg0);
    TFontSmallLobby__sub_801C01BC(&m);
    if (validate_6x9B_level_up_all_techniques(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL) {
            TObjPlayer__sub_801D97C8(p + 0x428, m.level);
        }
    }
}

}
