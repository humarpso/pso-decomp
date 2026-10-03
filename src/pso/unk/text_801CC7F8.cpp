#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pkt_801CC7F8 {
    u8 cmd;
    u8 size;
    s16 client;
    s8 index;
    u8 pad5;
    s16 count;
    s16 sub;
    u8 padA[2];
    s32 tech[11];
};

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
M2C_UNK set_type__10TObjPlayerFPvi(void *, int);
s16 get_sub_value__8TItemMagFi(void *);
M2C_UNK set_cursor_pos__11TMainCursorFiUsi(int, int, int);
s32 reset_volopt_state__10TObjPlayerFv();
M2C_UNK copy_tech_params__10TObjPlayerFPvPv(int, int);
M2C_UNK TObjPlayer__sub_801D1EE4(void *);
M2C_UNK TObjPlayer__sub_801D1F60(void *);
u8 *TObjPlayer__sub_801D2AB0(void *, M2C_UNK);
s16 TAdSinglePlyChrSelectGC__sub_801D5DDC(void *);
s16 get_valid_index__15TFontSmallLobbyFPv(void *);
M2C_UNK TObjPlayer__sub_8022CDE8(void *, void *);
void prepare_photon_blast_action__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void prepare_photon_blast_action__10TObjPlayerFPv(u8 *arg0) {
    Pkt_801CC7F8 pkt;
    s32 i;
    s16 n;
    s32 *src;
    s32 *dst;
    if (reset_volopt_state__10TObjPlayerFv() != 0) {
        set_type__10TObjPlayerFPvi(arg0 + 0x644, 0x708);
        TObjPlayer__sub_8022CDE8((void *)get_valid_index__15TFontSmallLobbyFPv(arg0 + 0x4AC), arg0);
        if (M2C_FIELD(arg0, u32 *, 0x424) != 0U) {
            u8 *e = TObjPlayer__sub_801D2AB0(arg0 + 0x4AC, 0);
            set_cursor_pos__11TMainCursorFiUsi(M2C_FIELD(arg0, u32 *, 0x424), M2C_FIELD(e, u16 *, 0), M2C_FIELD(e, s16 *, 2));
        }
        if (arg0 == NULL || obj_isState2_324(arg0) == 0) {
            TObjPlayer__sub_801D1EE4(&pkt);
            pkt.client = obj_getField1c(arg0);
            pkt.index = get_valid_index__15TFontSmallLobbyFPv(arg0 + 0x4AC);
            pkt.count = n = ((s32 (*)(void *))TAdSinglePlyChrSelectGC__sub_801D5DDC)(arg0 + 0x4AC);
            pkt.sub = get_sub_value__8TItemMagFi(arg0);
            src = (s32 *)TObjPlayer__sub_801D2AB0(arg0 + 0x4AC, 0);
            dst = pkt.tech;
            for (i = 0; i < n; i++) {
                copy_tech_params__10TObjPlayerFPvPv((int)dst++, (int)src++);
            }
            TObjPlayer__sub_801D1F60(&pkt);
        }
    }
}

}
