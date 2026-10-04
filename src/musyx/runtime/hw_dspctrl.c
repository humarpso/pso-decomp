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
extern "C" {

#define dspStudio lbl_805663D8
#define salNumVoices lbl_805D74C5
#define salMaxStudioNum lbl_805D74C4
#define dspARAMZeroBuffer lbl_805D7458
#define dspCmdList lbl_805D7478
#define dspSurround lbl_805D7484
#define dspVoice lbl_805D748C
#define dspITDBuffer lbl_805D7488
#define dspHrtfHistoryBuffer (*(void **)&lbl_805D7480)

#pragma push
#pragma opt_common_subs on
#pragma bool off

u32 salInitDspCtrl(u8 numVoices, u8 numStudios, u32 defaultStudioDPL2) {
    u32 i;
    u32 j;
    u32 itdPtr;

    salNumVoices = numVoices;
    salMaxStudioNum = numStudios;

    dspARAMZeroBuffer = aramGetZeroBuffer();
    if ((dspCmdList = (u16 *)salMalloc(1024 * sizeof(u16)))) {
        if ((dspSurround = (s32 *)salMalloc(160 * sizeof(s32)))) {
            memset(dspSurround, 0, 160 * sizeof(s32));
            DCFlushRange(dspSurround, 160 * sizeof(long));
            if ((dspVoice = (DSPvoice_803B5500 *)salMalloc(salNumVoices * sizeof(DSPvoice_803B5500)))) {
                if ((dspITDBuffer = salMalloc(salNumVoices * 64))) {
                    DCInvalidateRange(dspITDBuffer, salNumVoices * 64);
                    itdPtr = (u32)dspITDBuffer;
                    for (i = 0; i < salNumVoices; ++i) {
                        dspVoice[i].state = 0;
                        dspVoice[i].postBreak = 0;
                        dspVoice[i].startupBreak = 0;
                        dspVoice[i].lastUpdatePitch = 0xff;
                        dspVoice[i].lastUpdateVol = 0xff;
                        dspVoice[i].lastUpdateVolA = 0xff;
                        dspVoice[i].lastUpdateVolB = 0xff;
                        dspVoice[i].pb = (_PB_803B5500 *)salMalloc(sizeof(_PB_803B5500));
                        memset(dspVoice[i].pb, 0, sizeof(_PB_803B5500));
                        dspVoice[i].patchData = salMalloc(0x80);
                        dspVoice[i].pb->currHi = ((u32)dspVoice[i].pb >> 16);
                        dspVoice[i].pb->currLo = (u16)(u32)dspVoice[i].pb;
                        dspVoice[i].pb->updateDataHi = ((u32)dspVoice[i].patchData >> 16);
                        dspVoice[i].pb->updateDataLo = ((u16)(u32)dspVoice[i].patchData);
                        dspVoice[i].pb->itdBufferHi = ((u32)itdPtr >> 16);
                        dspVoice[i].pb->itdBufferLo = ((u16)itdPtr);
                        dspVoice[i].itdBuffer = (void *)itdPtr;
                        itdPtr += 0x40;
                        dspVoice[i].virtualSampleID = 0xFFFFFFFF;
                        DCStoreRangeNoSync(dspVoice[i].pb, sizeof(_PB_803B5500));
                        for (j = 0; j < 5; ++j) {
                            dspVoice[i].changed[j] = 0;
                        }
                    }

                    for (i = 0; i < salMaxStudioNum; ++i) {
                        dspStudio[i].state = 0;
                        if (!(dspStudio[i].spb = salMalloc(0x36))) {
                            return 0;
                        }

                        if (!(dspStudio[i].main[0] = (s32 *)salMalloc(0x3c00))) {
                            return 0;
                        }

                        memset(dspStudio[i].main[0], 0, 0x3c00);
                        DCFlushRangeNoSync(dspStudio[i].main[0], 0x3c00);
                        dspStudio[i].main[1] = dspStudio[i].main[0] + 0x1e0;
                        dspStudio[i].auxA[0] = dspStudio[i].main[1] + 0x1e0;
                        dspStudio[i].auxA[1] = dspStudio[i].auxA[0] + 0x1e0;
                        dspStudio[i].auxA[2] = dspStudio[i].auxA[1] + 0x1e0;
                        dspStudio[i].auxB[0] = dspStudio[i].auxA[2] + 0x1e0;
                        dspStudio[i].auxB[1] = dspStudio[i].auxB[0] + 0x1e0;
                        dspStudio[i].auxB[2] = dspStudio[i].auxB[1] + 0x1e0;
                        memset(dspStudio[i].spb, 0, 0x36);
                        dspStudio[i].hostDPopSum.l = dspStudio[i].hostDPopSum.r = dspStudio[i].hostDPopSum.s = 0;
                        dspStudio[i].hostDPopSum.lA = dspStudio[i].hostDPopSum.rA = dspStudio[i].hostDPopSum.sA = 0;
                        dspStudio[i].hostDPopSum.lB = dspStudio[i].hostDPopSum.rB = dspStudio[i].hostDPopSum.sB = 0;
                        DCFlushRangeNoSync(dspStudio[i].spb, 0x36);
                    }
                    salActivateStudio(0, 1, defaultStudioDPL2 != 0 ? 1 : 0);
                    if (!(dspHrtfHistoryBuffer = salMalloc(0x100))) {
                        return 0;
                    }

                    salInitHRTFBuffer();
                    return 1;
                }
            }
        }
    }

    return 0;
}

#pragma pop
#undef dspStudio

void salInitHRTFBuffer(void) {
    memset((void *) (lbl_805D7480), (int) (0), (int) (0x100));
    DCFlushRangeNoSync((void *) (lbl_805D7480), (int) (0x100));
}

#define dspStudio lbl_805663D8
#pragma push
#pragma opt_common_subs on
#pragma bool off

void salActivateStudio(u8 studio, u32 isMaster, u32 type) {
    memset(dspStudio[studio].main[0], 0, 0x3c00);
    DCFlushRangeNoSync(dspStudio[studio].main[0], 0x3c00);
    memset(dspStudio[studio].spb, 0, 0x36);
    dspStudio[studio].hostDPopSum.l = dspStudio[studio].hostDPopSum.r =
        dspStudio[studio].hostDPopSum.s = 0;
    dspStudio[studio].hostDPopSum.lA = dspStudio[studio].hostDPopSum.rA =
        dspStudio[studio].hostDPopSum.sA = 0;
    dspStudio[studio].hostDPopSum.lB = dspStudio[studio].hostDPopSum.rB =
        dspStudio[studio].hostDPopSum.sB = 0;
    DCFlushRangeNoSync(dspStudio[studio].spb, 0x36);
    memset(dspStudio[studio].auxA[0], 0, 0x780);
    DCFlushRangeNoSync(dspStudio[studio].auxA[0], 0x780);
    memset(dspStudio[studio].auxB[0], 0, 0x780);
    DCFlushRangeNoSync(dspStudio[studio].auxB[0], 0x780);
    dspStudio[studio].voiceRoot = NULL;
    dspStudio[studio].alienVoiceRoot = NULL;
    dspStudio[studio].state = 1;
    dspStudio[studio].isMaster = isMaster;
    dspStudio[studio].numInputs = 0;
    dspStudio[studio].type = type;
    dspStudio[studio].auxAHandler = dspStudio[studio].auxBHandler = NULL;
}

#pragma pop
#undef dspStudio

void salDeactivateStudio(u8 i) {
    lbl_805663D8[i].f50 = 0;
}

#pragma push
#pragma opt_common_subs on
#pragma bool off

u32 salCheckVolErrorAndResetDelta(u16 *dsp_vol, u16 *dsp_delta, u16 *last_vol, u16 targetVol,
                         u16 *resetFlags, u16 resetMask) {
    s16 d;
    s16 x;

    if (targetVol != *last_vol) {
        d = (s16)targetVol - (s16)*last_vol;
        if ((s16)d >= 32 && (s16)d < 160) {
            x = (s16)d >> 5;
            if ((s16)x < 5) {
                resetFlags[x] |= resetMask;
            }

            *dsp_delta = 1;
            *last_vol += (x << 5);
            return 1;
        }

        if (-32 >= (s16)d && -160 < (s16)d) {
            x = -(s16)d >> 5;
            if (x < 5) {
                resetFlags[x] |= resetMask;
            }
            *dsp_delta = 0xFFFF;
            *last_vol -= x << 5;
            return 1;
        }

        if (targetVol == 0 && (s16)d > -32) {
            *dsp_vol = *last_vol = 0;
        }
    }

    *dsp_delta = 0;
    return 0;
}

#pragma pop

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

static inline void AddDpop_803B5AF8(s32 *sum, s16 delta) {
    *sum += (int)delta;
    *sum = (*sum > 0x7fffff) ? 0x7fffff : (*sum < -0x7fffff ? -0x7fffff : *sum);
}

void HandleDepopVoice(DSPstudioinfo_803B5AF8 *stp, DSPvoice_803B5AF8 *dsp_vptr) {
    _PB_803B5AF8 *pb;
    dsp_vptr->postBreak = 0;
    dsp_vptr->pb->state = 0;
    pb = dsp_vptr->pb;

    AddDpop_803B5AF8(&stp->hostDPopSum.l, pb->dpop.aL);
    AddDpop_803B5AF8(&stp->hostDPopSum.r, pb->dpop.aR);

    if ((pb->mixerCtrl & 0x04) != 0) {
        AddDpop_803B5AF8(&stp->hostDPopSum.s, pb->dpop.aS);
    }

    if ((pb->mixerCtrl & 0x01) != 0) {
        AddDpop_803B5AF8(&stp->hostDPopSum.lA, pb->dpop.aAuxAL);
        AddDpop_803B5AF8(&stp->hostDPopSum.rA, pb->dpop.aAuxAR);

        if ((pb->mixerCtrl & 0x14) != 0) {
            AddDpop_803B5AF8(&stp->hostDPopSum.sA, pb->dpop.aAuxAS);
        }
    }

    if ((pb->mixerCtrl & 0x12) != 0) {
        AddDpop_803B5AF8(&stp->hostDPopSum.lB, pb->dpop.aAuxBL);
        AddDpop_803B5AF8(&stp->hostDPopSum.rB, pb->dpop.aAuxBR);

        if ((pb->mixerCtrl & 0x4) != 0) {
            AddDpop_803B5AF8(&stp->hostDPopSum.sB, pb->dpop.aAuxBS);
        }
    }
}

#pragma pop

void SortVoices(Ent_803B5DB0 **v, s32 left, s32 right) {
    Ent_803B5DB0 **pm;
    s32 i;
    s32 last;
    Ent_803B5DB0 *t;
    Ent_803B5DB0 *e;
    Ent_803B5DB0 **pl;
    Ent_803B5DB0 **pi;

    if (left >= right) {
        return;
    }
    pl = &v[left];
    pm = &v[(left + right) / 2];
    t = *pl;
    *pl = *pm;
    *pm = t;
    last = left;
    for (i = left + 1; i <= right; i++) {
        e = v[i];
        if (e->key < (*pl)->key) {
            last++;
            t = v[last];
            v[last] = e;
            v[i] = t;
        }
    }
    pm = &v[last];
    t = *pl;
    *pl = *pm;
    *pm = t;
    SortVoices(v, left, last - 1);
    SortVoices(v, last + 1, right);
}

s32 salSynthSendMessage(u8 *arg0, s32 arg1) {
    struct Fields_arg0 { u8 pad_0[24]; s32 field_18; };
    if (((s32 (*)(s32, s32)) lbl_805D7490) == NULL) {
        return 0;
    }
    return lbl_805D7490(arg1, ((Fields_arg0*)arg0)->field_18);
}
#pragma push
#pragma opt_common_subs on
void salActivateVoice(Ent_803B8910 *dsp_vptr, u8 studio) {
    if (dsp_vptr->active != 0) {
        salDeactivateVoice((Ent_803B89B4 *)dsp_vptr);
        dsp_vptr->flags |= 0x20;
    }
    dsp_vptr->fED = 0;
    if ((dsp_vptr->next = (Ent_803B8910 *)lbl_805663D8[studio].voiceRoot) != 0) {
        dsp_vptr->next->prev = dsp_vptr;
    }
    dsp_vptr->prev = 0;
    lbl_805663D8[studio].voiceRoot = dsp_vptr;
    dsp_vptr->fEE = 0;
    dsp_vptr->active = 1;
    dsp_vptr->idx = studio;
}
#pragma pop

void salDeactivateVoice(Ent_803B89B4 *arg0) {
    if (arg0->active != 0) {
        if (arg0->prev != 0) {
            arg0->prev->next = arg0->next;
        } else {
            lbl_805663D8[arg0->idx].head = arg0->next;
        }
        if (arg0->next != 0) {
            arg0->next->prev = arg0->prev;
        }
        arg0->active = 0;
    }
}

#pragma push
#pragma opt_common_subs on
s32 salAddStudioInput(Obj_803B8A14 *stp, Src_803B8A14 *desc) {
    if (stp->numInputs < 7) {
        stp->in[stp->numInputs].studio = desc->srcStudio;
        stp->in[stp->numInputs].vol = ((u16)desc->vol << 8) | ((u16)desc->vol << 1);
        stp->in[stp->numInputs].volA = ((u16)desc->volA << 8) | ((u16)desc->volA << 1);
        stp->in[stp->numInputs].volB = ((u16)desc->volB << 8) | ((u16)desc->volB << 1);
        stp->in[stp->numInputs].desc = desc;
        ++stp->numInputs;
        return 1;
    }
    return 0;
}
#pragma pop

s32 salRemoveStudioInput(Obj_803B8ABC *arg0, u32 arg1) {
    s32 i;

    for (i = 0; i < arg0->count; i++) {
        if (arg0->slots[i].src == arg1) {
            for (; i <= arg0->count - 2; i++) {
                arg0->slots[i] = arg0->slots[i + 1];
            }
            arg0->count--;
            return 1;
        }
    }
    return 0;
}

void salHandleAuxProcessing(void) {
    s32 bufs[3];
    u8 i;
    Voice_803B8B40 *v;
    s32 buf;

    i = 0;
    v = (Voice_803B8B40 *)lbl_805663D8;
    while (i < lbl_805D74C4) {
        if (v->b50 == 1) {
            if (v->cbA != 0) {
                buf = v->bufA[(lbl_805D74C6 + 2) % 3];
                bufs[0] = buf;
                bufs[1] = buf + 0x280;
                bufs[2] = buf + 0x500;
                v->cbA(0, bufs, v->argA, lbl_805D74C6 + 2);
                DCFlushRangeNoSync((void *)buf, 0x780);
            }
            if (v->i54 == 0 && v->cbB != 0) {
                buf = v->bufB[(lbl_805D74C6 + 2) % 3];
                bufs[0] = buf;
                bufs[1] = buf + 0x280;
                bufs[2] = buf + 0x500;
                v->cbB(0, bufs, v->argB, lbl_805D74C6 + 2);
                DCFlushRangeNoSync((void *)buf, 0x780);
            }
        }
        i++;
        v++;
    }
}

}
