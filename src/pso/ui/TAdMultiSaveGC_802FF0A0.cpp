#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_window__14TAdMultiSaveGCFv(void);
int render__14TAdMultiSaveGCFv(void);
void TLobby__sub_8001FE7C(void*, int);
int begin_change_game_mode__21TAdMultiChgGameModeGCFv(void);
void queue_destruction__14TAdMultiSaveGCFv(void);
int queue_destruction__7TObjectFv(void);

extern u32 lbl_805D69E0;

void free_window__14TAdMultiSaveGCFv(void) {
    if ((u32) lbl_805D69E0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D69E0, 1);
        lbl_805D69E0 = 0U;
    }
}

int render__14TAdMultiSaveGCFv(void) { return 0; }

}
