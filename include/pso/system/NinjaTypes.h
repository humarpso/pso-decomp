#ifndef PSO_SYSTEM_NINJATYPES_H
#define PSO_SYSTEM_NINJATYPES_H

#include "types.h"

// Ninja texture list: `nbTexture` names, each naming one texture.
struct NJS_TEXNAME {
    void *filename;
    u32 attr;
    u32 texaddr;
};

struct NJS_TEXLIST {
    NJS_TEXNAME *textures;
    u32 nbTexture;
};

// A Ninja colour with float channels, alpha first.
struct NJS_ARGB {
    f32 a;
    f32 r;
    f32 g;
    f32 b;
};

// NJS_OBJECT evalflags bit: the node is not drawn.
#define NJD_EVAL_HIDE 0x8

// Ninja model hierarchy node.
struct NJS_OBJECT {
    u32 evalflags;
    void *model;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    NJS_OBJECT *child;
    NJS_OBJECT *sibling;
};

#endif
