#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_download_buffers__6TLobbyFv(void);
M2C_UNK TItemDrop__sub_800FE2DC();
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 xmalloc__FUl(M2C_UNK);

extern s8 lbl_804FE148[];
extern s32 lbl_805D4ACC;
extern s32 lbl_805D4AD4;
extern s32 lbl_805D4AD8;

void init_download_buffers__6TLobbyFv(void) {
    lbl_805D4AD8 = xmalloc__FUl(0x4000);
    lbl_805D4ACC = alloc__22TQuestVmDownLoadServerFPv(0x40000);
    TItemDrop__sub_800FE2DC();
    lbl_805D4AD4 = 1;
    lbl_804FE148[0] = 0;
}

}
