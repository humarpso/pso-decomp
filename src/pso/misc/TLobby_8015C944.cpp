#include "types.h"
#include "pso/misc/TLobby_8015C944.h"
#include "pso/misc/TLobby_801E43E4.h"
#include "pso/system/byteswap.h"
#include "pso/system/vector.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOCtrlDubchik.h"

struct V3_8015C9D4 { f32 x, y, z; };

struct O_8015C9D4 { u8 pad[0x2FC]; V3_8015C9D4 pos; u8 pad308[0x326 - 0x308]; s16 f326; };

struct A_8015C9D4 { u8 pad[0x1C]; V3_8015C9D4 pos; };

extern "C" {
f32 receive_physical_attack__10TObjPlayerFv(void *, void *, f32);
s32 select_melee_contact_body__10TObjPlayerFv(f32);
extern char lbl_80440984[];
extern const f32 TOCtrlDubchik__data_805DB3A8;
extern const f32 TOCtrlDubchik__data_805DB3AC;
f32 TOCtrlDubchik__vt22(O_8015C9D4 *arg0, void *arg1, A_8015C9D4 *arg2);

s32 read_be16_field2__10TObjPlayerFv();

void TLobby::byteswap_and_send() {
    s32 arg0 = (s32)this;
    ((s32 (*)())byteswap_event_packet__6TLobbyFi)();
    TLobby__send_and_handle_60((u8 *)arg0);
}

void byteswap_event_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFv();
    bswap_32((u32 *)(arg0 + 4));
    bswap_32((u32 *)(arg0 + 8));
    bswap_32((u32 *)(arg0 + 0xC));
}
void TLobby::init_packet_67_04() { *(u8 *)&this->m_name = 103; *(u8*)((char*)this + 0x1) = 4; }

void TOCtrlDubchik__sub_8015C9D0(void) {  }
f32 TOCtrlDubchik__vt22(O_8015C9D4 *arg0, void *att, A_8015C9D4 *arg2) {
    V3_8015C9D4 sp8;
    if (arg0->f326 != 0) {
        if (select_melee_contact_body__10TObjPlayerFv(TOCtrlDubchik__data_805DB3AC) != 0) {
            return receive_physical_attack__10TObjPlayerFv(arg0, att, TOCtrlDubchik__data_805DB3AC);
        }
        if (arg2 != NULL) {
            VecCopy((Vec *)&sp8, (const Vec *)&arg2->pos);
        } else {
            VecCopy((Vec *)&sp8, (const Vec *)&arg0->pos);
        }
        TOCtrlDubchik::create_font((s32)&sp8, (s32)0xFFFF0000, 0x14, (s32)lbl_80440984);
    }
    return TOCtrlDubchik__data_805DB3A8;
}

}
