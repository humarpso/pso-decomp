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
struct Rec_803B59E4 { u8 pad[0x48]; Ent_803B89B4 *head; u8 pad4c[4]; u8 f50; u8 pad2[0xBC - 0x51]; };

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

extern "C" {
void TLobby__sub_803A49C8(s32);
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
extern RecoveredGlobal_803AA0C0_lbl_80556E88 lbl_80556E88;
u16 lookup_sound_bank_index(s32 arg0, s32 arg1);
void sound_enable_irq(void);
void sound_disable_irq(void);
s32 TLobby__sub_803AA1A0(s32 arg0);
void TLobby__sub_803A94E0(u8, u16, u8, s8, s32);
void sound_enable_irq(void);
void sound_disable_irq(void);
void TLobby__sub_803AA2FC(u8 arg0, u16 arg1, u8 arg2);
void TLobby__sub_803BD62C(u8);
void TLobby__sub_803AA75C(u8 arg0);
void TLobby__sub_803BD660(u8);
void TLobby__sub_803AA77C(u8 arg0);
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
s32 schedule_sound_voice_update(void *, int, int);
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
extern s32 release_sound_envelope(struct Envelope_803B431C *e, u32 duration);
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
extern u8 lbl_80559E70[];
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
s32 TLobby__sub_803A9144(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
extern u8 lbl_805D7380;
extern Rec_803A8D2C *lbl_805D73B0;
void key_off_sound_program(Rec_803A9454 *);
s32 key_off_sound_fx(int id);
extern Rec_803A8D2C *lbl_805D73B0;
s32 get_slot_value__6TLobbyFi(u8);
void TLobby__sub_803B488C(s32);
void TLobby__sub_803B1AF4(Rec_803A996C *);
void TLobby__sub_803B36A8(u8);
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
extern u8 lbl_80559E70[];
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
s32 TLobby__sub_803A9144(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4);
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
extern Rec_803AB0E4 lbl_80558570[];
struct Ent_803ADB58 { u16 id; u16 ref; s32 f4; s32 f8; s32 fc; u8 pad10[0x10]; };
struct Tbl_803ADB58 { Ent_803ADB58 *list; s32 base; s32 f8; };

s32 TLobby__sub_803BD93C(void *, s32);
extern u8 lbl_80559E70[];
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
void TLobby__sub_803B4CF8(u16, void *, void *, void *);
void TLobby__sub_803B4CF8(u16, void *, void *, void *);
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
s32 TLobby__sub_803A3D8C(u8 *, u8 *, u16 *, s32, s32, s32, u16);
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

void TLobby__sub_803A8CC0(void *arg0) {
    schedule_sound_voice_update(arg0, 0, 0);
    schedule_sound_voice_update(arg0, 1, 0);
}

void TLobby__sub_803A8D04(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    schedule_sound_voice_update((void *) (arg0), (int) (2), (int) (0));
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
        TLobby__sub_803A49C8(((Fields_arg0*)arg0)->field_28);
        return;
    case 3:
        TLobby__sub_803A4FC4(((Fields_arg0*)arg0)->field_28, 0, 0);
        return;
    }
}

s32 TLobby__sub_803A9144(s16 arg0, u8 arg1, u8 arg2, s32 arg3, s32 arg4) {
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
u16 lookup_sound_bank_index(s32 arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80556E88.value) + ((arg0 << 5) & 0x1FE0))) + ((arg1 * 2) & 0x1FE)), u16 *, 0);
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
    id = TLobby__sub_803A9144(arg0, arg1, arg2, arg3, lbl_80557C1C[(u8)arg3].b1);
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

void TLobby__sub_803AA75C(u8 arg0) {
    TLobby__sub_803BD62C(arg0);
}

void TLobby__sub_803AA77C(u8 arg0) {
    TLobby__sub_803BD660(arg0);
}

void TLobby__sub_803AA864(void) {

}

void TLobby__sub_803AB0E0(void) {

}

void TLobby__sub_803AB0E4(s32 arg0) {
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

u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1) {
    if (arg1 & 1) {
        return (((arg0 + 13) / 7 * 4 & ~7) + 31) & ~31;
    }
    return ((arg0 * 2) + 31) & ~31;
}

s32 TLobby__sub_803ADB58(u16 id) {
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

void TLobby__sub_803B312C(Obj_803B312C *o) {
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

s32 key_off_sound_envelope(struct Envelope_803B431C *e) {
    switch (e->mode) {
    case 0:
    case 1:
        return release_sound_envelope(e, e->release);
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

s32 TLobby__sub_803B4500(void *arg0, void *arg1, void *arg2) {
    u8 i;

    for (i = 0; i < 15; i++) {
        if (advance_sound_envelope((void *)(arg0), (void *)(arg1), (void *)(arg2)) != 0) {
            return 1;
        }
    }
    return 0;
}

void TLobby__sub_803B4CEC(void) {
    lbl_805D7450 = 0;
}

void TLobby__sub_803B4F5C(u16 *p, void *a, void *b, void *c) {
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

void TLobby__sub_803B58A4(void) {
    memset((void *) (lbl_805D7480), (int) (0), (int) (0x100));
    DCFlushRangeNoSync((void *) (lbl_805D7480), (int) (0x100));
}

void TLobby__sub_803B59E4(u8 i) {
    lbl_805663D8[i].f50 = 0;
}

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

}
