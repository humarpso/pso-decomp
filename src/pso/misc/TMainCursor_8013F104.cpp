#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013F1F0_lbl_804A7254 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void TMainCursor__sub_8013F13C(s32 *arg0);
void TMainCursor__sub_8013F22C(void* a0);
extern M2C_UNK lbl_804A7254[];
u8 *TMainCursor__sub_8013F1F0(u8 *arg0);
}

extern "C" {

void TMainCursor__sub_8013F104(void* p, s32 v);
void TMainCursor__sub_8013F10C(void* p, s32 v);
void TMainCursor__sub_8013F114(void* p);
f32 TMainCursor__sub_8013F14C(void* p);
int TMainCursor__sub_8013F154(void);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
void TMainCursor__sub_8013F180(void* p, f32 v);
void TMainCursor__sub_8013F22C(void* a0);
int TMainCursor__sub_8013F244(void);
void *destroy__11TMainCursorFPvs(void *arg0, s16 arg1);
int fn_8013F24C(void);
f32 get_pos__11TMainCursorFPv(void* p);
int get_rader_map__11TMainCursorFPv(void* p);
void set_cursor_id__11TMainCursorFPvs(void* p, s16 v);
void set_field2__11TMainCursorFPvs(void* p, s16 v);
void set_size__11TMainCursorFPvf(void* p, f32 v);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
int TMainCursor__sub_8013E240(void*);
M2C_UNK __dl__FPv(void *);
int copy_vec4__13TRaderMapCoreFPvPv(void*);
int fn_8004438C(void*);
int init_forward__10TObjPlayerFPv(void*);
int init_gc_tag(void*);
int reset__11TMainCursorFi(void*);
void reset_fields__13TLockOnCursorFPv(void* p);

void TMainCursor__sub_8013F104(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TMainCursor__sub_8013F10C(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TMainCursor__sub_8013F114(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void set_cursor_id__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void set_field2__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void set_size__11TMainCursorFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }

void TMainCursor__sub_8013F13C(s32 *arg0) {
    *arg0 += 1;
}

f32 TMainCursor__sub_8013F14C(void* p) { return *(f32*)((char*)p + 0x4); }

int TMainCursor__sub_8013F154(void) { return 0; }

s32 TMainCursor__sub_8013F168(void* p) { return *(s32*)((char*)p + 0x0); }
void TMainCursor__sub_8013F170(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

f32 get_pos__11TMainCursorFPv(void* p) { return *(f32*)((char*)p + 0x0); }
void TMainCursor__sub_8013F180(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }

int get_rader_map__11TMainCursorFPv(void* p) { return copy_vec4__13TRaderMapCoreFPvPv(p); }

extern M2C_UNK lbl_804A7254[];

void *destroy__11TMainCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = lbl_804A7254;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

    extern const float TMainCursor__data_805DB0C0;

typedef char RecoveredGlobal_8013F1F0_lbl_804A7254_size[sizeof(RecoveredGlobal_8013F1F0_lbl_804A7254) == 0xC ? 1 : -1];
u8 *TMainCursor__sub_8013F1F0(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &(*(RecoveredGlobal_8013F1F0_lbl_804A7254 *)&lbl_804A7254).value;
    TMainCursor__sub_8013F22C((void*)((void *) (arg0)));
    return arg0;
}

void TMainCursor__sub_8013F22C(void* a0) { *(float*)((char*)a0 + 0xc) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x8) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x4) = TMainCursor__data_805DB0C0; *(float*)((char*)a0 + 0x0) = TMainCursor__data_805DB0C0; }

int TMainCursor__sub_8013F244(void) { return -1; }

int fn_8013F24C(void) { return 0; }

}
