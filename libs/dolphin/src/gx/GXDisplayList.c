

#include <libc/string.h>

#include <dolphin/gx.h>
#include <dolphin/os.h>
#include <macros.h>

#include "gx/sdk2002/__gx.h"
































































void GXCallDisplayList(void *list, u32 nbytes)
{
    CHECK_GXBEGIN(239, "GXCallDisplayList");
    ASSERTMSGLINE(240, !gx->inDispList, "GXCallDisplayList: display list already in progress");
    ASSERTMSGLINE(241, (nbytes & 0x1F) == 0, "GXCallDisplayList: nbytes is not 32 byte aligned");
    ASSERTMSGLINE(242, ((u32)list & 0x1F) == 0, "GXCallDisplayList: list is not 32 byte aligned");

    if (gx->dirtyState != 0) {
        __GXSetDirtyState();
    }
#if DEBUG
    __GXShadowDispList(list, nbytes);
#endif
    if (*(u32 *)&gx->vNumNot == 0) {
        __GXSendFlushPrim();
    }
    GX_WRITE_U8(0x40);
    GX_WRITE_U32(list);
    GX_WRITE_U32(nbytes);
}
