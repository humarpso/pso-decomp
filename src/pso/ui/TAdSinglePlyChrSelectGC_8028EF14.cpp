#include "types.h"
#include "pso/misc/CharacterAppearance.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029057C_lbl_804D3F74 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
extern const f32 lbl_805DD944;
extern const f32 lbl_805DD948;
extern const f32 lbl_805DD94C;
extern const f32 lbl_805DD950;
extern const f32 lbl_805DD954;
s32 TAdSinglePlyChrSelectGC__sub_8028FBCC(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
extern RecoveredGlobal_8029057C_lbl_804D3F74 lbl_804D3F74;
void TAdSinglePlyChrSelectGC__sub_8029057C(s32 arg0);
extern CreationHeadModelStates lbl_8051C0E8;
extern CreationHeadModelStates lbl_8051C110[7];
extern void ***lbl_805D6550;
void TAdSinglePlyChrSelectGC__sub_802904F0();
void clear_next_entry__10TObjPlayerFiPv(void *,void *);
extern CreationBodyModelStates lbl_8051C228;
extern CreationBodyModelStates lbl_8051C430[7];
void TAdSinglePlyChrSelectGC__sub_80290464();
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
int TAdSinglePlyChrSelectGC__sub_802905B8(void);
void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
void close_if_active__23TAdSinglePlyChrSelectGCFv(void);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u8 is_active__23TAdSinglePlyChrSelectGCFv(void);
s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028FD90();
int TAdSinglePlyChrSelectGC__sub_8029071C(void*);
int TAdSinglePlyChrSelectGC__sub_802907E4(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
int TObjPlayer__sub_8014394C(void*);
int draw_model_with_callback__10TObjPlayerFPv(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x178);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x184) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x2EC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        TLobby__sub_803DA16C(arg0 + 0x460);
    }
}

s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    switch (arg0) {
    case 0x29:
        return 3;
    case 0x2C:
        return 4;
    case 0xFF:
        return -1;
    default:
        return -2;
    }
}

extern s32 lbl_805D6530;

s32 TAdSinglePlyChrSelectGC__sub_8028FBCC(u8 *arg0) {
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    if (temp_f3 > lbl_805DD948) {
        if ((lbl_805DD94C * (temp_f3 - lbl_805DD948)) <= M2C_FIELD(arg0, f32 *, 4)) {
            return 6;
        }
        return 7;
    }
    if (temp_f3 <= lbl_805DD950) {
        temp_f4 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f3 >= (lbl_805DD948 * temp_f4)) {
            return 0;
        }
        if (temp_f3 <= (lbl_805DD954 * (temp_f4 - lbl_805DD944))) {
            return 1;
        }
        return 2;
    }
    temp_f4_2 = M2C_FIELD(arg0, f32 *, 4);
    if (temp_f3 <= (lbl_805DD954 * (temp_f4_2 - lbl_805DD944))) {
        return 3;
    }
    if (temp_f3 >= (lbl_805DD948 * temp_f4_2)) {
        return 4;
    }
    return 5;
}

void close_if_active__23TAdSinglePlyChrSelectGCFv(void) {
    if ((s32) lbl_805D6530 != 0) {
        TAdSinglePlyChrSelectGC__sub_8028FD90();
    }
}

void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p) { TObjPlayer__sub_8014394C(p); draw_model_with_callback__10TObjPlayerFPv(p); }

void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0xFC));
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
}

typedef char RecoveredGlobal_8029057C_lbl_804D3F74_size[sizeof(RecoveredGlobal_8029057C_lbl_804D3F74) == 0x38 ? 1 : -1];

void TCharaMaking__bind_head_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    TAdSinglePlyChrSelectGC__sub_802904F0();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C0E8);
    s32 head = appearance->head + 1;
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(lbl_805D6550[head][i], &lbl_8051C110[i]);
    }
}

void TCharaMaking__bind_body_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    TAdSinglePlyChrSelectGC__sub_80290464();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C228);
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(lbl_805D6550[0][i], &lbl_8051C430[i]);
    }
}

void TAdSinglePlyChrSelectGC__sub_8029057C(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_802905A4((void*)((void *) (arg0)), (void*)((void *) (&lbl_804D3F74.value)));
}

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

    extern int lbl_805D6534;
int TAdSinglePlyChrSelectGC__sub_802905B8(void) {  return lbl_805D6534; }

extern s32 lbl_805D6530;

u8 is_active__23TAdSinglePlyChrSelectGCFv(void) {
    return (u8) (lbl_805D6530 == 1);
}

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p) { TAdSinglePlyChrSelectGC__sub_802907E4(p); TAdSinglePlyChrSelectGC__sub_8029071C(p); }

}
