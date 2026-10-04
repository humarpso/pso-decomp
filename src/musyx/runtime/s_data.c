#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
#define macTimeQueueRoot ((SYNTH_VOICE_803B19AC *)lbl_805D7420)
#define macActiveMacroRoot ((SYNTH_VOICE_803B19AC *)lbl_805D741C)
#define macRealTime lbl_805D7428
#define FLAGS (*(u64 *)&o->fh)
#define HEAD (*(Voice_803B2128 **)&lbl_805D741C)
#define synthVoice ((SYNTH_VOICE_803B2438 *)lbl_805D73B0)
#define vidCurrentId (*(u32 *)&lbl_805D7438)
#define vidRoot (*(VID_LIST_SV **)&lbl_805D743C)
#define vidFree (*(VID_LIST_SV **)&lbl_805D7440)
#include "types.h"
typedef struct GROUP_DATA_803B50E8 {
    u32 nextOff;
    u16 id;
    u16 type;
    u32 macroOff;
    u32 sampleOff;
    u32 curveOff;
    u32 keymapOff;
    u32 layerOff;
    union {
        struct {
            u32 tableOff;
        } fx;
        struct {
            u32 normpageOff;
            u32 drumpageOff;
            u32 midiSetupOff;
        } song;
    } data;
} GROUP_DATA_803B50E8;

typedef struct GSTACK_803B50E8 {
    GROUP_DATA_803B50E8 *gAddr;
    void *sdirAddr;
    void *prjAddr;
} GSTACK_803B50E8;

typedef struct FX_DATA_803B50E8 {
    u16 num;
    u16 reserverd;
    u8 fx[1][10];
} FX_DATA_803B50E8;

extern "C" {
extern s16 lbl_805D7450;
extern u8 lbl_805D7380;
void *TLobby__sub_803BD824(void *samples);
u32 TLobby__sub_803AD654(void *sdir, void *smp_data);
void TLobby__sub_803B4F5C(u16 *p, void *a, void *b, void *c);
s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2);
void TLobby__sub_803BD9C0(void);
u32 TLobby__sub_803B50E8(void *prj_data, u16 gid, void *samples, void *sdir, void *pool);
}

extern "C" {

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

static inline MEM_DATA_803B4CF8 *GetPoolAddr_803B4CF8(u16 id, MEM_DATA_803B4CF8 *m) {
    while (m->nextOff != 0xFFFFFFFF) {
        if (m->id == id) {
            return m;
        }

        m = (MEM_DATA_803B4CF8 *)((u8 *)m + m->nextOff);
    }
    return NULL;
}

static inline MEM_DATA_803B4CF8 *GetMacroAddr_803B4CF8(u16 id, POOL_DATA_803B4CF8 *pool) {
    if (pool == NULL) {
        return NULL;
    }
    return GetPoolAddr_803B4CF8(id, (MEM_DATA_803B4CF8 *)((u8 *)pool + pool->macroOff));
}
static inline MEM_DATA_803B4CF8 *GetCurveAddr_803B4CF8(u16 id, POOL_DATA_803B4CF8 *pool) {
    if (pool == NULL) {
        return NULL;
    }
    return GetPoolAddr_803B4CF8(id, (MEM_DATA_803B4CF8 *)((u8 *)pool + pool->curveOff));
}
static inline MEM_DATA_803B4CF8 *GetKeymapAddr_803B4CF8(u16 id, POOL_DATA_803B4CF8 *pool) {
    if (pool == NULL) {
        return NULL;
    }
    return GetPoolAddr_803B4CF8(id, (MEM_DATA_803B4CF8 *)((u8 *)pool + pool->keymapOff));
}
static inline MEM_DATA_803B4CF8 *GetLayerAddr_803B4CF8(u16 id, POOL_DATA_803B4CF8 *pool) {
    if (pool == NULL) {
        return NULL;
    }
    return GetPoolAddr_803B4CF8(id, (MEM_DATA_803B4CF8 *)((u8 *)pool + pool->layerOff));
}

void TLobby__sub_803B4CF8(u16 id, void *data, u8 dataType, u32 remove) {
    MEM_DATA_803B4CF8 *m;

    switch (dataType) {
    case 0:
        if (!remove) {
            if ((m = GetMacroAddr_803B4CF8(id, (POOL_DATA_803B4CF8 *)data)) != NULL) {
                TLobby__sub_803ADE74(id, &m->data.cmd);
            } else {
                TLobby__sub_803ADE74(id, NULL);
            }
        } else {
            TLobby__sub_803AE184(id);
        }
        break;
    case 2: {
        id |= 0x4000;
        if (!remove) {
            if ((m = GetKeymapAddr_803B4CF8(id, (POOL_DATA_803B4CF8 *)data)) != NULL) {
                TLobby__sub_803ACB50(id, &m->data.map);
            } else {
                TLobby__sub_803ACB50(id, NULL);
            }
        } else {
            TLobby__sub_803ACD40(id);
        }
    } break;
    case 3: {
        id |= 0x8000;
        if (!remove) {
            if ((m = GetLayerAddr_803B4CF8(id, (POOL_DATA_803B4CF8 *)data)) != NULL) {
                TLobby__sub_803ACEC4(id, &m->data.layer.entry, m->data.layer.num);
            } else {
                TLobby__sub_803ACEC4(id, NULL, 0);
            }
        } else {
            TLobby__sub_803AD10C(id);
        }
    } break;
    case 4:
        if (!remove) {
            if ((m = GetCurveAddr_803B4CF8(id, (POOL_DATA_803B4CF8 *)data)) != NULL) {
                TLobby__sub_803AD2D8(id, &m->data.tab);
            } else {
                TLobby__sub_803AD2D8(id, NULL);
            }
        } else {
            TLobby__sub_803AD4D0(id);
        }
        break;
    case 1:
        if (!remove) {
            TLobby__sub_803ADA80(id);
        } else {
            TLobby__sub_803ADB58(id);
        }
        break;
    }
}

#pragma pop

void TLobby__sub_803B4F5C(u16 *p, void *a, void *b, void *c) {
    void TLobby__sub_803B4CF8(u16, void *, void *, void *);
    u16 i;
    u16 v;

    while ((v = *p) != 0xFFFF) {
        if (v & 0x8000) {
            for (i = v & 0x3FFF; i <= p[1]; i++) {
                TLobby__sub_803B4CF8(i, a, b, c);
            }
            p += 2;
        } else {
            TLobby__sub_803B4CF8(*p++, a, b, c);
        }
    }
}

void TLobby__sub_803B4FF8(u16 *start, void *a, void *b, void *c) {
    void TLobby__sub_803B4CF8(u16, void *, void *, void *);
    s16 i;
    u16 *p;

    if (*start == 0xFFFF) {
        return;
    }
    p = start;
    while (*p != 0xFFFF) {
        p++;
    }
    p--;
    while (p >= start) {
        if (p != start) {
            if (p[-1] & 0x8000) {
                for (i = *p; i >= (s16)(p[-1] & 0x3FFF); i--) {
                    TLobby__sub_803B4CF8(i, a, b, c);
                }
                p -= 2;
            } else {
                TLobby__sub_803B4CF8(*p, a, b, c);
                p--;
            }
        } else {
            TLobby__sub_803B4CF8(*p, a, b, c);
            p--;
        }
    }
}

static GSTACK_803B50E8 gs[128];
#define sp lbl_805D7450
#define sndActive lbl_805D7380
struct Rec_803ADBF0;
#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)
static inline void InsertSamples_803B50E8(u16 *ref, void *samples, void *sdir) {
    samples = TLobby__sub_803BD824(samples);
    if (TLobby__sub_803AD654(sdir, samples)) {
        TLobby__sub_803B4F5C(ref, sdir, (void *)1, (void *)0);
    }
}
static inline void InsertMacros_803B50E8(u16 *ref, void *pool) { TLobby__sub_803B4F5C(ref, pool, (void *)0, (void *)0); }
static inline void InsertCurves_803B50E8(u16 *ref, void *pool) { TLobby__sub_803B4F5C(ref, pool, (void *)4, (void *)0); }
static inline void InsertKeymaps_803B50E8(u16 *ref, void *pool) { TLobby__sub_803B4F5C(ref, pool, (void *)2, (void *)0); }
static inline void InsertLayers_803B50E8(u16 *ref, void *pool) { TLobby__sub_803B4F5C(ref, pool, (void *)3, (void *)0); }
static inline void InsertFXTab_803B50E8(u16 gid, FX_DATA_803B50E8 *fd) { TLobby__sub_803ADBF0(gid, (Rec_803ADBF0 *)fd->fx, fd->num); }
u32 TLobby__sub_803B50E8(void *prj_data, u16 gid, void *samples, void *sdir, void *pool) {
    GROUP_DATA_803B50E8 *g;
    if (sndActive && sp < 128) {
        g = (GROUP_DATA_803B50E8 *)prj_data;
        while (g->nextOff != 0xFFFFFFFF) {
            if (g->id == gid) {
                gs[sp].gAddr = g;
                gs[sp].prjAddr = prj_data;
                gs[sp].sdirAddr = sdir;
                InsertSamples_803B50E8((u16 *)((u8 *)prj_data + g->sampleOff), samples, sdir);
                InsertMacros_803B50E8((u16 *)((u8 *)prj_data + g->macroOff), pool);
                InsertCurves_803B50E8((u16 *)((u8 *)prj_data + g->curveOff), pool);
                InsertKeymaps_803B50E8((u16 *)((u8 *)prj_data + g->keymapOff), pool);
                InsertLayers_803B50E8((u16 *)((u8 *)prj_data + g->layerOff), pool);
                if (g->type == 1) {
                    InsertFXTab_803B50E8(gid, (FX_DATA_803B50E8 *)((u8 *)prj_data + g->data.song.normpageOff));
                }
                TLobby__sub_803BD9C0();
                ++sp;
                return 1;
            }
            g = (GROUP_DATA_803B50E8 *)((u8 *)prj_data + g->nextOff);
        }
    }
    return 0;
}
#pragma pop

s32 TLobby__sub_803B5398(u16 id, u16 sub, s32 a2, s32 a3, u8 locked, s32 a5) {
    s32 TLobby__sub_803A3D8C(u8 *, u8 *, u16 *, s32, s32, s32, u16);
    Ent_803B5398 *tbl = lbl_80565DD8;
    Ent_803B5398 *e;
    s32 i;
    Desc_803B5398 *d;
    u8 *base;
    u8 *p1;
    u8 *p2;
    u16 *q;
    s32 r;
    u16 c;

    e = tbl;
    i = 0;
    while (i < lbl_805D7450) {
        if (id == e->desc->id) {
            d = tbl[i].desc;
            if (d->kind == 0) {
            base = tbl[i].base;
            p1 = base + d->o1C;
            p2 = base + d->o20;
            q = (u16 *)(base + d->o24);
            while ((c = *q) != 0xFFFF) {
                if (c == sub) {
                    if (locked) {
                        r = TLobby__sub_803A3D8C(p1, p2, q, a2, a3, a5, id);
                    } else {
                        sound_disable_irq();
                        r = TLobby__sub_803A3D8C(p1, p2, q, a2, a3, a5, id);
                        sound_enable_irq();
                    }
                    return r;
                }
                q += 0x2A;
            }
            return -1;
            }
            return -1;
        }
        e++;
        i++;
    }
    return -1;
}

void TLobby__sub_803B54D8(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    TLobby__sub_803B5398(arg0, arg1, arg2, arg3, 0U, arg4);
}

}
