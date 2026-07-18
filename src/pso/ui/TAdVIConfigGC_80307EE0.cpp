#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0);
M2C_UNK TAdVIConfigGC__sub_80307D00(void *);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);
s32 TLobby__sub_801B0974();
s32 TWindow__close(u32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
s32 __dl__FPv(void *);
s32 allow_rendering__7TObjectFv(u32);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK memset(void *, int, int);

#include "types.h"
extern "C" {

u8 *init__13TAdVIConfigGCFPvf(u8 *arg0, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 8));
    M2C_FIELD(arg0, f32 *, 0) = (f32) (farg0 * farg0);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (0x60));
    M2C_FIELD(arg0, s32 *, 4) = TLobby__sub_801B0974();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    TAdVIConfigGC__sub_80307D00((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}

}
