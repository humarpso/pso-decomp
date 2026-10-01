#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Obj_802FF87C {
    u8 pad0[0x1C];
    s32 state;
    u32 count;
    u8 pad24[0x34 - 0x24];
    void *players[4];
    u8 pad44[4];
    s32 x48;
} Obj_802FF87C;

extern "C" {
void set_state_0xc__21TAdMultiChgGameModeGCFv(void);
void set_change_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void *, s32);
void TAdMultiConfirmGC__sub_802E03D0(void *);
void TAdMultiConfirmGC__sub_802E0448(void *);
s32 fn_802E0454(void *);
s32 TAdMultiConfirmGC__sub_80306ABC(s32);
s32 fn_80306AC8(s32);
void run_task__17TAdMultiConfirmGCFv(Obj_802FF87C *arg0);
}

extern "C" {

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1);
void render__17TAdMultiConfirmGCFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_802FF760(void *);

void render__17TAdMultiConfirmGCFv(void) {  }

extern M2C_UNK __vt__17TAdMultiConfirmGC[];

void run_task__17TAdMultiConfirmGCFv(Obj_802FF87C *arg0) {
    u32 j;
    u32 i;
    switch (arg0->state) {
    case 0:
        arg0->state = 1;
        break;
    case 1:
        for (i = 0; i < 4; i++) {
            if (arg0->players[i] != NULL) {
                set_field_100__22TAdMultiPlyChrSelectGCFPvi(arg0->players[i], 2);
            }
        }
        arg0->state = 2;
        break;
    case 2:
        i = 1;
        for (j = 0; j < arg0->count; j++) {
            if (arg0->players[j] != NULL && fn_802E0454(arg0->players[j]) == 0) {
                i = 0;
                break;
            }
        }
        if ((s32)i == 1) {
            for (i = 0; i < arg0->count; i++) {
                if (arg0->players[i] != NULL) {
                    TAdMultiConfirmGC__sub_802E0448(arg0->players[i]);
                    TAdMultiConfirmGC__sub_802E03D0(arg0->players[i]);
                }
            }
            arg0->state = 3;
        }
        break;
    case 3:
        if (TAdMultiConfirmGC__sub_80306ABC(arg0->x48) != 0) {
            set_change_game_mode__21TAdMultiChgGameModeGCFv();
        } else if (fn_80306AC8(arg0->x48) != 0) {
            set_state_0xc__21TAdMultiChgGameModeGCFv();
        }
        break;
    }
}

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdMultiConfirmGC;
        fn_802FF760(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
