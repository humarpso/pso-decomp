#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803AA0C0_lbl_80556E88 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803A98F0_lbl_80556F88 {
    M2C_UNK value;
    u8 remaining[0x3BC];
};

struct Ent_803B89B4 { u8 pad0[0xC]; Ent_803B89B4 *next; Ent_803B89B4 *prev; u8 pad14[0xD8]; u8 active; u8 padED[2]; u8 idx; };
typedef struct DSPhostDPop_SV { s32 l; s32 r; s32 s; s32 lA; s32 rA; s32 sA; s32 lB; s32 rB; s32 sB; } DSPhostDPop_SV;
struct Rec_803B59E4 {
    void *spb;
    DSPhostDPop_SV hostDPopSum;
    s32 *main[2];
    s32 *auxA[3];
    s32 *auxB[3];
    union { void *voiceRoot; Ent_803B89B4 *head; };
    void *alienVoiceRoot;
    union { u8 state; u8 f50; };
    u8 isMaster;
    u8 numInputs;
    u32 type;
    u8 in[0x54];
    void *auxAHandler;
    void *auxBHandler;
    u8 padB4[0xBC - 0xB4];
};

struct Node_803B2598 { Node_803B2598 *next; u32 pad; u32 key; };

struct Rec_803A9944 { u8 pad[0x2d]; u8 f2d; u8 pad2[2]; };

struct Program_803B1DA4 {
    u8 pad[0x44];
    Program_803B1DA4 *next;
    Program_803B1DA4 *prev;
    u8 pad4c[0x98 - 0x4C];
    u64 deadline;
};

struct Envelope_803B431C {
    u8 mode, phase, pad[2];
    u32 remaining, level, logLevel;
    s32 step;
    u32 attack, decay;
    u16 sustain, pad2;
    u32 release;
};

typedef s32 M2C_UNK;
typedef struct Req_803AE60C { u8 pad0[4]; s16 f4; u8 pad1[2]; } Req_803AE60C;

typedef s32 (*RecoveredCallback_bdb219c29499)(s32, s32);

struct Node_803A3C24 { Node_803A3C24 *next; Node_803A3C24 *prev; s32 f8; s32 key; u8 ch; u8 grp; };
struct Chan_803A3934 { u8 grp; u8 pad[0x37]; };

struct Owner_803A3C24 { u8 pad[0xE64]; Node_803A3C24 *lists[2]; Node_803A3C24 *head; u8 padE70[0x1518 - 0xE70]; Chan_803A3934 chans[1]; };

struct Node_803A4964 { Node_803A4964 *next; Node_803A4964 *prev; s8 state; u8 idx; u8 padA[2]; u32 id; };

struct Node_803A5A04 { Node_803A5A04 *next; Node_803A5A04 *prev; u32 key; };

struct List_803A5A04 { u8 pad[0x1C]; Node_803A5A04 *head; u8 pad20[0x18]; };

struct Obj_803A6F18 { u8 pad0[0x122]; u8 b122; u8 b123; };

struct Obj_803A6F4C { u8 pad0[0x114]; u32 fh; u32 fl_; u8 pad11C[0x14]; u8 b130; u8 b131; u8 pad132[2]; s32 i134; s32 i138; s32 i13C; };

typedef struct Req_803AE6DC { u8 pad0[4]; s16 f4; u8 pad1[2]; } Req_803AE6DC;

typedef struct Res_803AE6DC { s32 f0; u16 pad4; u16 h6; } Res_803AE6DC;

struct Obj_803AFF38 { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803AFF9C { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803B0004 { u8 pad0[0xAC]; s32 v[16]; };

struct Obj_803B3AA8 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Obj_803B3B24 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Obj_803B3B80 { u8 pad0[0xF4]; u32 id; u8 pad1[0x29]; u8 b121; u8 b122; };

struct Node_803BA1B8 { Node_803BA1B8 *next; Node_803BA1B8 *prev; u8 pad8[8]; u32 f10; u8 pad14[0x28]; u32 id; };

struct Node_803A8D2C { Node_803A8D2C *next; u32 f4; u8 idx; u8 f9; };

struct Rec_803A8D2C { u8 pad[0x11C]; u8 busy; u8 pad11D[0x404 - 0x11D]; };

struct Se_803A9144 { u16 f0; u16 id; u8 b4; u8 b5; u8 b6; u8 b7; u8 b8; u8 b9; };

struct Rec_803A9454 {
    u8 pad0[0xEC];
    u32 next;
    u8 padF0[4];
    u32 id;
    u8 padF8[0x404 - 0xF8];
};

struct Rec_803A996C {
    u8 pad0[0xF4];
    u32 id;
    u8 padF8[0x11C - 0xF8];
    u8 busy;
    u8 pad11D[0x404 - 0x11D];
};

struct Lim_803A3A28 { s32 v; s32 pad; };

struct Ch_803A3A28 { Lim_803A3A28 lim[2]; u8 pad[0x28]; };

struct Tbl_803A3A28 { u8 pad[0x150C]; Ch_803A3A28 ch[1]; };

struct Slot_803A4EB8 { Node_803A4964 n; u8 pad10[0xEDA - 0x10]; u8 fEDA; u8 padEDB[0x1868 - 0xEDB]; };

struct Rec_803ADBF0 { u8 pad[9]; u8 f9; };

struct Ent_803ADBF0 { u16 id; u16 count; Rec_803ADBF0 *data; };

struct Tbl_803ADBF0 { u8 pad[0xA200]; Ent_803ADBF0 ents[1]; };

struct Ent_803ADD18 { u16 id; u16 f2; u32 f4; };

struct Obj_803AEC00 { u8 pad0[0x34]; s32 i34; s32 i38; u8 pad3C[0x6E]; u16 cnt; u8 padAC[0x48]; u32 iF4; u8 padF8[0x1C]; u32 fh; u32 fl; };

struct Op_803AEC00 { u32 w0; u32 w4; };

struct Obj_803AF0CC { u8 pad0[0x114]; u32 fh; u32 fl; u8 pad11C[0x24]; s8 b140; s8 b141; u8 pad142[2]; u32 i144; u32 i148; };

struct Op_803AF0CC { u32 w0; u32 w4; };

struct Node_803B2598;
struct Node_803B24A0;
struct Rec_803A8D2C;
struct Obj_803B3B80;
#define HEAD_803B25CC (*(Node_803B25CC **)&lbl_805D743C)
#define FREE_803B25CC (*(Node_803B25CC **)&lbl_805D7440)
#define VOICES_803B25CC (*(Prog_803B25CC **)&lbl_805D73B0)
#define UNLINK_803B25CC(n)                         \
    {                                              \
        Node_803B25CC *q = (n)->prev;              \
        if (q != NULL) {                           \
            q->next = (n)->next;                   \
        } else {                                   \
            HEAD_803B25CC = (n)->next;              \
        }                                          \
    }                                              \
    {                                              \
        Node_803B25CC *q = (n)->next;              \
        if (q != NULL) {                           \
            q->prev = (n)->prev;                   \
        }                                          \
    }
#define PUSH_803B25CC(n)                           \
    (n)->next = FREE_803B25CC;                      \
    if (FREE_803B25CC != NULL) {                    \
        FREE_803B25CC->prev = (n);                  \
    }                                              \
    (n)->prev = NULL;                              \
    FREE_803B25CC = (n);
struct Node_803B25CC {
    Node_803B25CC *next;
    Node_803B25CC *prev;
    u32 pad8;
    u32 owner;
};

struct Prog_803B25CC {
    u8 pad0[0xEC];
    u32 nextId;
    u32 prevId;
    u32 id;
    Node_803B25CC *node;
    Node_803B25CC *node2;
    u8 pad100[0x404 - 0x100];
};

struct Ent_803AA1E0 {
    u8 type;
    u8 pad1;
    union {
        u16 w;
        u8 b;
    } v;
};

struct Req_803AA1E0 {
    u8 count;
    u8 pad[3];
    Ent_803AA1E0 *ents;
};

struct Tbl_803AA1E0 { u8 b0; u8 b1; };

struct Node_803B2A30 { Node_803B2A30 *next; u32 pad4; u32 key; s32 val; };

struct Env_803B4360 {
    u8 mode; u8 phase; u8 pad2[2];
    u32 remaining; s32 level; s32 c; s32 step;
    u8 pad14[0x12]; u8 f26;
};

struct Src_803B8A14 { u8 vol; u8 volA; u8 volB; u8 srcStudio; };

struct Slot_803B8A14 { u8 studio; u8 pad; u16 vol; u16 volA; u16 volB; Src_803B8A14 *desc; };

struct Obj_803B8A14 { u8 pad[0x52]; u8 numInputs; u8 pad53[5]; Slot_803B8A14 in[7]; };

struct SynthInfo_803BAB54 {
    u8 pad[0x210];
    u8 voiceNum;
    u8 maxMusic;
    u8 maxSFX;
    u8 studioNum;
};

struct Vec_803B9438 { f32 x; f32 y; f32 z; };

struct A_803B9438 { A_803B9438 *next; u8 pad4[0xC]; Vec_803B9438 pos; };

struct B_803B9438 { B_803B9438 *next; u8 pad4[8]; Vec_803B9438 pos; f32 distance; u8 studio; };

struct SYNTH_VOICE_803B2438 {
    u8 pad0[0x34];
    void *addr;
    u8 pad38[0x4C - 0x38];
    u32 macState;
    u8 pad50[0xAA - 0x50];
    u16 loop;
    u8 padAC[0x404 - 0xAC];
};

typedef struct SeqInst_803A3D20 {
    struct SeqInst_803A3D20 *next;
    struct SeqInst_803A3D20 *prev;
    u8 state;
    u8 index;
    u16 groupID;
    u32 publicId;
} SeqInst_803A3D20;

typedef struct PAGE_803A487C { u16 macro; u8 prio; u8 maxVoices; u8 index; u8 reserved; } PAGE_803A487C;

typedef struct ARR_803A487C { u32 tTab; u32 pTab; u32 tmTab; u32 mTrack; u32 info; u32 loopPoint[16]; u32 tsTab; } ARR_803A487C;

typedef struct TENTRY_803A487C { u32 time; u8 prgChange; u8 velocity; u8 res[2]; u16 pattern; s8 transpose; s8 velocityAdd; } TENTRY_803A487C;

typedef struct TRACK_803A487C { TENTRY_803A487C *base; TENTRY_803A487C *addr; } TRACK_803A487C;

typedef struct NOTE_803A487C { struct NOTE_803A487C *next; struct NOTE_803A487C *prev; u32 id; s32 endTime; u8 section; u8 timeIndex; u8 reserved[2]; } NOTE_803A487C;

typedef struct NOTE_DATA_803A487C { u16 time; u8 key; u8 velocity; u16 length; } NOTE_DATA_803A487C;

typedef struct PRG_STATE_803A487C { u16 macId; u8 priority; u8 maxVoices; } PRG_STATE_803A487C;

typedef struct SEQ_STREAM_803A487C { u8 *nextAddr; u16 value; s16 nextDelta; u32 nextTime; } SEQ_STREAM_803A487C;

typedef struct CPAT_803A487C { u32 lTime; u32 baseTime; NOTE_DATA_803A487C *addr; TENTRY_803A487C *patternInfo; SEQ_STREAM_803A487C pitchBend; SEQ_STREAM_803A487C modulation; u8 midi; } CPAT_803A487C;

typedef struct SEQ_EVENT_803A487C {
    struct SEQ_EVENT_803A487C *next; struct SEQ_EVENT_803A487C *prev; u32 time;
    union { TENTRY_803A487C *trackAddr; struct { NOTE_DATA_803A487C *addr; CPAT_803A487C *base; } pattern; } info;
    u8 type; u8 trackId;
} SEQ_EVENT_803A487C;

typedef struct MTRACK_DATA_803A487C { volatile u32 time; u32 bpm; } MTRACK_DATA_803A487C;

typedef struct MTRACK_803A487C { MTRACK_DATA_803A487C *base; MTRACK_DATA_803A487C *addr; } MTRACK_803A487C;

typedef struct TICKS_803A487C { u32 low; s32 high; } TICKS_803A487C;

typedef struct SEQ_SECTION_803A487C {
    MTRACK_803A487C mTrack; u32 bpm; TICKS_803A487C tickDelta[2]; SEQ_EVENT_803A487C *globalEventRoot; TICKS_803A487C time[2];
    u8 timeIndex; u16 speed; u16 loopCnt; u8 loopDisable;
} SEQ_SECTION_803A487C;

typedef struct SND_CROSSFADE_803A487C {
    u32 seqId1; u16 time1; u32 seqId2; u16 time2; void *arr2; u16 gid2; u16 sid2; u8 vol2; u8 studio2;
    u32 trackMute2[2]; u16 speed2; u8 flags;
} SND_CROSSFADE_803A487C;

typedef struct SEQ_INSTANCE_803A487C {
    struct SEQ_INSTANCE_803A487C *next; struct SEQ_INSTANCE_803A487C *prev; u8 state; u8 index; u16 groupID; u32 publicId;
    PAGE_803A487C *normtab; u8 normTrans[128]; PAGE_803A487C *drumtab; u8 drumTrans[128];
    ARR_803A487C *arrbase; u32 trackMute[2]; TRACK_803A487C track[64]; u8 trackVolGroup[64]; CPAT_803A487C pattern[64];
    NOTE_803A487C *noteUsed[2]; NOTE_803A487C *noteKeyOff; PRG_STATE_803A487C prgState[16]; u8 defVGroup;
    SND_CROSSFADE_803A487C syncCrossInfo; u32 *syncSeqIdPtr; u8 syncActive; u8 defStudio; u8 keyOffCheck;
    SEQ_EVENT_803A487C event[64]; u8 *trackSectionTab; SEQ_SECTION_803A487C section[16];
} SEQ_INSTANCE_803A487C;

typedef struct PAGE_803A49C8 { u16 macro; u8 prio; u8 maxVoices; u8 index; u8 reserved; } PAGE_803A49C8;

typedef struct ARR_803A49C8 { u32 tTab; u32 pTab; u32 tmTab; u32 mTrack; u32 info; u32 loopPoint[16]; u32 tsTab; } ARR_803A49C8;

typedef struct TENTRY_803A49C8 { u32 time; u8 prgChange; u8 velocity; u8 res[2]; u16 pattern; s8 transpose; s8 velocityAdd; } TENTRY_803A49C8;

typedef struct TRACK_803A49C8 { TENTRY_803A49C8 *base; TENTRY_803A49C8 *addr; } TRACK_803A49C8;

typedef struct NOTE_803A49C8 { struct NOTE_803A49C8 *next; struct NOTE_803A49C8 *prev; u32 id; s32 endTime; u8 section; u8 timeIndex; u8 reserved[2]; } NOTE_803A49C8;

typedef struct NOTE_DATA_803A49C8 { u16 time; u8 key; u8 velocity; u16 length; } NOTE_DATA_803A49C8;

typedef struct PRG_STATE_803A49C8 { u16 macId; u8 priority; u8 maxVoices; } PRG_STATE_803A49C8;

typedef struct SEQ_STREAM_803A49C8 { u8 *nextAddr; u16 value; s16 nextDelta; u32 nextTime; } SEQ_STREAM_803A49C8;

typedef struct CPAT_803A49C8 { u32 lTime; u32 baseTime; NOTE_DATA_803A49C8 *addr; TENTRY_803A49C8 *patternInfo; SEQ_STREAM_803A49C8 pitchBend; SEQ_STREAM_803A49C8 modulation; u8 midi; } CPAT_803A49C8;

typedef struct SEQ_EVENT_803A49C8 {
    struct SEQ_EVENT_803A49C8 *next; struct SEQ_EVENT_803A49C8 *prev; u32 time;
    union { TENTRY_803A49C8 *trackAddr; struct { NOTE_DATA_803A49C8 *addr; CPAT_803A49C8 *base; } pattern; } info;
    u8 type; u8 trackId;
} SEQ_EVENT_803A49C8;

typedef struct MTRACK_DATA_803A49C8 { volatile u32 time; u32 bpm; } MTRACK_DATA_803A49C8;

typedef struct MTRACK_803A49C8 { MTRACK_DATA_803A49C8 *base; MTRACK_DATA_803A49C8 *addr; } MTRACK_803A49C8;

typedef struct TICKS_803A49C8 { u32 low; s32 high; } TICKS_803A49C8;

typedef struct SEQ_SECTION_803A49C8 {
    MTRACK_803A49C8 mTrack; u32 bpm; TICKS_803A49C8 tickDelta[2]; SEQ_EVENT_803A49C8 *globalEventRoot; TICKS_803A49C8 time[2];
    u8 timeIndex; u16 speed; u16 loopCnt; u8 loopDisable;
} SEQ_SECTION_803A49C8;

typedef struct SND_CROSSFADE_803A49C8 {
    u32 seqId1; u16 time1; u32 seqId2; u16 time2; void *arr2; u16 gid2; u16 sid2; u8 vol2; u8 studio2;
    u32 trackMute2[2]; u16 speed2; u8 flags;
} SND_CROSSFADE_803A49C8;

typedef struct SEQ_INSTANCE_803A49C8 {
    struct SEQ_INSTANCE_803A49C8 *next; struct SEQ_INSTANCE_803A49C8 *prev; u8 state; u8 index; u16 groupID; u32 publicId;
    PAGE_803A49C8 *normtab; u8 normTrans[128]; PAGE_803A49C8 *drumtab; u8 drumTrans[128];
    ARR_803A49C8 *arrbase; u32 trackMute[2]; TRACK_803A49C8 track[64]; u8 trackVolGroup[64]; CPAT_803A49C8 pattern[64];
    NOTE_803A49C8 *noteUsed[2]; NOTE_803A49C8 *noteKeyOff; PRG_STATE_803A49C8 prgState[16]; u8 defVGroup;
    SND_CROSSFADE_803A49C8 syncCrossInfo; u32 *syncSeqIdPtr; u8 syncActive; u8 defStudio; u8 keyOffCheck;
    SEQ_EVENT_803A49C8 event[64]; u8 *trackSectionTab; SEQ_SECTION_803A49C8 section[16];
} SEQ_INSTANCE_803A49C8;

typedef struct SeqInst_803A4D4C {
    struct SeqInst_803A4D4C *next;
    struct SeqInst_803A4D4C *prev;
    u8 state;
    u8 index;
    u16 groupID;
    u32 publicId;
} SeqInst_803A4D4C;

typedef struct PAGE_803A6364 { u16 macro; u8 prio; u8 maxVoices; u8 index; u8 reserved; } PAGE_803A6364;

typedef struct ARR_803A6364 { u32 tTab; u32 pTab; u32 tmTab; u32 mTrack; u32 info; u32 loopPoint[16]; u32 tsTab; } ARR_803A6364;

typedef struct TENTRY_803A6364 { u32 time; u8 prgChange; u8 velocity; u8 res[2]; u16 pattern; s8 transpose; s8 velocityAdd; } TENTRY_803A6364;

typedef struct TRACK_803A6364 { TENTRY_803A6364 *base; TENTRY_803A6364 *addr; } TRACK_803A6364;

typedef struct NOTE_803A6364 { struct NOTE_803A6364 *next; struct NOTE_803A6364 *prev; u32 id; s32 endTime; u8 section; u8 timeIndex; u8 reserved[2]; } NOTE_803A6364;

typedef struct NOTE_DATA_803A6364 { u16 time; u8 key; u8 velocity; u16 length; } NOTE_DATA_803A6364;

typedef struct PRG_STATE_803A6364 { u16 macId; u8 priority; u8 maxVoices; } PRG_STATE_803A6364;

typedef struct SEQ_STREAM_803A6364 { u8 *nextAddr; u16 value; s16 nextDelta; u32 nextTime; } SEQ_STREAM_803A6364;

typedef struct CPAT_803A6364 { u32 lTime; u32 baseTime; NOTE_DATA_803A6364 *addr; TENTRY_803A6364 *patternInfo; SEQ_STREAM_803A6364 pitchBend; SEQ_STREAM_803A6364 modulation; u8 midi; } CPAT_803A6364;

typedef struct SEQ_EVENT_803A6364 {
    struct SEQ_EVENT_803A6364 *next; struct SEQ_EVENT_803A6364 *prev; u32 time;
    union { TENTRY_803A6364 *trackAddr; struct { NOTE_DATA_803A6364 *addr; CPAT_803A6364 *base; } pattern; } info;
    u8 type; u8 trackId;
} SEQ_EVENT_803A6364;

typedef struct MTRACK_DATA_803A6364 { volatile u32 time; u32 bpm; } MTRACK_DATA_803A6364;

typedef struct MTRACK_803A6364 { MTRACK_DATA_803A6364 *base; MTRACK_DATA_803A6364 *addr; } MTRACK_803A6364;

typedef struct TICKS_803A6364 { u32 low; s32 high; } TICKS_803A6364;

typedef struct SEQ_SECTION_803A6364 {
    MTRACK_803A6364 mTrack; u32 bpm; TICKS_803A6364 tickDelta[2]; SEQ_EVENT_803A6364 *globalEventRoot; TICKS_803A6364 time[2];
    u8 timeIndex; u16 speed; u16 loopCnt; u8 loopDisable;
} SEQ_SECTION_803A6364;

typedef struct SND_CROSSFADE_803A6364 {
    u32 seqId1; u16 time1; u32 seqId2; u16 time2; void *arr2; u16 gid2; u16 sid2; u8 vol2; u8 studio2;
    u32 trackMute2[2]; u16 speed2; u8 flags;
} SND_CROSSFADE_803A6364;

typedef struct SEQ_INSTANCE_803A6364 {
    struct SEQ_INSTANCE_803A6364 *next; struct SEQ_INSTANCE_803A6364 *prev; u8 state; u8 index; u16 groupID; u32 publicId;
    PAGE_803A6364 *normtab; u8 normTrans[128]; PAGE_803A6364 *drumtab; u8 drumTrans[128];
    ARR_803A6364 *arrbase; u32 trackMute[2]; TRACK_803A6364 track[64]; u8 trackVolGroup[64]; CPAT_803A6364 pattern[64];
    NOTE_803A6364 *noteUsed[2]; NOTE_803A6364 *noteKeyOff; PRG_STATE_803A6364 prgState[16]; u8 defVGroup;
    SND_CROSSFADE_803A6364 syncCrossInfo; u32 *syncSeqIdPtr; u8 syncActive; u8 defStudio; u8 keyOffCheck;
    SEQ_EVENT_803A6364 event[64]; u8 *trackSectionTab; SEQ_SECTION_803A6364 section[16];
} SEQ_INSTANCE_803A6364;

struct Sub_803AA66C { u8 pad[8]; u32 vid; };

struct Rec_803AA66C {
    u8 pad0[0xF4];
    u32 id;
    Sub_803AA66C *vidList;
    u8 padFC[0x11F - 0xFC];
    u8 studio;
    u8 pad120[0x404 - 0x120];
};

struct Cfg_803AA66C { u8 pad[0x210]; u8 voiceNum; };

struct Ent_803ACD40 { s32 f0; u16 id; u16 ref; };

struct Tbl_803ACD40 { u8 pad[0x4600]; Ent_803ACD40 ents[1]; };

struct Ent_803ACEC4 { void *p; u16 key; u16 f6; u16 count; u16 padA; };

struct Tbl_803ACEC4 { u8 pad[0x4E00]; Ent_803ACEC4 ents[256]; };

struct Ent_803AD10C { u32 a; u16 key; u16 pad6; u16 count; u16 padA; };

struct Tbl_803AD10C { u8 pad[0x4E00]; Ent_803AD10C ents[256]; };

struct Ent_803AD4D0 { s32 f0; u16 id; u16 ref; };

struct Tbl_803AD4D0 { u8 pad[0x600]; Ent_803AD4D0 ents[1]; };

typedef struct MSTEP_SV { u32 para[2]; } MSTEP_SV;
typedef struct CALLSTACK_SV { MSTEP_SV *addr; MSTEP_SV *curAddr; } CALLSTACK_SV;
typedef struct VID_LIST_SV { struct VID_LIST_SV *next; struct VID_LIST_SV *prev; u32 vid; u32 root; } VID_LIST_SV;
typedef struct SYNTH_QUEUE_SV { struct SYNTH_QUEUE_SV *next; struct SYNTH_QUEUE_SV *prev; u8 voice; u8 jobTabIndex; } SYNTH_QUEUE_SV;
typedef struct SYNTH_JOBTAB_SV { SYNTH_QUEUE_SV *lowPrecision; SYNTH_QUEUE_SV *event; SYNTH_QUEUE_SV *zeroOffset; } SYNTH_JOBTAB_SV;
typedef struct SYNTH_LFO_SV { u32 time; u32 period; s16 value; s16 lastValue; } SYNTH_LFO_SV;
typedef struct SYNTHMasterFader_SV {
    f32 volume; f32 target; f32 start; f32 time; f32 deltaTime; f32 pauseVol; f32 pauseTarget; f32 pauseStart;
    f32 pauseTime; f32 pauseDeltaTime; u32 seqId; u8 seqMode; u8 type;
} SYNTHMasterFader_SV;
typedef struct CTRL_SOURCE_SV { u8 midiCtrl; u8 combine; s32 scale; } CTRL_SOURCE_SV;
typedef struct CTRL_DEST_SV { CTRL_SOURCE_SV source[4]; u16 oldValue; u8 numSource; } CTRL_DEST_SV;
typedef struct ADSR_VARS_SV {
    u8 mode; u8 state; u32 cnt; s32 currentVolume; s32 currentIndex; s32 currentDelta;
    union {
        struct { u32 aTime; u32 dTime; u16 sLevel; u32 rTime; u16 cutOff; u8 aMode; } dls;
        struct { u32 aTime; u32 dTime; u16 sLevel; u32 rTime; } linear;
    } data;
} ADSR_VARS_SV;
#pragma pack(push, 4)
typedef struct SYNTH_VOICE_SV {
    SYNTH_QUEUE_SV lowPrecisionJob; SYNTH_QUEUE_SV zeroOffsetJob; SYNTH_QUEUE_SV eventJob;
    u64 lastLowCallTime; u64 lastZeroCallTime; MSTEP_SV *addr; MSTEP_SV *curAddr;
    struct SYNTH_VOICE_SV *nextMacActive; struct SYNTH_VOICE_SV *prevMacActive;
    struct SYNTH_VOICE_SV *nextTimeQueueMacro; struct SYNTH_VOICE_SV *prevTimeQueueMacro;
    u32 macState; MSTEP_SV *trapEventAddr[3]; MSTEP_SV *trapEventCurAddr[3]; u8 trapEventAny;
    CALLSTACK_SV callStack[4]; u8 callStackEntryNum; u8 callStackIndex;
    u64 macStartTime; u64 wait; u64 waitTime; u8 timeUsedByInput; u16 loop; s32 local_vars[16];
    u32 child; u32 parent; u32 id; VID_LIST_SV *vidList; VID_LIST_SV *vidMasterList;
    u16 allocId; u16 macroId; u8 keyGroup; u32 lastVID; u8 prio; u16 ageSpeed; u32 age; u64 cFlags;
    u8 block; u8 fxFlag; u8 vGroup; u8 studio; u8 track; u8 midi; u8 midiSet; u8 section;
    u32 sInfo; u32 playFrq; u16 curNote; s8 curDetune; u8 orgNote; u8 lastNote; u8 portType;
    u16 portLastCtrlState; u32 portDuration; u32 portCurPitch; u32 portTime;
    u8 vibKeyRange; u8 vibCentRange; u32 vibPeriod; u32 vibCurTime; s32 vibCurOffset; s16 vibModAddScale;
    u32 volume; u32 orgVolume; float lastVolFaderScale; u32 lastPan; u32 lastSPan; float treCurScale;
    u16 treScale; u16 treModAddScale; u32 panning[2]; s32 panDelta[2]; u32 panTarget[2]; u32 panTime[2];
    u8 revVolScale; u8 revVolOffset; u8 volTable; u8 itdMode; s32 envDelta; u32 envTarget; u32 envCurrent;
    u32 sweepOff[2]; s32 sweepAdd[2]; s32 sweepCnt[2]; u8 sweepNum[2]; SYNTH_LFO_SV lfo[2];
    u8 lfoUsedByInput[2]; u8 pbLowerKeyRange; u8 pbUpperKeyRange; u16 pbLast;
    ADSR_VARS_SV pitchADSR; s16 pitchADSRRange; u16 curPitch;
    struct { u8 vol; u8 pan; u8 midi; u8 midiSet; u8 section; u8 track; u8 vGroup; u8 studio; u8 itdMode; } setup;
    u32 midiDirtyFlags;
    CTRL_DEST_SV inpVolume; CTRL_DEST_SV inpPanning; CTRL_DEST_SV inpSurroundPanning; CTRL_DEST_SV inpPitchBend;
    CTRL_DEST_SV inpDoppler; CTRL_DEST_SV inpModulation; CTRL_DEST_SV inpPedal; CTRL_DEST_SV inpPortamento;
    CTRL_DEST_SV inpPreAuxA; CTRL_DEST_SV inpReverb; CTRL_DEST_SV inpPreAuxB; CTRL_DEST_SV inpPostAuxB;
    CTRL_DEST_SV inpTremolo;
    u8 mesgNum; u8 mesgRead; u8 mesgWrite; s32 mesgQueue[4]; u16 curOutputVolume;
} SYNTH_VOICE_SV;
typedef struct synthITDInfo_SV { u8 music; u8 sfx; } synthITDInfo_SV;
#pragma pack(pop)
typedef struct LAYER_SV { u16 id; u8 keyLow; u8 keyHigh; s8 transpose; u8 volume; s16 prioOffset; u8 panning; u8 reserved[3]; } LAYER_SV;
typedef struct KEYMAP_SV { u16 id; s8 transpose; u8 panning; s16 prioOffset; u8 reserved[2]; } KEYMAP_SV;
typedef struct FX_TAB_SV { u16 id; u16 macro; u8 maxVoices; u8 priority; u8 volume; u8 panning; u8 key; u8 vGroup; } FX_TAB_SV;
typedef struct SynthInfo_SV { u32 mixFrq; u32 numSamples; struct { u32 frq; u8 stereo; u8 bits; s8 deviceName[256]; s8 versionText[256]; } pbInfo; u8 voiceNum; u8 maxMusic; u8 maxSFX; u8 studioNum; } SynthInfo_SV;
typedef void (*SND_AUX_CALLBACK_SV)(u8 reason, void *info, void *user);
typedef struct SynthBss_SV {
    u32 synthTicksPerSecond[9][16];
    SYNTH_JOBTAB_SV synthJobTable[32];
    SynthInfo_SV synthInfo;
    SYNTHMasterFader_SV synthMasterFader[32];
    u8 synthTrackVolume[64];
    SND_AUX_CALLBACK_SV synthAuxACallback[8];
    void *synthAuxAUser[8];
    SND_AUX_CALLBACK_SV synthAuxBCallback[8];
    void *synthAuxBUser[8];
    synthITDInfo_SV synthITDDefault[8];
    s32 synthGlobalVariable[16];
    CTRL_DEST_SV inpAuxB[8][4];
    CTRL_DEST_SV inpAuxA[8][4];
} SynthBss_SV;

#define CLAMP_SV(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV_SV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define SV_VOICES ((SYNTH_VOICE_SV *)lbl_805D73B0)
#define SV_VOICES_L (*(SYNTH_VOICE_SV **)&lbl_805D73B0)

extern "C" {
void TLobby__sub_803A4B7C(s32);
void TLobby__sub_803A4FC4(s32, s32, s32);
void TLobby__sub_803A8DC0(u8 *arg0);
void TLobby__sub_803BB98C(u8, void *, void *);
void TLobby__sub_803A93D0(u8 *arg0, u8 *arg1);
void TLobby__sub_803A4DDC(u32, s16);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803A9F80(s32 arg0, s16 arg1);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803A9FC8(s32 arg0);
void TLobby__sub_803A4FC4(s32, s32, s32);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803AA000(s32 arg0, s32 arg1, s32 arg2);
void TLobby__sub_803A5078(s8, s32, s32, s32);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803AA058(s8 arg0, s32 arg1, s32 arg2, s32 arg3);
u16 lookup_sound_bank_index(u8 arg0, u8 arg1);
void sound_enable_irq(void);
void sound_disable_irq(void);
s32 TLobby__sub_803AA1A0(s32 arg0);
void TLobby__sub_803A94E0(u8, u16, u8, s8, s32);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2);
void TLobby__sub_803BD62C(u8);
void TLobby__sub_803AA75C(u8 arg0, void *in_desc);
void TLobby__sub_803BD660(u8);
void TLobby__sub_803AA77C(u8 arg0, void *in_desc);
extern s32 lbl_805D73AC;
void TLobby__sub_803AB574(s8 *arg0, s8 *arg1);
void start_sound_envelope(u8 *arg0);
M2C_UNK DCFlushRangeNoSync(void *, int);
M2C_UNK memset(void *, int, int);
extern s32 lbl_805D7480;
void TLobby__sub_803B58A4(void);
extern s32 (*lbl_805D7490)(s32, s32);
s32 TLobby__sub_803B88CC(u8 *arg0, s32 arg1);
extern s8 lbl_805D7498;
extern s32 lbl_805D749C;
extern s32 lbl_805D74A0;
extern s32 lbl_805D74A4;
extern s32 lbl_805D74A8;
extern s32 lbl_805D74AC;
extern s8 lbl_805D74B0;
extern s8 lbl_805D74B1;
extern s8 lbl_805D74B2;
void TLobby__sub_803BAB10(s32 arg0);
#pragma pack(push, 4)
struct Obj_803A8C5C { u8 pad0[0x24]; s64 p24; s64 p2C; };
#pragma pack(pop)
extern s64 lbl_805D73C0;
void TLobby__sub_803A8D04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern RecoveredGlobal_803A98F0_lbl_80556F88 lbl_80556F88;
extern s32 lbl_805D73A8;
s32 TLobby__sub_803A98F0(u8 arg0);
s32 TLobby__sub_803B5398(u16, u16, s32, s32, u8, s32);
void TLobby__sub_803B54D8(u16 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4);
extern Rec_803B59E4 lbl_805663D8[];
void TLobby__sub_803B59E4(u8 i);
extern Node_803B2598 *lbl_805D743C;
Node_803B2598 *TLobby__sub_803B2598(u32 key);
extern u8 lbl_805D7380;
extern Rec_803A9944 lbl_8055755C[];
void TLobby__sub_803A9944(u8 i, u8 v);
u32 TLobby__sub_803AA2B8(u32 id);
extern Program_803B1DA4 *lbl_805D7420;
void enqueue_sound_program_deadline(Program_803B1DA4 *self);
s32 key_off_sound_envelope(struct Envelope_803B431C *e);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 *search_sound_sample_directory(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
extern Req_803AE60C lbl_805D73F8;
extern u8 lbl_8055A470[];
extern u16 lbl_805D73D2;
extern s32 *lbl_805D7400;
s32 TLobby__sub_803AE60C(s16 arg0);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 *search_sound_sample_directory(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
extern Req_803AE60C lbl_805D7404;
extern u8 lbl_8055E470[];
extern u16 lbl_805D73D4;
extern s32 *lbl_805D740C;
s32 TLobby__sub_803AE66C(s16 arg0);
extern Owner_803A3C24 *lbl_805D7360;
extern Node_803A3C24 *lbl_805D7364;
void TLobby__sub_803A3C24(Node_803A3C24 *arg0);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
void TLobby__sub_803A4964(Node_803A4964 *arg0);
void TLobby__sub_803A5A04(List_803A5A04 *arg0, Node_803A5A04 *arg1);
extern RecoveredGlobal_803A98F0_lbl_80556F88 lbl_80556F88;
void TLobby__sub_803A6ED0(s32 arg0, u8 arg1, u8 arg2);
void TLobby__sub_803A6F4C(Obj_803A6F4C *arg0);
s32 TLobby__sub_803A6F18(Obj_803A6F18 *arg0);
void TLobby__sub_803A8CC0(void *arg0);
void TLobby__sub_803B89B4(Ent_803B89B4 *arg0);
u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1);
s32 *search_sound_sample_directory(Req_803AE60C *, void *, u16, s32, s32 (*)(u8 *, u8 *));
s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1);
extern u16 lbl_805D73D6;
extern Res_803AE6DC *lbl_805D7410;
s32 TLobby__sub_803AE6DC(s16 arg0, u16 *arg1);
u16 TLobby__sub_803BC7E4(void *, s32);
extern s32 lbl_80557C2C[];
s32 TLobby__sub_803AFF38(Obj_803AFF38 *arg0, u32 arg1, u32 arg2);
u16 TLobby__sub_803BC7E4(void *, s32);
extern s32 lbl_80557C2C[];
s16 TLobby__sub_803AFF9C(Obj_803AFF9C *arg0, u32 arg1, u32 arg2);
void TLobby__sub_803BC884(void *, s32, s16);
extern s32 lbl_80557C2C[];
void TLobby__sub_803B0004(Obj_803B0004 *arg0, u32 arg1, u32 arg2, s32 arg3);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
s32 TLobby__sub_803B3AA8(Obj_803B3AA8 *arg0);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
void TLobby__sub_803B3B24(Obj_803B3B24 *arg0);
extern u8 lbl_80564CC8[][16];
extern u8 lbl_80564D48[];
void TLobby__sub_803B3B80(Obj_803B3B80 *arg0);
extern s32 lbl_805D749C;
void TLobby__sub_803BA1B8(Node_803BA1B8 *arg0);
extern Rec_803A8D2C *lbl_805D73B0;
void TLobby__sub_803A8D2C(Node_803A8D2C **list, void (*cb)(u8));
s32 TLobby__sub_803A7880(s32, s32, s32, s32, u8, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32);
Se_803A9144 *find_sound_fx_record(s16);
s32 synth_start_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
extern u8 lbl_805D7380;
extern Rec_803A8D2C *lbl_805D73B0;
void key_off_sound_program(Rec_803A9454 *);
s32 key_off_sound_fx(int id);
extern Rec_803A8D2C *lbl_805D73B0;
s32 get_slot_value__6TLobbyFi(u8);
void TLobby__sub_803B488C(s32);
void TLobby__sub_803B1AF4(Rec_803A996C *);
s32 TLobby__sub_803B46A4(u8);
s32 TLobby__sub_803A996C(s32 op, u32 idx);
s32 key_off_sound_fx(int id);
extern Owner_803A3C24 *lbl_805D7360;
s32 TLobby__sub_803A3A28(void);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
extern Slot_803A4EB8 lbl_8054AB48[];
void TLobby__sub_803A4EB8(s32 arg0);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern u16 lbl_805D73DA;
s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern Ent_803ADD18 lbl_80564070[];
extern u16 lbl_805D73DA;
s32 TLobby__sub_803ADD18(u16 id);
u16 TLobby__sub_803BC91C(void);
u32 is_sound_hw_voice_active(s32 i);
void TLobby__sub_803AEC00(Obj_803AEC00 *o, Op_803AEC00 *op);
void shift_left_8__6TLobbyFPv(void *);
void TLobby__sub_803BCA50(void *, void *);
void TLobby__sub_803AF0CC(Obj_803AF0CC *o, Op_803AF0CC *op);
extern const f32 lbl_805E0B78;
s32 calc_sound_pitch_semitone_up(s32 current);
f32 powf(f32, f32, f32);
extern const f32 lbl_805E0B90;
extern const f32 lbl_805E0B94;
extern const f32 lbl_805E0B98;
u32 TLobby__sub_803B3ED8(s32 arg0);
void TLobby__sub_803B3B80(Obj_803B3B80 *arg0);
void unlink_sound_program(Prog_803B25CC *p);
extern Tbl_803AA1E0 lbl_80557C1C[];
s32 synth_start_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
s32 TLobby__sub_803A9200(u32 id, u8 a1, u8 a2);
s32 TLobby__sub_803A92E8(u32 id, u8 a1, u16 a2);
void sound_enable_irq(void);
void sound_disable_irq(void);
s32 start_sound_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, Req_803AA1E0 *req);
extern Node_803B2598 *lbl_805D743C;
u32 find_sound_voice_by_id(u32 arg0);
extern f32 lbl_804F6358[];
extern f32 lbl_804F6558[];
extern const f32 lbl_805E0B88;
u32 calc_sound_base_pitch(u8 note, u32 r);
extern u16 lbl_804F6758[];
s32 transition_sound_envelope(void *a0);
s32 transition_sound_envelope(void *a0);
extern u16 lbl_804F6758[];
u32 advance_sound_envelope(void *arg0, void *arg1, void *arg2);
s32 TLobby__sub_803B8A14(Obj_803B8A14 *stp, Src_803B8A14 *desc);
void TLobby__sub_803A6CA0(void);
void TLobby__sub_803A9A3C(u32 mixFrq, u32 numVoices);
void TLobby__sub_803AA79C(void);
void TLobby__sub_803AE814(void *arg0, void *arg1);
void TLobby__sub_803B4584(void);
void TLobby__sub_803B4CEC(void);
void TLobby__sub_803BAB10(s32 arg0);
s32 TLobby__sub_803BCC0C(u32 *frq, u32 numVoices, u32 numStudios, u32 flags);
extern u8 lbl_805D7380;
extern u8 lbl_805D73B8;
s32 TLobby__sub_803BAB54(u8 voices, u8 music, u8 sfx, u8 studios, u32 flags, u32 aramSize);
extern s32 lbl_805D74A0;
extern s32 lbl_805D74A4;
void TLobby__sub_803B9438(void);
extern Rec_803A8D2C *lbl_805D73B0;
extern Program_803B1DA4 *lbl_805D7420;
extern u64 lbl_805D7428;
void TLobby__sub_803B2438(void);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
u32 TLobby__sub_803A3D20(u32 seqId);
extern Owner_803A3C24 *lbl_805D7360;
extern u32 lbl_805D7368;
void TLobby__sub_803A6ED0(s32 arg0, u8 arg1, u8 arg2);
void TLobby__sub_803A487C(u8 secIndex);
extern Slot_803A4EB8 lbl_8054AB48[];
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
s32 TLobby__sub_803B3748(u32 id);
void TLobby__sub_803A3858(Owner_803A3C24 *o);
void TLobby__sub_803A49C8(s32 seqId);
extern Node_803A4964 *lbl_805D7378;
extern Node_803A4964 *lbl_805D737C;
void TLobby__sub_803A4B7C(s32);
void TLobby__sub_803A4D4C(u16 sgid);
extern Owner_803A3C24 *lbl_805D7360;
void TLobby__sub_803A487C(u8 secIndex);
void TLobby__sub_803A62A0(u8 ch);
SEQ_EVENT_803A6364 *TLobby__sub_803A5A78(SEQ_EVENT_803A6364 *event, u8 secIndex, u32 *loopFlag);
void TLobby__sub_803A5A04(List_803A5A04 *arg0, Node_803A5A04 *arg1);
float floorf(float);
u32 TLobby__sub_803A6364(u8 secIndex, u32 deltaTime);
s32 TLobby__sub_803A9200(u32 id, u8 a1, u8 a2);
void sound_enable_irq(void);
void sound_disable_irq(void);
s32 TLobby__sub_803AA0E0(u32 vid, u8 ctrl, u8 value);
s32 TLobby__sub_803A92E8(u32 id, u8 a1, u16 a2);
void sound_enable_irq(void);
void sound_disable_irq(void);
s32 TLobby__sub_803AA140(u32 vid, u8 ctrl, u16 value);
u32 TLobby__sub_803A3D20(u32 seqId);
void set_sound_aux_bus_callbacks(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern s32 lbl_80557B9C[8];
extern void *lbl_80557BBC[8];
extern s32 lbl_80557BDC[8];
extern void *lbl_80557BFC[8];
extern u8 lbl_805D7384[8];
extern u8 lbl_805D738C[8];
extern u8 lbl_805D7394[8];
extern u8 lbl_805D739C[8];
void register_sound_aux_callbacks(u8 studio, void *auxA, s32 userA, u8 midiA, u32 seqIDA, void *auxB, s32 userB, u8 midiB, u32 seqIDB);
extern Rec_803A8D2C *lbl_805D73B0;
extern void *lbl_80557BBC[8];
extern void *lbl_80557BFC[8];
extern u8 lbl_805D738C[8];
extern u8 lbl_805D739C[8];
s32 TLobby__sub_803B3748(u32 id);
u32 is_sound_hw_voice_active(s32 i);
void TLobby__sub_803BD598(s32 arg0);
void TLobby__sub_803BD60C(u8 i);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803AA66C(u8 studio);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern u16 lbl_805D73D4;
s32 TLobby__sub_803ACD40(u16 arg0);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern u16 lbl_805D73D6;
s32 TLobby__sub_803ACEC4(u16 key, void *p, u16 f6);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern u16 lbl_805D73D6;
s32 TLobby__sub_803AD10C(u16 key);
void sound_enable_irq(void);
void sound_disable_irq(void);
extern u16 lbl_805D73D2;
s32 TLobby__sub_803AD4D0(u16 arg0);
}

extern "C" {

struct Voice_803A4DDC { u8 pad[0x32]; s16 vol; u8 pad34[4]; };
struct Slot_803A4DDC {
    u8 pad0[0x22D8];
    s16 f0;
    u8 flags;
    u8 pad3[0x28E8 - 0x22DB];
    Voice_803A4DDC voices[16];
};
extern u8 lbl_80549748[];
struct Owner_803A61F8 {
    u8 pad0[0x14E4];
    u8 *map;
    List_803A5A04 chans[1];
};
Node_803A5A04 *TLobby__sub_803A57EC(u8);

#pragma pack(push, 4)
struct Rec_803AA35C {
    u8 pad0[0x114];
    u64 flags;
    u8 pad11C[0x404 - 0x11C];
};
#pragma pack(pop)
struct Cfg_803AA35C { u8 pad[0x210]; u8 count; };
extern Cfg_803AA35C lbl_80557348;
void TLobby__sub_803BD9F8(void);
void TLobby__sub_803AB5A8(void);
typedef void (*Cb_803AB0E4)(s32, s32, s32, s32, s32);
struct Rec_803AB0E4 { u8 pad[8]; u8 state; u8 pad9[3]; Cb_803AB0E4 cb; u8 pad10[0x38]; s32 f48; s32 f4c; u8 pad50[0x14]; };

void TLobby__sub_803B3628(s32);
struct Ent_803ADB58 { u16 id; u16 ref; s32 f4; s32 f8; s32 fc; u8 pad10[0x10]; };
struct Tbl_803ADB58 { Ent_803ADB58 *list; s32 base; s32 f8; };

s32 TLobby__sub_803BD93C(void *, s32);
extern u16 lbl_805D73D0;
struct Grp_803AE76C { u16 f0; u16 n; void *base; };
struct Key_803AE76C { s16 key; };
struct Grps_803AE76C { Grp_803AE76C g[0x85]; };
struct Blk_803AE76C { u8 pad0[0xA200]; Grps_803AE76C grps; u8 pad428[4]; Key_803AE76C k; };
extern u16 lbl_805D73DA;
struct Slot_803AE814 { u16 count; u16 start; };

void TLobby__sub_803BD884(void *, void *);
extern Slot_803AE814 lbl_8055F870[];
extern u16 lbl_805D73D0;
extern u16 lbl_805D73D2;
extern u16 lbl_805D73D4;
extern u16 lbl_805D73D6;
extern u16 lbl_805D73D8;
extern u16 lbl_805D73DA;
#pragma pack(push, 4)
struct Rec_803B1AF4 {
    u8 pad0[0x34]; u32 f34; s32 f38; u8 pad3c[0x10]; s32 f4c; u8 pad50[4]; u32 f54; u8 pad58[8]; s32 f60;
    u8 pad64[4]; u8 f68; u8 pad69[0x114 - 0x69]; u64 flags;
};
#pragma pack(pop)
void TLobby__sub_803B1F24(void *);
#pragma pack(push, 4)
struct Ch_803B1BA4 {
    u8 pad0[0x34]; u32 f34; s32 f38; u8 pad3c[0x14]; u32 f50; u8 pad54[8]; s32 f5c;
    u8 pad60[8]; u8 f68; u8 pad69[0x114 - 0x69]; u64 flags;
};
#pragma pack(pop)
struct Node_803B24A0 { Node_803B24A0 *next; Node_803B24A0 *prev; u32 f8; u32 fc; };

extern Node_803B24A0 lbl_805644C8[];
extern s32 lbl_805D7438;
extern Node_803B24A0 *lbl_805D7440;
struct Slot_803B312C { u8 prev; u8 next; u16 refs; };
struct Obj_803B312C { u8 pad0[0x34]; s32 f34; u8 pad38[0xBC]; s32 id; u8 padF8[0x14]; u8 grp; u8 pad10d[0x10]; u8 f11d; };

void set_sound_program_wait_state(Obj_803B312C *, s32);
void TLobby__sub_803B2A80(Obj_803B312C *);
extern Slot_803B312C lbl_80565388[];
extern u8 lbl_805D7446;
extern u8 lbl_805D7447;
extern u8 lbl_805D7448;
extern u8 lbl_805D7449;
struct Ent_803B5DB0 {
    u8 pad[0x1C];
    u32 key;
};
struct Slot_803B8ABC { u32 a; u32 b; u32 src; };
struct Obj_803B8ABC { u8 pad[0x52]; u8 count; u8 pad53[5]; Slot_803B8ABC slots[7]; };
struct Node_803BA228 { Node_803BA228 *next; Node_803BA228 *prev; u8 pad8[8]; u32 f10; u8 pad14[0x30]; u16 id; };
struct Ent_803BA228 { u16 id; u8 pad[8]; };
}

extern "C" {

struct Voice_803B1C98 {
    u8 pad0[0x34]; u32 i34; u32 i38; u8 pad3C[0x14]; u32 i50; u8 pad54[8]; u32 i5C;
    u8 pad60[8]; u8 b68; u8 pad69[0xAB]; u32 fh; u32 fl;
};
#pragma pack(push, 4)
struct Ch_803A897C {
    u8 pad0[0x34]; u32 f34; u8 pad38[0xA8 - 0x38]; u8 fA8; u8 padA9[0x114 - 0xA9];
    u64 flags; u8 pad11C[3]; u8 f11F; u8 pad120[0x1DC - 0x120]; u8 env[0x214 - 0x1DC]; s32 f214;
};
#pragma pack(pop)
struct Obj_803AFCA0 { u8 pad0[0x114]; u32 fh; u32 fl; u8 pad11C[5]; u8 b121; u8 b122; u8 pad123[0xF1]; u32 i214; };
struct Op_803AFCA0 { u32 w0; u32 w4; };
struct Obj_803AFDD4 { u8 pad0[0x114]; u32 fh; u32 fl; u8 pad11C[5]; u8 b121; u8 b122; u8 pad123[0xE]; u8 b131; u8 pad132[2]; u32 i134; };
struct Op_803AFDD4 { u32 w0; u32 w4; };
struct Desc_803B5398 { u8 pad0[4]; u16 id; u16 kind; u8 pad8[0x14]; s32 o1C; s32 o20; s32 o24; };
struct Ent_803B5398 { Desc_803B5398 *desc; s32 b; u8 *base; };
typedef void (*Cb_803B8B40)(s32, s32 *, s32, s32);
struct Voice_803B8B40 {
    u8 pad0[0x30]; s32 bufA[3]; s32 bufB[3]; u8 pad48[8];
    u8 b50; u8 pad51[3]; s32 i54; u8 pad58[0x54];
    Cb_803B8B40 cbA; Cb_803B8B40 cbB; s32 argA; s32 argB;
};
struct Row_803AE4D4 { u16 id; u16 ref; u32 src; u32 addr; u32 key; u32 fmt; u32 loopStart; u32 loopLen; u32 coef; };
struct Part_803AE4D4 { u32 key; u32 fmt; u32 loopStart; u32 loopLen; };
struct Reg_803AE4D4 { u32 rows; u32 unused; u16 count; u16 pad; };
struct Sample_803AE4D4 { u32 key; u32 addr; u32 coef; u32 offset; u32 count; u32 loopStart; u32 loopLen; u8 format; };
struct V_803B1F24 {
    u8 pad0[0x3C]; V_803B1F24 *vnext; V_803B1F24 *vprev; V_803B1F24 *next; V_803B1F24 *prev; s32 i4C;
    u8 pad50[0x48]; u64 deadline; u64 started; u8 padA8[0x6C]; u32 fh; u32 fl;
};
#pragma pack(push, 4)
struct Ch_803B202C {
    u8 pad0[0x3C]; V_803B1F24 *wnext; V_803B1F24 *wprev;
    Program_803B1DA4 *next; Program_803B1DA4 *prev; s32 state; u8 pad50[0x48];
    s64 f98; s64 fa0; u8 padA8[0x114 - 0xA8]; u64 flags;
};
#pragma pack(pop)
#pragma pack(push, 4)
struct Ch_803B1E48 {
    u8 pad0[0x44]; Program_803B1DA4 *next; Program_803B1DA4 *prev; u8 pad4c[0x4C];
    s64 f98; s64 fa0; u8 padA8[0x114 - 0xA8]; u64 flags;
};
#pragma pack(pop)
void TLobby__sub_803B1C98(Voice_803B1C98 *, u32);
u16 TLobby__sub_803BC168(Ch_803A897C *);
void TLobby__sub_803BD138(s32, u8);
void key_off_sound_hw_voice(s32);
void TLobby__sub_803BADD0(u8, u8, u32);
void TLobby__sub_803BB8F0(s32, u8, s32, u8, bool);
void TLobby__sub_803BADF8(s32, u8, u8, s32);
u16 TLobby__sub_803BB5E4(s32, u8, u8);
extern Ent_803B5398 lbl_80565DD8[];
extern u8 lbl_805D74C4;
extern u8 lbl_805D74C6;
extern Row_803AE4D4 *lbl_805D73F0;
extern Part_803AE4D4 *lbl_805D73F4;
extern V_803B1F24 *lbl_805D741C;
extern u64 lbl_805D7428;
void TLobby__sub_803AA864(void);
void TLobby__sub_803AB0E0(void);
s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1);
s32 compare_sound_sample_id(u16 *arg0, u16 *arg1);
s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1);
s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1);
s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1);
s32 TLobby__sub_803B2920(u8 *arg0);
void TLobby__sub_803B4CEC(void);

extern "C" {
extern Cfg_803AA35C lbl_80557348;
}

extern "C" {
extern Cfg_803AA35C lbl_80557348;
}

extern "C" {
extern Cfg_803AA35C lbl_80557348;
extern V_803B1F24 *lbl_805D741C;
}

extern "C" {
extern Cfg_803AA35C lbl_80557348;
}

void TLobby__sub_803A3858(Owner_803A3C24 *o) {
    u32 i;
    Node_803A3C24 *p;
    Node_803A3C24 *q;

    for (i = 0; i < 2; i++) {
        if ((p = o->lists[i]) != NULL) {
            while ((q = p->next) != NULL) {
                p = q;
            }
            if (lbl_805D7364 != NULL) {
                p->next = lbl_805D7364;
                lbl_805D7364->prev = p;
            }
            lbl_805D7364 = o->lists[i];
            o->lists[i] = NULL;
        }
    }
    if ((p = o->head) != NULL) {
        while ((q = p->next) != NULL) {
            p = q;
        }
        if (lbl_805D7364 != NULL) {
            p->next = lbl_805D7364;
            lbl_805D7364->prev = p;
        }
        lbl_805D7364 = o->head;
        o->head = NULL;
    }
}

Node_803A3C24 *TLobby__sub_803A3934(s32 key, u8 ch) {
    Node_803A3C24 *n = lbl_805D7364;
    Node_803A3C24 *cur;
    Node_803A3C24 *prev;

    if (n != NULL) {
        if ((lbl_805D7364 = n->next) != NULL) {
            lbl_805D7364->prev = NULL;
        }
        n->key = key;
        n->ch = ch;
        n->grp = lbl_805D7360->chans[ch].grp;
        prev = NULL;
        for (cur = lbl_805D7360->lists[n->grp]; cur != NULL; prev = cur, cur = cur->next) {
            if (cur->key > n->key) {
                n->next = cur;
                n->prev = prev;
                if (prev != NULL) {
                    prev->next = n;
                } else {
                    lbl_805D7360->lists[n->grp] = n;
                }
                cur->prev = n;
                return n;
            }
        }
        n->prev = prev;
        if (prev != NULL) {
            prev->next = n;
        } else {
            lbl_805D7360->lists[n->grp] = n;
        }
        n->next = NULL;
    }
    return n;
}

s32 TLobby__sub_803A3A28(void) {
    Node_803A3C24 *n;
    u32 i;
    s32 r;
    for (i = 0; i < 2; i++) {
        n = lbl_805D7360->lists[i];
        if (n == NULL) {
            continue;
        }
        while (n->key <= ((Tbl_803A3A28 *)lbl_805D7360)->ch[n->ch].lim[i].v) {
            key_off_sound_fx(n->f8);
            if ((lbl_805D7360->lists[i] = n->next) != NULL) {
                lbl_805D7360->lists[i]->prev = NULL;
            }
            if ((n->next = lbl_805D7360->head) != NULL) {
                lbl_805D7360->head->prev = n;
            }
            lbl_805D7360->head = n;
            n = lbl_805D7360->lists[i];
            if (n == NULL) {
                break;
            }
        }
    }
    r = 1;
    if (lbl_805D7360->lists[0] == NULL && lbl_805D7360->lists[1] == NULL) {
        r = 0;
    }
    return r;
}

void TLobby__sub_803A3B54(void) {
    Node_803A3C24 *n;
    Node_803A3C24 *next;
    u32 i;

    for (i = 0; i < 2; i++) {
        for (n = lbl_805D7360->lists[i]; n != NULL; n = next) {
            next = n->next;
            key_off_sound_fx(n->f8);
            if ((lbl_805D7360->lists[i] = n->next) != NULL) {
                lbl_805D7360->lists[i]->prev = NULL;
            }
            if ((n->next = lbl_805D7360->head) != NULL) {
                lbl_805D7360->head->prev = n;
            }
            lbl_805D7360->head = n;
        }
    }
}

void TLobby__sub_803A3C24(Node_803A3C24 *arg0) {
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        lbl_805D7360->head = arg0->next;
    }
    if ((arg0->next = lbl_805D7364) != 0) {
        lbl_805D7364->prev = arg0;
    }
    arg0->prev = 0;
    lbl_805D7364 = arg0;
}

typedef struct SeqInst_803A3C84 {
    struct SeqInst_803A3C84 *next;
    struct SeqInst_803A3C84 *prev;
    u8 pad8[4];
    u32 publicId;
    u8 pad10[0x1868 - 0x10];
} SeqInst_803A3C84;
extern u32 lbl_805D7370;
#pragma push
#pragma opt_common_subs on
u32 TLobby__sub_803A3C84(u32 seqId) {
    u32 pub_id;
    SeqInst_803A3C84 *si;

    do {
        pub_id = lbl_805D7370++;
        lbl_805D7370 &= ~0x80000000;

        for (si = (SeqInst_803A3C84 *)lbl_805D737C; si != NULL; si = si->next) {
            if (si->publicId == pub_id) {
                pub_id = 0xFFFFFFFF;
                break;
            }
        }
        for (si = (SeqInst_803A3C84 *)lbl_805D7378; si != NULL; si = si->next) {
            if (si->publicId == pub_id) {
                pub_id = 0xFFFFFFFF;
                break;
            }
        }
    } while (pub_id == 0xFFFFFFFF);

    lbl_8054AB48[seqId].n.id = pub_id;
    return pub_id;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
u32 TLobby__sub_803A3D20(u32 seqId) {
    SeqInst_803A3D20 *si;
    for (si = (*(SeqInst_803A3D20 * *)&lbl_805D737C); si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    for (si = (*(SeqInst_803A3D20 * *)&lbl_805D7378); si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    return 0xFFFFFFFF;
}
#pragma pop

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
typedef struct SND_SEQVOLDEF_SEQ { u8 track; u8 volGroup; } SND_SEQVOLDEF_SEQ;
typedef struct SND_PLAYPARA_SEQ {
    u32 flags; u32 trackMute[2]; u16 speed;
    struct { u16 time; u8 target; } volume;
    u8 numSeqVolDef; SND_SEQVOLDEF_SEQ *seqVolDef; u8 numFaded; u8 *faded;
} SND_PLAYPARA_SEQ;
typedef struct MIDI_CHANNEL_SETUP_803A3D8C { u8 program; u8 volume; u8 panning; u8 reverb; u8 chorus; } MIDI_CHANNEL_SETUP_803A3D8C;
typedef struct MIDISETUP_803A3D8C { u16 songId; u16 reserved; MIDI_CHANNEL_SETUP_803A3D8C channel[16]; } MIDISETUP_803A3D8C;
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
extern SEQ_INSTANCE_803A49C8 *lbl_805D7374;
extern u8 lbl_80557B5C[64];
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on

static inline void DoPrgChange_803A3D8C(SEQ_INSTANCE_803A49C8 *seq, u8 prg, u8 midi) {
    extern u16 lbl_80556E88[8][16];
    lbl_80556E88[lbl_805D7368][midi] = 0xFFFF;
    if (midi != 9) {
        prg = seq->normTrans[prg];
        if (prg == 0xFF) {
            return;
        }
        seq->prgState[midi].macId = seq->normtab[prg].macro;
        seq->prgState[midi].priority = seq->normtab[prg].prio;
        seq->prgState[midi].maxVoices = seq->normtab[prg].maxVoices;
        return;
    }

    prg = seq->drumTrans[prg];
    if (prg == 0xFF) {
        return;
    }
    seq->prgState[midi].macId = seq->drumtab[prg].macro;
    seq->prgState[midi].priority = seq->drumtab[prg].prio;
    seq->prgState[midi].maxVoices = seq->drumtab[prg].maxVoices;
}

static inline void BuildTransTab_803A3D8C(u8 *tab, PAGE_803A49C8 *page) {
    u8 i;

    for (i = 0; i < 128; ++i) {
        tab[i] = 0xff;
    }

    for (i = 0; page->index != 0xFF; ++i, page++) {
        tab[page->index] = i;
    }
}

u32 TLobby__sub_803A3D8C(PAGE_803A49C8 *norm, PAGE_803A49C8 *drum, MIDISETUP_803A3D8C *midiSetup, u32 *song,
                         SND_PLAYPARA_SEQ *para, u8 studio, u16 sgid) {
    extern u16 lbl_80556E88[8][16];
    void TLobby__sub_803A94E0(u8 volume, u16 time, u8 vGroup, u8 seqMode, u32 seqId);
    void TLobby__sub_803A9944(u8 i, u8 v);
    void TLobby__sub_803BB4F0(u8, u8, u8);
    void TLobby__sub_803BB8AC(u8, u8);
    void TLobby__sub_803BADF8(u8 ctrl, u8 channel, u8 set, u8 value);
    void TLobby__sub_803A61F8(void);
    ARR_803A49C8 *arr;
    u32 *tracktab;
    s32 i;
    SEQ_INSTANCE_803A49C8 *nseq;
    SEQ_INSTANCE_803A49C8 *oldCSeq;
    u32 seqId;
    u32 bpm;

    if ((nseq = lbl_805D7374) == NULL) {
        return 0xFFFFFFFF;
    }
    if ((lbl_805D7374 = nseq->next) != NULL) {
        lbl_805D7374->prev = NULL;
    }
    if ((nseq->next = SEQ_RUN_L) != NULL) {
        SEQ_RUN_L->prev = nseq;
    }

    nseq->prev = NULL;
    SEQ_RUN_L = nseq;
    nseq->state = 1;
    for (i = 0; i < 16; ++i) {
        nseq->section[i].globalEventRoot = NULL;
    }

    seqId = nseq->index;
    nseq->syncActive = 0;
    nseq->normtab = norm;
    nseq->drumtab = drum;
    nseq->arrbase = (ARR_803A49C8 *)song;
    nseq->groupID = sgid;
    BuildTransTab_803A3D8C(nseq->normTrans, nseq->normtab);
    BuildTransTab_803A3D8C(nseq->drumTrans, nseq->drumtab);
    nseq->defVGroup = seqId + 23;
    for (i = 0; i < 64; ++i) {
        nseq->trackVolGroup[i] = nseq->defVGroup;
    }

    nseq->defStudio = studio;
    if (para == NULL) {
        nseq->trackMute[0] = -1;
        nseq->trackMute[1] = -1;
        for (i = 0; i < 16; ++i) {
            nseq->section[i].speed = 256;
        }

        TLobby__sub_803A94E0(0x7F, 0, nseq->defVGroup, 0, 0xFFFFFFFF);
    } else {
        if (para->flags & 1) {
            nseq->trackMute[0] = para->trackMute[0];
            nseq->trackMute[1] = para->trackMute[1];
        } else {
            nseq->trackMute[0] = -1;
            nseq->trackMute[1] = -1;
        }

        if (para->flags & 2) {
            for (i = 0; i < 16; ++i) {
                nseq->section[i].speed = para->speed;
            }
        } else {
            for (i = 0; i < 16; ++i) {
                nseq->section[i].speed = 256;
            }
        }

        if (para->flags & 8) {
            for (i = 0; i < para->numSeqVolDef; ++i) {
                nseq->trackVolGroup[para->seqVolDef[i].track] = para->seqVolDef[i].volGroup;
                TLobby__sub_803A9944(para->seqVolDef[i].volGroup, 0);
            }
        }

        if (para->flags & 4) {
            TLobby__sub_803A94E0(para->volume.target, para->volume.time, nseq->defVGroup, 0, 0xFFFFFFFF);

            for (i = 0; i < para->numFaded; ++i) {
                TLobby__sub_803A94E0(para->volume.target, para->volume.time, para->faded[i], 0, 0xFFFFFFFF);
            }
        }
    }

    arr = (ARR_803A49C8 *)song;
    if (arr->info & 0x80000000) {
        nseq->trackSectionTab = (u8 *)ARR_GET_803A3D8C(arr, arr->tsTab);
    } else {
        nseq->trackSectionTab = NULL;
    }

    bpm = arr->info & 0x0fffffff;

    if (!(arr->info & 0x40000000)) {
        bpm <<= 10;
    }

    for (i = 0; i < 16; ++i) {
        nseq->section[i].bpm = bpm;
        TLobby__sub_803A6ED0(bpm >> 10, seqId, i);

        if (arr->mTrack != 0) {
            nseq->section[i].mTrack.base = (MTRACK_DATA_803A49C8 *)ARR_GET_803A3D8C(arr, arr->mTrack);
            nseq->section[i].mTrack.addr = nseq->section[i].mTrack.base;
        } else {
            nseq->section[i].mTrack.base = NULL;
        }

        nseq->section[i].loopDisable = 0;
        nseq->section[i].loopCnt = 0;
    }

    tracktab = (u32 *)ARR_GET_803A3D8C(arr, arr->tTab);
    for (i = 0; i < 64; ++i) {
        lbl_80557B5C[i] = 0x7F;
        nseq->pattern[i].addr = NULL;
        if (tracktab[i] != 0) {
            nseq->track[i].addr = nseq->track[i].base = (TENTRY_803A49C8 *)ARR_GET_803A3D8C(arr, tracktab[i]);
        } else {
            nseq->track[i].addr = nseq->track[i].base = NULL;
        }
    }

    nseq->noteUsed[0] = NULL;
    nseq->noteUsed[1] = NULL;
    nseq->noteKeyOff = NULL;

    for (i = 0; i < 16; ++i) {
        TLobby__sub_803BB4F0(i, seqId, 1);
    }
    for (i = 0; i < 16; ++i) {
        nseq->prgState[i].macId = 0xffff;
    }
    for (i = 0; i < 16; ++i) {
        TLobby__sub_803BB8AC(i, seqId);
    }
    if (midiSetup != NULL) {
        for (i = 0; i < 16; ++i) {
            DoPrgChange_803A3D8C(nseq, midiSetup->channel[i].program, i);
            TLobby__sub_803BADF8(7, i, seqId, midiSetup->channel[i].volume);
            TLobby__sub_803BADF8(10, i, seqId, midiSetup->channel[i].panning);
            TLobby__sub_803BADF8(0x5B, i, seqId, midiSetup->channel[i].reverb);
            TLobby__sub_803BADF8(0x5D, i, seqId, midiSetup->channel[i].chorus);
        }
    }
    for (i = 0; i < 16; ++i) {
        lbl_80556E88[seqId][i] = 0xffff;
    }
    for (i = 0; i < 16; ++i) {
        nseq->section[i].time[0].high = 0;
        nseq->section[i].time[0].low = 0;
        nseq->section[i].time[1].high = 0;
        nseq->section[i].time[1].low = 0;
        nseq->section[i].timeIndex = 0;
    }
    nseq->keyOffCheck = 0;

    if (para != NULL && (para->flags & 0x10) != 0) {
        TLobby__sub_803A4964((Node_803A4964 *)nseq);
    }

    oldCSeq = SEQ_CUR;
    SEQ_CUR = nseq;
    TLobby__sub_803A61F8();
    SEQ_CUR = oldCSeq;
    seqId = TLobby__sub_803A3C84(seqId);
    return seqId;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
void TLobby__sub_803A487C(u8 secIndex) {
    SEQ_SECTION_803A487C *section;
    section = &(*(SEQ_INSTANCE_803A487C * *)&lbl_805D7360)->section[secIndex];
    if (section->mTrack.base != NULL) {
        while (section->mTrack.addr->time != -1) {
            if (section->mTrack.addr->time > section->time[section->timeIndex].high) {
                break;
            }
            if (((*(SEQ_INSTANCE_803A487C * *)&lbl_805D7360)->arrbase->info & 0x40000000) != 0) {
                TLobby__sub_803A6ED0((section->bpm = section->mTrack.addr->bpm) >> 10, lbl_805D7368, secIndex);
            } else {
                TLobby__sub_803A6ED0(section->mTrack.addr->bpm, lbl_805D7368, secIndex);
                section->bpm = section->mTrack.addr->bpm << 10;
            }
            ++section->mTrack.addr;
        }
    }
}
#pragma pop

void TLobby__sub_803A4964(Node_803A4964 *arg0) {
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        lbl_805D737C = arg0->next;
    }
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if ((arg0->next = lbl_805D7378) != 0) {
        lbl_805D7378->prev = arg0;
    }
    arg0->prev = 0;
    lbl_805D7378 = arg0;
    arg0->state = 2;
}

struct Owner_803A3C24;
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 seqGetPrivateId_803A49C8(u32 seqId) {
    SEQ_INSTANCE_803A49C8 *si;
    for (si = (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D737C); si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    for (si = (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D7378); si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    return 0xFFFFFFFF;
}
static inline void StartPause_803A49C8(SEQ_INSTANCE_803A49C8 *si) {
    if (si->prev != NULL) {
        si->prev->next = si->next;
    } else {
        (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D737C) = si->next;
    }
    if (si->next != NULL) {
        si->next->prev = si->prev;
    }
    if ((si->next = (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D7378)) != NULL) {
        (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D7378)->prev = si;
    }
    si->prev = NULL;
    (*(SEQ_INSTANCE_803A49C8 * *)&lbl_805D7378) = si;
    si->state = 2;
}
static inline void KillNotes_803A49C8(SEQ_INSTANCE_803A49C8 *seq) {
    NOTE_803A49C8 *n;
    u32 i;
    for (i = 0; i < 2; ++i) {
        for (n = seq->noteUsed[i]; n != NULL; n = n->next) {
            TLobby__sub_803B3748(n->id);
        }
    }
    for (n = seq->noteKeyOff; n != NULL; n = n->next) {
        TLobby__sub_803B3748(n->id);
    }
}
void TLobby__sub_803A49C8(s32 seqId) {
    SEQ_INSTANCE_803A49C8 *si;
    seqId = seqGetPrivateId_803A49C8(seqId);
    if (seqId == 0xFFFFFFFF) {
        return;
    }
    if ((seqId & 0x80000000) == 0) {
        si = &((SEQ_INSTANCE_803A49C8 *)&lbl_8054AB48)[seqId];
        if (si->state == 1) {
            StartPause_803A49C8(si);
            KillNotes_803A49C8(si);
            TLobby__sub_803A3858((Owner_803A3C24 *)si);
        }
    } else {
        si = &((SEQ_INSTANCE_803A49C8 *)&lbl_8054AB48)[seqId & ~0x80000000];
        if (si->state != 0) {
            si->syncCrossInfo.flags |= 8;
        }
    }
}
#pragma pop

void TLobby__sub_803A4D4C(u16 sgid) {
    SeqInst_803A4D4C *si;
    for (si = (*(SeqInst_803A4D4C * *)&lbl_805D737C); si != NULL; si = si->next) {
        if (si->groupID == sgid) {
            TLobby__sub_803A4B7C(si->publicId);
        }
    }
    for (si = (*(SeqInst_803A4D4C * *)&lbl_805D7378); si != NULL; si = si->next) {
        if (si->groupID == sgid) {
            TLobby__sub_803A4B7C(si->publicId);
        }
    }
}

void TLobby__sub_803A4DDC(u32 id, s16 v) {
    u8 *base = lbl_80549748;
    Node_803A4964 *n;
    u32 key = id & 0x7FFFFFFF;
    s32 h;

    for (n = lbl_805D737C; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (id & 0x80000000);
            goto found;
        }
    }
    for (n = lbl_805D7378; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (id & 0x80000000);
            goto found;
        }
    }
    h = -1;
found:
    if (!(h & 0x80000000)) {
        {
            Slot_803A4DDC *sl = (Slot_803A4DDC *)(base + h * 0x1868);
            sl->voices[0].vol = v;
            sl->voices[1].vol = v;
            sl->voices[2].vol = v;
            sl->voices[3].vol = v;
            sl->voices[4].vol = v;
            sl->voices[5].vol = v;
            sl->voices[6].vol = v;
            sl->voices[7].vol = v;
            sl->voices[8].vol = v;
            sl->voices[9].vol = v;
            sl->voices[10].vol = v;
            sl->voices[11].vol = v;
            sl->voices[12].vol = v;
            sl->voices[13].vol = v;
            sl->voices[14].vol = v;
            sl->voices[15].vol = v;
        }
    } else {
        Slot_803A4DDC *s = (Slot_803A4DDC *)(base + (h & 0x7FFFFFFF) * 0x1868);
        s->flags |= 0x20;
        s->f0 = v;
    }
}

void TLobby__sub_803A4EB8(s32 arg0) {
    Node_803A4964 *n;
    u32 key = arg0 & 0x7FFFFFFF;
    s32 h;
    for (n = lbl_805D737C; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (arg0 & 0x80000000);
            goto found;
        }
    }
    for (n = lbl_805D7378; n != NULL; n = n->next) {
        if (n->id == key) {
            h = (n->idx & 0x7FFFFFFF) | (arg0 & 0x80000000);
            goto found;
        }
    }
    h = -1;
found:
    if (!(h & 0x80000000)) {
        Node_803A4964 *s = &lbl_8054AB48[h].n;
        if ((u8)s->state == 2) {
            if (s->prev != 0) {
                s->prev->next = s->next;
            } else {
                lbl_805D7378 = s->next;
            }
            if (s->next != 0) {
                s->next->prev = s->prev;
            }
            if ((s->next = lbl_805D737C) != 0) {
                lbl_805D737C->prev = s;
            }
            s->prev = 0;
            lbl_805D737C = s;
            s->state = 1;
        }
    } else {
        lbl_8054AB48[h & 0x7FFFFFFF].fEDA &= ~8;
    }
}

typedef struct SeqBss_803A4FC4 {
    NOTE_803A49C8 seqNote[256];
    SEQ_INSTANCE_803A49C8 seqInstance[8];
} SeqBss_803A4FC4;
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 seqGetPrivateId_803A4FC4(u32 seqId) {
    SEQ_INSTANCE_803A49C8 *si;
    for (si = SEQ_RUN_LIST; si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    for (si = SEQ_FREE_LIST; si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    return 0xFFFFFFFF;
}

void TLobby__sub_803A4FC4(s32 seqId, s32 mask1, s32 mask2) {
    SeqBss_803A4FC4 *bss = (SeqBss_803A4FC4 *)lbl_80549748;
    seqId = seqGetPrivateId_803A4FC4(seqId);
    if (seqId == 0xFFFFFFFF) {
        return;
    }

    if ((seqId & 0x80000000) == 0) {
        bss->seqInstance[seqId].trackMute[0] = mask1;
        bss->seqInstance[seqId].trackMute[1] = mask2;
    } else {
        seqId &= ~0x80000000;
        bss->seqInstance[seqId].syncCrossInfo.flags |= 0x10;
        bss->seqInstance[seqId].syncCrossInfo.trackMute2[0] = mask1;
        bss->seqInstance[seqId].syncCrossInfo.trackMute2[1] = mask2;
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline u32 seqGetPrivateId_X5214(u32 seqId) {
    SEQ_INSTANCE_803A49C8 *si;
    for (si = SEQ_RUN_LIST; si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    for (si = SEQ_FREE_LIST; si != NULL; si = si->next) {
        if (si->publicId == (seqId & ~0x80000000)) {
            return si->index | (seqId & 0x80000000);
        }
    }
    return 0xFFFFFFFF;
}
static inline void seqSpeed_X5214(SeqBss_803A4FC4 *bss, u32 seqId, u16 speed) {
    u32 i;

    seqId = TLobby__sub_803A3D20(seqId);
    if ((seqId & 0x80000000) == 0) {
        for (i = 0; i < 16; ++i) {
            bss->seqInstance[seqId].section[i].speed = speed;
        }
    } else {
        seqId &= ~0x80000000;
        bss->seqInstance[seqId].syncCrossInfo.flags |= 0x20;
        bss->seqInstance[seqId].syncCrossInfo.speed2 = speed;
    }
}

static inline void seqMute_X5214(SeqBss_803A4FC4 *bss, u32 seqId, u32 mask1, u32 mask2) {
    seqId = TLobby__sub_803A3D20(seqId);
    if (seqId == 0xFFFFFFFF) {
        return;
    }

    if ((seqId & 0x80000000) == 0) {
        bss->seqInstance[seqId].trackMute[0] = mask1;
        bss->seqInstance[seqId].trackMute[1] = mask2;
    } else {
        seqId &= ~0x80000000;
        bss->seqInstance[seqId].syncCrossInfo.flags |= 0x10;
        bss->seqInstance[seqId].syncCrossInfo.trackMute2[0] = mask1;
        bss->seqInstance[seqId].syncCrossInfo.trackMute2[1] = mask2;
    }
}

void TLobby__sub_803A5214(SND_CROSSFADE_803A49C8 *ci, u32 *new_seqId, u8 irq_call) {
    void TLobby__sub_803A5078(u8 volume, u16 time, u32 seqId, u8 mode);
    void TLobby__sub_803AA058(u8 volume, u16 time, u32 seqId, u8 mode);
    void TLobby__sub_803A4EB8(s32 arg0);
    u32 TLobby__sub_803A3D20(u32 seqId);
    void TLobby__sub_803A9FC8(s32 arg0);
    void TLobby__sub_803AA000(s32 arg0, s32 arg1, s32 arg2);
    void TLobby__sub_803A9F80(u32 seqId, u16 speed);
    u32 TLobby__sub_803B5398(u16 sgid, u16 sid, void *arrfile, SND_PLAYPARA_SEQ *para, u8 irq_call, u8 studio);
    u32 TLobby__sub_803B54D8(u16 sgid, u16 sid, void *arrfile, SND_PLAYPARA_SEQ *para, u8 studio);
    SND_PLAYPARA_SEQ pp;
    u32 seqId;
    u16 time;
    SeqBss_803A4FC4 *bss = (SeqBss_803A4FC4 *)lbl_80549748;

    seqId = seqGetPrivateId_X5214(ci->seqId1);

    if ((ci->flags & 4) != 0) {
        bss->seqInstance[seqId].syncCrossInfo = *ci;
        bss->seqInstance[seqId].syncActive = 1;
        bss->seqInstance[seqId].syncSeqIdPtr = new_seqId;
        bss->seqInstance[seqId].syncCrossInfo.flags &= ~4;
        *new_seqId = ci->seqId1 | 0x80000000;
        return;
    }

    if (irq_call) {
        time = ci->time1 < 5 ? 5 : ci->time1;
        if ((ci->flags & 1) != 0) {
            TLobby__sub_803A5078(0, time, ci->seqId1, 2);
        } else if ((ci->flags & 0x40) != 0) {
            TLobby__sub_803A5078(0, time, ci->seqId1, 3);
        } else {
            TLobby__sub_803A5078(0, time, ci->seqId1, 1);
        }
    } else {
        if ((ci->flags & 1) != 0) {
            TLobby__sub_803AA058(0, ci->time1, ci->seqId1, 2);
        } else if ((ci->flags & 0x40) != 0) {
            TLobby__sub_803AA058(0, ci->time1, ci->seqId1, 3);
        } else {
            TLobby__sub_803AA058(0, ci->time1, ci->seqId1, 1);
        }
    }

    if (new_seqId == NULL) {
        return;
    }

    if ((ci->flags & 2) != 0) {
        if (seqGetPrivateId_X5214(ci->seqId2) != 0xFFFFFFFF) {
            if (irq_call) {
                TLobby__sub_803A4EB8(ci->seqId2);
                TLobby__sub_803A5078(ci->vol2, ci->time2, ci->seqId2, 0);
                if ((ci->flags & 0x10) != 0) {
                    seqMute_X5214(bss, ci->seqId2, ci->trackMute2[0], ci->trackMute2[1]);
                }
                if ((ci->flags & 0x20) != 0) {
                    seqSpeed_X5214(bss, ci->seqId2, ci->speed2);
                }
            } else {
                TLobby__sub_803A9FC8(ci->seqId2);
                TLobby__sub_803AA058(ci->vol2, ci->time2, ci->seqId2, 0);
                if ((ci->flags & 0x10) != 0) {
                    TLobby__sub_803AA000(ci->seqId2, ci->trackMute2[0], ci->trackMute2[1]);
                }
                if ((ci->flags & 0x20) != 0) {
                    TLobby__sub_803A9F80(ci->seqId2, ci->speed2);
                }
            }
            *new_seqId = ci->seqId2;
        } else {
            *new_seqId = 0xFFFFFFFF;
        }
    } else {
        pp.flags = 4;
        if ((ci->flags & 8) != 0) {
            pp.flags |= 0x10;
        }
        if ((ci->flags & 0x20) != 0) {
            pp.flags |= 2;
            pp.speed = ci->speed2;
        }
        if ((ci->flags & 0x10) != 0) {
            pp.flags |= 1;
            pp.trackMute[0] = ci->trackMute2[0];
            pp.trackMute[1] = ci->trackMute2[1];
        }
        pp.volume.time = ci->time2;
        pp.volume.target = ci->vol2;
        pp.numFaded = 0;
        if (irq_call != 0) {
            if ((*new_seqId = TLobby__sub_803B5398(ci->gid2, ci->sid2, ci->arr2, &pp, 1, ci->studio2)) !=
                    0xFFFFFFFF &&
                (ci->flags & 0x80) != 0) {
                seqMute_X5214(bss, *new_seqId, 0, 0);
            }
        } else {
            if ((*new_seqId = TLobby__sub_803B54D8(ci->gid2, ci->sid2, ci->arr2, &pp, ci->studio2)) !=
                    0xFFFFFFFF &&
                (ci->flags & 0x80) != 0) {
                TLobby__sub_803AA000(*new_seqId, 0, 0);
            }
        }
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs on
u8 *TLobby__sub_803A5748(u8 *stream, u16 *deltaTime, s16 *deltaData) {
    u8 b1;
    u8 b2;
    s16 v;

    b1 = stream[0];
    b2 = stream[1];
    if (b1 == 0x80 && b2 == 0) {
        return NULL;
    }

    if ((b1 & 0x80) != 0) {
        *deltaTime = ((b1 & 0x7f) << 8) | b2;
        stream += 2;
    } else {
        *deltaTime = b1;
        stream += 1;
    }

    b1 = stream[0];
    b2 = stream[1];
    if ((b1 & 0x80) != 0) {
        v = ((b1 & 0x7f) << 8) | b2;
        v <<= 1;
        v >>= 1;
        *deltaData = v;
        stream += 2;
    } else {
        v = b1;
        v <<= 9;
        v >>= 9;
        *deltaData = v;
        stream += 1;
    }

    return stream;
}
#pragma pop

#pragma push
#pragma opt_common_subs on
Node_803A5A04 *TLobby__sub_803A57EC(u8 trackId) {
    TRACK_803A49C8 *track;
    CPAT_803A49C8 *pattern;
    SEQ_EVENT_803A49C8 *ev;
    u32 patternTime;
    u32 pitchTime;
    u32 modTime;

    track = &SEQ_CUR->track[trackId];
    pattern = &SEQ_CUR->pattern[trackId];

    if (track->addr != NULL) {
        ev = &SEQ_CUR->event[trackId];
        ev->trackId = trackId;
        ev->info.pattern.base = pattern;

        if (pattern->addr == NULL) {
        null_pattern_addr:
            if (track->addr->pattern == 0xffff) {
                track->addr = NULL;
                return NULL;
            }

            if (track->addr->pattern == 0xfffe) {
                if (SEQ_CUR->trackSectionTab == NULL) {
                    if (SEQ_CUR->section[0].loopDisable) {
                        track->addr = NULL;
                        return NULL;
                    }
                } else if (SEQ_CUR->section[SEQ_CUR->trackSectionTab[trackId]].loopDisable) {
                    track->addr = NULL;
                    return NULL;
                }

                ev->type = 3;
                ev->time = track->addr->time;
                track->addr = &track->base[*((u16 *)&track->addr->transpose)];
                return (Node_803A5A04 *)ev;
            }

            ev->type = 4;
            ev->time = track->addr->time;
            ev->info.trackAddr = track->addr;
            ++track->addr;
            return (Node_803A5A04 *)ev;
        }

        pitchTime = pattern->pitchBend.nextTime;
        modTime = pattern->modulation.nextTime;

    loop:
        patternTime = pattern->addr->time + pattern->lTime;
        if (patternTime >= pitchTime) {
            goto use_pitch_time;
        }
        if (patternTime >= modTime) {
            goto use_mod_time;
        }
        if (pattern->addr->key == 0xff && pattern->addr->velocity == 0xff) {
            pattern->addr = NULL;
            goto null_pattern_addr;
        }

        ev->info.trackAddr = (TENTRY_803A49C8 *)pattern->addr;
        pattern->lTime = patternTime;

        if ((pattern->addr->key & 0x80) != 0) {
            pattern->addr = (NOTE_DATA_803A49C8 *)((u8 *)pattern->addr + 4);
            goto use_pattern_time;
        }
        if ((pattern->addr->key | pattern->addr->velocity) == 0) {
            pattern->addr = (NOTE_DATA_803A49C8 *)((u8 *)pattern->addr + 4);
            goto loop;
        }
        ++pattern->addr;

    use_pattern_time:
        ev->type = 0;
        ev->time = patternTime + pattern->baseTime;
        goto end;

    use_pitch_time:
        if (pitchTime < modTime) {
            ev->time = pitchTime + pattern->baseTime;
            ev->type = 2;
            goto end;
        }

    use_mod_time:
        ev->time = modTime + pattern->baseTime;
        ev->type = 1;

    end:
        return (Node_803A5A04 *)ev;
    }

    return NULL;
}
#pragma pop

void TLobby__sub_803A5A04(List_803A5A04 *arg0, Node_803A5A04 *arg1) {
    Node_803A5A04 *p = arg0->head;
    Node_803A5A04 *q = 0;
    while (p != 0) {
        if (p->key > arg1->key) {
            arg1->next = p;
            arg1->prev = q;
            if (q != 0) {
                q->next = arg1;
            } else {
                arg0->head = arg1;
            }
            p->prev = arg1;
            return;
        }
        q = p;
        p = p->next;
    }
    arg1->prev = q;
    if (q != 0) {
        q->next = arg1;
    } else {
        arg0->head = arg1;
    }
    arg1->next = 0;
}

typedef struct SeqBss_803A5A78 {
    NOTE_803A6364 seqNote[256];
    SEQ_INSTANCE_803A6364 seqInstance[8];
    u16 seqMIDIPriority[8][16];
} SeqBss_803A5A78;

#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
typedef struct SEQ_PATTERN_803A5A78 { u32 headerLen; u32 pitchBend; u32 modulation; u32 noteData; } SEQ_PATTERN_803A5A78;
extern u8 lbl_805D736C;
#define CSEQ_5A78 (*(SEQ_INSTANCE_803A6364 **)&lbl_805D7360)
#define NOTEFREE_5A78 (*(NOTE_803A6364 **)&lbl_805D7364)
void TLobby__sub_803BB3C8(u8 ctrl, u8 channel, u8 set, u16 value);
void TLobby__sub_803BB4F0(u8, u8, u8);
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on

static inline void InitStream_803A5A78(SEQ_STREAM_803A6364 *stream, u32 streamDataOffset) {
    u16 delta;
    if (streamDataOffset != 0) {
        if ((stream->nextAddr = TLobby__sub_803A5748((u8 *)ARR_GET_803A5A78(CSEQ_5A78->arrbase, streamDataOffset), &delta,
                                                     &stream->nextDelta)) != NULL) {
            stream->nextTime = delta;
        } else {
            stream->nextTime = 0x7fffffff;
        }
    } else {
        stream->nextTime = 0x7fffffff;
    }
}

static inline u16 HandleStream_803A5A78(SEQ_STREAM_803A6364 *stream) {
    u16 delta;
    stream->value += stream->nextDelta;
    if (stream->nextAddr != NULL) {
        if ((stream->nextAddr = TLobby__sub_803A5748(stream->nextAddr, &delta, &stream->nextDelta)) != NULL) {
            stream->nextTime += delta;
        } else {
            stream->nextTime = 0x7fffffff;
        }
    } else {
        stream->nextTime = 0x7fffffff;
    }
    return stream->value;
}

static inline void DoPrgChange_803A5A78(SeqBss_803A5A78 *bss, SEQ_INSTANCE_803A6364 *seq, u8 prg, u8 midi) {
    bss->seqMIDIPriority[lbl_805D7368][midi] = 0xFFFF;
    if (midi != 9) {
        prg = seq->normTrans[prg];
        if (prg == 0xFF) {
            return;
        }
        seq->prgState[midi].macId = seq->normtab[prg].macro;
        seq->prgState[midi].priority = seq->normtab[prg].prio;
        seq->prgState[midi].maxVoices = seq->normtab[prg].maxVoices;
        return;
    }

    prg = seq->drumTrans[prg];
    if (prg == 0xFF) {
        return;
    }
    seq->prgState[midi].macId = seq->drumtab[prg].macro;
    seq->prgState[midi].priority = seq->drumtab[prg].prio;
    seq->prgState[midi].maxVoices = seq->drumtab[prg].maxVoices;
}

static inline void FreeNote_803A5A78(NOTE_803A6364 *n) {
    if (n->next != NULL) {
        n->next->prev = n->prev;
    }
    if (n->prev != NULL) {
        n->prev->next = n->next;
    } else {
        CSEQ_5A78->noteUsed[n->timeIndex] = n->next;
    }
    if ((n->next = NOTEFREE_5A78) != NULL) {
        NOTEFREE_5A78->prev = n;
    }
    n->prev = NULL;
    NOTEFREE_5A78 = n;
}

SEQ_EVENT_803A6364 *TLobby__sub_803A5A78(SEQ_EVENT_803A6364 *event, u8 secIndex, u32 *loopFlag) {
    u32 TLobby__sub_803A7880(u16 id, u8 prio, u8 max, u8 key, u8 vol, u8 panning, u8 midi, u8 midiSet,
                             u8 section, u16 step, u16 trackid, u8 vGroup, s16 prioOffset, u8 studio, u32 itd);
    SeqBss_803A5A78 *bss = (SeqBss_803A5A78 *)lbl_80549748;
    CPAT_803A6364 *pa;
    NOTE_DATA_803A6364 *pe;
    s32 velocity;
    s32 key;
    u8 midi;
    u16 macId;
    NOTE_803A6364 *note;
    TENTRY_803A6364 *tEntry;
    CPAT_803A6364 *pattern;
    u32 *pTab;
    SEQ_PATTERN_803A5A78 *pptr;

    switch (event->type) {
    case 4:
        tEntry = event->info.trackAddr;
        pattern = &CSEQ_5A78->pattern[event->trackId];
        pTab = (u32 *)ARR_GET_803A5A78(CSEQ_5A78->arrbase, CSEQ_5A78->arrbase->pTab);
        pptr = (SEQ_PATTERN_803A5A78 *)ARR_GET_803A5A78(CSEQ_5A78->arrbase, pTab[tEntry->pattern]);
        pattern->addr = (NOTE_DATA_803A6364 *)&pptr->noteData;
        pattern->lTime = 0;
        pattern->baseTime = tEntry->time;
        pattern->patternInfo = tEntry;
        InitStream_803A5A78(&pattern->pitchBend, pptr->pitchBend);
        pattern->pitchBend.value = 0x2000;
        InitStream_803A5A78(&pattern->modulation, pptr->modulation);
        pattern->modulation.value = 0;
        pattern->midi = ((u8 *)ARR_GET_803A5A78(CSEQ_5A78->arrbase, CSEQ_5A78->arrbase->tmTab))[event->trackId];
        if (tEntry->prgChange != 0xff) {
            DoPrgChange_803A5A78(bss, CSEQ_5A78, tEntry->prgChange, pattern->midi);
        }
        if (tEntry->velocity != 0xff) {
            TLobby__sub_803BADF8(7, pattern->midi, lbl_805D7368, tEntry->velocity);
        }
        break;

    case 0:
        pe = event->info.pattern.addr;
        pa = event->info.pattern.base;
        key = pe->key;
        velocity = pe->velocity;
        midi = pa->midi;

        if ((key & 0x80) != 0) {
            switch (velocity) {
            case 0:
                DoPrgChange_803A5A78(bss, CSEQ_5A78, key & 0x7f, midi);
                break;
            case 1:
                TLobby__sub_803BADF8(0x82, midi, lbl_805D7368, key & 0x7f);
                break;
            default:
                if ((velocity & 0x80) != 0x80) {
                    break;
                }
                switch (velocity & 0x7f) {
                case 0x68:
                    if (CSEQ_5A78->syncActive) {
                        TLobby__sub_803A5214((SND_CROSSFADE_803A49C8 *)&CSEQ_5A78->syncCrossInfo, CSEQ_5A78->syncSeqIdPtr, 1);
                        CSEQ_5A78->syncActive = 0;
                    }
                    break;
                case 0x69:
                    bss->seqMIDIPriority[lbl_805D7368][midi] = key & 0x7f;
                    break;
                case 0x6a:
                    bss->seqMIDIPriority[lbl_805D7368][midi] = (key & 0x7f) + 0x80;
                    break;
                case 0x79:
                    TLobby__sub_803BB4F0(midi, lbl_805D7368, 0);
                    break;
                case 0x7b:
                    TLobby__sub_803A3B54();
                    break;
                default:
                    TLobby__sub_803BADF8(velocity & 0x7f, midi, lbl_805D7368, key & 0x7f);
                    break;
                }
            }
            break;
        }

        if ((CSEQ_5A78->trackMute[event->trackId / 32] & (1 << (event->trackId & 0x1f))) != 0) {
            if ((macId = CSEQ_5A78->prgState[midi].macId) != 0xffff) {
                key += pa->patternInfo->transpose;
                key = key > 0x7f ? 0x7f : key < 0 ? 0 : key;

                velocity += pa->patternInfo->velocityAdd;
                velocity = velocity > 0x7f ? 0x7f : velocity < 0 ? 0 : velocity;

                if ((note = (NOTE_803A6364 *)TLobby__sub_803A3934(event->time + pe->length, secIndex)) != NULL) {
                    if ((note->id = TLobby__sub_803A7880(
                             macId, CSEQ_5A78->prgState[midi].priority, CSEQ_5A78->prgState[midi].maxVoices,
                             key, velocity, 64, midi, lbl_805D7368, secIndex, 0, event->trackId,
                             CSEQ_5A78->trackVolGroup[event->trackId], lbl_805D736C ? -1 : 0,
                             CSEQ_5A78->defStudio, lbl_80557C1C[CSEQ_5A78->defStudio].b0)) == 0xFFFFFFFF) {
                        FreeNote_803A5A78(note);
                    }
                }
            }
        }
        break;

    case 2:
        pa = event->info.pattern.base;
        TLobby__sub_803BB3C8(0x80, pa->midi, lbl_805D7368, HandleStream_803A5A78(&pa->pitchBend));
        break;

    case 1:
        pa = event->info.pattern.base;
        TLobby__sub_803BB3C8(1, pa->midi, lbl_805D7368, HandleStream_803A5A78(&pa->modulation));
        break;

    case 3:
        *loopFlag |= 1;
        return NULL;
    }

    return (SEQ_EVENT_803A6364 *)TLobby__sub_803A57EC(event->trackId);
}
#pragma pop
#undef CSEQ_5A78
#undef NOTEFREE_5A78

void TLobby__sub_803A61F8(void) {
    u32 i;
    Node_803A5A04 *n;

    if (((Owner_803A61F8 *)lbl_805D7360)->map == NULL) {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[0], n);
            }
        }
    } else {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[((Owner_803A61F8 *)lbl_805D7360)->map[i]], n);
            }
        }
    }
}

void TLobby__sub_803A62A0(u8 ch) {
    u32 i;
    Node_803A5A04 *n;

    if (((Owner_803A61F8 *)lbl_805D7360)->map == NULL) {
        for (i = 0; i < 0x40; i++) {
            n = TLobby__sub_803A57EC(i);
            if (n != NULL) {
                TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[0], n);
            }
        }
    } else {
        for (i = 0; i < 0x40; i++) {
            if (ch == ((Owner_803A61F8 *)lbl_805D7360)->map[i]) {
                n = TLobby__sub_803A57EC(i);
                if (n != NULL) {
                    TLobby__sub_803A5A04(&((Owner_803A61F8 *)lbl_805D7360)->chans[ch], n);
                }
            }
        }
    }
}

#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline float fmodf_803A6364(float x, float m) {
    float a = __fabsf(m);
    float b = __fabsf(x);
    if (a > b)
        return x;
    else {
        return x - m * (long long)(x / m);
    }
}
static inline void SetTickDelta_803A6364(SEQ_SECTION_803A6364 *section, u32 deltaTime) {
    float tickDelta = (float)section->bpm * (float)deltaTime * (1.f / (40960000.f));
    tickDelta *= section->speed * (1.f / 256.f);
    section->tickDelta[section->timeIndex].low = fmodf_803A6364(tickDelta * 65536.f, 65536.f);
    section->tickDelta[section->timeIndex].high = floorf(tickDelta);
}
static inline void RewindMTrack_803A6364(u8 secIndex, u32 deltaTime) {
    if ((*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->section[secIndex].mTrack.base == NULL) {
        return;
    }
    (*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->section[secIndex].mTrack.addr = (*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->section[secIndex].mTrack.base;
    TLobby__sub_803A487C(secIndex);
    SetTickDelta_803A6364((*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->section + secIndex, deltaTime);
}
static inline u32 GetNextEventTime_803A6364(SEQ_SECTION_803A6364 *section) {
    if (section->globalEventRoot == NULL) {
        return 0;
    }
    return section->globalEventRoot->time;
}
static inline SEQ_EVENT_803A6364 *GetGlobalEvent_803A6364(SEQ_SECTION_803A6364 *section) {
    SEQ_EVENT_803A6364 *ev;
    ev = section->globalEventRoot;
    if (ev != NULL && ((section->globalEventRoot = ev->next) != NULL)) {
        section->globalEventRoot->prev = NULL;
    }
    return ev;
}
u32 TLobby__sub_803A6364(u8 secIndex, u32 deltaTime) {
    SEQ_EVENT_803A6364 *ev;
    u32 loopFlag;
    SEQ_SECTION_803A6364 *section;
    u8 unused[4];
    section = &(*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->section[secIndex];
    loopFlag = 0;
    while (GetNextEventTime_803A6364(section) <= section->time[section->timeIndex].high) {
        if ((ev = GetGlobalEvent_803A6364(section)) == NULL) {
            if (!loopFlag) {
                return 0;
            }
            loopFlag = 0;
            section->timeIndex ^= 1;
            section->time[section->timeIndex].high = (*(SEQ_INSTANCE_803A6364 * *)&lbl_805D7360)->arrbase->loopPoint[secIndex];
            section->time[section->timeIndex].low = section->time[section->timeIndex ^ 1].low;
            RewindMTrack_803A6364(secIndex, deltaTime);
            section->loopCnt += 1;
            TLobby__sub_803A62A0(secIndex);
            continue;
        }
        if ((ev = TLobby__sub_803A5A78(ev, secIndex, &loopFlag)) != NULL) {
            TLobby__sub_803A5A04((List_803A5A04 *)(section), (Node_803A5A04 *)(ev));
        }
    }
    return 1;
}
#pragma pop

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

void schedule_sound_voice_update(SYNTH_VOICE_SV *svoice, s32 jobType, u32 deltaTime);
s16 TLobby__sub_803BC93C(u16 angle);
u16 TLobby__sub_803BC090(SYNTH_VOICE_SV *svoice);
u16 TLobby__sub_803BC120(SYNTH_VOICE_SV *svoice);
u16 TLobby__sub_803BC0D8(SYNTH_VOICE_SV *svoice);
void TLobby__sub_803BD19C(u32 v, u16 speed);
u32 TLobby__sub_803B4500(void *arg0, void *arg1, void *arg2);
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

extern u8 lbl_805D7381;
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

typedef char RecoveredGlobal_803A98F0_lbl_80556F88_size[sizeof(RecoveredGlobal_803A98F0_lbl_80556F88) == 0x3C0 ? 1 : -1];

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

void TLobby__sub_803A9F80(s32 arg0, s16 arg1) {
    sound_disable_irq();
    TLobby__sub_803A4DDC(arg0, arg1);
    sound_enable_irq();
}

void TLobby__sub_803A9FC8(s32 arg0) {
    sound_disable_irq();
    TLobby__sub_803A4EB8((s32)(arg0));
    sound_enable_irq();
}

void TLobby__sub_803AA000(s32 arg0, s32 arg1, s32 arg2) {
    sound_disable_irq();
    TLobby__sub_803A4FC4(arg0, arg1, arg2);
    sound_enable_irq();
}

void TLobby__sub_803AA058(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sound_disable_irq();
    TLobby__sub_803A5078(arg0, arg1, arg2, arg3);
    sound_enable_irq();
}

typedef char RecoveredGlobal_803AA0C0_lbl_80556E88_size[sizeof(RecoveredGlobal_803AA0C0_lbl_80556E88) == 0x100 ? 1 : -1];
u16 lookup_sound_bank_index(u8 arg0, u8 arg1) {
    extern RecoveredGlobal_803AA0C0_lbl_80556E88 lbl_80556E88;
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80556E88.value) + ((arg0 << 5) & 0x1FE0))) + ((arg1 * 2) & 0x1FE)), u16 *, 0);
}

s32 TLobby__sub_803AA0E0(u32 vid, u8 ctrl, u8 value) {
    s32 ret;
    sound_disable_irq();
    ret = TLobby__sub_803A9200(vid, ctrl, value);
    sound_enable_irq();
    return ret;
}

s32 TLobby__sub_803AA140(u32 vid, u8 ctrl, u16 value) {
    s32 ret;
    sound_disable_irq();
    ret = TLobby__sub_803A92E8(vid, ctrl, value);
    sound_enable_irq();
    return ret;
}

s32 TLobby__sub_803AA1A0(s32 arg0) {
    s32 var_r31;
    s32 var_r3;
    var_r31 = arg0;
    sound_disable_irq();
    var_r3 = var_r31;
    var_r31 = key_off_sound_fx((int)((int) (var_r3)));
    sound_enable_irq();
    var_r3 = var_r31;
    return var_r3;
}

s32 start_sound_fx(s16 arg0, u8 arg1, u8 arg2, s32 arg3, Req_803AA1E0 *req) {
    u32 id;
    u8 i;
    Ent_803AA1E0 *e;
    u8 t;
    sound_disable_irq();
    id = synth_start_fx(arg0, arg1, arg2, arg3, lbl_80557C1C[(u8)arg3].b1);
    if (id != 0xFFFFFFFF) {
        e = req->ents;
        i = 0;
        while (i < req->count) {
            t = e->type;
            if (t < 0x40 || t == 0x80 || t == 0x84) {
                TLobby__sub_803A92E8(id, t, e->v.w);
            } else {
                TLobby__sub_803A9200(id, t, e->v.b);
            }
            e++;
            i++;
        }
    }
    sound_enable_irq();
    return id;
}

u32 TLobby__sub_803AA2B8(u32 id) {
    if (find_sound_voice_by_id((u32)(id)) != 0xFFFFFFFF) return id;
    return 0xFFFFFFFF;
}

void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2) {
    sound_disable_irq();
    TLobby__sub_803A94E0(arg0, arg1, arg2, 0, -1);
    sound_enable_irq();
}

void set_sound_output_mode(s32 mode) {
    u32 old = lbl_805D73AC;
    u32 i;

    switch (mode) {
    case 0:
        lbl_805D73AC = old | 1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 1:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC &= ~2;
        TLobby__sub_803BD9F8();
        break;
    case 2:
        lbl_805D73AC = old & ~1;
        lbl_805D73AC |= 2;
        TLobby__sub_803BD9F8();
        break;
    }
    if (old != (u32)lbl_805D73AC) {
        for (i = 0; i < lbl_80557348.count; i++) {
            ((Rec_803AA35C *)lbl_805D73B0)[i].flags |= 0x200000000000ULL;
        }
        TLobby__sub_803AB5A8();
    }
}

void register_sound_aux_callbacks(u8 studio, void *auxA, s32 userA, u8 midiA, u32 seqIDA, void *auxB, s32 userB, u8 midiB, u32 seqIDB) {
    sound_disable_irq();
    if (auxA != 0) {
        if ((lbl_805D739C[studio] = midiA) != 0xFF) {
            lbl_805D7394[studio] = TLobby__sub_803A3D20(seqIDA);
            lbl_80557BBC[studio] = auxA;
            lbl_80557B9C[studio] = userA;
        }
    } else {
        lbl_80557BBC[studio] = 0;
        lbl_805D739C[studio] = 0xFF;
    }
    if (auxB != 0) {
        if ((lbl_805D738C[studio] = midiB) != 0xFF) {
            lbl_805D7384[studio] = TLobby__sub_803A3D20(seqIDB);
            lbl_80557BFC[studio] = auxB;
            lbl_80557BDC[studio] = userB;
        }
    } else {
        lbl_80557BFC[studio] = 0;
        lbl_805D738C[studio] = 0xFF;
    }
    set_sound_aux_bus_callbacks(studio, (s32)auxA, userA, (s32)auxB, userB);
    sound_enable_irq();
}

void TLobby__sub_803BD5EC(u8 i, s32 a, s32 b);
#pragma push
#pragma opt_common_subs on
void TLobby__sub_803AA5BC(u8 studio, u32 isMaster, u32 type) {
    sound_disable_irq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    lbl_80557C1C[studio].b1 = 0;
    lbl_80557C1C[studio].b0 = 0;
    TLobby__sub_803BD5EC(studio, isMaster, type);
    sound_enable_irq();
}
#pragma pop

void TLobby__sub_803AA66C(u8 studio) {
    u32 i;
    for (i = 0; i < (*(Cfg_803AA66C *)&lbl_80557348).voiceNum; ++i) {
        Rec_803AA66C *sv;
        if (studio == (sv = &(*(Rec_803AA66C * *)&lbl_805D73B0)[i])->studio) {
            if (sv->id != 0xFFFFFFFF) {
                TLobby__sub_803B3748(sv->vidList->vid);
            } else if (is_sound_hw_voice_active(i)) {
                TLobby__sub_803BD598(i);
            }
        }
    }
    sound_disable_irq();
    lbl_80557BBC[studio] = 0;
    lbl_80557BFC[studio] = 0;
    lbl_805D739C[studio] = 0xFF;
    lbl_805D738C[studio] = 0xFF;
    sound_enable_irq();
    TLobby__sub_803BD60C(studio);
}

void TLobby__sub_803AA75C(u8 arg0, void *in_desc) {
    void TLobby__sub_803BD62C(u8, void *);
    TLobby__sub_803BD62C(arg0, in_desc);
}

void TLobby__sub_803AA77C(u8 arg0, void *in_desc) {
    void TLobby__sub_803BD660(u8, void *);
    TLobby__sub_803BD660(arg0, in_desc);
}

void TLobby__sub_803AA864(void) {

}

void TLobby__sub_803AB0E0(void) {

}

void TLobby__sub_803AB0E4(s32 arg0) {
    extern Rec_803AB0E4 lbl_80558570[];
    Rec_803AB0E4 *r = &lbl_80558570[arg0];

    switch (r->state) {
    case 1:
    case 2:
        if (r->state == 2) {
            TLobby__sub_803B3628(r->f48);
        }
        r->state = 3;
        r->cb(0, 0, 0, 0, r->f4c);
        break;
    }
}

s32 TLobby__sub_803AB168(u32 arg0) {
    extern Rec_803AB0E4 lbl_80558570[];
    Rec_803AB0E4 *r = lbl_80558570;
    s32 i;

    for (i = 0; i < 64; r++, i++) {
        if (r->state != 0 && arg0 == *(u32 *)r->pad) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803AB574(s8 *arg0, s8 *arg1) {
    if (lbl_805D73AC & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_805D73AC & 2)) {
        *arg1 = 0;
    }
}

typedef u32 (*StreamCb_803AB5A8)(void *buffer1, u32 len1, void *buffer2, u32 len2, u32 user);

typedef struct ADPCMInfo_803AB5A8 {
    u16 numCoef;
    u8 initialPS;
    u8 loopPS;
    s16 loopY0;
    s16 loopY1;
    s16 coefTab[8][2];
} ADPCMInfo_803AB5A8;

typedef struct Stream_803AB5A8 {
    u32 stid;
    u32 flags;
    u8 state;
    u8 type;
    StreamCb_803AB5A8 updateFunction;
    s16 *buffer;
    u32 size;
    u32 bytes;
    u32 last;
    ADPCMInfo_803AB5A8 adpcmInfo;
    u32 voice;
    u32 user;
    u32 frq;
    u8 prio;
    u8 vol;
    u8 pan;
    u8 span;
    u8 auxa;
    u8 auxb;
    u8 orgPan;
    u8 orgSPan;
    u8 studio;
    u8 hwStreamHandle;
    u32 nextStreamHandle;
} Stream_803AB5A8;

typedef struct SynthInfo_803AB5A8 {
    u32 mixFrq;
    u32 numSamples;
    u8 pbInfo[0x208];
    u8 voiceNum;
    u8 maxMusic;
    u8 maxSFX;
    u8 studioNum;
} SynthInfo_803AB5A8;

void set_sound_voice_mix(s32 idx, u32 p, u32 x, s32 a3, f32 a, f32 b, f32 c);
void sound_enable_irq(void);
void sound_disable_irq(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline void CheckOutputMode_803AB5A8(u8 *pan, u8 *span) {
    if (lbl_805D73AC & 1) {
        *pan = 64;
        *span = 0;
    } else if (!(lbl_805D73AC & 2)) {
        *span = 0;
    }
}

static inline void SetHWMix_803AB5A8(const Stream_803AB5A8 *si) {
    set_sound_voice_mix(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

void TLobby__sub_803AB5A8(void) {
    extern Stream_803AB5A8 lbl_80558570[64];
    u32 i;

    sound_disable_irq();
    for (i = 0; i < lbl_80557348.count; ++i) {
        if (lbl_80558570[i].state != 0) {
            lbl_80558570[i].pan = lbl_80558570[i].orgPan;
            lbl_80558570[i].span = lbl_80558570[i].orgSPan;
            CheckOutputMode_803AB5A8(&lbl_80558570[i].pan, &lbl_80558570[i].span);
            if (lbl_80558570[i].state != 3) {
                SetHWMix_803AB5A8(&lbl_80558570[i]);
            }
        }
    }
    sound_enable_irq();
}
#pragma pop

u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1) {
    if (arg1 & 1) {
        return (((arg0 + 13) / 7 * 4 & ~7) + 31) & ~31;
    }
    return ((arg0 * 2) + 31) & ~31;
}

s32 TLobby__sub_803ACD40(u16 arg0) {
    extern u8 lbl_80559E70[];
    Tbl_803ACD40 *t = (Tbl_803ACD40 *)lbl_80559E70;
    Ent_803ACD40 *e;
    s32 i;
    s32 n;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D4;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].ref == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803ACD40 *)((u8 *)t + 0x4600))[j - 1] = ((Ent_803ACD40 *)((u8 *)t + 0x4600))[j];
            }
            lbl_805D73D4--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}

#pragma push
#pragma optimize_for_size off
#define TBL ((Ent_803ACEC4 *)((u8 *)t + 0x4E00))
s32 TLobby__sub_803ACEC4(u16 key, void *p, u16 f6) {
    extern u8 lbl_80559E70[];
    Tbl_803ACEC4 *t = (Tbl_803ACEC4 *)lbl_80559E70;
    s32 n;
    s32 i;
    Ent_803ACEC4 *e;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D6;
    i = 0;
    e = t->ents;
    while (i < n && e->key < key) {
        e++;
        i++;
    }
    if (i < n) {
        if (key != t->ents[i].key) {
            if ((u32)n < 0x100) {
                for (j = n - 1; j >= i; j--) {
                    TBL[j + 1] = TBL[j];
                }
                lbl_805D73D6++;
            } else {
                sound_enable_irq();
                return 0;
            }
        } else {
            t->ents[i].count++;
            sound_enable_irq();
            return 0;
        }
    } else {
        if ((u32)n < 0x100) {
            lbl_805D73D6++;
        } else {
            sound_enable_irq();
            return 0;
        }
    }
    t->ents[i].key = key;
    t->ents[i].p = p;
    t->ents[i].f6 = f6;
    t->ents[i].count = 1;
    sound_enable_irq();
    return 1;
}
#pragma pop

#pragma push
#pragma optimize_for_size off
s32 TLobby__sub_803AD10C(u16 key) {
    extern u8 lbl_80559E70[];
    Tbl_803AD10C *t = (Tbl_803AD10C *)lbl_80559E70;
    s32 n;
    s32 i;
    Ent_803AD10C *e;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D6;
    i = 0;
    e = t->ents;
    while (i < n && key != e->key) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].count == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803AD10C *)((u8 *)t + 0x4E00))[j - 1] = ((Ent_803AD10C *)((u8 *)t + 0x4E00))[j];
            }
            lbl_805D73D6--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}
#pragma pop

s32 TLobby__sub_803AD4D0(u16 arg0) {
    extern u8 lbl_80559E70[];
    Tbl_803AD4D0 *t = (Tbl_803AD4D0 *)lbl_80559E70;
    Ent_803AD4D0 *e;
    s32 i;
    s32 n;
    s32 j;
    sound_disable_irq();
    n = lbl_805D73D2;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i != n) {
        if (--t->ents[i].ref == 0) {
            for (j = i + 1; j < n; j++) {
                ((Ent_803AD4D0 *)((u8 *)t + 0x600))[j - 1] = ((Ent_803AD4D0 *)((u8 *)t + 0x600))[j];
            }
            lbl_805D73D2--;
            sound_enable_irq();
            return 1;
        }
    }
    sound_enable_irq();
    return 0;
}

struct Hdr_803ADA80 { u32 info; u32 length; u32 loopOffset; u32 loopLength; };
struct SDir_803ADA80 { u16 id; u16 ref_cnt; u32 offset; void *addr; Hdr_803ADA80 header; u32 extraData; };
struct Tbl_803ADA80 { SDir_803ADA80 *data; void *base; u16 numSmp; u16 res; };

void TLobby__sub_803BD8A8(Hdr_803ADA80 **arg0, void **arg1);

s32 TLobby__sub_803ADA80(u16 sid) {
    extern Tbl_803ADA80 lbl_80559E70[];
    u32 i;
    Hdr_803ADA80 *header;
    SDir_803ADA80 *data;
    SDir_803ADA80 *sdir;

    data = 0;
    sdir = 0;
    for (i = 0; i < lbl_805D73D0; ++i) {
        u16 v;
        for (data = lbl_80559E70[i].data; (v = data->id) != 0xFFFF; ++data) {
            if (v == sid && data->ref_cnt != 0xFFFF) {
                sdir = data;
                goto done;
            }
        }
    }
done:

    if (sdir->ref_cnt == 0) {
        sdir->addr = (void *)((u32)sdir->offset + (u32)lbl_80559E70[i].base);
        header = &sdir->header;
        TLobby__sub_803BD8A8(&header, &sdir->addr);
    }

    ++sdir->ref_cnt;
    return 1;
}

s32 TLobby__sub_803ADB58(u16 id) {
    extern u8 lbl_80559E70[];
    u32 i;

    for (i = 0; i < lbl_805D73D0; i++) {
        Ent_803ADB58 *e;
        u16 v;
        for (e = ((Tbl_803ADB58 *)lbl_80559E70)[i].list; (v = e->id) != 0xFFFF; e++) {
            if (v == id && e->ref != 0xFFFF) {
                e->ref--;
                if (e->ref == 0) {
                    TLobby__sub_803BD93C(&e->fc, e->f8);
                }
                return 1;
            }
        }
    }
    return 0;
}

s32 TLobby__sub_803ADBF0(u16 arg0, Rec_803ADBF0 *arg1, u16 arg2) {
    extern u8 lbl_80559E70[];
    Tbl_803ADBF0 *t = (Tbl_803ADBF0 *)lbl_80559E70;
    Ent_803ADBF0 *e;
    s32 i;
    u16 n;
    s32 k;
    n = lbl_805D73DA;
    e = t->ents;
    i = 0;
    while (i < n && arg0 != e->id) {
        e++;
        i++;
    }
    if (i == n && n < 0x80) {
        sound_disable_irq();
        k = lbl_805D73DA;
        t->ents[k].id = arg0;
        t->ents[k].count = arg2;
        t->ents[k].data = arg1;
        k = 0;
        while (k < arg2) {
            arg1->f9 = 0x1F;
            k++;
            arg1++;
        }
        lbl_805D73DA++;
        sound_enable_irq();
        return 1;
    }
    return 0;
}

s32 TLobby__sub_803ADD18(u16 id) {
    s32 i;
    s32 j;
    s32 n;
    i = 0;
    n = lbl_805D73DA;
    while (i < n && id != lbl_80564070[i].id) {
        i++;
    }
    if (i != n) {
    sound_disable_irq();
    for (j = i + 1; j < lbl_805D73DA; j++) {
        lbl_80564070[j - 1] = lbl_80564070[j];
    }
    lbl_805D73DA--;
    sound_enable_irq();
    return 1;
    }
    return 0;
}

s32 TLobby__sub_803AE420(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 compare_sound_sample_id(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

s32 find_sound_sample(s16 id, Sample_803AE4D4 *s) {
    extern u8 lbl_80559E70[];
    u8 *base;
    s32 i;

    base = lbl_80559E70;
    *(s16 *)(base + 0xA600) = id;
    for (i = 0; i < lbl_805D73D0; i++) {
        if ((lbl_805D73F0 = (Row_803AE4D4 *)search_sound_sample_directory((Req_803AE60C *)(base + 0xA600), (void *)((Reg_803AE4D4 *)base)[i].rows, ((Reg_803AE4D4 *)base)[i].count, 0x20, (s32 (*)(u8 *, u8 *))compare_sound_sample_id)) != 0 &&
            lbl_805D73F0->ref != 0xFFFF) {
            lbl_805D73F4 = (Part_803AE4D4 *)&lbl_805D73F0->key;
            s->key = lbl_805D73F4->key;
            s->addr = lbl_805D73F0->addr;
            s->offset = 0;
            s->loopStart = lbl_805D73F4->loopStart;
            s->count = lbl_805D73F4->fmt & 0xFFFFFF;
            s->loopLen = lbl_805D73F4->loopLen;
            s->format = lbl_805D73F4->fmt >> 24;
            if (lbl_805D73F0->coef != 0) {
                s->coef = lbl_805D73F0->coef + ((Reg_803AE4D4 *)base)[i].rows;
            }
            return 0;
        }
    }
    return -1;
}

s32 TLobby__sub_803AE5FC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE60C(s16 arg0) {
    lbl_805D73F8.f4 = arg0;
    if ((lbl_805D7400 = search_sound_sample_directory(&lbl_805D73F8, lbl_8055A470, lbl_805D73D2, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D7400;
    }
    return 0;
}

s32 TLobby__sub_803AE66C(s16 arg0) {
    lbl_805D7404.f4 = arg0;
    if ((lbl_805D740C = search_sound_sample_directory(&lbl_805D7404, lbl_8055E470, lbl_805D73D4, 8, TLobby__sub_803AE5FC)) != NULL) {
        return *lbl_805D740C;
    }
    return 0;
}

s32 TLobby__sub_803AE6CC(u8 *arg0, u8 *arg1) {
    return M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
}

s32 TLobby__sub_803AE6DC(s16 arg0, u16 *arg1) {
    extern u8 lbl_80559E70[];
    ((Req_803AE6DC *)(lbl_80559E70 + 0xA620))->f4 = arg0;
    if ((lbl_805D7410 = (Res_803AE6DC *)search_sound_sample_directory((Req_803AE60C *)((Req_803AE6DC *)(lbl_80559E70 + 0xA620)), (void *)(lbl_80559E70 + 0x4E00), (u16)(lbl_805D73D6), (s32)(0xC), (s32 (*)(u8 *, u8 *))(TLobby__sub_803AE6CC))) != 0) {
        *arg1 = lbl_805D7410->h6;
        return lbl_805D7410->f0;
    }
    return 0;
}

s32 TLobby__sub_803AE75C(u16 *arg0, u16 *arg1) {
    return *arg0 - *arg1;
}

Se_803A9144 *find_sound_fx_record(s16 arg0) {
    extern u8 lbl_80559E70[];
    s32 i;
    Blk_803AE76C *b;
    s32 *r;

    b = (Blk_803AE76C *)lbl_80559E70;
    i = 0;
    b->k.key = arg0;
    for (; i < lbl_805D73DA; i++) {
        r = search_sound_sample_directory((Req_803AE60C *)&b->k, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].base, ((Grp_803AE76C *)(lbl_80559E70 + 0xA200))[i].n, 10,
                                 (s32 (*)(u8 *, u8 *))TLobby__sub_803AE75C);
        if (r != NULL) {
            return (Se_803A9144 *)r;
        }
    }
    return NULL;
}

void TLobby__sub_803AE814(void *arg0, void *arg1) {
    s32 i;

    lbl_805D73D0 = 0;
    lbl_805D73D2 = 0;
    lbl_805D73D4 = 0;
    lbl_805D73D6 = 0;
    lbl_805D73DA = 0;
    lbl_805D73D8 = 0;
    for (i = 0; i < 0x200; i++) {
        lbl_8055F870[i].count = 0;
        lbl_8055F870[i].start = 0;
    }
    TLobby__sub_803BD884(arg0, arg1);
}

struct Obj_803AE8F8 {
    u8 pad0[0x90];
    u64 f90;
    u64 deadline;
    u64 fa0;
    u8 padA8[0xF4 - 0xA8];
    u32 iF4;
    u8 padF8[0x114 - 0xF8];
    u32 fh;
    u32 fl;
};
struct Op_803AE8F8 { u32 w0; u32 w4; };

u16 TLobby__sub_803BC91C(void);
void shift_left_8__6TLobbyFPv(void *);
void TLobby__sub_803BCA50(void *, void *);
u32 is_sound_hw_voice_active(s32 i);
void enqueue_sound_program_deadline(Program_803B1DA4 *self);
void set_sound_program_wait_state(Obj_803B312C *, s32);
extern u64 lbl_805D7428;

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

#define FLAGS (*(u64 *)&o->fh)

#pragma pack(push, 4)
typedef struct MSTEP_803AED58 { u32 para[2]; } MSTEP_803AED58;
typedef struct VIDL_803AED58 { struct VIDL_803AED58 *next; struct VIDL_803AED58 *prev; u32 vid; u32 root; } VIDL_803AED58;
typedef struct LFO_803AED58 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AED58;
typedef struct CSRC_803AED58 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AED58;
typedef struct CDEST_803AED58 { CSRC_803AED58 source[4]; u16 oldValue; u8 numSource; } CDEST_803AED58;
typedef struct Voice_803AED58 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AED58 *addr;
  MSTEP_803AED58 *curAddr;
  struct Voice_803AED58 *nextMacActive;
  struct Voice_803AED58 *prevMacActive;
  struct Voice_803AED58 *nextTimeQueueMacro;
  struct Voice_803AED58 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AED58 *trapEventAddr[3];
  MSTEP_803AED58 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AED58 *callStack[4][2];
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
  VIDL_803AED58 *vidList;
  VIDL_803AED58 *vidMasterList;
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
  LFO_803AED58 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AED58 inpVolume;
  CDEST_803AED58 inpPanning;
  CDEST_803AED58 inpSurroundPanning;
  CDEST_803AED58 inpPitchBend;
  CDEST_803AED58 inpDoppler;
  CDEST_803AED58 inpModulation;
  CDEST_803AED58 inpPedal;
  CDEST_803AED58 inpPortamento;
  CDEST_803AED58 inpPreAuxA;
  CDEST_803AED58 inpReverb;
  CDEST_803AED58 inpPreAuxB;
  CDEST_803AED58 inpPostAuxB;
  CDEST_803AED58 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AED58;
#pragma pack(pop)

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

#pragma pack(push, 4)
typedef struct MSTEP_803AF3DC { u32 para[2]; } MSTEP_803AF3DC;
typedef struct VIDL_803AF3DC { struct VIDL_803AF3DC *next; struct VIDL_803AF3DC *prev; u32 vid; u32 root; } VIDL_803AF3DC;
typedef struct LFO_803AF3DC { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AF3DC;
typedef struct CSRC_803AF3DC { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AF3DC;
typedef struct CDEST_803AF3DC { CSRC_803AF3DC source[4]; u16 oldValue; u8 numSource; } CDEST_803AF3DC;
typedef struct Voice_803AF3DC {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AF3DC *addr;
  MSTEP_803AF3DC *curAddr;
  struct Voice_803AF3DC *nextMacActive;
  struct Voice_803AF3DC *prevMacActive;
  struct Voice_803AF3DC *nextTimeQueueMacro;
  struct Voice_803AF3DC *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AF3DC *trapEventAddr[3];
  MSTEP_803AF3DC *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AF3DC *callStack[4][2];
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
  VIDL_803AF3DC *vidList;
  VIDL_803AF3DC *vidMasterList;
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
  LFO_803AF3DC lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AF3DC inpVolume;
  CDEST_803AF3DC inpPanning;
  CDEST_803AF3DC inpSurroundPanning;
  CDEST_803AF3DC inpPitchBend;
  CDEST_803AF3DC inpDoppler;
  CDEST_803AF3DC inpModulation;
  CDEST_803AF3DC inpPedal;
  CDEST_803AF3DC inpPortamento;
  CDEST_803AF3DC inpPreAuxA;
  CDEST_803AF3DC inpReverb;
  CDEST_803AF3DC inpPreAuxB;
  CDEST_803AF3DC inpPostAuxB;
  CDEST_803AF3DC inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AF3DC;
#pragma pack(pop)

typedef struct ADSR_803AF3DC {
    union {
        struct { s32 atime; s32 dtime; u16 slevel; u16 rtime; s32 ascale; s32 dscale; } dls;
        struct { u16 atime; u16 dtime; u16 slevel; u16 rtime; } linear;
    } data;
} ADSR_803AF3DC;
s32 TLobby__sub_803AE60C(s16 arg0);
void set_sound_hw_voice_envelope(u8, void *, s32);
extern f32 lbl_804F6CDC[];

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

#pragma pack(push, 4)
typedef struct MSTEP_803AF954 { u32 para[2]; } MSTEP_803AF954;
typedef struct VIDL_803AF954 { struct VIDL_803AF954 *next; struct VIDL_803AF954 *prev; u32 vid; u32 root; } VIDL_803AF954;
typedef struct LFO_803AF954 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AF954;
typedef struct CSRC_803AF954 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AF954;
typedef struct CDEST_803AF954 { CSRC_803AF954 source[4]; u16 oldValue; u8 numSource; } CDEST_803AF954;
typedef struct Voice_803AF954 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AF954 *addr;
  MSTEP_803AF954 *curAddr;
  struct Voice_803AF954 *nextMacActive;
  struct Voice_803AF954 *prevMacActive;
  struct Voice_803AF954 *nextTimeQueueMacro;
  struct Voice_803AF954 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AF954 *trapEventAddr[3];
  MSTEP_803AF954 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AF954 *callStack[4][2];
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
  VIDL_803AF954 *vidList;
  VIDL_803AF954 *vidMasterList;
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
  LFO_803AF954 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AF954 inpVolume;
  CDEST_803AF954 inpPanning;
  CDEST_803AF954 inpSurroundPanning;
  CDEST_803AF954 inpPitchBend;
  CDEST_803AF954 inpDoppler;
  CDEST_803AF954 inpModulation;
  CDEST_803AF954 inpPedal;
  CDEST_803AF954 inpPortamento;
  CDEST_803AF954 inpPreAuxA;
  CDEST_803AF954 inpReverb;
  CDEST_803AF954 inpPreAuxB;
  CDEST_803AF954 inpPostAuxB;
  CDEST_803AF954 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AF954;
#pragma pack(pop)

s32 TLobby__sub_803AE60C(s16 arg0);

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

#pragma pack(push, 4)
typedef struct MSTEP_803AF9D4 { u32 para[2]; } MSTEP_803AF9D4;
typedef struct VIDL_803AF9D4 { struct VIDL_803AF9D4 *next; struct VIDL_803AF9D4 *prev; u32 vid; u32 root; } VIDL_803AF9D4;
typedef struct LFO_803AF9D4 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AF9D4;
typedef struct CSRC_803AF9D4 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AF9D4;
typedef struct CDEST_803AF9D4 { CSRC_803AF9D4 source[4]; u16 oldValue; u8 numSource; } CDEST_803AF9D4;
typedef struct Voice_803AF9D4 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AF9D4 *addr;
  MSTEP_803AF9D4 *curAddr;
  struct Voice_803AF9D4 *nextMacActive;
  struct Voice_803AF9D4 *prevMacActive;
  struct Voice_803AF9D4 *nextTimeQueueMacro;
  struct Voice_803AF9D4 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AF9D4 *trapEventAddr[3];
  MSTEP_803AF9D4 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AF9D4 *callStack[4][2];
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
  VIDL_803AF9D4 *vidList;
  VIDL_803AF9D4 *vidMasterList;
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
  LFO_803AF9D4 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AF9D4 inpVolume;
  CDEST_803AF9D4 inpPanning;
  CDEST_803AF9D4 inpSurroundPanning;
  CDEST_803AF9D4 inpPitchBend;
  CDEST_803AF9D4 inpDoppler;
  CDEST_803AF9D4 inpModulation;
  CDEST_803AF9D4 inpPedal;
  CDEST_803AF9D4 inpPortamento;
  CDEST_803AF9D4 inpPreAuxA;
  CDEST_803AF9D4 inpReverb;
  CDEST_803AF9D4 inpPreAuxB;
  CDEST_803AF9D4 inpPostAuxB;
  CDEST_803AF9D4 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AF9D4;
#pragma pack(pop)

s32 TLobby__sub_803AE60C(s16 arg0);
void shift_left_8__6TLobbyFPv(void *);
void TLobby__sub_803BCA50(void *, void *);
u32 shift_right_8__6TLobbyFUi(u32 arg0);

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

#pragma pack(push, 4)
typedef struct MSTEP_803AFB00 { u32 para[2]; } MSTEP_803AFB00;
typedef struct VIDL_803AFB00 { struct VIDL_803AFB00 *next; struct VIDL_803AFB00 *prev; u32 vid; u32 root; } VIDL_803AFB00;
typedef struct LFO_803AFB00 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803AFB00;
typedef struct CSRC_803AFB00 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803AFB00;
typedef struct CDEST_803AFB00 { CSRC_803AFB00 source[4]; u16 oldValue; u8 numSource; } CDEST_803AFB00;
typedef struct Voice_803AFB00 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803AFB00 *addr;
  MSTEP_803AFB00 *curAddr;
  struct Voice_803AFB00 *nextMacActive;
  struct Voice_803AFB00 *prevMacActive;
  struct Voice_803AFB00 *nextTimeQueueMacro;
  struct Voice_803AFB00 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803AFB00 *trapEventAddr[3];
  MSTEP_803AFB00 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803AFB00 *callStack[4][2];
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
  VIDL_803AFB00 *vidList;
  VIDL_803AFB00 *vidMasterList;
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
  LFO_803AFB00 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803AFB00 inpVolume;
  CDEST_803AFB00 inpPanning;
  CDEST_803AFB00 inpSurroundPanning;
  CDEST_803AFB00 inpPitchBend;
  CDEST_803AFB00 inpDoppler;
  CDEST_803AFB00 inpModulation;
  CDEST_803AFB00 inpPedal;
  CDEST_803AFB00 inpPortamento;
  CDEST_803AFB00 inpPreAuxA;
  CDEST_803AFB00 inpReverb;
  CDEST_803AFB00 inpPreAuxB;
  CDEST_803AFB00 inpPostAuxB;
  CDEST_803AFB00 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803AFB00;
#pragma pack(pop)

struct Obj_803B3AA8;
u16 TLobby__sub_803BC91C(void);
s32 TLobby__sub_803B3AA8(Obj_803B3AA8 *arg0);
void TLobby__sub_803BBAA8(u8 arg0, u8 arg1, u8 arg2);
struct Obj_803AE8F8;
struct Op_803AE8F8;
s32 handle_sound_macro_wait(Obj_803AE8F8 *o, Op_803AE8F8 *op);

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

#define o ((Rec_803B1AF4 *)ov)

#pragma pack(push, 4)
typedef struct MSTEP_803B0198 { u32 para[2]; } MSTEP_803B0198;
typedef struct VIDL_803B0198 { struct VIDL_803B0198 *next; struct VIDL_803B0198 *prev; u32 vid; u32 root; } VIDL_803B0198;
typedef struct LFO_803B0198 { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803B0198;
typedef struct CSRC_803B0198 { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803B0198;
typedef struct CDEST_803B0198 { CSRC_803B0198 source[4]; u16 oldValue; u8 numSource; } CDEST_803B0198;
typedef struct Voice_803B0198 {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803B0198 *addr;
  MSTEP_803B0198 *curAddr;
  struct Voice_803B0198 *nextMacActive;
  struct Voice_803B0198 *prevMacActive;
  struct Voice_803B0198 *nextTimeQueueMacro;
  struct Voice_803B0198 *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803B0198 *trapEventAddr[3];
  MSTEP_803B0198 *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803B0198 *callStack[4][2];
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
  VIDL_803B0198 *vidList;
  VIDL_803B0198 *vidMasterList;
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
  LFO_803B0198 lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803B0198 inpVolume;
  CDEST_803B0198 inpPanning;
  CDEST_803B0198 inpSurroundPanning;
  CDEST_803B0198 inpPitchBend;
  CDEST_803B0198 inpDoppler;
  CDEST_803B0198 inpModulation;
  CDEST_803B0198 inpPedal;
  CDEST_803B0198 inpPortamento;
  CDEST_803B0198 inpPreAuxA;
  CDEST_803B0198 inpReverb;
  CDEST_803B0198 inpPreAuxB;
  CDEST_803B0198 inpPostAuxB;
  CDEST_803B0198 inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803B0198;
#pragma pack(pop)

typedef struct SynthInfo_803B0198 { u32 mixFrq; u32 numSamples; u8 pbInfo[0x208]; u8 voiceNum; u8 maxMusic; u8 maxSFX; u8 studioNum; } SynthInfo_803B0198;
u32 find_sound_voice_by_id(u32 id);
void TLobby__sub_803B1F24(void *arg0);
extern void (*lbl_805D73B4)(u32, s32);

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

#pragma pack(push, 4)
typedef struct MSTEP_803B03CC { u32 para[2]; } MSTEP_803B03CC;
typedef struct VIDL_803B03CC { struct VIDL_803B03CC *next; struct VIDL_803B03CC *prev; u32 vid; u32 root; } VIDL_803B03CC;
typedef struct LFO_803B03CC { u32 time; u32 period; s16 value; s16 lastValue; } LFO_803B03CC;
typedef struct CSRC_803B03CC { u8 midiCtrl; u8 combine; s32 scale; } CSRC_803B03CC;
typedef struct CDEST_803B03CC { CSRC_803B03CC source[4]; u16 oldValue; u8 numSource; } CDEST_803B03CC;
typedef struct Voice_803B03CC {
  u32 lowPrecisionJob[3];
  u32 zeroOffsetJob[3];
  u32 eventJob[3];
  u64 lastLowCallTime;
  u64 lastZeroCallTime;
  MSTEP_803B03CC *addr;
  MSTEP_803B03CC *curAddr;
  struct Voice_803B03CC *nextMacActive;
  struct Voice_803B03CC *prevMacActive;
  struct Voice_803B03CC *nextTimeQueueMacro;
  struct Voice_803B03CC *prevTimeQueueMacro;
  u32 macState;
  MSTEP_803B03CC *trapEventAddr[3];
  MSTEP_803B03CC *trapEventCurAddr[3];
  u8 trapEventAny;
  MSTEP_803B03CC *callStack[4][2];
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
  VIDL_803B03CC *vidList;
  VIDL_803B03CC *vidMasterList;
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
  LFO_803B03CC lfo[2];
  u8 lfoUsedByInput[2];
  u8 pbLowerKeyRange;
  u8 pbUpperKeyRange;
  u16 pbLast;
  u32 pitchADSR[10];
  s16 pitchADSRRange;
  u16 curPitch;
  struct { u8 vol, pan, midi, midiSet, section, track, vGroup, studio, itdMode; } setup;
  u32 midiDirtyFlags;
  CDEST_803B03CC inpVolume;
  CDEST_803B03CC inpPanning;
  CDEST_803B03CC inpSurroundPanning;
  CDEST_803B03CC inpPitchBend;
  CDEST_803B03CC inpDoppler;
  CDEST_803B03CC inpModulation;
  CDEST_803B03CC inpPedal;
  CDEST_803B03CC inpPortamento;
  CDEST_803B03CC inpPreAuxA;
  CDEST_803B03CC inpReverb;
  CDEST_803B03CC inpPreAuxB;
  CDEST_803B03CC inpPostAuxB;
  CDEST_803B03CC inpTremolo;
  u8 mesgNum;
  u8 mesgRead;
  u8 mesgWrite;
  s32 mesgQueue[4];
  u16 curOutputVolume;
} Voice_803B03CC;
#pragma pack(pop)

typedef struct SynthInfo_803B03CC { u32 mixFrq; u32 numSamples; u8 pbInfo[0x208]; u8 voiceNum; u8 maxMusic; u8 maxSFX; u8 studioNum; } SynthInfo_803B03CC;
struct Rec_803A9454;
void key_off_sound_program(Rec_803A9454 *);

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

#pragma pack(push, 4)
struct SYNTH_VOICE_803B19AC {
    u8 pad0[0x34];
    void *addr;
    void *curAddr;
    SYNTH_VOICE_803B19AC *nextMacActive;
    SYNTH_VOICE_803B19AC *prevMacActive;
    SYNTH_VOICE_803B19AC *nextTimeQueueMacro;
    SYNTH_VOICE_803B19AC *prevTimeQueueMacro;
    u32 macState;
    void *trapEventAddr[3];
    void *trapEventCurAddr[3];
    u8 trapEventAny;
    u8 pad69[0x98 - 0x69];
    u64 wait;
    u64 waitTime;
    u8 padA8[0xF4 - 0xA8];
    u32 id;
    u8 padF8[0x114 - 0xF8];
    u64 cFlags;
};
#pragma pack(pop)
struct V_803B1F24;
struct Program_803B1DA4;

void TLobby__sub_803B1F24(void *);
void dispatch_sound_macro_program(SYNTH_VOICE_803B19AC *);
u32 is_sound_hw_voice_active(s32 i);
extern Program_803B1DA4 *lbl_805D7420;
extern V_803B1F24 *lbl_805D741C;
extern u64 lbl_805D7428;

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

struct Prog_803B25CC;
struct Ch_803B1E48;
struct Obj_803B312C;
struct Rec_803A8D2C;
struct V_803B1F24;

#pragma pack(push, 4)
struct Voice_803B2128 {
    u8 pad0[0x34];
    u32 macroStart;
    u32 macroCur;
    Voice_803B2128 *next;
    Voice_803B2128 *prev;
    u8 pad44[0x4C - 0x44];
    s32 state;
    u8 pad50[0x8C - 0x50];
    u8 f8C;
    u8 f8D;
    u8 pad8E[0x98 - 0x8E];
    s64 f98;
    u8 padA0[0xEC - 0xA0];
    s32 fEC;
    s32 fF0;
    u32 fF4;
    u8 padF8[0x100 - 0xF8];
    u16 f100;
    u16 f102;
    u8 pad104[0x108 - 0x104];
    s32 f108;
    u8 pad10C[0x10E - 0x10C];
    u16 f10E;
    u32 f110;
    u64 flags;
    u8 pad11C;
    u8 f11D;
    u8 pad11E[0x12C - 0x11E];
    u16 f12C;
    u8 f12E;
    u8 f12F;
    u8 pad130[0x208 - 0x130];
    u8 f208;
    u8 f209;
    u8 f20A;
    u8 f20B;
    u8 f20C;
    u8 f20D;
    u8 f20E;
    u8 f20F;
    u8 f210;
    u8 pad211[0x3EC - 0x211];
    u8 f3EC;
    u8 f3ED;
    u8 f3EE;
    u8 pad3EF[0x404 - 0x3EF];
};
#pragma pack(pop)

extern "C" {
void free_sound_voice(Obj_803B312C *o);

u32 start_sound_macro(u16);
u32 alloc_sound_voice_id(SYNTH_VOICE_SV *svoice, u32 isMaster);
void TLobby__sub_803B2B60(Voice_803B2128 *, u8);
u32 allocate_sound_voice(u8, u32, u16, u8);
void TLobby__sub_803BB4F0(u8, u8, u8);
void TLobby__sub_803BB8AC(u8, u8);
void TLobby__sub_803BCEC8(u32);

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

}

#pragma push
#pragma opt_common_subs on
struct Program_803B1DA4;
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

extern s16 lbl_805D7450;

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

s32 calc_sound_pitch_semitone_up(s32 current) {
    return (s32)(lbl_805E0B78 * (f32)(u16)current);
}

u32 calc_sound_base_pitch(u8 note, u32 r) {
    u32 base;
    f32 v;
    if (r == 0xFFFFFFFF) {
        r = 0x40005622;
    }
    base = r >> 24;
    if (note != base) {
        f32 m;
        if (base < note) {
            m = lbl_804F6358[note - base];
        } else {
            m = lbl_804F6558[base - note];
        }
        v = (f32)(r & 0xFFFFFF) * m;
    } else {
        v = (f32)(r & 0xFFFFFF);
    }
    return lbl_805E0B88 * v / (f32)*(u32 *)lbl_80557348.pad;
}

u32 TLobby__sub_803B3ED8(s32 arg0) {
    return (u32)(lbl_805E0B90 * powf(lbl_805E0B94, lbl_805E0B98 * (f32)arg0, lbl_805E0B98));
}

#define arg0 ((u8 *)a0)
s32 transition_sound_envelope(void *a0) {
    s32 var_r0;
    s32 var_r5;
    u32 temp_r4_3;
    u32 temp_r4_4;
    u32 temp_r4_6;
    u8 temp_r4;
    u8 temp_r4_2;
    u8 temp_r4_5;
    temp_r4 = M2C_FIELD(arg0, u8 *, 0);
    var_r0 = 0;
    switch ((s32) temp_r4) {
    case 0:
        temp_r4_2 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_2) {
        case 0:
            temp_r4_3 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_3;
            if (temp_r4_3 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                M2C_FIELD(arg0, s32 *, 8) = 0;
                M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 0x14));
            } else {
            case 1:
                temp_r4_4 = M2C_FIELD(arg0, u32 *, 0x18);
                M2C_FIELD(arg0, u32 *, 4) = temp_r4_4;
                if (temp_r4_4 != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) (0x7FFF0000 - (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10)) / (u32) M2C_FIELD(arg0, u32 *, 0x18));
                } else {
                case 2:
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                        var_r0 = 1;
                    }
                }
            }
            break;
        }
        break;
    case 1:
        temp_r4_5 = M2C_FIELD(arg0, u8 *, 1);
        switch ((s32) temp_r4_5) {
        case 0:
            temp_r4_6 = M2C_FIELD(arg0, u32 *, 0x14);
            M2C_FIELD(arg0, u32 *, 4) = temp_r4_6;
            if (temp_r4_6 != 0) {
                M2C_FIELD(arg0, u8 *, 1) = 1U;
                if ((u8) M2C_FIELD(arg0, u8 *, 0x26) == 0) {
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0x7FFF0000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                    M2C_FIELD(arg0, s32 *, 0xC) = 0;
                    M2C_FIELD(arg0, s32 *, 8) = 0;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) (0xC10000U / (u32) M2C_FIELD(arg0, u32 *, 4));
                }
            } else {
            case 1:
                M2C_FIELD(arg0, u32 *, 4) = (u32) ((u32) (M2C_FIELD(arg0, u32 *, 0x18) * ((u32)((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / 193)) >> 0x10U);
                if ((u32) M2C_FIELD(arg0, u32 *, 4) != 0) {
                    M2C_FIELD(arg0, u8 *, 1) = 2U;
                    M2C_FIELD(arg0, s32 *, 8) = 0x7FFF0000;
                    M2C_FIELD(arg0, s32 *, 0xC) = 0xC10000;
                    M2C_FIELD(arg0, u32 *, 0x10) = (u32) -(s32) ((u32) ((0xC1 - M2C_FIELD(arg0, u16 *, 0x1C)) << 0x10) / (u32) M2C_FIELD(arg0, u32 *, 4));
                } else {
                case 2:
                    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) != 0) {
                        M2C_FIELD(arg0, u8 *, 1) = 3U;
                        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) << 0x10);
                        var_r5 = 0xC1 - ((s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x8000) >> 0x10);
                        if (var_r5 < 0) {
                            var_r5 = 0;
                        }
                        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(((u8 *)(lbl_804F6758) + (var_r5 * 2)), u16 *, 0) << 0x10);
                        M2C_FIELD(arg0, u32 *, 0x10) = 0U;
                    } else {
                    case 4:
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                        var_r0 = 1;
                    }
                }
            }
            break;
        }
        break;
    }
    return var_r0;
}
#undef arg0

void start_sound_envelope(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[1]; s8 field_1; };
    ((Fields_arg0*)arg0)->field_1 = 0;
    transition_sound_envelope((void *)(arg0));
}

typedef struct ADSR_VARS_803B41C8 {
    u8 mode;
    u8 state;
    u32 cnt;
    s32 currentVolume;
    s32 currentIndex;
    s32 currentDelta;
    union data_803B41C8 {
        struct _dls_803B41C8 {
            u32 aTime;
            u32 dTime;
            u16 sLevel;
            u32 rTime;
            u16 cutOff;
            u8 aMode;
        } dls;
    } data;
} ADSR_VARS_803B41C8;

extern u8 lbl_804F68DC[];
extern u8 lbl_804F68DC[];
#define dspScale2IndexTab lbl_804F68DC
#pragma push
#pragma opt_common_subs on

u32 release_sound_envelope(ADSR_VARS_803B41C8 *adsr, u32 rtime) {
    switch (adsr->mode) {
    case 0:
        adsr->state = 4;
        adsr->cnt = rtime;
        if (rtime == 0) {
            adsr->cnt = 1;
            adsr->currentDelta = 0;
            return 1;
        }
        adsr->currentDelta = -(adsr->currentVolume / rtime);
        break;
    case 1:
        if (adsr->data.dls.aMode == 0 && adsr->state == 1) {
            adsr->currentIndex = (193 - dspScale2IndexTab[adsr->currentVolume >> 21]) * 0x10000;
        }

        adsr->cnt = (u32)(3.238342E-4f * (float)adsr->currentIndex * (float)rtime) >> 12;
        adsr->state = 4;
        if (adsr->cnt == 0) {
            adsr->cnt = 1;
            adsr->currentDelta = adsr->currentIndex = adsr->currentVolume = 0;
            return 1;
        }

        adsr->currentDelta = -(adsr->currentIndex / adsr->cnt);
        break;
    }

    return 0;
}

#pragma pop
#undef dspScale2IndexTab

s32 key_off_sound_envelope(struct Envelope_803B431C *e) {
    switch (e->mode) {
    case 0:
    case 1:
        return release_sound_envelope((ADSR_VARS_803B41C8 *)e, e->release);
    default:
        return 0;
    }
}

#define e ((Env_803B4360 *)arg0)
#define out ((u16 *)arg1)
#define dlt ((u16 *)arg2)
u32 advance_sound_envelope(void *arg0, void *arg1, void *arg2) {
    s32 ret = 0;
    s32 old;
    s32 d;
    s32 v;
    switch (e->mode) {
    case 0:
        if (e->phase != 3) {
            old = e->level;
            e->level = old + e->step;
            *out = old >> 16;
            if (e->step >= 0) {
                *dlt = e->step >> 21;
            } else {
                *dlt = -(-e->step >> 21);
            }
            if (--e->remaining == 0) {
                ret = transition_sound_envelope(arg0);
            }
        } else {
            *out = e->level >> 16;
            *dlt = 0;
        }
        break;
    case 1:
        if (e->phase != 3) {
            old = e->level;
            if (e->f26 == 0 && e->phase == 1) {
                e->level = old + e->step;
            } else {
                e->c += e->step;
                v = 0xC1 - ((e->c + 0x8000) >> 16);
                if (v < 0) {
                    v = 0;
                }
                e->level = lbl_804F6758[v] << 16;
            }
            *out = old >> 16;
            d = e->level - old;
            if (d >= 0) {
                *dlt = d >> 21;
            } else {
                *dlt = -(-d >> 21);
            }
            if (--e->remaining == 0) {
                ret = transition_sound_envelope(arg0);
            }
        } else {
            *out = e->level >> 16;
            *dlt = 0;
        }
        break;
    }
    return ret;
}
#undef e
#undef out
#undef dlt

u32 TLobby__sub_803B4500(void *arg0, void *arg1, void *arg2) {
    u8 i;

    for (i = 0; i < 15; i++) {
        if (advance_sound_envelope((void *)(arg0), (void *)(arg1), (void *)(arg2)) != 0) {
            return 1;
        }
    }
    return 0;
}

typedef struct SND_VIRTUALSAMPLE_INFO_VS {
    u16 smpID;
    u16 instID;
    union {
        struct {
            u32 off1;
            u32 len1;
            u32 off2;
            u32 len2;
        } update;
    } data;
} SND_VIRTUALSAMPLE_INFO_VS;
typedef struct VS_BUFFER_VS {
    u8 state;
    u8 hwId;
    u8 smpType;
    u8 voice;
    u32 last;
    u32 finalGoodSamples;
    u32 finalLast;
    SND_VIRTUALSAMPLE_INFO_VS info;
} VS_BUFFER_VS;
typedef struct VS_VS {
    u8 numBuffers;
    u32 bufferLength;
    VS_BUFFER_VS streamBuffer[64];
    u8 voices[64];
    u16 nextInstID;
    u32 (*callback)(u8, const SND_VIRTUALSAMPLE_INFO_VS *);
} VS_VS;
extern VS_VS lbl_80565488;
#define vs (*vsp)

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

void TLobby__sub_803B4584(void) {
    VS_VS *vsp = &lbl_80565488;
    u32 i;
    vs.numBuffers = 0;
    for (i = 0; i < 64; i++) {
        vs.voices[i] = 0xFF;
    }

    vs.nextInstID = 0;
    vs.callback = NULL;
}

#pragma pop

#undef vs

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

typedef struct LAYER_803B4CF8 {
    u16 id;
    u8 keyLow;
    u8 keyHigh;
    s8 transpose;
    u8 volume;
    s16 prioOffset;
    u8 panning;
    u8 reserved[3];
} LAYER_803B4CF8;
typedef struct MEM_DATA_803B4CF8 {
    u32 nextOff;
    u16 id;
    u16 reserved;
    union {
        struct {
            u32 num;
            LAYER_803B4CF8 entry[1];
        } layer;
        u8 map[1];
        u8 tab[1];
        u32 cmd[1][2];
    } data;
} MEM_DATA_803B4CF8;
typedef struct POOL_DATA_803B4CF8 {
    u32 macroOff;
    u32 curveOff;
    u32 keymapOff;
    u32 layerOff;
} POOL_DATA_803B4CF8;

s32 TLobby__sub_803ADE74(u16 mid, void *macroaddr);
s32 TLobby__sub_803AE184(u16 mid);
s32 TLobby__sub_803ACB50(u16 cid, void *keymapdata);
s32 TLobby__sub_803ACD40(u16 sid);
s32 TLobby__sub_803ACEC4(u16 cid, void *layerdata, u16 size);
s32 TLobby__sub_803AD10C(u16 sid);
s32 TLobby__sub_803AD2D8(u16 cid, void *curvedata);
s32 TLobby__sub_803AD4D0(u16 sid);
s32 TLobby__sub_803ADA80(u16 sid);
s32 TLobby__sub_803ADB58(u16 id);

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

typedef struct _PB_803B5500 {
    u8 pad0[0x4];
    u16 currHi;
    u16 currLo;
    u8 pad8[0x38 - 0x8];
    u16 itdBufferHi;
    u16 itdBufferLo;
    u8 pad3C[0x4E - 0x3C];
    u16 updateDataHi;
    u16 updateDataLo;
    u8 pad52[0xBC - 0x52];
} _PB_803B5500;
typedef struct DSPvoice_803B5500 {
    _PB_803B5500 *pb;
    void *patchData;
    void *itdBuffer;
    u8 padC[0x24 - 0xC];
    u32 changed[5];
    u8 pad38[0xE4 - 0x38];
    u8 lastUpdatePitch;
    u8 lastUpdateVol;
    u8 lastUpdateVolA;
    u8 lastUpdateVolB;
    u32 virtualSampleID;
    u8 state;
    u8 postBreak;
    u8 startupBreak;
    u8 padEF[0xF4 - 0xEF];
} DSPvoice_803B5500;
#define dspStudio lbl_805663D8

extern u8 lbl_805D74C5;
extern u32 lbl_805D7458;
extern u16 *lbl_805D7478;
extern s32 *lbl_805D7484;
extern DSPvoice_803B5500 *lbl_805D748C;
extern void *lbl_805D7488;
extern s32 lbl_805D7480;
#define salNumVoices lbl_805D74C5
#define salMaxStudioNum lbl_805D74C4
#define dspARAMZeroBuffer lbl_805D7458
#define dspCmdList lbl_805D7478
#define dspSurround lbl_805D7484
#define dspVoice lbl_805D748C
#define dspITDBuffer lbl_805D7488
#define dspHrtfHistoryBuffer (*(void **)&lbl_805D7480)

u32 TLobby__sub_803BDEF0(void);
void *TLobby__sub_803BE7B0(u32 size);
s32 memset(void *, int, int);
void DCFlushRange(void *, int);
void DCInvalidateRange(void *, int);
void DCStoreRangeNoSync(void *, int);
s32 DCFlushRangeNoSync(void *, int);
void TLobby__sub_803B58A4(void);
void TLobby__sub_803B58DC(u8 studio, u32 isMaster, u32 type);
#define salMalloc TLobby__sub_803BE7B0

#pragma push
#pragma opt_common_subs on
#pragma bool off

u32 TLobby__sub_803B5500(u8 numVoices, u8 numStudios, u32 defaultStudioDPL2) {
    u32 i;
    u32 j;
    u32 itdPtr;

    salNumVoices = numVoices;
    salMaxStudioNum = numStudios;

    dspARAMZeroBuffer = TLobby__sub_803BDEF0();
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
                    TLobby__sub_803B58DC(0, 1, defaultStudioDPL2 != 0 ? 1 : 0);
                    if (!(dspHrtfHistoryBuffer = salMalloc(0x100))) {
                        return 0;
                    }

                    TLobby__sub_803B58A4();
                    return 1;
                }
            }
        }
    }

    return 0;
}

#pragma pop
#undef dspStudio

void TLobby__sub_803B58A4(void) {
    memset((void *) (lbl_805D7480), (int) (0), (int) (0x100));
    DCFlushRangeNoSync((void *) (lbl_805D7480), (int) (0x100));
}

#define dspStudio lbl_805663D8
#pragma push
#pragma opt_common_subs on
#pragma bool off

void TLobby__sub_803B58DC(u8 studio, u32 isMaster, u32 type) {
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

void TLobby__sub_803B59E4(u8 i) {
    lbl_805663D8[i].f50 = 0;
}

#pragma push
#pragma opt_common_subs on
#pragma bool off

u32 TLobby__sub_803B5A04(u16 *dsp_vol, u16 *dsp_delta, u16 *last_vol, u16 targetVol,
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

typedef struct _PBDPOP_803B5AF8 {
    u16 aL;
    u16 aAuxAL;
    u16 aAuxBL;
    u16 aR;
    u16 aAuxAR;
    u16 aAuxBR;
    u16 aS;
    u16 aAuxAS;
    u16 aAuxBS;
} _PBDPOP_803B5AF8;
typedef struct _PB_803B5AF8 {
    u8 pad0[0xC];
    u16 mixerCtrl;
    u16 state;
    u8 pad10[0x52 - 0x10];
    _PBDPOP_803B5AF8 dpop;
} _PB_803B5AF8;
typedef struct DSPvoice_803B5AF8 {
    _PB_803B5AF8 *pb;
    u8 pad4[0xED - 0x4];
    u8 postBreak;
} DSPvoice_803B5AF8;
typedef struct DSPhostDPop_803B5AF8 {
    s32 l;
    s32 r;
    s32 s;
    s32 lA;
    s32 rA;
    s32 sA;
    s32 lB;
    s32 rB;
    s32 sB;
} DSPhostDPop_803B5AF8;
typedef struct DSPstudioinfo_803B5AF8 {
    void *spb;
    DSPhostDPop_803B5AF8 hostDPopSum;
} DSPstudioinfo_803B5AF8;

#pragma push
#pragma opt_common_subs on
#pragma bool off
#pragma dont_inline off
#pragma inline_depth(4)

static inline void AddDpop_803B5AF8(s32 *sum, s16 delta) {
    *sum += (int)delta;
    *sum = (*sum > 0x7fffff) ? 0x7fffff : (*sum < -0x7fffff ? -0x7fffff : *sum);
}

void TLobby__sub_803B5AF8(DSPstudioinfo_803B5AF8 *stp, DSPvoice_803B5AF8 *dsp_vptr) {
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

void TLobby__sub_803B5DB0(Ent_803B5DB0 **v, s32 left, s32 right) {
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
    TLobby__sub_803B5DB0(v, left, last - 1);
    TLobby__sub_803B5DB0(v, last + 1, right);
}

s32 TLobby__sub_803B88CC(u8 *arg0, s32 arg1) {
    struct Fields_arg0 { u8 pad_0[24]; s32 field_18; };
    if (((s32 (*)(s32, s32)) lbl_805D7490) == NULL) {
        return 0;
    }
    return lbl_805D7490(arg1, ((Fields_arg0*)arg0)->field_18);
}

struct Ent_803B8910 { u8 pad0[0xC]; Ent_803B8910 *next; Ent_803B8910 *prev; u8 pad14[0x10]; s32 flags; u8 pad28[0xC4]; u8 active; u8 fED; u8 fEE; u8 idx; };
#pragma push
#pragma opt_common_subs on
void TLobby__sub_803B8910(Ent_803B8910 *dsp_vptr, u8 studio) {
    if (dsp_vptr->active != 0) {
        TLobby__sub_803B89B4((Ent_803B89B4 *)dsp_vptr);
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

void TLobby__sub_803B89B4(Ent_803B89B4 *arg0) {
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
s32 TLobby__sub_803B8A14(Obj_803B8A14 *stp, Src_803B8A14 *desc) {
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

s32 TLobby__sub_803B8ABC(Obj_803B8ABC *arg0, u32 arg1) {
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

void process_sound_aux_callbacks(void) {
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

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
void TLobby__sub_803B9438(void) {
    Vec_803B9438 d;
    B_803B9438 *r;
    A_803B9438 *li;
    f32 distance;
    u32 n;
    for (n = 0, li = (*(A_803B9438 * *)&lbl_805D74A0); li != 0; li = li->next, ++n)
        ;
    if (n != 0) {
        for (r = (*(B_803B9438 * *)&lbl_805D74A4); r != 0; r = r->next) {
            if (r->studio != 0xFF) {
                distance = 0.f;
                for (li = (*(A_803B9438 * *)&lbl_805D74A0); li != 0; li = li->next) {
                    d.x = r->pos.x - li->pos.x;
                    d.y = r->pos.y - li->pos.y;
                    d.z = r->pos.z - li->pos.z;
                    distance += d.x * d.x + d.y * d.y + d.z * d.z;
                }
                r->distance = distance / n;
            }
        }
    }
}
#pragma pop

struct FVec_S3D { f32 x; f32 y; f32 z; };
struct FMat_S3D { f32 m[3][3]; f32 t[3]; };
struct StudioInput_S3D { u8 vol; u8 volA; u8 volB; u8 srcStudio; };

struct Room_S3D {
    Room_S3D *next;
    Room_S3D *prev;
    u32 flags;
    FVec_S3D pos;
    f32 distance;
    u8 studio;
    void (*activateReverb)(u8 studio, void *para);
    void (*deActivateReverb)(u8 studio);
    void *user;
    u32 curMVol;
};

struct Door_S3D {
    Door_S3D *next;
    Door_S3D *prev;
    FVec_S3D pos;
    f32 open;
    f32 dampen;
    u8 fxVol;
    u8 destStudio;
    Room_S3D *a;
    Room_S3D *b;
    u32 flags;
    s16 filterCoef[4];
    StudioInput_S3D input;
};

struct Listener_S3D {
    Listener_S3D *next;
    Listener_S3D *prev;
    Room_S3D *room;
    u32 flags;
    FVec_S3D pos;
    f32 volPosOff;
    FVec_S3D dir;
    FVec_S3D heading;
    FVec_S3D right;
    FVec_S3D up;
    FMat_S3D mat;
    f32 surroundDisFront;
    f32 surroundDisBack;
    f32 soundSpeed;
    f32 vol;
};

union ParaData_S3D { u8 value7; u16 value14; };
struct Param_S3D { u8 ctrl; ParaData_S3D paraData; };
struct ParaInfo_S3D { u8 numPara; Param_S3D *paraArray; };

struct Emitter_S3D {
    Emitter_S3D *next;
    Emitter_S3D *prev;
    Room_S3D *room;
    ParaInfo_S3D *paraInfo;
    u32 flags;
    FVec_S3D pos;
    FVec_S3D dir;
    f32 maxDis;
    f32 maxVol;
    f32 minVol;
    f32 volPush;
    u32 vid;
    u32 group;
    u16 fxid;
    u8 studio;
    u8 maxVoices;
    u16 VolLevelCnt;
    f32 fade;
};

extern s8 lbl_805D7498;
extern s32 lbl_805D749C;
extern s32 lbl_805D74A0;
extern s32 lbl_805D74A4;
extern s32 lbl_805D74A8;
extern s32 lbl_805D74AC;
extern s8 lbl_805D74B0;
extern s8 lbl_805D74B1;
extern s8 lbl_805D74B2;

#define s3dCallCnt (*(u8 *)&lbl_805D7498)
#define s3dEmitterRoot (*(Emitter_S3D **)&lbl_805D749C)
#define s3dListenerRoot (*(Listener_S3D **)&lbl_805D74A0)
#define s3dRoomRoot (*(Room_S3D **)&lbl_805D74A4)
#define s3dDoorRoot (*(Door_S3D **)&lbl_805D74A8)
#define snd_used_studios (*(u32 *)&lbl_805D74AC)
#define snd_base_studio (*(u8 *)&lbl_805D74B0)
#define snd_max_studios (*(u8 *)&lbl_805D74B1)
#define s3dUseMaxVoices (*(u8 *)&lbl_805D74B2)

s32 key_off_sound_fx(int id);
void TLobby__sub_803AA5BC(u8 studio, u32 isMaster, u32 type);
void TLobby__sub_803AA66C(u8 studio);
void TLobby__sub_803B9438(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
void TLobby__sub_803B94FC(void) {
    Listener_S3D *li;
    Emitter_S3D *em;
    Room_S3D *r;
    Room_S3D *max_room;
    Room_S3D *room;
    FVec_S3D d;
    f32 distance;
    f32 maxDis;
    u32 li_num;
    u32 i;
    u32 mask;
    u8 has_listener;

    TLobby__sub_803B9438();

    for (li_num = 0, li = s3dListenerRoot; li != 0; li = li->next, ++li_num)
        ;

    if (li_num != 0) {
        for (room = s3dRoomRoot; room != 0; room = room->next) {
            if (room->studio == 0xff) {
                distance = 0.f;
                for (li = s3dListenerRoot; li != 0; li = li->next) {
                    d.x = room->pos.x - li->pos.x;
                    d.y = room->pos.y - li->pos.y;
                    d.z = room->pos.z - li->pos.z;
                    distance += d.x * d.x + d.y * d.y + d.z * d.z;
                }

                distance = distance / li_num;

                has_listener = 0;
                for (li = s3dListenerRoot; li != 0; li = li->next) {
                    if (li->room == room) {
                        has_listener = 1;
                        break;
                    }
                }

                mask = ~(-1 << snd_max_studios);

                if (mask != (snd_used_studios & mask)) {
                    for (i = 0; i < snd_max_studios; ++i) {
                        if (!(snd_used_studios & (1 << i))) {
                            break;
                        }
                    }

                    snd_used_studios |= (1 << i);
                    room->studio = i + snd_base_studio;
                } else {
                    maxDis = -1.f;

                    for (r = s3dRoomRoot; r != 0; r = r->next) {
                        if (r->studio != 0xFF && maxDis < r->distance) {
                            maxDis = r->distance;
                            max_room = r;
                        }
                    }

                    if (has_listener || maxDis > distance) {
                        for (em = s3dEmitterRoot; em != 0; em = em->next) {
                            if (em->room == max_room) {
                                key_off_sound_fx(em->vid);
                                em->flags |= 0x80000;
                                em->vid = -1;
                            }
                        }

                        if (max_room->deActivateReverb != 0) {
                            max_room->deActivateReverb(max_room->studio);
                        }

                        TLobby__sub_803AA66C(max_room->studio);
                        room->studio = max_room->studio;
                        max_room->studio = 0xff;
                        max_room->flags = 0;
                    } else {
                        continue;
                    }
                }
                room->distance = distance;
                room->curMVol = has_listener ? 0x7f0000 : 0;

                if (room->curMVol * 1.2014794e-07f >= 0.5) {
                    TLobby__sub_803AA5BC(room->studio, 1, 0);
                } else {
                    TLobby__sub_803AA5BC(room->studio, 0, 0);
                }

                if (room->activateReverb != 0) {
                    room->activateReverb(room->studio, room->user);
                }
            } else {
                if (room->flags & 0x80000000) {
                    room->curMVol += 0x40000;
                    if (room->curMVol >= 0x7F0000) {
                        room->curMVol = 0x7F0000;
                        room->flags &= ~0x80000000;
                    }

                    if (room->curMVol * 1.2014794e-07f >= 0.5) {
                        TLobby__sub_803AA5BC(room->studio, 1, 0);
                    } else {
                        TLobby__sub_803AA5BC(room->studio, 0, 0);
                    }
                }

                if ((room->flags & 0x40000000) != 0) {
                    room->curMVol = room->curMVol - 0x40000;
                    if ((int)room->curMVol >= 0) {
                        room->curMVol = 0;
                        room->flags &= ~0x40000000;
                    }
                    if (room->curMVol * 1.2014794e-07f >= 0.5) {
                        TLobby__sub_803AA5BC(room->studio, 1, 0);
                    } else {
                        TLobby__sub_803AA5BC(room->studio, 0, 0);
                    }
                }
            }
        }
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
static inline void CalcDoorParameters_S3D(Door_S3D *door) {
    f32 f;
    f32 v;
    v = door->open;
    f = (1.f - door->open) * door->dampen;
    door->input.volA = door->fxVol * v;
    door->input.volB = 0;
    door->input.vol = v * 127.f;
}

void TLobby__sub_803B98D8(void) {
    Door_S3D *door;

    for (door = s3dDoorRoot; door != 0; door = door->next) {
        if (!(door->flags & 0x80000000)) {
            if (door->a->studio != 0xFF) {
                if (door->b->studio != 0xFF) {
                    CalcDoorParameters_S3D(door);
                    if (door->flags & 1) {
                        door->input.srcStudio = door->b->studio;
                        TLobby__sub_803AA75C(door->a->studio, &door->input);
                    } else {
                        door->input.srcStudio = door->a->studio;
                        TLobby__sub_803AA75C(door->b->studio, &door->input);
                    }

                    door->flags |= 0x80000000;
                }
            }
        } else if (door->a->studio == 0xFF || door->b->studio == 0xFF) {
            if ((door->a->studio != 0xFF && door->a->studio == door->destStudio) ||
                (door->b->studio != 0xFF && door->b->studio == door->destStudio)) {
                TLobby__sub_803AA77C(door->destStudio, &door->input);
            }

            door->flags &= ~0x80000000;
        } else {
            CalcDoorParameters_S3D(door);
        }
    }
}
#pragma pop

void transform_vec3__6TLobbyFPvPvPv(void *mat, void *in, void *out);
f32 TLobby__sub_803BAD1C(FVec_S3D *vec);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
inline f32 sqrtf_S3D(f32 x) {
    static const f64 _half = .5;
    static const f64 _three = 3.0;
    volatile f32 y;
    if (x > 0.0f) {
        f64 guess = __frsqrte((f64)x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        guess = _half * guess * (_three - guess * guess * x);
        y = (f32)(x * guess);
        return y;
    }
    return x;
}

void TLobby__sub_803B9AB4(Emitter_S3D *em, f32 *vol, f32 *doppler, f32 *xPan, f32 *yPan, f32 *zPan) {
    Listener_S3D *li;
    FVec_S3D d;
    FVec_S3D v;
    FVec_S3D p;
    f32 relspeed;
    f32 distance;
    f32 new_distance;
    f32 ft;
    f32 vd;
    FVec_S3D pan;
    u32 n;

    ft = 1.f / 60.f;
    *vol = 0.f;
    *doppler = 1.f;

    pan.x = pan.y = pan.z = 0.f;

    for (n = 0, li = s3dListenerRoot; li != 0; li = li->next, ++n) {
        d.x = em->pos.x - (li->pos.x + li->heading.x * li->volPosOff);
        d.y = em->pos.y - (li->pos.y + li->heading.y * li->volPosOff);
        d.z = em->pos.z - (li->pos.z + li->heading.z * li->volPosOff);

        distance = sqrtf_S3D(d.x * d.x + d.y * d.y + d.z * d.z);

        if (em->maxDis >= distance) {
            vd = distance / em->maxDis;

            if (em->volPush >= 0.f) {
                *vol += li->vol * (em->minVol + (em->maxVol - em->minVol) *
                                                    (1.f - ((1.f - em->volPush) * vd + em->volPush * vd * vd)));
            } else {
                *vol += li->vol * (em->minVol + (em->maxVol - em->minVol) *
                                                    (1.f - ((em->volPush + 1.f) * vd -
                                                            em->volPush * (1.f - (1.f - vd) * (1.f - vd)))));
            }

            if (em->flags & 0x80000) {
                continue;
            }
            if ((em->flags & 0x8) || (li->flags & 1)) {
                v.x = li->dir.x - em->dir.x;
                v.y = li->dir.y - em->dir.y;
                v.z = li->dir.z - em->dir.z;
                relspeed = sqrtf_S3D(v.x * v.x + v.y * v.y + v.z * v.z);

                if (relspeed > 0.f) {
                    d.x = (em->pos.x + em->dir.x * ft) - (li->pos.x + li->dir.x * ft);
                    d.y = (em->pos.y + em->dir.y * ft) - (li->pos.y + li->dir.y * ft);
                    d.z = (em->pos.z + em->dir.z * ft) - (li->pos.z + li->dir.z * ft);

                    new_distance = sqrtf_S3D(d.x * d.x + d.y * d.y + d.z * d.z);

                    if (new_distance < distance) {
                        *doppler = li->soundSpeed / (li->soundSpeed - relspeed);
                    } else {
                        *doppler = li->soundSpeed / (li->soundSpeed + relspeed);
                    }
                }
            }

            if (distance != 0.f) {
                transform_vec3__6TLobbyFPvPvPv(&li->mat, &em->pos, &p);

                if (p.z <= 0.f) {
                    pan.z += -li->surroundDisFront < p.z ? -p.z / li->surroundDisFront : 1.f;
                } else {
                    pan.z += li->surroundDisBack > p.z ? -p.z / li->surroundDisBack : -1.f;
                }

                if (p.x != 0.f || p.y != 0.f || p.z != 0.f) {
                    TLobby__sub_803BAD1C(&p);
                }

                pan.x += p.x;
                pan.y -= p.y;
            }
        }
    }

    if (n != 0) {
        *xPan = pan.x / n;
        *yPan = pan.y / n;
        *zPan = pan.z / n;
    }
}
#pragma pop

s32 TLobby__sub_803A9200(u32 id, u8 a1, u8 a2);
s32 TLobby__sub_803A92E8(u32 id, u8 a1, u16 a2);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
static inline u8 clip127_S3D(u8 v) {
    if (v > 0x7f) {
        return 0x7f;
    }
    return v;
}

static inline u16 clip3FFF_S3D(u32 v) {
    if (v > 0x3fff) {
        return 0x3fff;
    }
    return v;
}

void TLobby__sub_803B9F98(Emitter_S3D *const em, f32 vol, f32 xPan, f32 yPan, f32 zPan, f32 doppler) {
    u32 vid;
    u8 i;
    Param_S3D *pPtr;

    vid = em->vid;
    if ((em->flags & 0x100000) != 0) {
        TLobby__sub_803A9200(vid, 7, clip127_S3D((em->fade * vol) * 127.f));
    } else {
        TLobby__sub_803A9200(vid, 7, clip127_S3D(vol * 127.f));
    }

    TLobby__sub_803A9200(vid, 10, clip127_S3D((1.f + xPan) * 64.f));
    TLobby__sub_803A9200(vid, 131, clip127_S3D((1.f - zPan) * 64.f));
    TLobby__sub_803A92E8(vid, 132, clip3FFF_S3D(doppler * 8192.0f));

    if (em->paraInfo != 0) {
        pPtr = em->paraInfo->paraArray;
        for (i = 0; i < em->paraInfo->numPara; ++pPtr, ++i) {
            if (pPtr->ctrl < 0x40 || pPtr->ctrl == 0x80 || pPtr->ctrl == 0x84) {
                TLobby__sub_803A92E8(vid, pPtr->ctrl, (pPtr->paraData).value14);
            } else {
                TLobby__sub_803A9200(vid, pPtr->ctrl, (pPtr->paraData).value7);
            }
        }
    }
}
#pragma pop

void TLobby__sub_803BA1B8(Node_803BA1B8 *arg0) {
    if (arg0->next != 0) {
        arg0->next->prev = arg0->prev;
    }
    if (arg0->prev != 0) {
        arg0->prev->next = arg0->next;
    } else {
        (*(Node_803BA1B8 * *)&lbl_805D749C) = arg0->next;
    }
    arg0->f10 = (u16)arg0->f10;
    if (arg0->id != 0xFFFFFFFF) {
        key_off_sound_fx((int)(arg0->id));
    }
}

void TLobby__sub_803BA228(Ent_803BA228 *arg0, u32 arg1) {
    Node_803BA228 *n;
    Node_803BA228 *next;
    u32 i;

    for (n = *(Node_803BA228 **)&lbl_805D749C; n != 0; n = next) {
        next = n->next;
        for (i = 0; i < arg1; i++) {
            if (n->id == arg0[i].id) {
                if (lbl_805D7380 != 0) {
                    sound_disable_irq();
                    if (n->f10 & 0x10000) {
                        TLobby__sub_803BA1B8((Node_803BA1B8 *)n);
                    }
                    sound_enable_irq();
                }
                break;
            }
        }
    }
}

struct StartList_S3D {
    StartList_S3D *next;
    f32 vol;
    f32 xPan;
    f32 yPan;
    f32 zPan;
    f32 pitch;
    Emitter_S3D *em;
};

struct RunList_S3D {
    RunList_S3D *next;
    f32 vol;
    Emitter_S3D *em;
};

struct StartGroup_S3D {
    u32 id;
    StartList_S3D *list;
    RunList_S3D *running;
    u16 numRunning;
};

static Emitter_S3D tmp_em_S3D;
static StartGroup_S3D startGroup_S3D[64];
static StartList_S3D startListNum_S3D[64];
static RunList_S3D runList_S3D[64];
extern u8 lbl_805D74B3;
extern u8 lbl_805D74B4;
extern u8 lbl_805D74B5;

#define startGroup startGroup_S3D
#define startListNum startListNum_S3D
#define runList runList_S3D
#define startGroupNum lbl_805D74B3
#define startListNumnum lbl_805D74B4
#define runListNum lbl_805D74B5

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
void TLobby__sub_803BA2D8(Emitter_S3D *em, f32 vol) {
    s32 i;
    RunList_S3D *rl;
    RunList_S3D *lrl;

    for (i = 0; i < startGroupNum; ++i) {
        if (em->group == startGroup[i].id) {
            break;
        }
    }

    if (i == startGroupNum) {
        startGroup[i].list = 0;
        startGroup[i].running = 0;
        startGroup[i].numRunning = 0;
        startGroup[i].id = em->group;
        ++startGroupNum;
    }

    ++startGroup[i].numRunning;

    lrl = 0;
    for (rl = startGroup[i].running; rl != 0; rl = rl->next) {
        if (rl->vol > vol) {
            break;
        }
        lrl = rl;
    }

    if (lrl == 0) {
        startGroup[i].running = &runList[runListNum];
    } else {
        lrl->next = &runList[runListNum];
    }

    runList[runListNum].next = rl;
    runList[runListNum].em = em;
    runList[runListNum++].vol = vol;
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
u32 TLobby__sub_803BA3EC(Emitter_S3D *em, f32 vol, f32 xPan, f32 yPan, f32 zPan, f32 pitch) {
    s32 i;
    StartList_S3D *sl;

    for (i = 0; i < startGroupNum; ++i) {
        if (em->group == startGroup[i].id) {
            break;
        }
    }

    if (i == startGroupNum) {
        if (startGroupNum == 64) {
            return 0;
        }

        startGroup[i].list = 0;
        startGroup[i].running = 0;
        startGroup[i].numRunning = 0;
        startGroup[i].id = em->group;
        ++startGroupNum;
    }

    if (startListNumnum == 64) {
        return 0;
    }

    if ((sl = startGroup[i].list) != 0) {
        for (; sl->next != 0; sl = sl->next) {
            if (sl->vol < vol) {
                break;
            }
        }
        startListNum[startListNumnum].next = sl->next;
        sl->next = &startListNum[startListNumnum];
    } else {
        startListNum[startListNumnum].next = startGroup[i].list;
        startGroup[i].list = &startListNum[startListNumnum];
    }

    startListNum[startListNumnum].em = em;
    startListNum[startListNumnum].pitch = pitch;
    startListNum[startListNumnum].xPan = xPan;
    startListNum[startListNumnum].yPan = yPan;
    startListNum[startListNumnum].zPan = zPan;
    startListNum[startListNumnum++].vol = vol;

    return 1;
}
#pragma pop

void TLobby__sub_803B9F98(Emitter_S3D *em, f32 vol, f32 xPan, f32 yPan, f32 zPan, f32 doppler);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
#pragma bool off
void TLobby__sub_803BA51C(void) {
    s32 synth_start_fx(u16 fid, u8 vol, u8 pan, u8 studio, u32 itd);
    s32 i;
    StartList_S3D *sl;
    Emitter_S3D *em;
    f32 dv;

    for (i = 0; i < startGroupNum; ++i) {
        for (sl = startGroup[i].list; sl != 0; sl = sl->next) {
            if ((startGroup[i].running != 0) &&
                !(((s3dUseMaxVoices != 0 && ((startGroup[i].id & 0x80000000) != 0)) &&
                   (startGroup[i].numRunning < startGroup[i].list->em->maxVoices)))) {

                dv = sl->vol - (startGroup[i].running)->vol;
                if (dv <= 0.08f) {
                    continue;
                } else if (dv <= 0.15f) {
                    if (++sl->em->VolLevelCnt < 20) {
                        continue;
                    }
                } else {
                    sl->em->VolLevelCnt = 0;
                }
            }
            em = sl->em;

            if (em->room != 0 && em->room->studio == 0xFF) {
                goto set_flags;
            }
            if ((em->vid = synth_start_fx(em->fxid, 127, 64, em->room != 0 ? em->room->studio : em->studio,
                                          (em->flags & 0x10) != 0)) == -1) {
            set_flags:
                if (!(em->flags & 0x2)) {
                    em->flags |= 0x40000;
                    em->flags &= ~0x20000;
                }
            } else {
                if (!(em->flags & 0x20)) {
                    em->flags |= 0x100000;
                    em->fade = 0.f;
                } else {
                    em->fade = 1.f;
                }
                TLobby__sub_803B9F98(em, sl->vol, sl->xPan, sl->yPan, sl->zPan, sl->pitch);
                em->flags &= ~0x20000;
                ++startGroup[i].numRunning;
                if (startGroup[i].running != 0) {
                    startGroup[i].running = startGroup[i].running->next;
                }
            }
        }
    }
}
#pragma pop

s32 key_off_sound_fx(int id);
u32 TLobby__sub_803AA2B8(u32 id);
void TLobby__sub_803B94FC(void);
void TLobby__sub_803B98D8(void);
void TLobby__sub_803B9AB4(Emitter_S3D *em, f32 *vol, f32 *doppler, f32 *xPan, f32 *yPan, f32 *zPan);
void TLobby__sub_803B9F98(Emitter_S3D *em, f32 vol, f32 xPan, f32 yPan, f32 zPan, f32 doppler);
void TLobby__sub_803BA2D8(Emitter_S3D *em, f32 vol);
u32 TLobby__sub_803BA3EC(Emitter_S3D *em, f32 vol, f32 xPan, f32 yPan, f32 zPan, f32 pitch);
void TLobby__sub_803BA51C(void);

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
#pragma bool off
static inline void ClearStartList_S3D(void) {
    startGroupNum = 0;
    startListNumnum = 0;
    runListNum = 0;
}

static inline void EmitterShutdown_S3D(Emitter_S3D *em) {
    if (em->next != 0) {
        em->next->prev = em->prev;
    }

    if (em->prev != 0) {
        em->prev->next = em->next;
    } else {
        s3dEmitterRoot = em->next;
    }

    em->flags &= 0xFFFF;
    if (em->vid != -1) {
        key_off_sound_fx(em->vid);
    }
}

void TLobby__sub_803BA744(void) {
    s32 synth_start_fx(u16 fid, u8 vol, u8 pan, u8 studio, u32 itd);
    Emitter_S3D *em;
    Emitter_S3D *nem;
    f32 vol;
    f32 xPan;
    f32 yPan;
    f32 zPan;
    f32 pitch;

    if (s3dCallCnt != 0) {
        --s3dCallCnt;
        return;
    }
    s3dCallCnt = 3;
    ClearStartList_S3D();
    em = s3dEmitterRoot;
    for (; em != 0; em = nem) {
        nem = em->next;
        if ((em->flags & 0x40000) != 0) {
            EmitterShutdown_S3D(em);
            continue;
        }
        if ((em->flags & 0x20001) != 0) {
            TLobby__sub_803B9AB4(em, &vol, &pitch, &xPan, &yPan, &zPan);
        }

        if (!(em->flags & 0x80000)) {
            if (em->flags & 0x20000) {
                if (vol == 0.f && em->flags & 0x4) {
                    em->flags |= 0x80000;
                    em->flags &= ~0x20000;
                    goto found_emitter;
                } else if (vol == 0.f && em->flags & 0x40) {
                    EmitterShutdown_S3D(em);
                    continue;
                }

                if (em->flags & 1) {
                    if (TLobby__sub_803BA3EC(em, vol, xPan, yPan, zPan, pitch)) {
                        continue;
                    }
                } else if (em->room == 0 || em->room->studio != 0xFF) {
                    if ((em->vid = synth_start_fx(em->fxid, 127, 64, em->room != 0 ? em->room->studio : em->studio,
                                                  (em->flags & 0x10) != 0)) == -1) {
                    derp:
                        if (!(em->flags & 2)) {
                            em->flags |= 0x40000;
                            em->flags &= ~0x20000;
                        } else {
                            continue;
                        }
                    }
                } else {
                    goto derp;
                }
            } else if ((em->vid = TLobby__sub_803AA2B8(em->vid)) == -1) {
                if ((em->flags & 2)) {
                    em->flags |= 0x20000;
                } else {
                    em->flags |= 0x40000;
                }
            }

        found_emitter:
            if (em->vid != -1) {
                if ((em->flags & 1) != 0) {
                    TLobby__sub_803BA2D8(em, vol);
                }
                if ((vol == 0.f) && ((em->flags & 4) != 0)) {
                    key_off_sound_fx(em->vid);
                    em->vid = 0xffffffff;
                    if ((em->flags & 2)) {
                        em->flags |= 0x80000;
                    } else {
                        em->flags |= 0x40000;
                    }
                } else {
                    TLobby__sub_803B9F98(em, vol, xPan, yPan, zPan, pitch);
                }
            }
            if ((em->flags & 0x100000) != 0) {
                em->fade += .3f;
                if (em->fade >= 1.f) {
                    em->flags &= ~0x100000;
                }
            }
        } else if ((em->room == 0 || (em->room != 0 && em->room->studio != 0xff)) && vol != 0.f) {
            em->flags &= ~0x80000;
            em->flags |= 0x20000;
        }
    }
    TLobby__sub_803BA51C();
    TLobby__sub_803B94FC();
    TLobby__sub_803B98D8();
}
#pragma pop

void TLobby__sub_803BAB10(s32 arg0) {
    lbl_805D749C = 0;
    lbl_805D74A0 = 0;
    lbl_805D74A4 = 0;
    lbl_805D74A8 = 0;
    lbl_805D74AC = 0;
    lbl_805D74B0 = 1;
    lbl_805D74B1 = 3;
    lbl_805D7498 = 0;
    lbl_805D74B2 = (arg0 & 2) != 0;
}
#define synthInfo (*(SynthInfo_803BAB54 *)&lbl_80557348)
#define sndActive lbl_805D7380
#define synthIdleWaitActive lbl_805D73B8
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma auto_inline on
#pragma opt_common_subs on
static inline s32 DoInit_803BAB54(u32 mixFrq, u32 aramSize, u32 numVoices, u32 flags) {
    u32 ret;
    ret = 0;
    TLobby__sub_803B4CEC();
    TLobby__sub_803AE814(0, (void *)aramSize);
    TLobby__sub_803A6CA0();
    synthIdleWaitActive = 0;
    TLobby__sub_803A9A3C(mixFrq, numVoices);
    TLobby__sub_803AA79C();
    TLobby__sub_803B4584();
    TLobby__sub_803BAB10(flags);
    sndActive = 1;
    return ret;
}
s32 TLobby__sub_803BAB54(u8 voices, u8 music, u8 sfx, u8 studios, u32 flags, u32 aramSize) {
    s32 ret;
    u32 frq;
    ret = 0;
    sndActive = 0;
    if (voices <= 64) {
        synthInfo.voiceNum = voices;
    } else {
        synthInfo.voiceNum = 64;
    }
    if (studios <= 8) {
        synthInfo.studioNum = studios;
    } else {
        synthInfo.studioNum = 8;
    }
    synthInfo.maxMusic = music;
    synthInfo.maxSFX = sfx;
    frq = 32000;
    if ((ret = TLobby__sub_803BCC0C(&frq, synthInfo.voiceNum, synthInfo.studioNum, flags)) == 0) {
        ret = DoInit_803BAB54(32000, aramSize, synthInfo.voiceNum, flags);
    }
    return ret;
}
#pragma pop

}
