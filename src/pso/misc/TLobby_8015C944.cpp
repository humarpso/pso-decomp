#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_8015C9D4 { f32 x, y, z; };

struct O_8015C9D4 { u8 pad[0x2FC]; V3_8015C9D4 pos; u8 pad308[0x326 - 0x308]; s16 f326; };

struct A_8015C9D4 { u8 pad[0x1C]; V3_8015C9D4 pos; };

extern "C" {
f32 receive_physical_attack__10TObjPlayerFv(void *, void *, f32);
s32 select_melee_contact_body__10TObjPlayerFv(f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void create_font__13TOCtrlDubchikFiiii(void *, int, int, void *);
extern char lbl_80440984[];
extern const f32 TOCtrlDubchik__data_805DB3A8;
extern const f32 TOCtrlDubchik__data_805DB3AC;
f32 TOCtrlDubchik__vt22(O_8015C9D4 *arg0, void *arg1, A_8015C9D4 *arg2);

void byteswap_and_send__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
void init_packet_67_04__6TLobbyFPv(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);
void TObjPlayer__sub_8015C940(void);
s32 bswap_32__FPUl(s32);
void byteswap_event_packet__6TLobbyFi(s32 arg0);
s32 read_be16_field2__10TObjPlayerFPv();

void byteswap_and_send__6TLobbyFi(s32 arg0) {
    ((M2C_UNK (*)())byteswap_event_packet__6TLobbyFi)();
    TLobby__send_and_handle_60((void *) (arg0));
}

void byteswap_event_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
}
void init_packet_67_04__6TLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 103; *(u8*)((char*)p + 0x1) = 4; }

void TOCtrlDubchik__sub_8015C9D0(void) {  }
f32 TOCtrlDubchik__vt22(O_8015C9D4 *arg0, void *arg1, A_8015C9D4 *arg2) {
    V3_8015C9D4 sp8;
    if (arg0->f326 != 0) {
        if (select_melee_contact_body__10TObjPlayerFv(TOCtrlDubchik__data_805DB3AC) != 0) {
            return receive_physical_attack__10TObjPlayerFv(arg0, arg1, TOCtrlDubchik__data_805DB3AC);
        }
        if (arg2 != NULL) {
            VecCopy__FP3VecPC3Vec(&sp8, &arg2->pos);
        } else {
            VecCopy__FP3VecPC3Vec(&sp8, &arg0->pos);
        }
        create_font__13TOCtrlDubchikFiiii(&sp8, 0xFFFF0000, 0x14, lbl_80440984);
    }
    return TOCtrlDubchik__data_805DB3A8;
}

}
