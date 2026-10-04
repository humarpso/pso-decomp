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

typedef struct SYNTH_VOICELIST_V {
    u8 prev;
    u8 next;
    u16 user;
} SYNTH_VOICELIST_V;

typedef struct SYNTH_ROOTLIST_V {
    u16 next;
    u16 prev;
} SYNTH_ROOTLIST_V;

static VID_LIST_SV vidList[128];
static u8 synth_last_started[8][16];
static u8 synth_last_fxstarted[64];
static SYNTH_VOICELIST_V voicePrioSortVoices[64];
static u8 voicePrioSortVoicesRoot[256];
static SYNTH_ROOTLIST_V voicePrioSortRootList[256];
static SYNTH_VOICELIST_V voiceList[64];

#define lbl_805644C8 ((Node_803B24A0 *)vidList)
#define lbl_80565388 ((Slot_803B312C *)voiceList)
#define lbl_80564CC8 synth_last_started
#define lbl_80564D48 synth_last_fxstarted

extern "C" {
extern u16 lbl_805D7444;
}
#define voicePrioSortRootListRoot lbl_805D7444
#define voiceMusicRunning lbl_805D7446
#define voiceFxRunning lbl_805D7447
#define voiceListInsert lbl_805D7448
#define voiceListRoot lbl_805D7449
extern "C" {

void vidInit(void) {
    s32 i;
    Node_803B24A0 *n;
    Node_803B24A0 *prev;

    n = lbl_805644C8;
    lbl_805D7440 = n;
    lbl_805D7438 = 0;
    lbl_805D743C = NULL;
    prev = NULL;
    for (i = 0; i < 128; i++) {
        n->prev = prev;
        if (prev != NULL) {
            prev->next = n;
        }
        prev = n;
        n++;
    }
    prev->next = NULL;
}

Node_803B2598 *get_vidlist(u32 key) {
    Node_803B2598 *n;
    for (n = lbl_805D743C; n != 0; n = n->next) {
        if (n->key == key) {
            return n;
        }
        if (n->key > key) {
            break;
        }
    }
    return 0;
}

void vidRemoveVoiceReferences(Prog_803B25CC *p) {
    if (p->id != 0xFFFFFFFF) {
        voiceResetLastStarted((Obj_803B3B80 *)p);
        if (p->prevId != 0xFFFFFFFF) {
            VOICES_803B25CC[(u8)p->prevId].nextId = p->nextId;
            if (p->nextId != 0xFFFFFFFF) {
                VOICES_803B25CC[(u8)p->nextId].prevId = p->prevId;
            }
            UNLINK_803B25CC(p->node)
            PUSH_803B25CC(p->node)
            p->node = NULL;
        } else if (p->nextId != 0xFFFFFFFF) {
            p->node->owner = p->nextId;
            VOICES_803B25CC[(u8)p->nextId].prevId = 0xFFFFFFFF;
            VOICES_803B25CC[(u8)p->nextId].node2 = p->node2;
            if (p->node != p->node2) {
                UNLINK_803B25CC(p->node)
                PUSH_803B25CC(p->node)
                p->node = NULL;
            }
            p->node = NULL;
            p->node2 = NULL;
        } else if (p->node != p->node2) {
            UNLINK_803B25CC(p->node)
            PUSH_803B25CC(p->node)
            p->node = NULL;
            UNLINK_803B25CC(p->node2)
            PUSH_803B25CC(p->node2)
            p->node2 = NULL;
        } else {
            UNLINK_803B25CC(p->node)
            PUSH_803B25CC(p->node)
            p->node = NULL;
            p->node2 = NULL;
        }
    }
}

s32 vidMakeRoot(u8 *arg0) {
    M2C_FIELD(arg0, void **, 0xFC) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 8);
}

#define vidCurrentId (*(u32 *)&lbl_805D7438)
#define vidRoot (*(VID_LIST_SV **)&lbl_805D743C)
#define vidFree (*(VID_LIST_SV **)&lbl_805D7440)
#pragma push
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)

static inline u32 get_newvid_SV(void) {
    u32 vid;
    do {
        vid = vidCurrentId++;
    } while (vid == 0xFFFFFFFF);

    return vid;
}

u32 vidMakeNew(SYNTH_VOICE_SV *svoice, u32 isMaster) {
    u32 vid;
    VID_LIST_SV *nvl;
    VID_LIST_SV *lvl;
    VID_LIST_SV *vl;

    vid = get_newvid_SV();
    lvl = NULL;
    nvl = vidRoot;

    while (nvl != NULL) {
        if (nvl->vid > vid) {
            break;
        }

        if (nvl->vid == vid) {
            vid = get_newvid_SV();
        }
        lvl = nvl;
        nvl = nvl->next;
    }

    if ((vl = vidFree) == NULL) {
        return 0xFFFFFFFF;
    }

    if ((vidFree = vidFree->next) != NULL) {
        vidFree->prev = NULL;
    }

    if (lvl == NULL) {
        vidRoot = vl;
    } else {
        lvl->next = vl;
    }

    vl->prev = lvl;
    vl->next = nvl;

    if (nvl != NULL) {
        nvl->prev = vl;
    }

    vl->vid = vid;
    vl->root = svoice->id;
    svoice->vidMasterList = isMaster ? vl : NULL;
    svoice->vidList = vl;

    return isMaster ? vid : svoice->id;
}

#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline Node_803B2A30 *find_node_803B2A30(u32 id) {
    Node_803B2A30 *p;
    for (p = (Node_803B2A30 *)lbl_805D743C; p != 0; p = p->next) {
        if (p->key == id) {
            return p;
        }
        if (p->key > id) {
            break;
        }
    }
    return 0;
}
u32 vidGetInternalId(u32 arg0) {
    if (arg0 != 0xFFFFFFFF) {
        Node_803B2A30 *p = find_node_803B2A30(arg0);
        if (p != 0) {
            return p->val;
        }
    }
    return -1;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
void voiceRemovePriority(Obj_803B312C *svoice) {
    SYNTH_VOICELIST_V *vps;
    SYNTH_ROOTLIST_V *rps;

    vps = &voicePrioSortVoices[svoice->id & 0xFF];
    if (vps->user != 1) {
        return;
    }

    if (vps->prev != 0xFF) {
        voicePrioSortVoices[vps->prev].next = vps->next;
    } else {
        voicePrioSortVoicesRoot[svoice->grp] = vps->next;
    }

    if (vps->next != 0xFF) {
        voicePrioSortVoices[vps->next].prev = vps->prev;
    } else if (vps->prev == 0xFF) {
        rps = &voicePrioSortRootList[svoice->grp];

        if (rps->prev != 0xFFFF) {
            voicePrioSortRootList[rps->prev].next = rps->next;
        } else {
            lbl_805D7444 = rps->next;
        }

        if (rps->next != 0xFFFF) {
            voicePrioSortRootList[rps->next].prev = rps->prev;
        }
    }

    vps->user = 0;
}

#pragma pop

extern "C" void hwSetPriority(s32 i, s32 v);
#define set_sound_hw_voice_priority_V hwSetPriority
#pragma push
#pragma opt_common_subs on

void voiceSetPriority(Voice_803B2128 *svoice, u8 prio) {
    u32 v;
    u16 li;
    SYNTH_VOICELIST_V *vps;
    u16 i;
    v = svoice->fF4 & 0xFF;
    vps = &voicePrioSortVoices[v];
    if (vps->user == 1) {
        if (svoice->pad10C[0] == prio) {
            return;
        }

        voiceRemovePriority((Obj_803B312C *)svoice);
    }

    vps->user = 1;
    vps->prev = 0xff;
    if ((vps->next = voicePrioSortVoicesRoot[prio]) != 0xFF) {
        voicePrioSortVoices[voicePrioSortVoicesRoot[prio]].prev = v;
    } else if (voicePrioSortRootListRoot != 0xFFFF) {
        if (prio >= voicePrioSortRootListRoot) {
            for (i = voicePrioSortRootListRoot; i != 0xFFFF; i = voicePrioSortRootList[i].next) {
                if ((u16)i > prio) {
                    break;
                }
                li = i;
            }

            voicePrioSortRootList[li].next = (u16)prio;
            voicePrioSortRootList[prio].prev = li;
            voicePrioSortRootList[prio].next = i;
            if (i != 0xFFFF) {
                voicePrioSortRootList[i].prev = prio;
            }

        } else {
            voicePrioSortRootList[prio].next = voicePrioSortRootListRoot;
            voicePrioSortRootList[prio].prev = 0xFFFF;
            voicePrioSortRootList[voicePrioSortRootListRoot].prev = prio;
            voicePrioSortRootListRoot = prio;
        }
    } else {
        voicePrioSortRootList[prio].next = 0xFFFF;
        voicePrioSortRootList[prio].prev = 0xFFFF;
        voicePrioSortRootListRoot = prio;
    }

    voicePrioSortVoicesRoot[prio] = v;
    svoice->pad10C[0] = prio;
    set_sound_hw_voice_priority_V(svoice->fF4 & 0xFF, ((u32)prio << 24) | (svoice->f110 >> 15));
}

#pragma pop

#pragma push
#pragma pool_data off
void voiceFree(Obj_803B312C *o) {
    u8 idx;
    Slot_803B312C *e;

    macMakeInactive(o, 2);
    voiceRemovePriority(o);
    o->f34 = 0;
    o->grp = 0;
    idx = o->id;
    e = &lbl_80565388[(u8)o->id];
    if (e->refs == 0) {
        e->refs = 1;
        if (lbl_805D7449 != 0xFF) {
            e->next = 0xFF;
            e->prev = lbl_805D7448;
            lbl_80565388[lbl_805D7448].next = idx;
        } else {
            e->next = 0xFF;
            e->prev = 0xFF;
            lbl_805D7449 = idx;
        }
        lbl_805D7448 = idx;
        if (o->f11d != 0) {
            lbl_805D7447--;
        } else {
            lbl_805D7446--;
        }
    }
    o->id = -1;
}

#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)

static inline void voiceInitPrioSort_803B3210(void) {
    u32 i;

    for (i = 0; i < lbl_80557348.count; ++i) {
        voicePrioSortVoices[i].user = 0;
    }

    for (i = 0; i < 256; ++i) {
        voicePrioSortVoicesRoot[i] = 0xff;
    }

    voicePrioSortRootListRoot = 0xffff;
}

static inline void voiceInitFreeList_803B3210(void) {
    u32 i;

    for (i = 0; i < lbl_80557348.count; ++i) {
        voiceList[i].prev = i - 1;
        voiceList[i].next = i + 1;
        voiceList[i].user = 1;
    }

    voiceList[0].prev = 0xff;
    voiceList[lbl_80557348.count - 1].next = 0xff;
    voiceListRoot = 0;
    voiceListInsert = lbl_80557348.count - 1;
}

void synthInitAllocationAids(void) {
    voiceInitFreeList_803B3210();
    voiceInitPrioSort_803B3210();
    voiceFxRunning = 0;
    voiceMusicRunning = 0;
}

#pragma pop

#define svVoice (*(SYNTH_VOICE_SV **)&lbl_805D73B0)
#define svInfo lbl_80557348
#pragma push
#pragma opt_common_subs on

u32 voiceBlock(u8 prio) {
    u32 voice;

    if ((voice = voiceAllocate(prio, 0xFF, 0xFFFF, 1)) != 0xFFFFFFFF) {
        svVoice[voice].block = 1;
        svVoice[voice].fxFlag = 1;

        vidRemoveVoiceReferences((Prog_803B25CC *)&svVoice[voice]);
        svVoice[voice].id = voice | 0xFFFFFF00;

        if (hwIsActive(voice)) {
            hwBreak(voice);
        }

        macMakeInactive((Obj_803B312C *)&svVoice[voice], 2);
        svVoice[voice].addr = NULL;
        voiceSetPriority((Voice_803B2128 *)&svVoice[voice], prio);
    }

    return voice;
}

#pragma pop

#pragma push
#pragma opt_common_subs on

void voiceUnblock(s32 voice) {
    if (voice == 0xFFFFFFFF) {
        return;
    }

    if (hwIsActive(voice)) {
        hwBreak(voice);
    }

    svVoice[voice].id = voice;
    voiceFree((Obj_803B312C *)&svVoice[voice]);
    svVoice[voice].block = 0;
}

#pragma pop

#pragma push
#pragma opt_common_subs on

void voiceKill(u32 vi) {
    SYNTH_VOICE_SV *sv = &svVoice[vi];
    if (sv->addr != NULL) {
        vidRemoveVoiceReferences((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        voiceFree((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        streamKill(vi);
    }

    hwBreak(vi);
}

#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)

static inline u32 vidGetInternalId_803B3748(u32 vid) {
    Node_803B2598 *vl;

    if (vid != 0xffffffff) {
        if ((vl = get_vidlist(vid)) != NULL) {
            return ((u32 *)vl)[3];
        }
    }

    return 0xffffffff;
}

static inline void voiceKill_803B3748(u32 vi) {
    SYNTH_VOICE_SV *sv = &svVoice[vi];
    if (sv->addr != NULL) {
        vidRemoveVoiceReferences((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        voiceFree((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        streamKill(vi);
    }

    hwBreak(vi);
}

s32 voiceKillSound(u32 voiceid) {
    s32 ret = -1;
    u32 next_voiceid;
    u32 i;
    if (lbl_805D7380 != 0) {
        for (voiceid = vidGetInternalId_803B3748(voiceid); voiceid != -1; voiceid = next_voiceid) {
            i = voiceid & 0xff;
            next_voiceid = svVoice[i].child;
            if (voiceid == svVoice[i].id) {
                voiceKill_803B3748(i);
                ret = 0;
            }
        }
    }

    return ret;
}

#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)

static inline void voiceKill_803B3858(u32 vi) {
    SYNTH_VOICE_SV *sv = &svVoice[vi];
    if (sv->addr != NULL) {
        vidRemoveVoiceReferences((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        voiceFree((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        streamKill(vi);
    }

    hwBreak(vi);
}

void synthKillVoicesByMacroReferences(u16 *ref) {
    u32 i;
    u16 id;

    for (i = 0; i < svInfo.count; ++i) {
        if (svVoice[i].addr == NULL && svVoice[i].block == 0) {
            voiceKill_803B3858(i);
        }
    }

    while (*ref != 0xFFFF) {
        if ((*ref & 0x8000)) {
            id = *ref & 0x3fff;
            while (id <= ref[1]) {
                for (i = 0; i < svInfo.count; ++i) {
                    if (svVoice[i].addr != NULL && id == svVoice[i].macroId) {
                        voiceKill_803B3858(i);
                    }
                }
                ++id;
            }
            ref += 2;
        } else {
            for (i = 0; i < svInfo.count; ++i) {
                if (svVoice[i].addr != NULL && *ref == svVoice[i].macroId) {
                    voiceKill_803B3858(i);
                }
            }
            ++ref;
        }
    }
}

#pragma pop

#undef svVoice
#undef svInfo

#pragma push
#pragma pool_data off
s32 voiceIsLastStarted(Obj_803B3AA8 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                if (lbl_80564D48[v] == v) {
                    return 1;
                }
            } else if (v == lbl_80564CC8[b][a]) {
                return 1;
            }
        }
    }
    return 0;
}

void voiceSetLastStarted(Obj_803B3B24 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                lbl_80564D48[v] = v;
            } else {
                lbl_80564CC8[b][a] = v;
            }
        }
    }
}

void voiceResetLastStarted(Obj_803B3B80 *arg0) {
    u32 id = arg0->id;
    if (id != 0xFFFFFFFF) {
        u8 a = arg0->b121;
        if (a != 0xFF) {
            u8 b = arg0->b122;
            u8 v = id;
            if (b == 0xFF) {
                if (lbl_80564D48[v] == v) {
                    lbl_80564D48[v] = 0xFF;
                }
            } else if (v == lbl_80564CC8[b][a]) {
                lbl_80564CC8[b][a] = 0xFF;
            }
        }
    }
}

#pragma pop
#pragma push
#pragma opt_common_subs on

void voiceInitLastStarted(void) {
    u32 i;
    u32 j;

    for (i = 0; i < 8; ++i) {
        for (j = 0; j < 16; ++j) {
            lbl_80564CC8[i][j] = 0xFF;
        }
    }

    for (j = 0; j < 64; ++j) {
        lbl_80564D48[j] = 0xFF;
    }
}

#pragma pop

}
