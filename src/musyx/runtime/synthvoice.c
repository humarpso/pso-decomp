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
extern "C" {

void TLobby__sub_803B24A0(void) {
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

Node_803B2598 *TLobby__sub_803B2598(u32 key) {
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

void unlink_sound_program(Prog_803B25CC *p) {
    if (p->id != 0xFFFFFFFF) {
        TLobby__sub_803B3B80((Obj_803B3B80 *)p);
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

s32 TLobby__sub_803B2920(u8 *arg0) {
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

u32 alloc_sound_voice_id(SYNTH_VOICE_SV *svoice, u32 isMaster) {
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
u32 find_sound_voice_by_id(u32 arg0) {
    if (arg0 != 0xFFFFFFFF) {
        Node_803B2A30 *p = find_node_803B2A30(arg0);
        if (p != 0) {
            return p->val;
        }
    }
    return -1;
}
#pragma pop

void free_sound_voice(Obj_803B312C *o) {
    u8 idx;
    Slot_803B312C *e;

    set_sound_program_wait_state(o, 2);
    TLobby__sub_803B2A80(o);
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

#define svVoice (*(SYNTH_VOICE_SV **)&lbl_805D73B0)
#define svInfo lbl_80557348
#pragma push
#pragma opt_common_subs on

u32 TLobby__sub_803B3540(u8 prio) {
    u32 voice;

    if ((voice = allocate_sound_voice(prio, 0xFF, 0xFFFF, 1)) != 0xFFFFFFFF) {
        svVoice[voice].block = 1;
        svVoice[voice].fxFlag = 1;

        unlink_sound_program((Prog_803B25CC *)&svVoice[voice]);
        svVoice[voice].id = voice | 0xFFFFFF00;

        if (is_sound_hw_voice_active(voice)) {
            TLobby__sub_803BCEC8(voice);
        }

        set_sound_program_wait_state((Obj_803B312C *)&svVoice[voice], 2);
        svVoice[voice].addr = NULL;
        TLobby__sub_803B2B60((Voice_803B2128 *)&svVoice[voice], prio);
    }

    return voice;
}

#pragma pop

#pragma push
#pragma opt_common_subs on

void TLobby__sub_803B3628(s32 voice) {
    if (voice == 0xFFFFFFFF) {
        return;
    }

    if (is_sound_hw_voice_active(voice)) {
        TLobby__sub_803BCEC8(voice);
    }

    svVoice[voice].id = voice;
    free_sound_voice((Obj_803B312C *)&svVoice[voice]);
    svVoice[voice].block = 0;
}

#pragma pop

#pragma push
#pragma opt_common_subs on

void TLobby__sub_803B36A8(u32 vi) {
    SYNTH_VOICE_SV *sv = &svVoice[vi];
    if (sv->addr != NULL) {
        unlink_sound_program((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        free_sound_voice((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        TLobby__sub_803AB0E4(vi);
    }

    TLobby__sub_803BCEC8(vi);
}

#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)

static inline u32 vidGetInternalId_803B3748(u32 vid) {
    Node_803B2598 *vl;

    if (vid != 0xffffffff) {
        if ((vl = TLobby__sub_803B2598(vid)) != NULL) {
            return ((u32 *)vl)[3];
        }
    }

    return 0xffffffff;
}

static inline void voiceKill_803B3748(u32 vi) {
    SYNTH_VOICE_SV *sv = &svVoice[vi];
    if (sv->addr != NULL) {
        unlink_sound_program((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        free_sound_voice((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        TLobby__sub_803AB0E4(vi);
    }

    TLobby__sub_803BCEC8(vi);
}

s32 TLobby__sub_803B3748(u32 voiceid) {
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
        unlink_sound_program((Prog_803B25CC *)sv);
        sv->cFlags &= ~3;
        sv->age = 0;
        free_sound_voice((Obj_803B312C *)sv);
    }

    if (sv->block != 0) {
        TLobby__sub_803AB0E4(vi);
    }

    TLobby__sub_803BCEC8(vi);
}

void TLobby__sub_803B3858(u16 *ref) {
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

s32 TLobby__sub_803B3AA8(Obj_803B3AA8 *arg0) {
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

void TLobby__sub_803B3B24(Obj_803B3B24 *arg0) {
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

void TLobby__sub_803B3B80(Obj_803B3B80 *arg0) {
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

#pragma push
#pragma opt_common_subs on

void TLobby__sub_803B3BFC(void) {
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
