#ifndef PSO_ITEM_TITEMMAGSUB_H
#define PSO_ITEM_TITEMMAGSUB_H
#include "types.h"
#include <stddef.h>

struct MagDrawOwner {
    u8 prefix[0x2FC];
    f32 center[3];
};
struct TItemMagSub {
    u8 prefix[0x1C];
    void *item;
    MagDrawOwner *owner;
    void *model, *animation;
    u32 textures;
    u8 unknown30[0x34];
    u32 flags;
    u8 unknown68[4];
    u32 selected_node;
    u8 unknown70[0x10];
    f32 animation_frame;
};
typedef char MagDrawOwnerCenter[offsetof(MagDrawOwner, center) == 0x2FC ? 1 : -1];
typedef char MagChildOwner[offsetof(TItemMagSub, owner) == 0x20 ? 1 : -1];
typedef char MagChildModel[offsetof(TItemMagSub, model) == 0x24 ? 1 : -1];
typedef char MagChildAnimation[offsetof(TItemMagSub, animation) == 0x28 ? 1 : -1];
typedef char MagChildTextures[offsetof(TItemMagSub, textures) == 0x2C ? 1 : -1];
typedef char MagChildFlags[offsetof(TItemMagSub, flags) == 0x64 ? 1 : -1];
typedef char MagChildSelectedNode[offsetof(TItemMagSub, selected_node) == 0x6C ? 1 : -1];
typedef char MagChildFrame[offsetof(TItemMagSub, animation_frame) == 0x80 ? 1 : -1];
extern "C" void render_mag_child(TItemMagSub *);
#endif
