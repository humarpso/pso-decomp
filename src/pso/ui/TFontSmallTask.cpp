#include "pso/TFontSmallTask.h"

TFontSmallTask::~TFontSmallTask() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Ent_800FD6A0 { u32 id; void (*fn)(void); };

struct Ent_800FD6F8 { void (*fn)(void); u32 id; };

struct VBase_800FD614 { u8 pad[0x18]; };

struct VObj_800FD614 : VBase_800FD614 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual s32 m14();
};

struct Out_800FD614 { s32 a; s32 b; };

struct Vec_800FD4D4 {
    f32 x, y, z;
};

struct TFontSmallTask_800FD4D4 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    Vec_800FD4D4 pos;
    f32 ofs_x;
    f32 ofs_y;
    f32 width;
    char text[0x10];
    u32 rgb;
    s32 f48;
    s32 life;
    s32 delay;
    s16 f54;
    u16 view;
};

extern "C" {
void TFontSmallTask__sub_800FD604(void* p);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 TLobby__data_805011D8;
void TLobby__sub_800FD764(void);
void TLobby__sub_800FD6A0(Ent_800FD6A0 *arr, u32 size);
s32 TLobby__sub_800F8AE8(void);
s32 TLobby__sub_800FD6F8(Ent_800FD6F8 *p, u32 size);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c();
s32 get_game_mode__6TLobbyFv();
s32 TLobby__sub_8007B844(void *);
void TLobby__sub_800FD614(struct Out_800FD614 *out, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, const void *);
void disallow_rendering__7TObjectFv(void *);
u32 fn_800FC0F8(char *);
void *get_instance__15TWindowCtrlMainFv(void);
f32 TFontSmallTask__sub_800FCCFC(void *);
void __ct__7TObjectFP7TObject(void *, void *);
char *strncpy(char *, const char *, u32);
extern u8 __vt__14TFontSmallTask[];
extern s32 lbl_805D2B30;
extern const f32 lbl_805DAA0C;
extern const f32 lbl_805DAA20;
TFontSmallTask_800FD4D4 *__ct__14TFontSmallTaskFv(TFontSmallTask_800FD4D4 *self, Vec_800FD4D4 *pos, u32 color, s32 life, s32 delay, const char *text, u16 view);
}

extern "C" {

void TFontSmallTask__sub_800FD5F4(void* p, s32 v);
void TFontSmallTask__sub_800FD604(void* p);
s32 get_task_id__14TFontSmallTaskFPv(void* p);

#pragma push
#pragma fp_contract on
TFontSmallTask_800FD4D4 *__ct__14TFontSmallTaskFv(TFontSmallTask_800FD4D4 *self, Vec_800FD4D4 *pos, u32 color, s32 life, s32 delay, const char *text, u16 view) {
    __ct__7TObjectFP7TObject(self, get_instance__15TWindowCtrlMainFv());
    self->vt = __vt__14TFontSmallTask;
    self->f0 = lbl_805D2B30;
    VecCopy__FP3VecPC3Vec(&self->pos, pos);
    self->ofs_x = lbl_805DAA0C;
    self->ofs_y = lbl_805DAA0C;
    self->rgb = color & 0xFFFFFF;
    self->f48 = 0;
    self->life = life;
    self->delay = delay;
    self->f54 = 0;
    self->view = view;
    if (self->view >= 4) {
        self->view = 0xFFFF;
    }
    disallow_rendering__7TObjectFv(self);
    strncpy(self->text, text, 0xF);
    self->text[0xF] = 0;
    self->width = fn_800FC0F8(self->text);
    self->ofs_x -= lbl_805DAA20 * self->width * TFontSmallTask__sub_800FCCFC(self);
    return self;
}
#pragma pop

void TFontSmallTask__sub_800FD5F4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 get_task_id__14TFontSmallTaskFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void TFontSmallTask__sub_800FD604(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

void TLobby__sub_800FD614(struct Out_800FD614 *out, s32 arg1) {
    s32 n;
    s32 i;
    VObj_800FD614 *p;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = (VObj_800FD614 *)get_player_data__10TObjPlayerFi(i);
        if (p != NULL && arg1 == obj_getField1c()) {
            out->a = p->m14();
            out->b = TLobby__sub_8007B844(p);
        }
    }
}

void TLobby__sub_800FD6A0(Ent_800FD6A0 *arr, u32 size) {
    s32 n = size / sizeof(Ent_800FD6A0);
    Ent_800FD6A0 *p = arr + n;
    while (n > 0) {
        p--;
        if (p->fn != NULL) {
            p->fn();
        }
        n--;
    }
}

s32 TLobby__sub_800FD6F8(Ent_800FD6F8 *p, u32 size) {
    s32 n = size / sizeof(Ent_800FD6F8);
    while (n > 0) {
        if (TLobby__sub_800F8AE8() != 0) {
            return 0;
        }
        if (p->fn != NULL) {
            p->fn();
        }
        p++;
        n--;
    }
    return 1;
}

void TLobby__sub_800FD764(void) {
    TFontSmallTask__sub_800FD604((void*)((M2C_UNK *)(&TLobby__data_805011D8.value)));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

}
