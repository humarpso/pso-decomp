#include <dolphin/dolphin.h>
#include <dolphin/os.h>

#include "__os.h"

struct Timer {
    OSTimerCallback callback;
    u32 currval;
    u32 startval;
    u32 mode;
    BOOL stopped;
    BOOL initialized;
};
static struct Timer Timer;


static void DecrementerExceptionHandler(__OSException exception, OSContext* context);

OSTimerCallback OSSetTimerCallback(OSTimerCallback callback) {
    OSTimerCallback prevCallback;

#if DEBUG
    if(!Timer.initialized) {
        OSPanic(__FILE__, 135, "OSSetTimerCallback(): timer is not initialized.");
    }
#endif

    Timer.stopped = TRUE;
    prevCallback = Timer.callback;
    Timer.callback = callback;
    return prevCallback;
}

void OSInitTimer(u32 time, u32 mode) {
#if DEBUG
    if (time >= 0x80000000) {
        OSPanic(__FILE__, 159, "OSInitTimer(): time param must be less than 0x80000000.");
    }
#endif

    Timer.stopped = TRUE;
    Timer.currval = time;
    Timer.startval = time;
    Timer.mode = mode;

    if (!Timer.initialized) {
        __OSSetExceptionHandler(8, &DecrementerExceptionHandler);
        Timer.initialized = TRUE;
        Timer.callback = 0;
#if DEBUG
        OSReport("Timer initialized\n");
#endif
    }
}

void OSStartTimer(void) {
    BOOL enabled;

#if DEBUG
    if (!Timer.initialized) {
        OSPanic(__FILE__, 192, "OSStartTimer(): timer is not initialized.");
    }
#endif
    enabled = OSDisableInterrupts();
    PPCMtdec(Timer.currval);
    Timer.stopped = FALSE;
    OSRestoreInterrupts(enabled);
}

void OSStopTimer(void) {
    BOOL enabled;

#if DEBUG
    if (!Timer.initialized) {
        OSPanic(__FILE__, 216, "OSStopTimer(): timer is not initialized.");
    }
#endif

    enabled = OSDisableInterrupts();
    if (!Timer.stopped) {
        Timer.stopped = TRUE;
        Timer.currval = PPCMfdec();
        if (Timer.currval & 0x80000000) {
            Timer.currval = 0;
        }
    }
    OSRestoreInterrupts(enabled);
}

static void DecrementerExceptionCallback(__OSException exception, OSContext* context) {
    OSContext exceptionContext;

    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);

    if (!Timer.stopped) {
        if (Timer.mode == 1) {
            PPCMtdec(Timer.startval);
        }
        if (Timer.mode == 2) {
            Timer.stopped = TRUE;
        }
        if (Timer.callback) {
            Timer.callback();
        }
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
    OSLoadContext(context);
}

#ifdef __GEKKO__
static asm void DecrementerExceptionHandler(__OSException exception,
                                            __REGISTER OSContext* context) {
#include "orig_asm/os/OSTimer/DecrementerExceptionHandler.inc"
}
#endif
