#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 queue_destruction__7TObjectFv(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 TAdChrMoveEffectGC__sub_803490AC();
int request_scene_change__22TAdMultiPlyChrSelectGCFPv(void* p);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int TAdMultiPlyChrSelectGC__sub_802DC294(void) { return 0; }

}
