#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

void TLobby__sub_803A6ED0(s32 arg0, u8 arg1, u8 arg2) {
    if (arg1 == 0xFF) {
        arg1 = 8;
    }
    ((u32 (*)[16])((u8 *)&lbl_80556F88))[arg1][arg2] = (u32)((arg0 << 3) * 0x600) / 240;
}

s32 TLobby__sub_803A6F18(Obj_803A6F18 *arg0) {
    u32 r = arg0->b122;
    if (r == 0xFF) {
        r = 8;
    }
    return ((u32 (*)[16])((u8 *)&lbl_80556F88))[r][arg0->b123];
}

void TLobby__sub_803A6F4C(Obj_803A6F4C *arg0) {
    u64 fl = *(u64 *)&arg0->fh;
    if ((fl & 0x20000) == 0) {
        if (arg0->b131 == 1) {
            if ((fl & 0x1000) == 0) {
                arg0->i13C = 0;
            } else {
                arg0->i13C = arg0->i134;
            }
        } else {
            arg0->i13C = arg0->i134;
        }
        arg0->i138 = arg0->b130 << 16;
    }
}

#pragma push
#pragma opt_common_subs on
u32 TLobby__sub_803A6FC4(u8 key, u8 midi, u8 midiSet, u32 isMaster, u32 *rejected) {
    void TLobby__sub_803BBAA8(u8 midi, u8 midiSet, u8 key);
    u32 alloc_sound_voice_id(SYNTH_VOICE_SV *svoice, u32 isMaster);
    u32 i;
    u32 vid;
    u32 id;
    SYNTH_VOICE_SV *sv;
    SYNTH_VOICE_SV *last_sv;
    u32 legatoVoiceIsStarting;

    legatoVoiceIsStarting = 0;
    vid = 0xFFFFFFFF;

    i = 0;
    sv = SV_VOICES;
    while (i < lbl_80557348.count) {
        if (sv->block == 0 && sv->id != 0xFFFFFFFF && sv->midi == midi && sv->midiSet == midiSet) {
            if ((sv->cFlags & 2) != 0) {
                legatoVoiceIsStarting = 1;
            }
            if ((sv->cFlags & 0x10) != 0 && (sv->cFlags & 0x10000000008) != 0x8 && is_sound_hw_voice_active(i)) {
                if (vid == 0xFFFFFFFF && (sv->cFlags & 0x20002) == 0x20002) {
                    *rejected = 1;
                    return 0xFFFFFFFF;
                }
                last_sv = sv;
                sv->portCurPitch = (sv->curNote * 65536) + (sv->curDetune * 65536) / 100;
                sv->lastNote = sv->curNote;
                sv->curNote = key + ((sv->curNote & 0xff) - sv->orgNote);
                sv->orgNote = key;
                sv->curDetune = 0;
                sv->portTime = 0;
                sv->cFlags |= 0x20000;
                unlink_sound_program((Prog_803B25CC *)&SV_VOICES[i]);
                if (vid == 0xFFFFFFFF) {
                    sv->child = 0xFFFFFFFF;
                    sv->parent = 0xFFFFFFFF;
                    vid = alloc_sound_voice_id(&SV_VOICES[i], isMaster);
                    id = sv->id;
                } else {
                    SV_VOICES[id & 0xff].child = sv->id;
                    sv->parent = id;
                    id = sv->id;
                    alloc_sound_voice_id(&SV_VOICES[i], 0);
                }
            }
        }
        ++i;
        sv++;
    }

    if (vid != 0xFFFFFFFF) {
        TLobby__sub_803B3B24((Obj_803B3B24 *)last_sv);
        TLobby__sub_803BBAA8(last_sv->midi, last_sv->midiSet, last_sv->curNote);
        *rejected = 0;
    } else {
        *rejected = legatoVoiceIsStarting;
    }
    return vid;
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on

static inline u32 check_portamento_SV(u8 key, u8 midi, u8 midiSet, u32 newVID, u32 *vid) {
    u32 rejected;

    if (TLobby__sub_803BB5E4(65, midi, midiSet) > 8064) {
        *vid = TLobby__sub_803A6FC4(key & 0x7f, midi, midiSet, newVID, &rejected);
        return (u32)__cntlzw(rejected) >> 5;
    }
    *vid = 0xFFFFFFFF;
    return 1;
}

u32 TLobby__sub_803A724C(u16 layerID, s16 prio, u8 maxVoices, u16 allocId, u8 key, u8 vol, u8 panning, u8 midi,
                         u8 midiSet, u8 section, u16 step, u16 trackid, u32 vidFlag, u8 vGroup, u8 studio, u32 itd) {
    LAYER_SV *TLobby__sub_803AE6DC(u16 layerID, u16 *n);
    u32 start_sound_voice(u16 macid, u8 priority, u8 maxVoices, u16 allocId, u8 key, u8 vol, u8 panning, u8 midi,
                          u8 midiSet, u8 section, u16 step, u16 trackid, u8 new_vid, u8 vGroup, u8 studio, u32 itd);
    u32 TLobby__sub_803A7620(u16 keymapID, s16 prio, u8 maxVoices, u16 allocId, u8 key, u8 vol, u8 panning, u8 midi,
                             u8 midiSet, u8 section, u16 step, u16 trackid, u32 vidFlag, u8 vGroup, u8 studio, u32 itd);
    u32 TLobby__sub_803B2920(SYNTH_VOICE_SV *svoice);
    u16 n;
    u32 vid;
    u32 new_id;
    u32 id;
    LAYER_SV *l;
    s32 p;
    s32 k;
    u8 v;
    u8 mKey;

    vid = 0xFFFFFFFF;
    if ((l = TLobby__sub_803AE6DC(layerID, &n)) == NULL) {
        goto end;
    }

    mKey = key & 0x7f;
    for (; n != 0; --n, l++) {
        if (l->id == 0xffff || l->keyLow > mKey || l->keyHigh < mKey) {
            continue;
        }

        k = mKey + l->transpose;
        k = CLAMP_SV(k, 0, 127);

        if ((l->id & 0xC000) == 0) {
            if (check_portamento_SV(k, midi, midiSet, 0, &new_id)) {
                if (new_id != 0xFFFFFFFF) {
                    goto apply_new_id;
                } else {
                    goto start_new_id;
                }
            }
            continue;
        }

    start_new_id:
        if ((l->panning & 0x80) == 0) {
            p = l->panning - 0x40;
            p += panning;
            p = CLAMP_INV_SV(p, 0, 0x7f);
        } else {
            p = 0x80;
        }

        v = (vol * l->volume) / 0x7f;
        prio += l->prioOffset;
        prio = CLAMP_SV(prio, 0, 0xff);

        switch (l->id & 0xC000) {
        case 0:
            new_id = start_sound_voice(l->id, prio, maxVoices, allocId, k | (key & 0x80), v, p, midi, midiSet,
                                       section, step, trackid, 0, vGroup, studio, itd);
            break;
        case 0x4000:
            new_id = TLobby__sub_803A7620(l->id, prio, maxVoices, allocId, k | (key & 0x80), v, p, midi, midiSet,
                                          section, step, trackid, 0, vGroup, studio, itd);
            break;
        case 0x8000:
            new_id = TLobby__sub_803A724C(l->id, prio, maxVoices, allocId, k | (key & 0x80), v, p, midi, midiSet,
                                          section, step, trackid, 0, vGroup, studio, itd);
            break;
        }

        if (new_id != 0xFFFFFFFF) {
        apply_new_id:
            if (vid == 0xFFFFFFFF) {
                if (vidFlag != 0) {
                    vid = TLobby__sub_803B2920(&SV_VOICES[new_id & 0xff]);
                } else {
                    vid = new_id;
                }
            } else {
                SV_VOICES[id & 0xff].child = new_id;
                SV_VOICES[new_id & 0xff].parent = id;
            }
            id = new_id;
            while (SV_VOICES[id & 0xff].child != 0xFFFFFFFF) {
                SV_VOICES[id & 0xff].block = 1;
                id = SV_VOICES[id & 0xff].child;
            }
            SV_VOICES[id & 0xff].block = 1;
        }
    }

end:
    return vid;
}
#pragma pop
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on

static inline u32 apply_portamento_SV(SYNTH_VOICE_SV *svoice, u32 ccents, u32 deltaTime) {
    u32 old_portCurPitch;

    if ((svoice->cFlags & 0x400) != 0 && (int)((svoice->portDuration - svoice->portTime) >> 8) > 0) {
        old_portCurPitch = svoice->portCurPitch;
        svoice->portCurPitch += (int)deltaTime * ((int)(ccents - svoice->portCurPitch) >> 8) /
                                (int)((svoice->portDuration - svoice->portTime) >> 8);

        if ((old_portCurPitch < ccents && svoice->portCurPitch < ccents) ||
            (old_portCurPitch > ccents && (svoice->portCurPitch > ccents))) {
            ccents = svoice->portCurPitch;
            svoice->portTime += deltaTime;
        } else {
            svoice->portTime = svoice->portDuration;
        }
    }
    return ccents;
}

static inline void synthInitPortamento_SV(SYNTH_VOICE_SV *svoice) {
    if (svoice->cFlags & 0x20000) {
        return;
    }

    if (svoice->portType == 1) {
        if (!(svoice->cFlags & 0x1000)) {
            svoice->portTime = 0;
        } else {
            svoice->portTime = svoice->portDuration;
        }
    } else {
        svoice->portTime = svoice->portDuration;
    }

    svoice->portCurPitch = svoice->lastNote << 16;
}

static inline u32 convert_cents_SV(SYNTH_VOICE_SV *svoice, u32 ccents) {
    u32 curDetune;
    u32 cpitch;

    cpitch = calc_sound_base_pitch(ccents / 65536, svoice->sInfo) * 65536;
    if ((curDetune = ccents & 0xffff) != 0) {
        cpitch += curDetune * ((calc_sound_pitch_semitone_up(cpitch / 65536) & 0xffff) - (cpitch / 65536));
    }
    return cpitch;
}

static inline void UpdateTimeMIDICtrl_SV(SYNTH_VOICE_SV *sv) {
    if (!sv->timeUsedByInput) {
        return;
    }

    sv->timeUsedByInput = 0;
    sv->midiDirtyFlags = 0x1fff;
}

void update_sound_voice_pitch(u32 i) {
    u32 j;
    s32 pbend;
    u32 ccents;
    u32 cpitch;
    u16 Modulation;
    u16 portamento;
    u32 lowDeltaTime;
    SYNTH_VOICE_SV *sv;
    u32 cntDelta;
    u32 addFactor;
    u16 adsr_start;
    u16 adsr_delta;
    s32 vrange;
    s32 voff;

    sv = &SV_VOICES[i];
    if (!is_sound_hw_voice_active(i) && sv->addr == NULL) {
        goto end;
    }

    lowDeltaTime = lbl_805D73C0 - sv->lastLowCallTime;
    sv->lastLowCallTime = lbl_805D73C0;
    for (j = 0; j < 2; ++j) {
        if (sv->lfo[j].period == 0) {
            continue;
        }
        sv->lfo[j].time += lowDeltaTime;
        sv->lfo[j].value =
            TLobby__sub_803BC93C((sv->lfo[j].time % sv->lfo[j].period * 16) / (sv->lfo[j].period / 256));
        if (sv->lfo[j].value != sv->lfo[j].lastValue) {
            sv->lfo[j].lastValue = sv->lfo[j].value;
            if (sv->lfoUsedByInput[j]) {
                sv->lfoUsedByInput[j] = 0;
                sv->midiDirtyFlags |= 0x1fff;
            }
        }
    }

    if ((sv->cFlags & 0x2000) != 0) {
        sv->vibCurTime += lowDeltaTime;
        sv->vibCurOffset = TLobby__sub_803BC93C((sv->vibCurTime % sv->vibPeriod * 16) / (sv->vibPeriod / 256));
    }

    if (sv->sweepNum[0] | sv->sweepNum[1]) {
        cntDelta = (lowDeltaTime << 8) >> 4;
        addFactor = (lowDeltaTime << 4) >> 4;
        for (j = 0; j < 2; ++j) {
            if (sv->sweepNum[j] == 0) {
                continue;
            }
            sv->sweepCnt[j] -= cntDelta;
            if (sv->sweepCnt[j] <= 0) {
                sv->sweepCnt[j] = sv->sweepNum[j] << 16;
                sv->sweepOff[j] = 0;
            } else {
                sv->sweepOff[j] += (sv->sweepAdd[j] >> 12) * addFactor;
            }
        }
    }

    for (j = 0; j < 2; ++j) {
        if (sv->panning[j] == sv->panTarget[j]) {
            continue;
        }
        sv->panTime[j] -= lowDeltaTime;
        if ((s32)sv->panTime[j] <= 0) {
            sv->panning[j] = sv->panTarget[j];
            sv->panTime[j] = 0;
        } else {
            sv->panning[j] = sv->panTarget[j] - (sv->panTime[j] / 256) * sv->panDelta[j];
            sv->panning[j] = CLAMP_INV_SV((s32)sv->panning[j], 0, 0x7f0000u);
        }

        sv->cFlags |= 0x200000000000;
    }

    if ((sv->cFlags & 0x20000000000) != 0 &&
        TLobby__sub_803B4500(&sv->pitchADSR, &adsr_start, &adsr_delta)) {
        sv->cFlags &= ~0x20000000000;
    }

    ccents = sv->curNote * 65536 + (sv->curDetune * 65536) / 100;
    if ((sv->cFlags & 0x10030) != 0) {
        if (sv->midi != 0xff) {
            pbend = TLobby__sub_803BC090(sv);
            sv->pbLast = pbend;
            goto pbend_adjust;
        }
    } else {
        pbend = sv->pbLast;
    pbend_adjust:
        if (pbend != 0x2000) {
            pbend -= 0x2000;
            if (pbend < 0) {
                ccents += sv->pbLowerKeyRange * pbend * 8;
            } else {
                ccents += sv->pbUpperKeyRange * pbend * 8;
            }
        }
    }

    if ((sv->cFlags & 0x2000) != 0) {
        Modulation = TLobby__sub_803BC120(sv);
        vrange = sv->vibKeyRange * 256 + (sv->vibCentRange * 256) / 100;
        if (sv->vibModAddScale != 0) {
            vrange += (sv->vibModAddScale * ((Modulation >> 7) & 0x1ff)) >> 7;
        }
        if ((sv->cFlags & 0x4000) != 0) {
            voff = (sv->vibCurOffset * ((Modulation >> 7) & 0x1ff)) >> 7;
        } else {
            voff = sv->vibCurOffset;
        }
        ccents += (vrange * voff) >> 4;
    }

    if (sv->midi != 0xff) {
        portamento = TLobby__sub_803BB5E4(65, sv->midi, sv->midiSet);
        if (portamento != sv->portLastCtrlState || (sv->cFlags & 0x21000) == 0x20000) {
            if (portamento <= 0x1f80) {
                sv->cFlags &= ~0x400;
            } else {
                if ((sv->cFlags & 0x400) == 0) {
                    synthInitPortamento_SV(sv);
                }
                sv->cFlags |= 0x400;
            }
            sv->cFlags |= 0x1000;
            sv->portLastCtrlState = portamento;
        }
    }

    ccents = apply_portamento_SV(sv, ccents, lowDeltaTime);
    if ((sv->cFlags & 0x20000000000) != 0) {
        ccents += sv->pitchADSRRange * (sv->pitchADSR.currentVolume >> 16) >> 7;
    }

    cpitch = convert_cents_SV(sv, ccents);
    cpitch += sv->sweepOff[0] + sv->sweepOff[1];
    cpitch = ((cpitch >> 16) * TLobby__sub_803BC0D8(sv)) >> 13;
    sv->curPitch = cpitch;

    TLobby__sub_803BD19C(i, cpitch);
    schedule_sound_voice_update(sv, 0, 0xf00);

end:
    UpdateTimeMIDICtrl_SV(sv);
}
#pragma pop

void TLobby__sub_803A897C(s32 arg0) {
    Ch_803A897C *o = (Ch_803A897C *)&lbl_805D73B0[arg0];

    if (is_sound_hw_voice_active(arg0) != 0 || o->f34 != 0) {
        TLobby__sub_803B1C98((Voice_803B1C98 *)o, (u32)(0x1F80 - TLobby__sub_803BC168(o)) >> 31);
        if ((o->flags & 0x20) != 0) {
            o->flags &= ~0x20ULL;
            o->flags |= 0x10;
            TLobby__sub_803BD138(arg0, o->f11F);
        }
        if ((o->flags & 0x10000000090ULL) == 0x90) {
            o->flags &= ~0x90ULL;
            key_off_sound_hw_voice(arg0);
            if ((o->flags & 0x20000000000ULL) != 0 && (u32)key_off_sound_envelope((struct Envelope_803B431C *)o->env) != 0) {
                o->flags &= ~0x20000000000ULL;
            }
        }
    }
    if (o->fA8 != 0) {
        o->fA8 = 0;
        o->f214 = 0x1FFF;
    }
}
#pragma push
#pragma opt_common_subs on
void schedule_sound_voice_update(SYNTH_VOICE_SV *svoice, s32 jobType, u32 deltaTime) {
    SynthBss_SV *bss = (SynthBss_SV *)&lbl_80556F88;
    SYNTH_QUEUE_SV *newJq;
    SYNTH_QUEUE_SV **root;
    u8 jobTabIndex;
    SYNTH_JOBTAB_SV *jobTab;

    jobTabIndex = ((deltaTime / 256) + lbl_805D7381) & 0x1f;
    jobTab = &bss->synthJobTable[jobTabIndex];

    switch (jobType) {
    case 0:
        newJq = &svoice->lowPrecisionJob;
        if (newJq->jobTabIndex != 0xff) {
            if (newJq->jobTabIndex == jobTabIndex) {
                return;
            }
            if (newJq->next != NULL) {
                newJq->next->prev = newJq->prev;
            }
            if (newJq->prev != NULL) {
                newJq->prev->next = newJq->next;
            } else {
                bss->synthJobTable[newJq->jobTabIndex].lowPrecision = newJq->next;
            }
        }
        root = &jobTab->lowPrecision;
        break;
    case 1:
        newJq = &svoice->zeroOffsetJob;
        if (newJq->jobTabIndex != 0xff) {
            if (newJq->jobTabIndex == jobTabIndex) {
                return;
            }
            if (newJq->next != NULL) {
                newJq->next->prev = newJq->prev;
            }
            if (newJq->prev != NULL) {
                newJq->prev->next = newJq->next;
            } else {
                bss->synthJobTable[newJq->jobTabIndex].zeroOffset = newJq->next;
            }
        }
        root = &jobTab->zeroOffset;
        break;
    case 2:
        newJq = &svoice->eventJob;
        if (newJq->jobTabIndex != 0xff) {
            return;
        }
        root = &jobTab->event;
        break;
    default:
        break;
    }

    newJq->jobTabIndex = jobTabIndex;
    if ((newJq->next = *root) != NULL) {
        (*root)->prev = newJq;
    }
    newJq->prev = NULL;
    *root = newJq;
}
#pragma pop

void reset_sound_voice_schedule(Obj_803A8C5C* voice) {
    voice->p24 = lbl_805D73C0;
    voice->p2C = lbl_805D73C0;
    schedule_sound_voice_update((SYNTH_VOICE_SV *)voice, 0, 0);
    schedule_sound_voice_update((SYNTH_VOICE_SV *)voice, 1, 0);
}

void TLobby__sub_803A8CC0(void *arg0) {
    schedule_sound_voice_update((SYNTH_VOICE_SV *)arg0, 0, 0);
    schedule_sound_voice_update((SYNTH_VOICE_SV *)arg0, 1, 0);
}

void TLobby__sub_803A8D04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    schedule_sound_voice_update((SYNTH_VOICE_SV *) (arg0), (int) (2), (int) (0));
}

void TLobby__sub_803A8D2C(Node_803A8D2C **list, void (*cb)(u8)) {
    Node_803A8D2C *n;
    Node_803A8D2C *next;
    for (n = *list; n != NULL; n = next) {
        next = n->next;
        n->f9 = 0xFF;
        if (lbl_805D73B0[n->idx].busy == 0) {
            cb(n->idx);
        }
    }
    *list = NULL;
}

void TLobby__sub_803A8DC0(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[40]; s32 field_28; u8 field_2C; };
    u8 temp_r0;
    temp_r0 = ((Fields_arg0*)arg0)->field_2C;
    switch ((s32) temp_r0) {
    case 1:
        TLobby__sub_803A4B7C(((Fields_arg0*)arg0)->field_28);
        return;
    case 2:
        TLobby__sub_803A49C8((s32)(((Fields_arg0*)arg0)->field_28));
        return;
    case 3:
        TLobby__sub_803A4FC4(((Fields_arg0*)arg0)->field_28, 0, 0);
        return;
    }
}

s32 synth_start_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4) {
    s32 ret = -1;
    Se_803A9144 *p = find_sound_fx_record(arg0);
    if (p != NULL) {
        if (arg1 == 0xFF) {
            arg1 = p->b6;
        }
        if (arg2 == 0xFF) {
            arg2 = p->b7;
        }
        ret = TLobby__sub_803A7880(p->id, p->b5, p->b4, p->b8 | 0x80, arg1, arg2, 0xFF, 0xFF,
                                   0, 0, 0xFF, p->b9, 0, arg3, arg4);
    }
    return ret;
}

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_803A9200(u32 vid, u8 ctrl, u8 value) {
    void TLobby__sub_803BADF8(u8 ctrl, u8 channel, u8 set, u8 value);
    u32 i;
    u32 ret;

    ret = 0;
    vid = find_sound_voice_by_id(vid);

    while (vid != 0xFFFFFFFF) {
        i = vid & 0xff;
        if (vid == SV_VOICES[i].id) {
            if ((SV_VOICES[i].cFlags & 0x2) != 0) {
                TLobby__sub_803BADF8(ctrl, i, SV_VOICES[i].setup.midiSet, value);
            } else {
                TLobby__sub_803BADF8(ctrl, i, SV_VOICES[i].midiSet, value);
            }

            vid = SV_VOICES[i].child;
            ret = 1;
        } else {
            return ret;
        }
    }

    return ret;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
s32 TLobby__sub_803A92E8(u32 vid, u8 ctrl, u16 value) {
    void TLobby__sub_803BB3C8(u8 ctrl, u8 channel, u8 set, u16 value);
    u32 i;
    u32 ret;

    ret = 0;
    vid = find_sound_voice_by_id(vid);

    while (vid != 0xFFFFFFFF) {
        i = vid & 0xff;
        if (vid == SV_VOICES[i].id) {
            if ((SV_VOICES[i].cFlags & 0x2) != 0) {
                TLobby__sub_803BB3C8(ctrl, i, SV_VOICES[i].setup.midiSet, value);
            } else {
                TLobby__sub_803BB3C8(ctrl, i, SV_VOICES[i].midiSet, value);
            }

            vid = SV_VOICES[i].child;
            ret = 1;
        } else {
            return ret;
        }
    }

    return ret;
}
#pragma pop

void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1) {
    TLobby__sub_803BB98C(7U, arg0, arg1);
    TLobby__sub_803BB98C(0xAU, arg0, arg1);
    TLobby__sub_803BB98C(0x5BU, arg0, arg1);
    TLobby__sub_803BB98C(0x80U, arg0, arg1);
    TLobby__sub_803BB98C(0x84U, arg0, arg1);
}

s32 key_off_sound_fx(int id) {
    u8 idx;
    s32 found = 0;
    u32 cur;
    if (lbl_805D7380 != 0) {
        cur = find_sound_voice_by_id((u32)(id));
        while (cur != 0xFFFFFFFF) {
            idx = cur;
            if (cur == (*(Rec_803A9454 * *)&lbl_805D73B0)[idx].id) {
                key_off_sound_program(&(*(Rec_803A9454 * *)&lbl_805D73B0)[idx]);
                found = 1;
            }
            cur = (*(Rec_803A9454 * *)&lbl_805D73B0)[idx].next;
        }
    }
    return found;
}

s32 TLobby__sub_803A98F0(u8 arg0) {
    u8 *temp_r4;
    temp_r4 = (u8 *)&lbl_80556F88.value + (arg0 * 0x30);
    if (((u8) M2C_FIELD(temp_r4, u8 *, 0x601) != 4) && (lbl_805D73A8 & (1 << arg0)) && (M2C_FIELD(temp_r4, f32 *, 0x5DC) > M2C_FIELD(temp_r4, f32 *, 0x5D8))) {
        return 1;
    }
    return 0;
}

void TLobby__sub_803A9944(u8 i, u8 v) {
    if (lbl_805D7380 != 0) {
        lbl_8055755C[i].f2d = v;
    }
}

s32 TLobby__sub_803A996C(s32 op, u32 idx) {
    void TLobby__sub_803B36A8(u8);
    s32 ret = 0;
    switch (op) {
    case 0:
        if ((*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx].busy == 0) {
            TLobby__sub_803B488C(get_slot_value__6TLobbyFi(idx));
            if (idx == (*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx].id) {
                TLobby__sub_803B1AF4(&(*(Rec_803A996C * *)&lbl_805D73B0)[(u8)idx]);
            }
        }
        break;
    case 1:
        TLobby__sub_803B36A8(idx);
        break;
    case 2:
        ret = TLobby__sub_803B46A4(idx);
        break;
    case 3:
        TLobby__sub_803B488C(get_slot_value__6TLobbyFi(idx));
        break;
    }
    return ret;
}

}
