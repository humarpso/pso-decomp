#include "pso/packet_classes.h"
#include <stddef.h>
typedef char SendActionSize[(sizeof(TSendAction<0>) == 12) ? 1 : -1];
typedef char SendActionTagOffset[(offsetof(TSendAction<0>, tag) == 4) ? 1 : -1];
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TProtocol__sub_801DFE34(s32 arg0);
void bswap_action_header__9TProtocolFPv(void* p);
void bswap_action_packet(void* p);
void bswap_guild_card_tag__9TProtocolFPv(void* p);
s32 destroy__9TProtocolFis(s32 arg0, s16 arg1);
s32 init_char_data__9TProtocolFi(s32 arg0);
s32 init_guild_card_tag__9TProtocolFi(s32 arg0);
s32 init_guildcard_tag(s32 arg0);
M2C_UNK __ct__12TPlyCharDataFv(s32);
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__12TPlyCharDataFv(s32, M2C_UNK);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);

s32 destroy__9TProtocolFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0 + 4, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

s32 init_char_data__9TProtocolFi(s32 arg0) {
    __ct__12TPlyCharDataFv(arg0 + 4);
    return arg0;
}

}
template<> void TSendAction<0>::bswap() {
    header.bswap();
    tag.bswap();
}
extern "C" {

}
template<> TSendAction<0>::TSendAction() {}
extern "C" {

void bswap_action_header__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

s32 init_guild_card_tag__9TProtocolFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

void bswap_guild_card_tag__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

s32 TProtocol__sub_801DFE34(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

void bswap_action_packet(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

s32 init_guildcard_tag(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
