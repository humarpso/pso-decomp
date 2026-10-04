#include "musyx/runtime/musyx_runtime_b.h"

#define synthInfo_voiceNum (((u8 *)lbl_80557348)[0x210])
#define synthVoice lbl_805D73B0
#define CLAMP(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define SLOTS_803BD694 (*(Slot_803BD694 **)&lbl_805D748C)
#define userCallback lbl_805D74E8
#define salAIBufferBase lbl_805D74EC
#define salDspIsDone (*(volatile u32 *)&lbl_805D74F0)
#define salLogicIsWaiting (*(volatile u32 *)&lbl_805D74F4)
#define salLogicActive (*(volatile u32 *)&lbl_805D74F8)
#define salLastTick (*(volatile u32 *)&lbl_805D74FC)
#define salAIBufferIndex lbl_805D750C
#define OSCachedToPhysical(caddr) ((u32)((u8 *)(caddr) - 0x80000000))
extern "C" {

void TLobby__sub_803BDAE4(u8 *src, u32 dst, u32 len, s32 dir, void *cb, void *arg) {
    Q_803BDAE4 *q;
    s32 lvl;
    q = (u32)dir != 0 ? (Q_803BDAE4 *)&lbl_8056E3DC : (Q_803BDAE4 *)&lbl_8056E158;
    while (1) {
        lvl = OSDisableInterrupts();
        if (q->count < 16) {
            q->reqs[q->wp].owner = 0x2A;
            q->reqs[q->wp].type = 0;
            q->reqs[q->wp].prio = (u32)dir != 0 ? 1 : 0;
            q->reqs[q->wp].src = src;
            q->reqs[q->wp].dst = dst;
            q->reqs[q->wp].len = len;
            q->reqs[q->wp].cb = (void *)TLobby__sub_803BDA4C;
            q->reqs[q->wp].f20 = cb;
            q->reqs[q->wp].f24 = arg;
            ARQPostRequest(&q->reqs[q->wp], q->reqs[q->wp].owner, q->reqs[q->wp].type, q->reqs[q->wp].prio,
                           q->reqs[q->wp].src, q->reqs[q->wp].dst, q->reqs[q->wp].len, q->reqs[q->wp].cb);
            q->count++;
            q->wp = (q->wp + 1) % 16;
            OSRestoreInterrupts(lvl);
            return;
        }
        OSRestoreInterrupts(lvl);
    }
}

void TLobby__sub_803BDCB8(void) {
    while (lbl_8056E158.lo.valid != 0) {
    }
}

u32 TLobby__sub_803BDEF0(void) {
    return ARGetBaseAddress();
}

s32 TLobby__sub_803BDF10(u8 *src, u32 size) {
    u32 chunk;
    s32 start;
    u8 *buf;
    u32 len;
    len = (size + 0x1F) & ~0x1F;
    start = lbl_805D74CC;
    if (lbl_805D74D4 == 0) {
        DCFlushRange(src, len);
        TLobby__sub_803BDAE4((u8 *)(src), (u32)(lbl_805D74CC), (u32)(len), (s32)(0), (void *)(0), (void *)(0));
        lbl_805D74CC += len;
        return start;
    } else {
        while (len != 0) {
            chunk = len >= lbl_805D74D8 ? lbl_805D74D8 : len;
            buf = lbl_805D74D4(src, chunk);
            DCFlushRange(buf, chunk);
            TLobby__sub_803BDAE4((u8 *)(buf), (u32)(lbl_805D74CC), (u32)(chunk), (s32)(0), (void *)(0), (void *)(0));
            len -= chunk;
            src += chunk;
            lbl_805D74CC += chunk;
        }
    }
    return start;
}

void TLobby__sub_803BE000(s32 arg0, s32 arg1) {
    lbl_805D74CC -= (arg1 + 0x1F) & 0xFFFFFFE0;
}
void TLobby__sub_803BE0DC(void) {
}

void *TLobby__sub_803BE0E0(u32 arg0) {
    Rec_803BE1EC *p;
    Rec_803BE1EC *found;
    Rec_803BE1EC *prev;
    u32 best;
    u32 size;
    p = lbl_805D74E0;
    size = (arg0 + 0x1F) & ~0x1F;
    found = NULL;
    prev = NULL;
    best = -1;
    while (p != NULL) {
        if (p->fc == size) {
            found = p;
            break;
        }
        if (p->fc > size && best > p->fc) {
            found = p;
            best = p->fc;
        }
        prev = p;
        p = (Rec_803BE1EC *)p->f0;
    }
    if (found == NULL) {
        p = lbl_805D74E4;
        if (p != NULL && (u32)(lbl_805D74D0 - size) >= (u32)lbl_805D74CC) {
            found = p;
            lbl_805D74E4 = (Rec_803BE1EC *)p->f0;
            p->fc = size;
            p->f8 = size;
            lbl_805D74D0 -= size;
            p->f4 = lbl_805D74D0;
            p->f0 = (u32)lbl_805D74DC;
            lbl_805D74DC = p;
        }
    } else {
        if (prev != NULL) {
            prev->f0 = found->f0;
        } else {
            lbl_805D74E0 = (Rec_803BE1EC *)found->f0;
        }
        found->f8 = size;
        found->f0 = (u32)lbl_805D74DC;
        lbl_805D74DC = found;
    }
    if (found == NULL) {
        return (void *)0xFF;
    }
    return (void *)(u8)(found - lbl_8056E660);
}

u32 TLobby__sub_803BE1EC(u8 i, u32 *out) {
    if (out != 0) {
        *out = lbl_8056E660[i].f8;
    }
    return lbl_8056E660[i].f4;
}

#define aramTop lbl_805D74C8
#define aramWrite (*(u32 *)&lbl_805D74CC)
#define aramStream (*(u32 *)&lbl_805D74D0)
#define aramUploadCallback lbl_805D74D4
#define aramUsedStreamBuffers (*(StreamBuffer_803BDCD0 **)&lbl_805D74DC)
#define aramFreeStreamBuffers (*(StreamBuffer_803BDCD0 **)&lbl_805D74E0)
#define aramIdleStreamBuffers (*(StreamBuffer_803BDCD0 **)&lbl_805D74E4)
#define aramQueueLo (lbl_8056E158.lo)
#define aramQueueHi (lbl_8056E158.hi)
#define aramStreamBuffers ((StreamBuffer_803BDCD0 *)lbl_8056E660)
void TLobby__sub_803BE224(u8 id) {
    StreamBuffer_803BDCD0 *fSb;
    StreamBuffer_803BDCD0 *sb;
    StreamBuffer_803BDCD0 *lastSb;
    StreamBuffer_803BDCD0 *nextSb;
    u32 minAddr;

    fSb = &aramStreamBuffers[id];
    lastSb = 0;
    sb = aramUsedStreamBuffers;

    while (sb != 0) {
        if (sb == fSb) {
            if (lastSb != 0) {
                lastSb->next = fSb->next;
            } else {
                aramUsedStreamBuffers = fSb->next;
            }
            break;
        } else {
            lastSb = sb;
            sb = sb->next;
        }
    }

    if (fSb->aram == aramStream) {
        fSb->next = aramIdleStreamBuffers;
        aramIdleStreamBuffers = fSb;
        minAddr = -1;
        sb = aramUsedStreamBuffers;
        while (sb != 0) {
            if (sb->aram <= minAddr) {
                minAddr = sb->aram;
            }
            sb = sb->next;
        }

        lastSb = 0;
        sb = aramFreeStreamBuffers;
        while (sb != 0) {
            nextSb = sb->next;
            if (sb->aram < minAddr) {
                if (lastSb != 0) {
                    lastSb->next = sb->next;
                } else {
                    aramFreeStreamBuffers = sb->next;
                }

                sb->next = aramIdleStreamBuffers;
                aramIdleStreamBuffers = sb;
            }
            sb = nextSb;
        }

        aramStream = minAddr != -1 ? minAddr : aramTop;
        return;
    }
    fSb->next = aramFreeStreamBuffers;
    aramFreeStreamBuffers = fSb;
}
#undef aramTop
#undef aramWrite
#undef aramStream
#undef aramUploadCallback
#undef aramUsedStreamBuffers
#undef aramFreeStreamBuffers
#undef aramIdleStreamBuffers
#undef aramQueueLo
#undef aramQueueHi
#undef aramStreamBuffers
#undef userCallback
#undef salAIBufferBase
#undef salDspIsDone
#undef salLogicIsWaiting
#undef salLogicActive
#undef salLastTick
#undef salAIBufferIndex

}
