#include "pso/ui/UISpriteConstants.h"
#include "types.h"
#include "pso/unk/text_802910EC.h"
#include "pso/misc/TLobby.h"
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
void queue_destruction__7TObjectFv(void *arg0);
s32 TLobby__sub_803DA16C(void *);
extern RecoveredGlobal_80291138_lbl_804D9668 creation_sprite_table;
extern u32 cmicon_instance;
extern RecoveredGlobal_802911E8_lbl_804DAA78 creation_view_parameters;
extern f32 lbl_805D3CA0;
extern const f32 lbl_805DD968;
extern const f32 lbl_805DD96C;
extern const f32 lbl_805DD970;
extern u8 creation_chara_sprite_entries[];
extern s32 creation_sprite_table_index;
s32 create__10TObjCMIconFPv(int);
extern s32 ccconsole_pvm_file_name_table[];
extern f32 ui_sprite_scale;
extern s32 current_language;
extern s32 tl_06;
typedef char RecoveredGlobal_80291138_lbl_804D9668_size[sizeof(RecoveredGlobal_80291138_lbl_804D9668) == 0x12DC ? 1 : -1];

void TCharaMaking__resolve_creation_sprite_table(u8 **table, s32 *id) {
  s32 index = *id;
  u8 *base = creation_chara_sprite_entries;
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
        queue_destruction__7TObjectFv((void *)cmicon_instance);
    }
    cmicon_instance = 0U;
    TLobby__sub_803DA16C(&creation_sprite_table.value);
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802911E8_lbl_804DAA78_size[sizeof(RecoveredGlobal_802911E8_lbl_804DAA78) == 0x90 ? 1 : -1];

void fn_80291178(void) {
    creation_sprite_table_index = 0;
    ui_sprite_scale = ui_sprite_unit_scale;
    if (current_language != 0) {
        creation_sprite_table_index = 1;
    }
    TObjCMIcon::init_icon_table();
    (*(s32 *)&cmicon_instance) = create__10TObjCMIconFPv(tl_06);
    TLobby::load_texture_pvm_file((const char *)(ccconsole_pvm_file_name_table[creation_sprite_table_index]), (s32)(((s32 *)&creation_sprite_table)));
}
}

void set_creation_projection_center(f32 farg0) {
    struct CopyStack_802911E8 { u8 bytes[0x48]; };
    CopyStack_802911E8 copy_storage_802911E8;
    *(ByteBlock_48 *)(copy_storage_802911E8.bytes) = *(const ByteBlock_48 *)((s32) ((u8 *)&creation_view_parameters.value + -4) + 4);
    (*(f32 *)(copy_storage_802911E8.bytes + 0x8)) = lbl_805DD968 * ((lbl_805DD970 * farg0) + lbl_805DD96C);
    ((TCameraCtrl *)(copy_storage_802911E8.bytes))->apply_view_params_if_flagged();
    lbl_805D3CA0 = farg0;
}
#pragma pop
