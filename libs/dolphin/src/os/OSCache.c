#include <dolphin/dolphin.h>
#include <dolphin/db.h>
#include <dolphin/os.h>

#include "os/__os.h"

#define HID2 920


void DMAErrorHandler(OSError error, OSContext* context, ...);

#ifdef __GEKKO__
asm void DCFlashInvalidate(void) {
#include "orig_asm/os/OSCache/DCFlashInvalidate.inc"
}

asm void DCEnable(void) {
#include "orig_asm/os/OSCache/DCEnable.inc"
}

asm void DCDisable(void) {
#include "orig_asm/os/OSCache/DCDisable.inc"
}

asm void DCFreeze(void) {
#include "orig_asm/os/OSCache/DCFreeze.inc"
}

asm void DCUnfreeze(void) {
#include "orig_asm/os/OSCache/DCUnfreeze.inc"
}

asm void DCTouchLoad(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/DCTouchLoad.inc"
}

asm void DCBlockZero(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/DCBlockZero.inc"
}

asm void DCBlockStore(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/DCBlockStore.inc"
}

asm void DCBlockFlush(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/DCBlockFlush.inc"
}

asm void DCBlockInvalidate(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/DCBlockInvalidate.inc"
}

asm void DCInvalidateRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCInvalidateRange.inc"
}

asm void DCFlushRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCFlushRange.inc"
}

asm void DCStoreRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCStoreRange.inc"
}

asm void DCFlushRangeNoSync(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCFlushRangeNoSync.inc"
}

asm void DCStoreRangeNoSync(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCStoreRangeNoSync.inc"
}

asm void DCZeroRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCZeroRange.inc"
}

asm void DCTouchRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/DCTouchRange.inc"
}

asm void ICInvalidateRange(__REGISTER void* addr, __REGISTER u32 nBytes) {
#include "orig_asm/os/OSCache/ICInvalidateRange.inc"
}

asm void ICFlashInvalidate(void) {
#include "orig_asm/os/OSCache/ICFlashInvalidate.inc"
}

asm void ICEnable(void) {
#include "orig_asm/os/OSCache/ICEnable.inc"
}

asm void ICDisable(void) {
#include "orig_asm/os/OSCache/ICDisable.inc"
}

asm void ICFreeze(void) {
#include "orig_asm/os/OSCache/ICFreeze.inc"
}

asm void ICUnfreeze(void) {
#include "orig_asm/os/OSCache/ICUnfreeze.inc"
}

asm void ICBlockInvalidate(__REGISTER void* addr) {
#include "orig_asm/os/OSCache/ICBlockInvalidate.inc"
}

asm void ICSync(void) {
#include "orig_asm/os/OSCache/ICSync.inc"
}

#define LC_LINES    512
#define CACHE_LINES 1024

static asm void __LCEnable(void) {
#include "orig_asm/os/OSCache/__LCEnable.inc"
}

void LCEnable(void) {
    BOOL enabled;

    enabled = OSDisableInterrupts();
    __LCEnable();
    OSRestoreInterrupts(enabled);
}

asm void LCDisable(void) {
#include "orig_asm/os/OSCache/LCDisable.inc"
}

asm void LCAllocOneTag(__REGISTER BOOL invalidate, __REGISTER void* tag) {
#include "orig_asm/os/OSCache/LCAllocOneTag.inc"
}

asm void LCAllocTags(__REGISTER BOOL invalidate, __REGISTER void* startTag, __REGISTER u32 numBlocks) {
#include "orig_asm/os/OSCache/LCAllocTags.inc"
}

asm void LCLoadBlocks(__REGISTER void* destTag, __REGISTER void* srcAddr, __REGISTER u32 numBlocks) {
#include "orig_asm/os/OSCache/LCLoadBlocks.inc"
}

asm void LCStoreBlocks(__REGISTER void* destAddr, __REGISTER void* srcTag, __REGISTER u32 numBlocks) {
#include "orig_asm/os/OSCache/LCStoreBlocks.inc"
}
#endif

void LCAlloc(void* addr, u32 nBytes) {
    u32 numBlocks = nBytes >> 5;
    u32 hid2 = PPCMfhid2();

    ASSERTMSGLINE(1319, !((u32)addr & 31), "LCAlloc(): addr must be 32 byte aligned");
    ASSERTMSGLINE(1321, !((u32)nBytes & 31), "LCAlloc(): nBytes must be 32 byte aligned");

    if ((hid2 & 0x10000000) == 0) {
        LCEnable();
    }
    LCAllocTags(TRUE, addr, numBlocks);
}

void LCAllocNoInvalidate(void* addr, u32 nBytes) {
    u32 numBlocks = nBytes >> 5;
    u32 hid2 = PPCMfhid2();

    ASSERTMSGLINE(1366, !((u32)addr & 31), "LCAllocNoFlush(): addr must be 32 byte aligned");
    ASSERTMSGLINE(1368, !((u32)nBytes & 31), "LCAllocNoFlush(): nBytes must be 32 byte aligned");

    if ((hid2 & 0x10000000) == 0) {
        LCEnable();
    }
    LCAllocTags(FALSE, addr, numBlocks);
}

u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes) {
    u32 numBlocks = (nBytes + 31) / 32;
    u32 numTransactions = (numBlocks + 128 - 1) / 128;

    ASSERTMSGLINE(1426, !((u32)srcAddr & 31), "LCLoadData(): srcAddr not 32 byte aligned");
    ASSERTMSGLINE(1428, !((u32)destAddr & 31), "LCLoadData(): destAddr not 32 byte aligned");

    while (numBlocks > 0) {
        if (numBlocks < 128) {
            LCLoadBlocks(destAddr, srcAddr, numBlocks);
            numBlocks = 0;
        } else {
            LCLoadBlocks(destAddr, srcAddr, 0);
            numBlocks -= 128;
            destAddr = (void*)((u32)destAddr + 4096);
            srcAddr = (void*)((u32)srcAddr + 4096);
        }
    }

    return numTransactions;
}

u32 LCStoreData(void* destAddr, void* srcAddr, u32 nBytes) {
    u32 numBlocks = (nBytes + 31) / 32;
    u32 numTransactions = (numBlocks + 128 - 1) / 128;

    ASSERTMSGLINE(1494, !((u32)srcAddr & 31), "LCStoreData(): srcAddr not 32 byte aligned");
    ASSERTMSGLINE(1496, !((u32)destAddr & 31), "LCStoreData(): destAddr not 32 byte aligned");

    while (numBlocks > 0) {
        if (numBlocks < 128) {
            LCStoreBlocks(destAddr, srcAddr, numBlocks);
            numBlocks = 0;
        } else {
            LCStoreBlocks(destAddr, srcAddr, 0);
            numBlocks -= 128;
            destAddr = (void*)((u32)destAddr + 4096);
            srcAddr = (void*)((u32)srcAddr + 4096);
        }
    }

    return numTransactions;
}

#ifdef __GEKKO__
asm u32 LCQueueLength(void) {
#include "orig_asm/os/OSCache/LCQueueLength.inc"
}

asm void LCQueueWait(__REGISTER u32 len) {
#include "orig_asm/os/OSCache/LCQueueWait.inc"
}
#endif

void LCFlushQueue() {
    union {
        u32 val;
        struct {
            u32 lcAddr : 27;
            u32 dmaLd : 1;
            u32 dmaLenL : 2;
            u32 dmaTrigger : 1;
            u32 dmaFlush : 1;
        } f;
    } dmaL;

    dmaL.val = 0;
    dmaL.f.dmaFlush = 1;
    PPCMtdmaU(0);
    PPCMtdmaL(dmaL.val);
    PPCSync();
}

static void L2Init(void) {
    u32 oldMSR;
    oldMSR = PPCMfmsr();
    __sync();
    PPCMtmsr(MSR_IR | MSR_DR);
    __sync();
    L2Disable();
    L2GlobalInvalidate();
    PPCMtmsr(oldMSR);
}

void L2Enable(void) {
    PPCMtl2cr((PPCMfl2cr() | L2CR_L2E) & ~L2CR_L2I);
}

void L2Disable(void) {
    __sync();
    PPCMtl2cr(PPCMfl2cr() & ~0x80000000);
    __sync();
}

void L2GlobalInvalidate(void) {
    L2Disable();
    PPCMtl2cr(PPCMfl2cr() | 0x00200000);
    while (PPCMfl2cr() & 0x00000001u);

    PPCMtl2cr(PPCMfl2cr() & ~0x00200000);
    while (PPCMfl2cr() & 0x00000001u) {
        DBPrintf(">>> L2 INVALIDATE : SHOULD NEVER HAPPEN\n");
    }
}

void L2SetDataOnly(BOOL dataOnly) {
    if (dataOnly) {
        PPCMtl2cr(PPCMfl2cr() | 0x400000);
        return;
    }
    PPCMtl2cr(PPCMfl2cr() & 0xFFBFFFFF);
}

void L2SetWriteThrough(BOOL writeThrough) {
    if (writeThrough) {
        PPCMtl2cr(PPCMfl2cr() | 0x80000);
        return;
    }
    PPCMtl2cr(PPCMfl2cr() & 0xFFF7FFFF);
}

void DMAErrorHandler(OSError error, OSContext* context, ...) {
    u32 hid2 = PPCMfhid2();

    OSReport("Machine check received\n");
    OSReport("HID2 = 0x%x   SRR1 = 0x%x\n", hid2, context->srr1);
    if (!(hid2 & (HID2_DCHERR | HID2_DNCERR | HID2_DCMERR | HID2_DQOERR)) || !(context->srr1 & SRR1_DMA_BIT)) {
        OSReport("Machine check was not DMA/locked cache related\n");
        OSDumpContext(context);
        PPCHalt();
    }

    OSReport("DMAErrorHandler(): An error occurred while processing DMA.\n");
    OSReport("The following errors have been detected and cleared :\n");

    if (hid2 & HID2_DCHERR) {
        OSReport("\t- Requested a locked cache tag that was already in the cache\n");
    }

    if (hid2 & HID2_DNCERR) {
        OSReport("\t- DMA attempted to access normal cache\n");
    }

    if (hid2 & HID2_DCMERR) {
        OSReport("\t- DMA missed in data cache\n");
    }

    if (hid2 & HID2_DQOERR) {
        OSReport("\t- DMA queue overflowed\n");
    }


    PPCMthid2(hid2);
}

void __OSCacheInit() {
    if (!(PPCMfhid0() & HID0_ICE)) {
        ICEnable();
        DBPrintf("L1 i-caches initialized\n");
    }

    if (!(PPCMfhid0() & HID0_DCE)) {
        DCEnable();
        DBPrintf("L1 d-caches initialized\n");
    }

    if (!(PPCMfl2cr() & L2CR_L2E)) {
        L2Init();
        L2Enable();
        DBPrintf("L2 cache initialized\n");
    }

    OSSetErrorHandler(OS_ERROR_MACHINE_CHECK, DMAErrorHandler);
    DBPrintf("Locked cache machine check handler installed\n");
}
