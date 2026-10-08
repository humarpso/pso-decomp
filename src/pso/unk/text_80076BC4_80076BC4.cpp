#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TPlyGuildCardTag { u32 a; u32 b; TPlyGuildCardTag(u16, u32); };

struct Tag_80076BC8 { u32 a; u32 b; };

extern "C" {
s32 get_main_phase();
void *obj_getField1c(void *);
void *get_player_by_client_id(s32);
void send_chat__9TProtocolFR16TPlyGuildCardTagPc(void *, TPlyGuildCardTag *, u8 *);
void capture_chat_sensor__6TLobbyFi(u8 *);
void open__11TWindowCtrlFiii(void *, u8 *, int);
extern s32 lbl_805D53A0;
extern void *TLobby__data_805D5580;
void submit_chat_text(u8 *arg0);
}

extern "C" {

void fn_80076BC4(void);

void fn_80076BC4(void) {  }
void submit_chat_text(u8 *arg0) {
    void *player;
    player = get_player_by_client_id(lbl_805D53A0);
    if (player != NULL && (s8) *arg0 != 0) {
        capture_chat_sensor__6TLobbyFi(arg0);
        if (get_main_phase() == 0xF) {
            Tag_80076BC8 tmp = *(Tag_80076BC8 *)&TPlyGuildCardTag(0, 0);
            send_chat__9TProtocolFR16TPlyGuildCardTagPc(TLobby__data_805D5580, (TPlyGuildCardTag *)&tmp, arg0);
        } else {
            open__11TWindowCtrlFiii(obj_getField1c(player), arg0, 0xCB);
        }
    }
}

}
