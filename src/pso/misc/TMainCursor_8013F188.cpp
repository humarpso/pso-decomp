#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_rader_map__11TMainCursorFPv(void* p);
void *destroy__11TMainCursorFPvs(void *arg0, s16 arg1);
int TLockOnCursor__sub_8013EC1C(void*);
int TLockOnCursor__sub_8013EC38(void*);
int TMainCursor__sub_8013E240(void*);
f32 TMainCursor__sub_8013F178(void* p);
void TMainCursor__sub_8013F180(void* p, f32 v);
int init_forward__10TObjPlayerFPv(void*);
M2C_UNK __dl__FPv(void *);
int TRaderMapCore__sub_8002F588(void*);
int fn_8004438C(void*);
int fn_80072004(void*);
int TMainCursor__sub_8013E780(void*);
void fn_8013F104(void* p, s32 v);
void fn_8013F10C(void* p, s32 v);
void fn_8013F114(void* p);
void TMainCursor__sub_8013F124(void* p, s16 v);
void TMainCursor__sub_8013F12C(void* p, s16 v);
void TMainCursor__sub_8013F134(void* p, f32 v);
f32 TMainCursor__sub_8013F14C(void* p);
s32 TMainCursor__sub_8013F168(void* p);
void TMainCursor__sub_8013F170(void* p, s32 v);
void reset_fields__13TLockOnCursorFPv(void* p);

int get_rader_map__11TMainCursorFPv(void* p) { return TRaderMapCore__sub_8002F588(p); }

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

}
