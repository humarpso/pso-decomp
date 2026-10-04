#define TLobby__sub_803A8D04 TLobby__sub_803A8D04_hdr_view
#define find_sound_sample find_sound_sample_hdr_view
#include "musyx/runtime/musyx_runtime_a.h"
#undef TLobby__sub_803A8D04
#undef find_sound_sample
extern "C" {
struct Voice_803AEEF0;
void TLobby__sub_803A8D04(Voice_803AEEF0 *svoice);
s32 find_sound_sample(u16 id, Sample_803AE4D4 *s);
}

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
extern "C" {

#define FLAGS (*(u64 *)&o->fh)
#pragma push
#pragma bool off
s32 handle_sound_macro_wait(Obj_803AE8F8 *o, Op_803AE8F8 *op) {
    u32 v;
    u32 ms;

    if ((v = op->w4 >> 16) == 0) {
        goto end;
    }
    if ((op->w0 >> 8) & 1) {
        if ((FLAGS & 8ULL) != 0) {
            if ((FLAGS & 0x10000000000ULL) == 0) {
                return 0;
            }
            FLAGS |= 0x40000000000ULL;
        }
        FLAGS |= 4ULL;
    } else {
        FLAGS &= ~4ULL;
    }
    if ((op->w0 >> 24) & 1) {
        if ((FLAGS & 0x20ULL) == 0 && is_sound_hw_voice_active((u8)o->iF4) == 0) {
            return 0;
        }
        FLAGS |= 0x40000ULL;
    } else {
        FLAGS &= ~0x40000ULL;
    }
    if ((op->w0 >> 16) & 1) {
        v = TLobby__sub_803BC91C() % v;
    }
    if (v != 0xFFFF) {
        if ((ms = ((u8)(op->w4 >> 8) & 1) != 0)) {
            shift_left_8__6TLobbyFPv(&v);
        } else {
            TLobby__sub_803BCA50(&v, o);
        }
        if (ms != 0) {
            if (op->w4 & 1) {
                o->deadline = o->f90 + v;
            } else {
                o->deadline = lbl_805D7428 + v;
            }
        } else {
            if (op->w4 & 1) {
                o->deadline = v;
            } else {
                o->deadline = o->fa0 + v;
            }
        }
        if (o->deadline <= lbl_805D7428) {
            o->fa0 = o->deadline;
            o->deadline = 0;
        }
    } else {
        o->deadline = -1;
    }
    if (o->deadline != 0) {
        if (o->deadline != (u64)-1) {
            enqueue_sound_program_deadline((Program_803B1DA4 *)o);
        }
        set_sound_program_wait_state((Obj_803B312C *)o, 1);
        return 1;
    }
end:
    return 0;
}
#pragma pop
#undef FLAGS

#define FLAGS (*(u64 *)&o->fh)
void TLobby__sub_803AEC00(Obj_803AEC00 *o, Op_803AEC00 *op) {
    u32 w;
    if (o->cnt == 0) {
        if ((op->w0 >> 16) & 1) {
            o->cnt = TLobby__sub_803BC91C() % (u16)(op->w4 >> 16);
        } else {
            o->cnt = op->w4 >> 16;
        }
        if (o->cnt == 0xFFFF) {
            goto body;
        }
        o->cnt++;
    } else if (o->cnt == 0xFFFF) {
        goto body;
    }
    if (--o->cnt == 0) {
        return;
    }
body:
    w = op->w0;
    if (((w >> 8) & 1) && (FLAGS & 0x10000000008ULL) == 8) {
        o->cnt = 0;
        return;
    }
    if (((w >> 24) & 1) && (FLAGS & 0x20ULL) == 0 && is_sound_hw_voice_active((u8)o->iF4) == 0) {
        o->cnt = 0;
        return;
    }
    o->i38 = o->i34 + ((op->w4 & 0xFFFF) << 3);
}

#pragma pack(4)
typedef struct MSTEP_803AEEF0 { u32 para[2]; } MSTEP_803AEEF0;
typedef struct VIDL_803AEEF0 { struct VIDL_803AEEF0 *next; struct VIDL_803AEEF0 *prev; u32 vid; u32 root; } VIDL_803AEEF0;
typedef struct LFO_803AEEF0 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AEEF0;
typedef struct CSRC_803AEEF0 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AEEF0;
typedef struct CDEST_803AEEF0 { CSRC_803AEEF0 source[4]; u16 oldValue; u8 numSource; } CDEST_803AEEF0;
typedef struct Voice_803AEEF0 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AEEF0 *addr;
  MSTEP_803AEEF0 *curAddr;
  struct Voice_803AEEF0 *nextMacActive;
  struct Voice_803AEEF0 *prevMacActive;
  struct Voice_803AEEF0 *nextTimeQueueMacro;
  struct Voice_803AEEF0 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AEEF0 *trapEventAddr[3];
  MSTEP_803AEEF0 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AEEF0 *callStack[4][2];
  u8 callStackEntryNum;
  u8 callStackIndex;
  u64 macStartTime;
  u64 wait;
  u64 waitTime;
  u8 timeUsedByInput;
  u16 loop;
  s32 local_vars[16];
  u32 child;
  u32 parent;
  u32 id;
  VIDL_803AEEF0 *vidList;
  VIDL_803AEEF0 *vidMasterList;
  u16 allocId;
  u16 macroId;
  u8 keyGroup;
  u32 lastVID;
  u8 prio;
  u16 ageSpeed;
  u32 age;
  u64 cFlags;
  u8 block;
  u8 fxFlag;
  u8 vGroup;
  u8 studio;
  u8 track;
  u8 midi;
  u8 midiSet;
  u8 section;
  u32 sInfo;
  u32 playFrq;
  u16 curNote;
  s8 curDetune;
  u8 orgNote;
  u8 lastNote;
  u8 portType;
  u16 portLastCtrlState;
  u32 portDuration;
  u32 portCurPitch;
  u32 portTime;
  u8 vibKeyRange;
  u8 vibCentRange;
  u32 vibPeriod;
  u32 vibCurTime;
  s32 vibCurOffset;
  s16 vibModAddScale;
  u32 volume;
  u32 orgVolume;
  float lastVolFaderScale;
  u32 lastPan;
  u32 lastSPan;
  float treCurScale;
  u16 treScale;
  u16 treModAddScale;
  u32 panning[2];
  s32 panDelta[2];
  u32 panTarget[2];
  u32 panTime[2];
  u8 revVolScale;
  u8 revVolOffset;
  u8 volTable;
  u8 itdMode;
  s32 envDelta;
  u32 envTarget;
  u32 envCurrent;
  u32 sweepOff[2];
  s32 sweepAdd[2];
  s32 sweepCnt[2];
  u8 sweepNum[2];
  LFO_803AEEF0 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AEEF0 inpVolume;
  CDEST_803AEEF0 inpPanning;
  CDEST_803AEEF0 inpSurroundPanning;
  CDEST_803AEEF0 inpPitchBend;
  CDEST_803AEEF0 inpDoppler;
  CDEST_803AEEF0 inpModulation;
  CDEST_803AEEF0 inpPedal;
  CDEST_803AEEF0 inpPortamento;
  CDEST_803AEEF0 inpPreAuxA;
  CDEST_803AEEF0 inpReverb;
  CDEST_803AEEF0 inpPreAuxB;
  CDEST_803AEEF0 inpPostAuxB;
  CDEST_803AEEF0 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AEEF0;
#pragma pack()

void start_sound_sample_voice(u32 v, u16 smpID, void *newsmp, u32 set_defadsr, u32 prio, u32 callbackUserValue, u32 setSRC, u8 itdMode);
void TLobby__sub_803AF24C(Voice_803AEEF0 *);

#pragma push
#pragma bool off
#pragma opt_common_subs on
void start_sound_macro_sample(Voice_803AEEF0 *svoice, MSTEP_803AEEF0 *cstep) {
    static Sample_803AE4D4 newsmp;
    u16 smp;
    smp = cstep->para[0] >> 8;

    if (find_sound_sample(smp, &newsmp) != 0) {
        return;
    }
    switch ((u8)(cstep->para[0] >> 0x18)) {
    case 0:
        newsmp.offset = cstep->para[1];
        break;
    case 1:
        newsmp.offset = ((u8)(0x7f - (svoice->volume >> 0x10)) * (u32)cstep->para[1]) / 0x7f;
        break;
    case 2:
        newsmp.offset = ((u8)((svoice->volume >> 0x10)) * (u32)cstep->para[1]) / 0x7f;
        break;
    default:
        newsmp.offset = 0;
        break;
    }

    if (newsmp.offset >= newsmp.count) {
        newsmp.offset = newsmp.count - 1;
    }

    start_sound_sample_voice(svoice->id & 0xFF, smp, &newsmp, (svoice->cFlags & 0x100) == 0,
                             ((u32)svoice->prio << 24) | ((u32)svoice->age >> 15), svoice->id,
                             (svoice->cFlags & 0x80000000000) == 0, svoice->itdMode);

    svoice->sInfo = newsmp.key;

    if (svoice->playFrq != -1) {
        TLobby__sub_803AF24C(svoice);
    }
    svoice->cFlags |= 0x20;
    TLobby__sub_803A8D04(svoice);
}
#pragma pop

#define FLAGS (*(u64 *)&o->fh)

#pragma push
#pragma bool off
#pragma opt_common_subs on
void TLobby__sub_803AED58(Voice_803AED58 *svoice, MSTEP_803AED58 *cstep) {
    u32 start_sound_voice(u16 arg0, u8 arg1, u32 arg2, u16 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u16 arg10, u16 arg11, u8 arg12, u8 arg13, u8 arg14, u32 arg15);
    s32 key;
    u32 new_child;

    key = ((u32)svoice->orgNote + (s8)(u8)(cstep->para[0] >> 8));
    key = (key < 0) ? 0 : key > 0x7f ? 0x7f : key;

    if (svoice->fxFlag != 0) {
        key |= 0x80;
    }

    svoice->block = 1;
    new_child = start_sound_voice((u16)(cstep->para[0] >> 0x10), (u8)(cstep->para[1] >> 0x10),
                                  (u8)(cstep->para[1] >> 0x18), svoice->allocId, key,
                                  (u8)(svoice->volume >> 0x10), (u8)(svoice->panning[0] >> 0x10), svoice->midi,
                                  svoice->midiSet, svoice->section, (u16)cstep->para[1], (u16)svoice->track, 0,
                                  svoice->vGroup, svoice->studio, svoice->itdMode == 0);
    svoice->block = 0;
    if (new_child != 0xFFFFFFFF) {
        svoice->lastVID = (*(Voice_803AED58 **)&lbl_805D73B0)[(u8)new_child].vidList->vid;
        (*(Voice_803AED58 **)&lbl_805D73B0)[(u8)new_child].parent = svoice->id;
        if (svoice->child != -1) {
            (*(Voice_803AED58 **)&lbl_805D73B0)[(u8)new_child].child = svoice->child;
            (*(Voice_803AED58 **)&lbl_805D73B0)[(u8)svoice->child].parent = new_child;
        }
        svoice->child = new_child;
        if (svoice->fxFlag != 0) {
            TLobby__sub_803A93D0((u8 *)&(*(Voice_803AED58 **)&lbl_805D73B0)[(u8)new_child], (u8 *)svoice);
        }
    } else {
        svoice->lastVID = 0xFFFFFFFF;
    }
}
#pragma pop

void TLobby__sub_803AF0CC(Obj_803AF0CC *o, Op_803AF0CC *op) {
    u32 v;
    s8 hi;
    s8 lo;
    if ((op->w0 >> 24) & 3) {
        FLAGS |= 0x4000ULL;
    } else {
        FLAGS &= ~0x4000ULL;
    }
    v = op->w4 >> 16;
    if ((op->w4 >> 8) & 1) {
        shift_left_8__6TLobbyFPv(&v);
    } else {
        TLobby__sub_803BCA50(&v, o);
    }
    if (v != 0) {
        FLAGS |= 0x2000ULL;
        o->i144 = v;
        hi = op->w0 >> 8;
        lo = op->w0 >> 16;
        if (hi < 0) {
            if (lo < 0) {
                o->b141 = -lo;
            } else {
                o->b141 = lo;
            }
            o->b140 = -hi;
            o->i148 = o->i144 >> 1;
        } else {
            if (lo < 0) {
                if (hi == 0) {
                    o->b141 = -lo;
                    o->i148 = o->i144 >> 1;
                } else {
                    o->b141 = 100 - lo;
                    hi--;
                    o->i148 = 0;
                }
            } else {
                o->b141 = lo;
                o->i148 = 0;
            }
            o->b140 = hi;
        }
    } else {
        FLAGS &= ~0x2000ULL;
    }
}

#undef FLAGS
#define FLAGS (*(u64 *)&o->fh)

#pragma push
#pragma bool off
#pragma opt_common_subs on
void configure_sound_macro_envelope(Voice_803AF3DC *svoice, MSTEP_803AF3DC *cstep) {
    ADSR_803AF3DC adsr;
    ADSR_803AF3DC *adsr_ptr;
    s32 ascale;
    s32 dscale;
    f32 sScale;

    if ((adsr_ptr = (ADSR_803AF3DC *)TLobby__sub_803AE60C((u16)(cstep->para[0] >> 8))) != 0) {
        if (!(u8)(cstep->para[0] >> 24)) {
            adsr.data.linear.atime = adsr_ptr->data.linear.atime >> 8 | adsr_ptr->data.linear.atime << 8;
            adsr.data.linear.dtime = adsr_ptr->data.linear.dtime >> 8 | adsr_ptr->data.linear.dtime << 8;
            adsr.data.linear.slevel = adsr_ptr->data.linear.slevel >> 8 | adsr_ptr->data.linear.slevel << 8;
            adsr.data.linear.rtime = adsr_ptr->data.linear.rtime >> 8 | adsr_ptr->data.linear.rtime << 8;
            set_sound_hw_voice_envelope(svoice->id & 0xFF, &adsr, 0);
        } else {
            sScale = lbl_804F6CDC[(u16)(adsr_ptr->data.dls.slevel >> 8 | adsr_ptr->data.dls.slevel << 8) >> 5];
            adsr.data.dls.atime =
                ((u8 *)&adsr_ptr->data.dls.atime)[0] << 0 | ((u8 *)&adsr_ptr->data.dls.atime)[1] << 8 |
                ((u8 *)&adsr_ptr->data.dls.atime)[2] << 16 | ((u8 *)&adsr_ptr->data.dls.atime)[3] << 24;
            adsr.data.dls.dtime =
                ((u8 *)&adsr_ptr->data.dls.dtime)[0] << 0 | ((u8 *)&adsr_ptr->data.dls.dtime)[1] << 8 |
                ((u8 *)&adsr_ptr->data.dls.dtime)[2] << 16 | ((u8 *)&adsr_ptr->data.dls.dtime)[3] << 24;
            adsr.data.dls.slevel = 4096.f * sScale;
            adsr.data.dls.rtime = adsr_ptr->data.dls.rtime >> 8 | adsr_ptr->data.dls.rtime << 8;
            ascale =
                ((u8 *)&adsr_ptr->data.dls.ascale)[0] << 0 | ((u8 *)&adsr_ptr->data.dls.ascale)[1] << 8 |
                ((u8 *)&adsr_ptr->data.dls.ascale)[2] << 16 | ((u8 *)&adsr_ptr->data.dls.ascale)[3] << 24;

            dscale =
                ((u8 *)&adsr_ptr->data.dls.dscale)[0] << 0 | ((u8 *)&adsr_ptr->data.dls.dscale)[1] << 8 |
                ((u8 *)&adsr_ptr->data.dls.dscale)[2] << 16 | ((u8 *)&adsr_ptr->data.dls.dscale)[3] << 24;

            if (ascale != 0x80000000) {
                adsr.data.dls.atime += (s32)(1.1920929e-07f * svoice->orgVolume * ascale);
            }

            if (dscale != 0x80000000) {
                adsr.data.dls.dtime += (s32)(0.0078125f * svoice->orgNote * dscale);
            }

            set_sound_hw_voice_envelope(svoice->id & 0xFF, &adsr, 1);
        }

        svoice->cFlags |= 0x100;
    }
}
#pragma pop

#pragma pack(4)
typedef struct MSTEP_803AF634 { u32 para[2]; } MSTEP_803AF634;
typedef struct VIDL_803AF634 { struct VIDL_803AF634 *next; struct VIDL_803AF634 *prev; u32 vid; u32 root; } VIDL_803AF634;
typedef struct LFO_803AF634 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AF634;
typedef struct CSRC_803AF634 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AF634;
typedef struct CDEST_803AF634 { CSRC_803AF634 source[4]; u16 oldValue; u8 numSource; } CDEST_803AF634;
typedef struct ADSRV_803AF634 { u8 mode; u8 state; u32 cnt; s32 currentVolume; s32 currentIndex; s32 currentDelta;
  union { struct { u32 aTime; u32 dTime; u16 sLevel; u32 rTime; u16 cutOff; u8 aMode; } dls; } data; } ADSRV_803AF634;
typedef struct Voice_803AF634 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AF634 *addr;
  MSTEP_803AF634 *curAddr;
  struct Voice_803AF634 *nextMacActive;
  struct Voice_803AF634 *prevMacActive;
  struct Voice_803AF634 *nextTimeQueueMacro;
  struct Voice_803AF634 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AF634 *trapEventAddr[3];
  MSTEP_803AF634 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AF634 *callStack[4][2];
  u8 callStackEntryNum;
  u8 callStackIndex;
  u64 macStartTime;
  u64 wait;
  u64 waitTime;
  u8 timeUsedByInput;
  u16 loop;
  s32 local_vars[16];
  u32 child;
  u32 parent;
  u32 id;
  VIDL_803AF634 *vidList;
  VIDL_803AF634 *vidMasterList;
  u16 allocId;
  u16 macroId;
  u8 keyGroup;
  u32 lastVID;
  u8 prio;
  u16 ageSpeed;
  u32 age;
  u64 cFlags;
  u8 block;
  u8 fxFlag;
  u8 vGroup;
  u8 studio;
  u8 track;
  u8 midi;
  u8 midiSet;
  u8 section;
  u32 sInfo;
  u32 playFrq;
  u16 curNote;
  s8 curDetune;
  u8 orgNote;
  u8 lastNote;
  u8 portType;
  u16 portLastCtrlState;
  u32 portDuration;
  u32 portCurPitch;
  u32 portTime;
  u8 vibKeyRange;
  u8 vibCentRange;
  u32 vibPeriod;
  u32 vibCurTime;
  s32 vibCurOffset;
  s16 vibModAddScale;
  u32 volume;
  u32 orgVolume;
  float lastVolFaderScale;
  u32 lastPan;
  u32 lastSPan;
  float treCurScale;
  u16 treScale;
  u16 treModAddScale;
  u32 panning[2];
  s32 panDelta[2];
  u32 panTarget[2];
  u32 panTime[2];
  u8 revVolScale;
  u8 revVolOffset;
  u8 volTable;
  u8 itdMode;
  s32 envDelta;
  u32 envTarget;
  u32 envCurrent;
  u32 sweepOff[2];
  s32 sweepAdd[2];
  s32 sweepCnt[2];
  u8 sweepNum[2];
  LFO_803AF634 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  ADSRV_803AF634 pitchADSR;
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AF634 inpVolume;
  CDEST_803AF634 inpPanning;
  CDEST_803AF634 inpSurroundPanning;
  CDEST_803AF634 inpPitchBend;
  CDEST_803AF634 inpDoppler;
  CDEST_803AF634 inpModulation;
  CDEST_803AF634 inpPedal;
  CDEST_803AF634 inpPortamento;
  CDEST_803AF634 inpPreAuxA;
  CDEST_803AF634 inpReverb;
  CDEST_803AF634 inpPreAuxB;
  CDEST_803AF634 inpPostAuxB;
  CDEST_803AF634 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AF634;
#pragma pack()

typedef struct ADSR_803AF634 {
    union {
        struct { s32 atime; s32 dtime; u16 slevel; u16 rtime; s32 ascale; s32 dscale; } dls;
        struct { u16 atime; u16 dtime; u16 slevel; u16 rtime; } linear;
    } data;
} ADSR_803AF634;
s32 TLobby__sub_803AE60C(s16 arg0);
u32 TLobby__sub_803B3ED8(s32 arg0);
void start_sound_envelope(u8 *arg0);
extern u8 lbl_804F68DC[];

#pragma push
#pragma bool off
#pragma opt_common_subs on
void TLobby__sub_803AF634(Voice_803AF634 *svoice, MSTEP_803AF634 *cstep) {
    ADSR_803AF634 adsr;
    ADSR_803AF634 *adsr_ptr;
    u32 sl;
    s32 ascale;
    s32 dscale;

    if ((adsr_ptr = (ADSR_803AF634 *)TLobby__sub_803AE60C((u16)(cstep->para[0] >> 8))) == 0) {
        return;
    }

    svoice->pitchADSRRange = ((s8)cstep->para[1] << 8);

    if (svoice->pitchADSRRange >= 0) {
        svoice->pitchADSRRange += ((s16)(s8)(cstep->para[1] >> 8) << 8) / 100;
    } else {
        svoice->pitchADSRRange -= ((s16)(s8)(cstep->para[1] >> 8) << 8) / 100;
    }

    adsr.data.dls.atime =
        (((u8 *)&adsr_ptr->data.dls.atime)[0] << 0) | (((u8 *)&adsr_ptr->data.dls.atime)[1] << 8) |
        (((u8 *)&adsr_ptr->data.dls.atime)[2] << 16) | (((u8 *)&adsr_ptr->data.dls.atime)[3] << 24);
    adsr.data.dls.dtime =
        (((u8 *)&adsr_ptr->data.dls.dtime)[0] << 0) | (((u8 *)&adsr_ptr->data.dls.dtime)[1] << 8) |
        (((u8 *)&adsr_ptr->data.dls.dtime)[2] << 16) | (((u8 *)&adsr_ptr->data.dls.dtime)[3] << 24);

    adsr.data.dls.slevel = (adsr_ptr->data.dls.slevel >> 8) | (adsr_ptr->data.dls.slevel << 8);
    adsr.data.dls.rtime = (adsr_ptr->data.dls.rtime >> 8) | (adsr_ptr->data.dls.rtime << 8);
    ascale =
        (((u8 *)&adsr_ptr->data.dls.ascale)[0] << 0) | (((u8 *)&adsr_ptr->data.dls.ascale)[1] << 8) |
        (((u8 *)&adsr_ptr->data.dls.ascale)[2] << 16) | (((u8 *)&adsr_ptr->data.dls.ascale)[3] << 24);
    dscale =
        (((u8 *)&adsr_ptr->data.dls.dscale)[0] << 0) | (((u8 *)&adsr_ptr->data.dls.dscale)[1] << 8) |
        (((u8 *)&adsr_ptr->data.dls.dscale)[2] << 16) | (((u8 *)&adsr_ptr->data.dls.dscale)[3] << 24);

    if (ascale != 0x80000000) {
        adsr.data.dls.atime += (s32)((1.1920929e-07f * svoice->orgVolume) * (f32)ascale);
    }
    if (dscale != 0x80000000) {
        adsr.data.dls.dtime += (s32)((0.0078125f * svoice->orgNote) * (f32)dscale);
    }

    svoice->pitchADSR.mode = 1;
    svoice->pitchADSR.data.dls.aMode = 0;
    svoice->pitchADSR.data.dls.aTime = TLobby__sub_803B3ED8(adsr.data.dls.atime);
    svoice->pitchADSR.data.dls.dTime = TLobby__sub_803B3ED8(adsr.data.dls.dtime);
    if ((sl = (adsr.data.dls.slevel >> 2)) > 0x3ff) {
        sl = 0x3ff;
    }

    svoice->pitchADSR.data.dls.sLevel = 193 - lbl_804F68DC[sl];
    svoice->pitchADSR.data.dls.rTime = adsr.data.dls.rtime;
    start_sound_envelope((u8 *)&svoice->pitchADSR);
    svoice->cFlags |= 0x20000000000;
}
#pragma pop

#pragma push
#pragma bool off
#pragma opt_common_subs on
u32 TLobby__sub_803AF954(u32 volume, u16 curve) {
    u8 *ptr;
    u32 vlow;
    u32 vhigh;
    s32 d;

    if (curve != 0xFFFF) {
        if ((ptr = (u8 *)TLobby__sub_803AE60C(curve))) {
            vhigh = (volume >> 16) & 0xFFFF;
            vlow = volume & 0xFFFF;

            if (vhigh < 0x7f) {
                d = vlow * (ptr[vhigh + 1] - ptr[vhigh]);
                volume = d + (ptr[vhigh] << 16);
            } else {
                volume = ptr[vhigh] << 16;
            }
        }
    }

    return volume;
}
#pragma pop

#pragma push
#pragma bool off
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)
static inline u32 TranslateVolume_803AF9D4(u32 volume, u16 curve) {
    u8 *ptr;
    u32 vlow;
    u32 vhigh;
    s32 d;

    if (curve != 0xFFFF) {
        if ((ptr = (u8 *)TLobby__sub_803AE60C(curve))) {
            vhigh = (volume >> 16) & 0xFFFF;
            vlow = volume & 0xFFFF;

            if (vhigh < 0x7f) {
                d = vlow * (ptr[vhigh + 1] - ptr[vhigh]);
                volume = d + (ptr[vhigh] << 16);
            } else {
                volume = ptr[vhigh] << 16;
            }
        }
    }

    return volume;
}

void TLobby__sub_803AF9D4(Voice_803AF9D4 *svoice, MSTEP_803AF9D4 *cstep, s32 start_vol) {
    u32 tvol;
    u32 time;
    s32 mstime;
    u16 curve;

    time = (u16)(cstep->para[1] >> 16);

    if ((u8)(cstep->para[1] >> 8) & 1) {
        shift_left_8__6TLobbyFPv(&time);
    } else {
        TLobby__sub_803BCA50(&time, svoice);
    }

    mstime = shift_right_8__6TLobbyFUi(time);
    if (mstime == 0) {
        mstime = 1;
    }

    tvol = (svoice->volume * (u8)(cstep->para[0] >> 8) >> 7);
    tvol += (u8)(cstep->para[0] >> 16) << 16;

    if (tvol > 0x7f0000) {
        tvol = 0x7f0000;
    }

    curve = (u16)(u8)(cstep->para[0] >> 0x18);
    curve |= (((u16)(u8)cstep->para[1]) << 8);
    tvol = TranslateVolume_803AF9D4(tvol, curve);
    svoice->envTarget = tvol;
    svoice->envCurrent = start_vol;
    svoice->envDelta = (s32)(tvol - start_vol) / mstime;
    svoice->volume = start_vol;
    svoice->cFlags |= 0x8000;
}
#pragma pop

#pragma push
#pragma bool off
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)
static inline u32 mcmdSetKey_803AFB00(Voice_803AFB00 *svoice, MSTEP_803AFB00 *cstep) {
    svoice->curNote = (u8)(cstep->para[0] >> 8) & 0x7f;
    svoice->curDetune = (s8)(cstep->para[0] >> 0x10);
    if ((u32)TLobby__sub_803B3AA8((Obj_803B3AA8 *)svoice) != 0) {
        TLobby__sub_803BBAA8(svoice->midi, svoice->midiSet, svoice->curNote & 0xff);
    }
    cstep->para[0] = 4;
    return handle_sound_macro_wait((Obj_803AE8F8 *)svoice, (Op_803AE8F8 *)cstep);
}

void TLobby__sub_803AFB00(Voice_803AFB00 *svoice, MSTEP_803AFB00 *cstep) {
    u8 k1;
    u8 k2;
    u8 t;
    s32 i1;
    s32 i2;
    u8 detune;

    if (!(u8)(cstep->para[1] >> 8)) {
        k1 = (cstep->para[0] >> 8);
        k2 = (cstep->para[0] >> 24);
        if (k1 > k2) {
            t = k1;
            k1 = k2;
            k2 = t;
        }
    } else {
        i1 = svoice->curNote - (u8)(cstep->para[0] >> 8);
        i2 = svoice->curNote + (u8)(cstep->para[0] >> 24);

        k1 = i1 < 0 ? 0 : i1 > 127 ? 127 : i1;
        k2 = i2 < 0 ? 0 : i2 > 127 ? 127 : i2;
    }

    if ((u8)cstep->para[1]) {
        detune = (TLobby__sub_803BC91C() % 201) - 100;
    } else {
        detune = (u8)(cstep->para[0] >> 16);
    }

    cstep->para[0] = ((u8)detune << 16) | 0x19 | ((k1 + (TLobby__sub_803BC91C() % ((k2 - k1) + 1))) * 0x100);
    cstep->para[1] = 0;
    mcmdSetKey_803AFB00(svoice, cstep);
}
#pragma pop

void TLobby__sub_803AFCA0(Obj_803AFCA0 *o, s32 ch, Op_803AFCA0 *op, u64 mask, u32 flag) {
    u8 x;
    u32 w0;
    s32 v;

    if ((FLAGS & mask) == 0) {
        FLAGS |= mask;
        x = 0;
    } else {
        x = op->w4;
    }
    w0 = op->w0;
    v = (s32)(w0 & 0xFFFF0000) / 100;
    if (v < 0) {
        v -= ((s8)(op->w4 >> 16) << 8) / 100;
    } else {
        v += ((s8)(op->w4 >> 16) << 8) / 100;
    }
    TLobby__sub_803BB8F0(ch, w0 >> 8, v, x, (u8)(op->w4 >> 8) != 0);
    if (flag & 0x80000000) {
        TLobby__sub_803BADD0(o->b121, o->b122, flag);
    } else {
        o->i214 |= flag;
    }
}

void TLobby__sub_803AFDD4(Obj_803AFDD4 *o, Op_803AFDD4 *op) {
    u32 v;

    o->b131 = op->w0 >> 16;
    v = op->w4 >> 16;
    if ((op->w4 >> 8) & 1) {
        shift_left_8__6TLobbyFPv(&v);
    } else {
        TLobby__sub_803BCA50(&v, o);
    }
    o->i134 = v;
    switch ((u8)(op->w0 >> 8)) {
    case 0:
        if (o->b121 != 0xFF) {
            TLobby__sub_803BADF8(0x41, o->b121, o->b122, 0);
        }
        FLAGS &= ~0x400ULL;
        break;
    case 1:
        if (o->b121 != 0xFF) {
            TLobby__sub_803BADF8(0x41, o->b121, o->b122, 0x7F);
        }
    on:
        if ((FLAGS & 0x400ULL) == 0) {
            TLobby__sub_803A6F4C((Obj_803A6F4C *)o);
        }
        FLAGS |= 0x400ULL;
        break;
    case 2:
        if (o->b121 != 0xFF && TLobby__sub_803BB5E4(0x41, o->b121, o->b122) > 0x1F80) {
            goto on;
        }
        break;
    }
}

s32 TLobby__sub_803AFF38(Obj_803AFF38 *arg0, u32 arg1, u32 arg2) {
    if (arg1 != 0) {
        return TLobby__sub_803BC7E4(arg0, arg2);
    }
    arg2 = arg2 & 0x1F;
    if (arg2 < 0x10) {
        return arg0->v[arg2];
    }
    return lbl_80557C2C[arg2 - 16];
}

s16 TLobby__sub_803AFF9C(Obj_803AFF9C *arg0, u32 arg1, u32 arg2) {
    s32 r;
    if (arg1 != 0) {
        r = (u16)TLobby__sub_803BC7E4(arg0, arg2);
    } else {
        arg2 = arg2 & 0x1F;
        if (arg2 < 0x10) {
            r = arg0->v[arg2];
        } else {
            r = lbl_80557C2C[arg2 - 16];
        }
    }
    return r;
}

void TLobby__sub_803B0004(Obj_803B0004 *arg0, u32 arg1, u32 arg2, s32 arg3) {
    if (arg1 != 0) {
        TLobby__sub_803BC884(arg0, arg2, arg3);
        return;
    }
    arg2 = arg2 & 0x1F;
    if (arg2 < 0x10) {
        arg0->v[arg2] = arg3;
        return;
    }
    lbl_80557C2C[arg2 - 16] = arg3;
}

#pragma pack(4)
typedef struct MSTEP_803B0068 { u32 para[2]; } MSTEP_803B0068;
typedef struct VIDL_803B0068 { struct VIDL_803B0068 *next; struct VIDL_803B0068 *prev; u32 vid; u32 root; } VIDL_803B0068;
typedef struct LFO_803B0068 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803B0068;
typedef struct CSRC_803B0068 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803B0068;
typedef struct CDEST_803B0068 { CSRC_803B0068 source[4]; u16 oldValue; u8 numSource; } CDEST_803B0068;
typedef struct Voice_803B0068 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803B0068 *addr;
  MSTEP_803B0068 *curAddr;
  struct Voice_803B0068 *nextMacActive;
  struct Voice_803B0068 *prevMacActive;
  struct Voice_803B0068 *nextTimeQueueMacro;
  struct Voice_803B0068 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803B0068 *trapEventAddr[3];
  MSTEP_803B0068 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803B0068 *callStack[4][2];
  u8 callStackEntryNum;
  u8 callStackIndex;
  u64 macStartTime;
  u64 wait;
  u64 waitTime;
  u8 timeUsedByInput;
  u16 loop;
  s32 local_vars[16];
  u32 child;
  u32 parent;
  u32 id;
  VIDL_803B0068 *vidList;
  VIDL_803B0068 *vidMasterList;
  u16 allocId;
  u16 macroId;
  u8 keyGroup;
  u32 lastVID;
  u8 prio;
  u16 ageSpeed;
  u32 age;
  u64 cFlags;
  u8 block;
  u8 fxFlag;
  u8 vGroup;
  u8 studio;
  u8 track;
  u8 midi;
  u8 midiSet;
  u8 section;
  u32 sInfo;
  u32 playFrq;
  u16 curNote;
  s8 curDetune;
  u8 orgNote;
  u8 lastNote;
  u8 portType;
  u16 portLastCtrlState;
  u32 portDuration;
  u32 portCurPitch;
  u32 portTime;
  u8 vibKeyRange;
  u8 vibCentRange;
  u32 vibPeriod;
  u32 vibCurTime;
  s32 vibCurOffset;
  s16 vibModAddScale;
  u32 volume;
  u32 orgVolume;
  float lastVolFaderScale;
  u32 lastPan;
  u32 lastSPan;
  float treCurScale;
  u16 treScale;
  u16 treModAddScale;
  u32 panning[2];
  s32 panDelta[2];
  u32 panTarget[2];
  u32 panTime[2];
  u8 revVolScale;
  u8 revVolOffset;
  u8 volTable;
  u8 itdMode;
  s32 envDelta;
  u32 envTarget;
  u32 envCurrent;
  u32 sweepOff[2];
  s32 sweepAdd[2];
  s32 sweepCnt[2];
  u8 sweepNum[2];
  LFO_803B0068 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803B0068 inpVolume;
  CDEST_803B0068 inpPanning;
  CDEST_803B0068 inpSurroundPanning;
  CDEST_803B0068 inpPitchBend;
  CDEST_803B0068 inpDoppler;
  CDEST_803B0068 inpModulation;
  CDEST_803B0068 inpPedal;
  CDEST_803B0068 inpPortamento;
  CDEST_803B0068 inpPreAuxA;
  CDEST_803B0068 inpReverb;
  CDEST_803B0068 inpPreAuxB;
  CDEST_803B0068 inpPostAuxB;
  CDEST_803B0068 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803B0068;
#pragma pack()

struct Obj_803AFF38;
struct Obj_803B0004;
s32 TLobby__sub_803AFF38(Obj_803AFF38 *arg0, u32 arg1, u32 arg2);
void TLobby__sub_803B0004(Obj_803B0004 *arg0, u32 arg1, u32 arg2, s32 arg3);

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

static inline s16 varGet_803B0068(Voice_803B0068 *svoice, u32 ctrl, u8 index) {
    return TLobby__sub_803AFF38((Obj_803AFF38 *)svoice, ctrl, index);
}

static inline void varSet_803B0068(Voice_803B0068 *svoice, u32 ctrl, u8 index, s16 v) {
    TLobby__sub_803B0004((Obj_803B0004 *)svoice, ctrl, index, v);
}

void TLobby__sub_803B0068(Voice_803B0068 *svoice, MSTEP_803B0068 *cstep, u8 op) {
    s16 s1;
    s16 s2;
    s32 t;

    s1 = varGet_803B0068(svoice, (u8)(cstep->para[0] >> 24), cstep->para[1]);
    if (op == 4) {
        s2 = cstep->para[1] >> 8;
    } else {
        s2 = varGet_803B0068(svoice, (u8)(cstep->para[1] >> 8), cstep->para[1] >> 16);
    }
    switch (op) {
    case 4:
    case 0:
        t = (s1 + s2);
        break;
    case 1:
        t = (s1 - s2);
        break;
    case 2:
        t = (s1 * s2);
        break;
    case 3:
        t = s2 != 0 ? (s1 / s2) : 0;
        break;
    }

    varSet_803B0068(svoice, (u8)(cstep->para[0] >> 8), (u8)(cstep->para[0] >> 0x10),
                    (t < -0x8000 ? -0x8000 : t > 0x7FFF ? 0x7FFF : t));
}
#pragma pop

#define o ((Rec_803B1AF4 *)ov)

#pragma push
#pragma bool off
#pragma opt_common_subs on
#pragma dont_inline off
#pragma inline_depth(4)
static inline s32 varGet32_803B0198(Voice_803B0198 *svoice, u32 ctrl, u8 index) {
    index &= 0x1f;
    return index < 16 ? svoice->local_vars[index] : lbl_80557C2C[index - 16];
}

static inline u32 ExecuteTrap_803B0198(Voice_803B0198 *svoice, u8 trapType) {
    if (svoice->trapEventAny != 0 && svoice->trapEventAddr[trapType] != 0) {
        svoice->curAddr = svoice->trapEventCurAddr[trapType];
        svoice->addr = svoice->trapEventAddr[trapType];
        svoice->trapEventAddr[trapType] = 0;
        TLobby__sub_803B1F24(svoice);
        return 1;
    }
    return 0;
}

static inline u32 macPostMessage_803B0198(u32 vid, s32 mesg) {
    Voice_803B0198 *sv;
    if ((vid = find_sound_voice_by_id(vid)) != -1 && (sv = &(*(Voice_803B0198 **)&lbl_805D73B0)[vid & 0xFF])->mesgNum < 4) {
        ++sv->mesgNum;
        sv->mesgQueue[sv->mesgWrite] = mesg;
        sv->mesgWrite = (sv->mesgWrite + 1) & 3;
        ExecuteTrap_803B0198(sv, 2);
        return 1;
    }
    return 0;
}

void TLobby__sub_803B0198(Voice_803B0198 *svoice, MSTEP_803B0198 *cstep) {
    u8 i;
    s32 mesg;
    u16 macro;

    {
        u8 index = (u8)(cstep->para[1] >> 8);
        index &= 0x1f;
        mesg = index < 16 ? svoice->local_vars[index] : lbl_80557C2C[index - 16];
    }

    if (!(u8)(cstep->para[0] >> 8)) {
        macro = (u16)(cstep->para[0] >> 16);
        if (macro != 0xFFFF) {
            i = 0;
            while (i < lbl_80557348.count) {
                if ((*(Voice_803B0198 **)&lbl_805D73B0)[i].addr != 0 && macro == (*(Voice_803B0198 **)&lbl_805D73B0)[i].macroId) {
                    macPostMessage_803B0198((*(Voice_803B0198 **)&lbl_805D73B0)[i].vidList->vid, mesg);
                }
                ++i;
            }
        } else if (lbl_805D73B4 != 0) {
            lbl_805D73B4(svoice->vidList->vid, mesg);
        }
    } else {
        macPostMessage_803B0198(varGet32_803B0198(svoice, 0, (u8)cstep->para[1]), mesg);
    }
}
#pragma pop

#pragma push
#pragma bool off
#pragma opt_common_subs on
void TLobby__sub_803B03CC(Voice_803B03CC *svoice, MSTEP_803B03CC *cstep) {
    void TLobby__sub_803B36A8(u32 vi);
    u32 i;
    u8 kg;
    u32 kill;

    svoice->keyGroup = 0;
    kg = (u8)(cstep->para[0] >> 8);
    kill = (u8)(cstep->para[0] >> 0x10) != 0;

    if (kg) {
        for (i = 0; i < lbl_80557348.count; ++i) {
            if ((*(Voice_803B03CC **)&lbl_805D73B0)[i].addr != 0 && ((*(Voice_803B03CC **)&lbl_805D73B0)[i].cFlags & 0x2) == 0 &&
                kg == (*(Voice_803B03CC **)&lbl_805D73B0)[i].keyGroup) {
                if (!kill) {
                    key_off_sound_program((Rec_803A9454 *)&(*(Voice_803B03CC **)&lbl_805D73B0)[i]);
                } else {
                    TLobby__sub_803B36A8(i);
                }
            }
        }
        svoice->keyGroup = kg;
    }
}
#pragma pop

#define macTimeQueueRoot ((SYNTH_VOICE_803B19AC *)lbl_805D7420)
#define macActiveMacroRoot ((SYNTH_VOICE_803B19AC *)lbl_805D741C)
#define macRealTime lbl_805D7428

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

static inline u32 ExecuteTrap_803B19AC(SYNTH_VOICE_803B19AC *svoice, u8 trapType) {
    if (svoice->trapEventAny != 0 && svoice->trapEventAddr[trapType] != NULL) {
        svoice->curAddr = svoice->trapEventCurAddr[trapType];
        svoice->addr = svoice->trapEventAddr[trapType];
        svoice->trapEventAddr[trapType] = NULL;
        TLobby__sub_803B1F24(svoice);
        return 1;
    }

    return 0;
}

static inline u32 HasHWEventTrap_803B19AC(SYNTH_VOICE_803B19AC *svoice) {
    if (svoice->trapEventAny != 0) {
        return svoice->trapEventAddr[1] != NULL;
    }
    return 0;
}

static inline void CheckHWEventTrap_803B19AC(SYNTH_VOICE_803B19AC *svoice) {
    if ((svoice->cFlags & 0x20) == 0 && !is_sound_hw_voice_active(svoice->id & 0xff)) {
        ExecuteTrap_803B19AC(svoice, 1);
    }
}

void TLobby__sub_803B19AC(u32 deltaTime) {
    SYNTH_VOICE_803B19AC *sv;
    SYNTH_VOICE_803B19AC *nextSv;
    u64 w;

    for (sv = macTimeQueueRoot; sv != NULL && sv->wait <= macRealTime;) {
        nextSv = sv->nextTimeQueueMacro;
        w = sv->wait;
        TLobby__sub_803B1F24(sv);
        sv->waitTime = w;
        sv = nextSv;
    }

    for (sv = macActiveMacroRoot; sv != NULL; sv = sv->nextMacActive) {
        nextSv = sv->nextMacActive;
        if (HasHWEventTrap_803B19AC(sv) != 0) {
            CheckHWEventTrap_803B19AC(sv);
        }
        dispatch_sound_macro_program(sv);
    }
    macRealTime += deltaTime;
}

#pragma pop

void TLobby__sub_803B1AF4(Rec_803A996C *ov) {
    u32 done;

    if (o->f4c == 1) {
        if (o->f68 != 0 && o->f54 != 0) {
            o->f38 = o->f60;
            o->f34 = o->f54;
            o->f54 = 0;
            TLobby__sub_803B1F24(o);
            done = 1;
        } else {
            done = 0;
        }
        if (done == 0 && (o->flags & 0x40000) != 0) {
            TLobby__sub_803B1F24(o);
        }
    }
}
#undef o

void key_off_sound_program(Rec_803A9454 *arg0) {
    Ch_803B1BA4 *o = (Ch_803B1BA4 *)arg0;
    u32 done;

    o->flags |= 8;
    if (o->f34 != 0) {
        if ((o->flags & 0x10000000000ULL) == 0) {
            if (o->f68 != 0 && o->f50 != 0) {
                o->f38 = o->f5c;
                o->f34 = o->f50;
                o->f50 = 0;
                TLobby__sub_803B1F24(o);
                done = 1;
            } else {
                done = 0;
            }
            if (done == 0 && (o->flags & 4) != 0) {
                TLobby__sub_803B1F24(o);
            }
        } else {
            o->flags |= 0x40000000000ULL;
        }
    }
}

#undef FLAGS
#define FLAGS (*(u64 *)&v->fh)
void TLobby__sub_803B1C98(Voice_803B1C98 *v, u32 hold) {
    u32 started;

    if (hold != 0) {
        FLAGS |= 0x10000000000ULL;
        return;
    }
    if (v->i34 != 0 && (FLAGS & 0x40000000000ULL) != 0) {
        if (v->b68 != 0 && v->i50 != 0) {
            v->i38 = v->i5C;
            v->i34 = v->i50;
            v->i50 = 0;
            TLobby__sub_803B1F24(v);
            started = 1;
        } else {
            started = 0;
        }
        if (started == 0 && (FLAGS & 4ULL) != 0) {
            TLobby__sub_803B1F24(v);
        }
    }
    FLAGS &= ~0x50000000000ULL;
}
#undef FLAGS
#define FLAGS (*(u64 *)&o->fh)

void enqueue_sound_program_deadline(Program_803B1DA4 *self) {
    Program_803B1DA4 *p;
    Program_803B1DA4 *prev;
    p = lbl_805D7420;
    prev = NULL;
    while (p != NULL && p->deadline < self->deadline) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        if (prev == NULL) {
            lbl_805D7420 = self;
            self->next = NULL;
            self->prev = NULL;
        } else {
            prev->next = self;
            self->prev = prev;
            self->next = NULL;
        }
    } else {
        self->next = p;
        if ((self->prev = p->prev) != NULL) {
            p->prev->next = self;
        } else {
            lbl_805D7420 = self;
        }
        p->prev = self;
    }
}

void dequeue_sound_program_deadline(Ch_803B1E48 *o, u32 arg1) {
    if (o->f98 != 0) {
        if (o->f98 != -1) {
            if (o->prev == NULL) {
                lbl_805D7420 = o->next;
            } else {
                o->prev->next = o->next;
            }
            if (o->next != NULL) {
                o->next->prev = o->prev;
            }
        }
        if (arg1 == 0) {
            TLobby__sub_803A8CC0(o);
        }
        o->f98 = 0;
        o->fa0 = lbl_805D7428;
        o->flags &= ~0x40004ULL;
    }
}

#define p1F24 ((V_803B1F24 *)arg0)
#undef FLAGS
#define FLAGS (*(u64 *)&p1F24->fh)
void TLobby__sub_803B1F24(void *arg0) {
    if (p1F24->i4C != 0) {
        if (p1F24->deadline != 0) {
            if (p1F24->deadline != 0xFFFFFFFFFFFFFFFFULL) {
                if (p1F24->prev == 0) {
                    lbl_805D7420 = (Program_803B1DA4 *)p1F24->next;
                } else {
                    p1F24->prev->next = p1F24->next;
                }
                if (p1F24->next != 0) {
                    p1F24->next->prev = p1F24->prev;
                }
            }
            TLobby__sub_803A8CC0(p1F24);
            p1F24->deadline = 0;
            p1F24->started = lbl_805D7428;
            FLAGS &= ~0x40004ULL;
        }
        if ((p1F24->vnext = lbl_805D741C) != 0) {
            lbl_805D741C->vprev = p1F24;
        }
        p1F24->vprev = 0;
        lbl_805D741C = p1F24;
        p1F24->i4C = 0;
    }
}
#undef p1F24
#undef FLAGS
#define FLAGS (*(u64 *)&o->fh)

#define o ((Ch_803B202C *)ov)
void set_sound_program_wait_state(Obj_803B312C *ov, s32 state) {
    if (o->state == state) {
        return;
    }
    if (o->state == 0) {
        if (o->wprev == NULL) {
            lbl_805D741C = o->wnext;
        } else {
            o->wprev->vnext = o->wnext;
        }
        if (o->wnext != NULL) {
            o->wnext->vprev = o->wprev;
        }
    }
    if (state == 2) {
        if (o->f98 != 0) {
            if (o->f98 != -1) {
                if (o->prev == NULL) {
                    lbl_805D7420 = o->next;
                } else {
                    o->prev->next = o->next;
                }
                if (o->next != NULL) {
                    o->next->prev = o->prev;
                }
            }
            o->f98 = 0;
            o->fa0 = lbl_805D7428;
            o->flags &= ~0x40004ULL;
        }
    }
    o->state = state;
}
#undef o

#define HEAD (*(Voice_803B2128 **)&lbl_805D741C)

u32 start_sound_voice(u16 arg0, u8 arg1, u32 arg2, u16 arg3, u8 arg4, u8 arg5, u8 arg6, u8 arg7,
                      u8 arg8, u8 arg9, u16 arg10, u16 arg11, u8 arg12, u8 arg13, u8 arg14, u32 arg15) {
    u32 macro;
    s32 flag;
    u16 r;
    u32 id;
    Voice_803B2128 *v;
    u32 vid;

    macro = start_sound_macro(arg0);
    if (macro != 0) {
        flag = arg4 & 0x80;
        if (flag == 0) {
            r = lookup_sound_bank_index(arg8, arg7);
            if (r != 0xFFFF) {
                arg1 = r;
            }
        }
        id = allocate_sound_voice(arg1, arg2, arg3, flag != 0 ? 1 : 0);
        if (id != 0xFFFFFFFF) {
            v = (Voice_803B2128 *)((u8 *)lbl_805D73B0 + id * 0x404);
            unlink_sound_program((Prog_803B25CC *)v);
            if (v->state != 2) {
                if (v->state == 0) {
                    if (v->prev == NULL) {
                        HEAD = v->next;
                    } else {
                        v->prev->next = v->next;
                    }
                    if (v->next != NULL) {
                        v->next->prev = v->prev;
                    }
                }
                dequeue_sound_program_deadline((Ch_803B1E48 *)v, 1);
                v->state = 2;
            }
            v->flags = (v->flags & 0x10) | 2;
            if (is_sound_hw_voice_active(id) != 0) {
                v->flags |= 1;
            }
            v->f98 = 0;
            if (flag != 0) {
                v->f11D = 1;
                arg4 &= 0x7F;
                TLobby__sub_803BB4F0(id, 0xFF, 1);
                TLobby__sub_803BB8AC(id, 0xFF);
                v->f20A = id;
                v->f20B = 0xFF;
                v->f20C = 0;
            } else {
                v->f11D = 0;
                v->f20A = arg7;
                v->f20B = arg8;
                v->f20C = arg9;
            }
            v->f102 = arg0;
            v->f100 = arg3;
            v->f110 = 0x75300000;
            v->f10E = 0x400;
            v->macroStart = macro;
            v->macroCur = macro + arg10 * 8;
            v->f12F = arg4;
            v->f12C = arg4;
            v->f12E = 0;
            v->f208 = arg5;
            v->f209 = arg6;
            v->f20D = arg11;
            v->f8C = 0;
            v->f8D = 0;
            v->fEC = -1;
            v->fF0 = -1;
            v->f108 = -1;
            v->f20E = arg13;
            v->f20F = arg14;
            v->f210 = arg15 != 0 ? 0 : 1;
            v->f3EE = 0;
            v->f3ED = 0;
            v->f3EC = 0;
            v->fF4 = id | ((arg0 << 16) | ((arg4 << 8) & 0xFF00));
            TLobby__sub_803B2B60(v, arg1);
            vid = alloc_sound_voice_id((SYNTH_VOICE_SV *)v, arg12);
            if (vid != 0xFFFFFFFF) {
                if (v->state != 0) {
                    dequeue_sound_program_deadline((Ch_803B1E48 *)v, 0);
                    if ((v->next = HEAD) != NULL) {
                        HEAD->prev = v;
                    }
                    v->prev = NULL;
                    HEAD = v;
                    v->state = 0;
                }
                return vid;
            }
            if (is_sound_hw_voice_active(id) != 0) {
                TLobby__sub_803BCEC8(id);
            }
            free_sound_voice((Obj_803B312C *)v);
        }
    }
    return -1;
}

#pragma push
#pragma opt_common_subs on
#define synthVoice ((SYNTH_VOICE_803B2438 *)lbl_805D73B0)
void TLobby__sub_803B2438(void) {
    u32 i;
    lbl_805D741C = 0;
    lbl_805D7420 = 0;
    lbl_805D7428 = 0;
    for (i = 0; i < lbl_80557348.count; ++i) {
        synthVoice[i].addr = 0;
        synthVoice[i].macState = 2;
        synthVoice[i].loop = 0;
    }
}
#pragma pop

}
