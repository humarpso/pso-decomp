#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Slots_80270060 { s32 type[4]; u32 id[4]; };

extern "C" {
s32 get_photon_blast_chain(Slots_80270060 *);
u8 *get_player_by_client_id(u32);
s32 TLobby__sub_801C19D0(void *);
u8 get_rule_field_a__6TLobbyFPv(void *);
M2C_UNK set_sprite_uv_from_pixels(s32, f32, f32);
extern M2C_UNK lbl_8050EA40[];
extern const f32 lbl_805DD388;
extern const f32 lbl_805DD3AC;
extern const f32 lbl_805DD3B0;
extern const f32 lbl_805DD3B4;
extern const f32 lbl_805DD3B8;
extern const f32 lbl_805DD3BC;
extern const f32 lbl_805DD3C0;
extern const f32 lbl_805DD3C4;
M2C_UNK update_photon_blast_player_marker(s32 arg0, s32 arg1);
}

extern "C" {

s32 get_global_state__14TOKeyMachine01Fv();
s32 get_array_entry__20TWindowSubStatusDispFPvi(s32, M2C_UNK);
s32 get_width__11TWindowCtrlFPv();

M2C_UNK update_photon_blast_player_marker(s32 arg0, s32 arg1) {
    Slots_80270060 s;
    s32 type;
    u32 key;
    s32 r;
    s32 i;
    u8 *p;
    key = arg1;
    type = -1;
    if (key != 0xFFFF) {
        r = get_photon_blast_chain(&s);
        if (r == 1 || r == 2) {
            s32 t;
            for (i = 0; (t = s.type[i]) != -1; i++) {
                if (s.id[i] == key) {
                    break;
                }
            }
            type = t;
        }
        switch (type) {
        case 5:
            set_sprite_uv_from_pixels(arg0, lbl_805DD388, lbl_805DD3AC);
            break;
        case 4:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B0, lbl_805DD3AC);
            break;
        case 3:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B4, lbl_805DD3AC);
            break;
        case 1:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B8, lbl_805DD3AC);
            break;
        case 2:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3BC, lbl_805DD3AC);
            break;
        case 0:
            set_sprite_uv_from_pixels(arg0, lbl_805DD3C0, lbl_805DD3AC);
            break;
        default:
            if (get_rule_field_a__6TLobbyFPv(lbl_8050EA40) == 1 && (p = get_player_by_client_id(key)) != 0) {
                key = TLobby__sub_801C19D0(p + 0x828) - 1;
            }
            set_sprite_uv_from_pixels(arg0, lbl_805DD3B0 * key, lbl_805DD3C4);
            break;
        }
    }
}

void update_status_help_item(s32 arg0) {
    s32 var_r31;

    var_r31 = get_width__11TWindowCtrlFPv();
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        var_r31 = 0;
    }
    update_photon_blast_player_marker((s32)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0)), (s32)(var_r31));
}

}
