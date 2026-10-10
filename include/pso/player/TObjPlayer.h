#ifndef PSO_PLAYER_TOBJPLAYER_H
#define PSO_PLAYER_TOBJPLAYER_H

#include "types.h"
#include "pso/player/PlayerScaleState.h"

struct TItemData;

struct TObjPlayer
{
    struct ActionPalette {
        s32 bank_index;
        u8 bindings[2][4][4];
    };

    u32 find_revival_item();
    void request_inventory_item(TItemData* item);
    ActionPalette* select_action_palette(int secondary);
    s32 add_meseta(s32 amount);
    void request_normal_attack_stage1();
    void show_miss_for_collider(int collider);

    u8 _object_header[0x1C];
    u16 m_1c;
    u8 _pad1E[0x12];
    u32 actor_flags;
    u8 _pad34[4];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u8 _padA8[0x78];
    void* m_120;
    u8 _pad124[0x18C];
    u32 m_2b0;
    u8 _pad2B4[0x70];
    s16 m_324;
    s16 m_326;
    s16 m_328;
    u8 _pad32A[0x16];
    void* m_340;
    u8 _pad344[0x8];
    void* m_34c;
    u8 _pad350[0x10];
    void* m_360;
    u8 _pad364[0x10];
    void* m_374;
    u8 _pad378[0xC];
    void* m_384;
    u8 _pad388[0x88];
    void* m_410;
    u8 _pad414[0x8];
    void* m_41c;
    u8 _pad420[0x8];
    void* m_428;
    u8 _pad42C[0x80];
    void* m_4ac;
    u8 _pad4B0[0x50];
    ActionPalette action_palettes[2];
    u8 _pad548[0x8];
    void* m_550;
    u8 _pad554[0x5C];
    PlayerScaleState scale_state;
    void* m_5e0;
    u8 _pad5E4[0xC];
    void* m_5f0;
    u8 _pad5F4[0x8];
    void* m_5fc;
    u8 _pad600[0x8];
    void* m_608;
    u8 _pad60C[0x28];
    void* m_634;
    u8 _pad638[0x4];
    void* m_63c;
    u8 _pad640[0x4];
    void* m_644;
    u8 _pad648[0x4];
    void* m_64c;
    u8 _pad650[0x8];
    void* m_658;
    u8 _pad65C[0x10];
    void* m_66c;
    u8 _pad670[0x8];
    void* m_678;
    u8 _pad67C[0x30];
    void* m_6ac;
    u8 _pad6B0[0x80];
    void* m_730;
    u8 _pad734[0x10];
    void* m_744;
    u8 _pad748[0xC];
    void* m_754;
    u8 _pad758[0x6C];
    void* m_7c4;
    void* m_7c8;
    void* m_7cc;
    u8 _pad7D0[0x58];
    void* m_828;
    u8 _pad82C[0x4];
    void* m_830;
    u8 _pad834[0x18];
    void* m_84c;
    u8 _pad850[0x8];
    void* m_858;
    void* m_85c;
    u8 _pad860[0x18];
    u8 m_878;
    u8 _pad879[0x15];
    s8 m_88e;
    u8 _pad88F[0x1D];
    void* m_8ac;
    u8 _pad8B0[0x44C];
    s32 m_cfc;
    void* inventory_objects;
    void* m_d04;
    u8 _padD08[0xA4];
    void* m_dac;
};

#include <stddef.h>
typedef char PlayerActionPaletteSize[(sizeof(TObjPlayer::ActionPalette) == 0x24) ? 1 : -1];
typedef char PlayerActionPaletteBanks[(offsetof(TObjPlayer::ActionPalette, bindings) == 4) ? 1 : -1];
typedef char PlayerHeaderSize[(offsetof(TObjPlayer, m_1c) == 0x1C) ? 1 : -1];
typedef char PlayerPaletteModifierOffset[(offsetof(TObjPlayer, m_4ac) == 0x4AC) ? 1 : -1];
typedef char PlayerActionPalettesOffset[(offsetof(TObjPlayer, action_palettes) == 0x500) ? 1 : -1];
typedef char PlayerStateAfterPalettes[(offsetof(TObjPlayer, m_550) == 0x550) ? 1 : -1];
typedef char PlayerHairSelectorOffset[(offsetof(TObjPlayer, m_878) == 0x878) ? 1 : -1];
typedef char PlayerHairFlagsOffset[(offsetof(TObjPlayer, m_88e) == 0x88E) ? 1 : -1];
typedef char PlayerHairTargetOffset[(offsetof(TObjPlayer, m_8ac) == 0x8AC) ? 1 : -1];
typedef char PlayerHairWaitOffset[(offsetof(TObjPlayer, m_cfc) == 0xCFC) ? 1 : -1];
typedef char PlayerInventoryObjectOffset[(offsetof(TObjPlayer, inventory_objects) == 0xD00) ? 1 : -1];

#endif
