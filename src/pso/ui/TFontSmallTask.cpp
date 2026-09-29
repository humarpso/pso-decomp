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
}

extern "C" {

void TFontSmallTask__sub_800FD5F4(void* p, s32 v);
void TFontSmallTask__sub_800FD604(void* p);
s32 get_task_id__14TFontSmallTaskFPv(void* p);

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
