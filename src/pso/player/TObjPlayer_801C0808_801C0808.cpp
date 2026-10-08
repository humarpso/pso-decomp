#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_8 { u8 bytes[0x8]; };

struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_801D2CF4_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801D2CF4_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Ent_801D2AB0 { u8 d[4]; };

struct Obj_801D2AB0 { u8 pad[0x14]; Ent_801D2AB0 arr[1]; };

struct Pos_801D2964 { u8 bytes[0x8]; };

struct Pkt_801D2964 { u8 hdr[4]; Pos_801D2964 pos; };

struct Ent_801D32A0 { u16 a; s16 b; };

struct Self_801D32A0 { u8 pad[0x20]; f32 f20; f32 f24; f32 f28; f32 f2c; s32 count; Ent_801D32A0 ents[1]; };

struct Cur_801D32A0 { u8 pad[0x28]; f32 x28; f32 x2c; f32 x30; u8 pad2[8]; f32 x3c; u8 pad3[0x5C]; u8 lock[4]; };

struct Pl_801D32A0 { u8 pad[0x424]; void *cursor; };

extern "C" {
int TFontSmallLobby__sub_801C0228(void*);
void *TObjPlayer__sub_801C092C(void *arg0, void *arg1);
}

extern "C" {

void apply_status_effect__10TObjPlayerFPv(void* p);
void bswap_status_effect__10TObjPlayerFPv(void* p);
void init_cmd_6x24__10TObjPlayerFPv(void *arg0);
void send_lobby_update__10TObjPlayerFPv(void* p);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void update_and_send__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TLobby__send_and_handle_60(void*);
int bswap_pkt_u32x2__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEE34(void*);
int TObjPlayer__sub_801C0768(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_code_12_3__10TObjPlayerFPv(void* p);
void set_code_161_1__10TObjPlayerFPv(void* p);
void set_code_45_1__10TObjPlayerFPv(void* p);
void set_code_49_1__10TObjPlayerFPv(void* p);
void set_code_50_1__10TObjPlayerFPv(void* p);

extern const f32 TObjPlayer__data_805DC278;

void init_cmd_6x24__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s8 *, 0) = 0x24;
    M2C_FIELD(arg0, s8 *, 1) = 5;
}

void send_lobby_update__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801C0768(p); TLobby__send_and_handle_60(p); }
void bswap_status_effect__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }
void set_code_13_3__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 13; *(u8*)((char*)p + 0x1) = 3; }
void update_and_send__10TObjPlayerFPv(void* p) { bswap_status_effect__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_code_14_1__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 14; *(u8*)((char*)p + 0x1) = 1; }
void apply_status_effect__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); TObjPlayer__sub_801BEE34((char*)p + 0x4); }
#pragma push
#pragma opt_common_subs off
#pragma pop
void *TObjPlayer__sub_801C092C(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228(arg0);
    ((Pkt_801D2964 *)arg0)->pos = ((Pkt_801D2964 *)arg1)->pos;
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma pop
typedef char RecoveredGlobal_801D2CF4_lbl_804C43CC_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801D2CF4_lbl_804C43D8_size[sizeof(RecoveredGlobal_801D2CF4_lbl_804C43D8) == 0x10 ? 1 : -1];

}
