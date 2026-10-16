#include "types.h"
#include "pso/TObjCMIcon.h"
#include "pso/misc/TCameraCtrl.h"

struct RecoveredGlobal_80291138_lbl_804D9668 {
    s32 value;
    u8 remaining[0x12D8];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_48 { u8 bytes[0x48]; };

struct RecoveredGlobal_802911E8_lbl_804DAA78 {
    s32 value;
    u8 remaining[0x8C];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TLobby__sub_803DA16C(void *);
extern RecoveredGlobal_80291138_lbl_804D9668 creation_sprite_table;
extern u32 cmicon_instance;
void fn_80291138(void);
extern RecoveredGlobal_802911E8_lbl_804DAA78 creation_view_parameters;
extern f32 lbl_805D3CA0;
extern const f32 lbl_805DD968;
extern const f32 lbl_805DD96C;
extern const f32 lbl_805DD970;
void set_creation_projection_center(f32 farg0);
extern u8 lbl_804D9578[];
extern s32 creation_sprite_table_index;
void TCharaMaking__resolve_creation_sprite_table(u8 **table, s32 *id);
void load_texture_pvm_file__6TLobbyFPvi(int, void *);
s32 create__10TObjCMIconFPv(int);
extern RecoveredGlobal_80291138_lbl_804D9668 creation_sprite_table;
extern s32 lbl_804DA944[];
extern f32 ui_sprite_scale;
extern s32 current_language;
extern s32 tl_06;
extern u32 cmicon_instance;
extern s32 creation_sprite_table_index;
extern const f32 lbl_805DD964;
void fn_80291178(void);
}

extern "C" {

typedef char RecoveredGlobal_80291138_lbl_804D9668_size[sizeof(RecoveredGlobal_80291138_lbl_804D9668) == 0x12DC ? 1 : -1];

void TCharaMaking__resolve_creation_sprite_table(u8 **table, s32 *id) {
  s32 index = *id;
  u8 *base = lbl_804D9578;
  if ((*id) < 143)
  {
    *table = base + 0xf8;
    return;
  }
  *id = (*id) - 143;
  if (creation_sprite_table_index == 0)
  {
    *table = base + 0xc24;
    return;
  }
  *table = base + 0xff8;
}

void fn_80291138(void) {
    if ((u32) cmicon_instance != 0U) {
        queue_destruction__7TObjectFv((void *) (cmicon_instance));
    }
    cmicon_instance = 0U;
    TLobby__sub_803DA16C((void *) (&creation_sprite_table.value));
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802911E8_lbl_804DAA78_size[sizeof(RecoveredGlobal_802911E8_lbl_804DAA78) == 0x90 ? 1 : -1];

void fn_80291178(void) {
    creation_sprite_table_index = 0;
    ui_sprite_scale = lbl_805DD964;
    if (current_language != 0) {
        creation_sprite_table_index = 1;
    }
    TObjCMIcon::init_icon_table();
    (*(s32 *)&cmicon_instance) = create__10TObjCMIconFPv(tl_06);
    load_texture_pvm_file__6TLobbyFPvi(lbl_804DA944[creation_sprite_table_index], ((s32 *)&creation_sprite_table));
}

void set_creation_projection_center(f32 farg0) {
    struct CopyStack_802911E8 { u8 bytes[0x48]; };
    CopyStack_802911E8 copy_storage_802911E8;
    *(ByteBlock_48 *)(copy_storage_802911E8.bytes) = *(const ByteBlock_48 *)((s32) ((u8 *)(&creation_view_parameters.value) + -4) + 4);
    (*(f32 *)(copy_storage_802911E8.bytes + 0x8)) = lbl_805DD968 * ((lbl_805DD970 * farg0) + lbl_805DD96C);
    ((TCameraCtrl *)(copy_storage_802911E8.bytes))->apply_view_params_if_flagged();
    lbl_805D3CA0 = farg0;
}
#pragma pop

}
