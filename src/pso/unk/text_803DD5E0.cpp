#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DDD78 { s8 a, b; };

struct S_803DDD94 { s8 a, b, c, d; };

struct S_803DA7E0 { s32 a, b, c, d, e; };

struct Ent_803DD6DC { s32 f0; s32 f4; s32 f8; };

struct Obj_803DD6DC { struct Ent_803DD6DC *ents; u32 count; };

typedef s32 M2C_UNK;
typedef struct Info_803DDA68 { u32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; } Info_803DDA68;

typedef struct Ent_803DDA68 { Info_803DDA68 *info; s32 f4; s32 f8; } Ent_803DDA68;

typedef struct Obj_803DDA68 { Ent_803DDA68 *ents; } Obj_803DDA68;

typedef struct Desc_803DDA68 { s32 f0; u16 w; u16 h; } Desc_803DDA68;

typedef struct Rec_803DDB34 { s32 f0; } Rec_803DDB34;

typedef struct Slot_803DDB34 { s32 f0; s32 f4; s32 f8; Rec_803DDB34 *rec; } Slot_803DDB34;

struct GvmTextureEntry_803DDDC8 {
    char* name;
    u32 attributes;
    u32 globalIndex;
};

struct GvmTextureList_803DDDC8 {
    GvmTextureEntry_803DDDC8* textures;
    u32 count;
};

struct GvmTextureHeader_803DDDC8 {
    u8 prefix[8];
    u16 flags;
    s16 directoryCount;
};

extern "C" {
extern s32 lbl_805D77A0;
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s);
void TLobby__sub_803DDCE8(u32 *p);
void TLobby__sub_803DE2C0(u32 *p);
u32 TLobby__sub_803DE2F8(u32 v);
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s);
void TLobby__sub_803DDCE8(u32 *p);
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD40(s32 arg0, s32 arg1);
void TLobby__sub_803DDF4C(void);
s32 TLobby__sub_803DDEFC(u16 arg0);
void TObjPlayer__sub_803DD6DC(struct Obj_803DD6DC *arg0, s32 arg1);
extern S_803DA7E0 lbl_8058D470;
s32 TObjPlayer__sub_803DDC50(struct Obj_803DD6DC *arg0);
typedef void (*Fn_803DD6DC)(struct Obj_803DD6DC *, s32);
extern Fn_803DD6DC lbl_804FC688[];
s32 TObjPlayer__sub_803D9E38(Obj_803DDA68 *, s32, s32 *, s32 *);
M2C_UNK TObjPlayer__sub_803DA7E0();
s32 TObjPlayer__sub_803DAC48(Obj_803DDA68 *, s32, s32, s32, Desc_803DDA68 *, s32 *);
u32 TObjPlayer__sub_803D9C98(Desc_803DDA68 *, s32 *, u32);
s32 TObjPlayer__sub_803D9E04(void);
s32 TObjPlayer__sub_803DAB9C(s32, u32);
M2C_UNK TObjPlayer__sub_803DAC1C(s32);
s32 TObjPlayer__sub_803DD91C(Obj_803DDA68 *obj, s32 idx);
s32 TObjPlayer__sub_803D9E38(Obj_803DDA68 *, s32, s32 *, s32 *);
M2C_UNK TObjPlayer__sub_803DA7E0();
s32 TObjPlayer__sub_803DAC48(Obj_803DDA68 *, s32, s32, s32, Desc_803DDA68 *, s32 *);
s32 TObjPlayer__sub_803DDA68(Obj_803DDA68 *obj, s32 idx);
s32 TObjPlayer__sub_803D9E38(Obj_803DDA68 *, s32, s32 *, s32 *);
M2C_UNK TObjPlayer__sub_803DA7E0();
s32 TObjPlayer__sub_803DA5A8(Slot_803DDB34 **, Rec_803DDB34 **);
s32 TObjPlayer__sub_803DA8E4(s32, s32, s32, s32 *);
M2C_UNK TObjPlayer__sub_803DAB7C(Obj_803DDA68 *, s32, s32);
extern s32 lbl_805D7758;
s32 TObjPlayer__sub_803DDB34(Obj_803DDA68 *obj, s32 idx);
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s);
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s);
void move_data__6TLobbyFv(void*, const void*, s32);
s32 strlen(const char*);
void TLobby__sub_803DDDC8(GvmTextureList_803DDDC8* list, s32 stride, const GvmTextureHeader_803DDDC8* header);
}

extern "C" {

void TLobby__sub_803DDD20(s32 arg0);
void TLobby__sub_803DDD40(s32 arg0, s32 arg1);
void TObjPlayer__sub_803DD5E0(s32 arg0);

extern s32 lbl_805D7788;

void TObjPlayer__sub_803DD5E0(s32 arg0) {
    lbl_805D7788 = arg0;
}

void TObjPlayer__sub_803DD6DC(struct Obj_803DD6DC *arg0, s32 arg1) {
    s32 idx;

    switch (arg0->ents[arg1].f4 & 0x5C000000) {
    case 0x0:
        idx = 0;
        break;
    case 0x40000000:
        idx = 1;
        break;
    case 0x8000000:
        idx = 2;
        break;
    case 0x4000000:
        idx = 3;
        break;
    default:
        idx = 2;
        break;
    }
    lbl_804FC688[idx](arg0, arg1);
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

s32 TObjPlayer__sub_803DD91C(Obj_803DDA68 *obj, s32 idx) {
    s32 sz;
    s32 id;
    s32 arg;
    s32 handle;
    Desc_803DDA68 desc;
    s32 r;
    u32 n;
    Info_803DDA68 *info;
    TObjPlayer__sub_803DA7E0();
    r = TObjPlayer__sub_803D9E38(obj, idx, &id, &arg);
    if (r != 0) {
        return r;
    }
    n = TObjPlayer__sub_803D9C98(&desc, &sz, (u32)obj->ents[idx].info);
    if (n == 0) {
        n = TObjPlayer__sub_803D9C98(&desc, &sz, obj->ents[idx].info->f0);
        if (n == 0) {
            info = obj->ents[idx].info;
            desc.w = info->f10;
            desc.h = info->f14;
            desc.f0 = info->f4;
            n = info->f0;
        }
    }
    if ((u32)id != 0xFFFFFFFF) {
        sz = id;
    }
    r = TObjPlayer__sub_803DAC48(obj, idx, sz, arg, &desc, &handle);
    if (r != 0) {
        return r;
    }
    if (TObjPlayer__sub_803DAB9C(handle, n) < 0) {
        TObjPlayer__sub_803DAC1C(handle);
        return -1;
    }
    while (TObjPlayer__sub_803D9E04() != 1) {
    }
    return 1;
}

s32 TObjPlayer__sub_803DDA68(Obj_803DDA68 *obj, s32 idx) {
    s32 id;
    Desc_803DDA68 desc;
    s32 arg;
    s32 handle;
    s32 r;
    s32 v;
    Info_803DDA68 *info;
    TObjPlayer__sub_803DA7E0();
    r = TObjPlayer__sub_803D9E38(obj, idx, &id, &arg);
    if (r != 0) {
        return r;
    }
    info = obj->ents[idx].info;
    desc.w = info->f10;
    desc.h = info->f14;
    desc.f0 = info->f4;
    v = obj->ents[idx].f8;
    if ((u32)id != 0xFFFFFFFF) {
        v = id;
    }
    if (TObjPlayer__sub_803DAC48(obj, idx, v, arg, &desc, &handle) >= 0) {
        return 1;
    }
    return -1;
}

s32 TObjPlayer__sub_803DDB34(Obj_803DDA68 *obj, s32 idx) {
    s32 id;
    s32 arg;
    s32 h;
    Slot_803DDB34 *slot;
    Rec_803DDB34 *rec;
    s32 r;
    s32 v;
    TObjPlayer__sub_803DA7E0();
    r = TObjPlayer__sub_803D9E38(obj, idx, &id, &arg);
    if (r != 0) {
        return r;
    }
    v = obj->ents[idx].f8;
    if ((u32)id != 0xFFFFFFFF) {
        v = id;
    }
    switch (TObjPlayer__sub_803DA8E4(v, arg, 0, &h)) {
    case -1:
        return -1;
    case 0:
        h = TObjPlayer__sub_803DA5A8(&slot, &rec);
        if (h < 0) {
            return -1;
        }
        slot->rec = rec;
        if ((u32)v != 0xFFFFFFFF) {
            slot->rec->f0 = v;
        }
        lbl_805D7758++;
        TObjPlayer__sub_803DAB7C(obj, idx, h);
        break;
    }
    return 1;
}

s32 TObjPlayer__sub_803DDC50(struct Obj_803DD6DC *arg0) {
    u32 i;
    if (arg0->count == 0) {
        lbl_8058D470.c = 1;
        return -1;
    }
    for (i = 0; i < arg0->count; i++) {
        if (((s32 (*)(struct Obj_803DD6DC *, s32))TObjPlayer__sub_803DD6DC)(arg0, i) < 0) {
            lbl_8058D470.a = i;
            return -1;
        }
    }
    return 1;
}

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDCE8(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

void TLobby__sub_803DDD20(s32 arg0) {
    lbl_805D77A4 = arg0;
    lbl_805D77A0 = arg0;
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

s32 TLobby__sub_803DDD2C(s32 arg0) {
    s32 temp_r4;
    temp_r4 = lbl_805D77A0;
    lbl_805D77A0 = temp_r4 + arg0;
    return temp_r4;
}

void TLobby__sub_803DDD40(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        lbl_805D77A0 += arg0;
        return;
    case 0:
        lbl_805D77A0 = lbl_805D77A4 + arg0;
        return;
    }
}
#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s) {
    s32 a = s->a;
    d->a = a;
    s32 b = s->b;
    d->b = b;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s) {
    s32 t;
    t = s->a;
    d->a = t;
    t = s->b;
    d->b = t;
    t = s->c;
    d->c = t;
    t = s->d;
    d->d = t;
}
#pragma pop

#pragma push
#pragma use_lmw_stmw off
void TLobby__sub_803DDDC8(GvmTextureList_803DDDC8* list, s32 stride, const GvmTextureHeader_803DDDC8* header) {
    u16 image;
    s32 off;
    u16 flags;
    s32 names;
    s32 formats;
    s32 dimensions;
    s32 alternateGlobal;
    s32 globals;
    s32 count;
    u8* record;
    GvmTextureEntry_803DDDC8* texture;
    s32 index;
    index = 0;
    off = 0;
    flags = header->flags;
    names = flags & 1;
    formats = flags & 2;
    dimensions = flags & 4;
    alternateGlobal = flags & 0x400;
    globals = flags & 8;
    count = header->directoryCount;
    while (index < count) {
        record = (u8*)TLobby__sub_803DDD2C(stride);
        texture = (GvmTextureEntry_803DDDC8*)((u8*)list->textures + off);
        TLobby__sub_803DDD78((S_803DDD78*)&image, (S_803DDD78*)record);
        texture->attributes = (texture->attributes & 0xFFFF0000) | image;
        record += 2;
        if (names) {
            s32 length = strlen((char*)record);
            if (length > 0) {
                move_data__6TLobbyFv(texture->name, record, length);
            }
            record += 0x1C;
        }
        if (formats) record += 2;
        if (dimensions) record += 2;
        if (alternateGlobal) {
            if (globals) {
                TLobby__sub_803DDD94((S_803DDD94*)&texture->globalIndex, (S_803DDD94*)record);
                texture->attributes |= 0x01000000;
            }
        } else if (globals) {
            TLobby__sub_803DDD94((S_803DDD94*)&texture->globalIndex, (S_803DDD94*)record);
            texture->attributes |= 0x00800000;
        }
        off += 0xC;
        index++;
    }
}
#pragma pop

s32 TLobby__sub_803DDEFC(u16 arg0) {
    s32 r = 2;
    if (arg0 & 1) r = 0x1E;
    if (arg0 & 2) r += 2;
    if (arg0 & 4) r += 2;
    if (arg0 & 8) r += 4;
    return r;
}

void TLobby__sub_803DDF4C(void) {
    s32 spC;
    s32 sp8;
    do {
        spC = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
        TLobby__sub_803DDCE8((u32 *)((void *) (&spC)));
        switch (spC) {
        case 0x4D4D4F43:
        case 0x564E4F43:
        case 0x4E4C444D:
        case 0x494D5650:
        case 0x4C505647:
        case 0x43474D49:
            sp8 = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
            TLobby__sub_803DDCE8((u32 *)((void *) (&sp8)));
            TLobby__sub_803DDD40((s32)((int) (sp8)), (s32)((int) (1)));
            break;
        case 0x54525647:
            TLobby__sub_803DDD40((s32)((int) (-4)), (s32)((int) (1)));
            break;
        default:
            sp8 = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
            TLobby__sub_803DDCE8((u32 *)((void *) (&sp8)));
            TLobby__sub_803DDD40((s32)((int) (sp8)), (s32)((int) (1)));
            break;
        }
    } while ((u32) (spC + 0xABAE0000) != 0x5647U);
}

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DE2C0(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
u32 TLobby__sub_803DE2F8(u32 v) {
    return ((v & 0xFF) << 24) | ((v & 0xFF00) << 8) | ((v & 0xFF0000) >> 8) | ((v & 0xFF000000) >> 24);
}
#pragma pop

}
