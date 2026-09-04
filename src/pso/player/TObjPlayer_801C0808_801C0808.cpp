#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_801C092C(void);
void apply_status_effect__10TObjPlayerFPv(void* p);
void bswap_status_effect__10TObjPlayerFPv(void* p);
void init_cmd_6x24__10TObjPlayerFPv(void *arg0);
void send_lobby_update__10TObjPlayerFPv(void* p);
void set_code_13_3__10TObjPlayerFPv(void* p);
void set_code_14_1__10TObjPlayerFPv(void* p);
void update_and_send__10TObjPlayerFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_80102CE0(void*);
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

int TObjPlayer__sub_801C092C(void) { return 0; }

}
