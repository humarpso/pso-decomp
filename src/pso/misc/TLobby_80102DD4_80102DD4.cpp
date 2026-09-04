#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80102EBC(void* p);
void bswap_6x5D__6TLobbyFPv(void* p);
void bswap_shop_item__6TLobbyFPv(void* p);
void copy_item_data__6TLobbyFPvPv(void* p, void* q);
void init_default_fields__6TLobbyFPv(void* a0);
void* init_fields__6TLobbyFPv(void* p);
u8 is_matching_id__6TLobbyFiUs(s32 arg0, u16 arg1);
void send_6x5D__6TLobbyFPv(void* p);
void send_item_and_handle_60__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int TObjPlayer__sub_80102CE0(void*);
int bswap_16__FPUs(void*);
int bswap__9TItemDataFv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

extern s32 lbl_805D53A0;
extern s32 lbl_805D5E50;

u8 is_matching_id__6TLobbyFiUs(s32 arg0, u16 arg1) {
    int var_r5;

    var_r5 = 0;
    if (((s32) lbl_805D5E50 == 0) && ((s32) arg1 == (s32) lbl_805D53A0)) {
        var_r5 = 1;
    }
    return (u8) var_r5;
}

void bswap_shop_item__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap__9TItemDataFv((char*)p + 0x4); }
void send_item_and_handle_60__6TLobbyFPv(void* p) { bswap_shop_item__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void copy_item_data__6TLobbyFPvPv(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u8*)((char*)p + 0x2) = *(u8*)((char*)q + 0x2); *(u8*)((char*)p + 0x3) = *(u8*)((char*)q + 0x3); *(u8*)((char*)p + 0x4) = *(u8*)((char*)q + 0x4); *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x5); *(u32*)((char*)p + 0x6) = *(u32*)((char*)q + 0x6); *(u16*)((char*)p + 0xa) = *(u16*)((char*)q + 0xa); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); }
void TLobby__sub_80102EBC(void* p) { *(u8*)((char*)p + 0x0) = 94; *(u8*)((char*)p + 0x1) = 6; }
void bswap_6x5D__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); TObjPlayer__sub_80102CE0((char*)p + 0x8); bswap__9TItemDataFv((char*)p + 0x10); }
void send_6x5D__6TLobbyFPv(void* p) { bswap_6x5D__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void* init_fields__6TLobbyFPv(void* p) { init_default_fields__6TLobbyFPv((void*)((void*)(p))); *(unsigned char*)((char*)p + 0x24) = 2; *(unsigned char*)((char*)p + 0x25) = 0; *(unsigned char*)((char*)p + 0x26) = 0; *(unsigned char*)((char*)p + 0x27) = 0; *(unsigned char*)((char*)p + 0x1) = 10; return p; }

    extern const float lbl_805DAA88;
void init_default_fields__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(float*)((char*)a0 + 0xc) = lbl_805DAA88; *(float*)((char*)a0 + 0x8) = lbl_805DAA88; *(unsigned char*)((char*)a0 + 0x0) = 93; *(unsigned char*)((char*)a0 + 0x1) = 9; }

}
