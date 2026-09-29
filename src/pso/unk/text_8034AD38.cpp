#include "types.h"
struct Slot_8034AD38 { void *ctrl; u8 pad[0x18]; };

struct TAdFloorLoadPrtGC_8034AD38 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1c[0x34 - 0x1C];
    Slot_8034AD38 slots[32];
};

extern "C" {
void *__dt__7TObjectFv(void *, s16);
void queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
extern void *__vt__17TAdFloorLoadPrtGC[];
TAdFloorLoadPrtGC_8034AD38 *__dt__17TAdFloorLoadPrtGCFv(TAdFloorLoadPrtGC_8034AD38 *self, s16 deleting);
extern s16 lbl_804F0070[];
void fn_8034AED4(s16 arg0);
}

extern "C" {

TAdFloorLoadPrtGC_8034AD38 *__dt__17TAdFloorLoadPrtGCFv(TAdFloorLoadPrtGC_8034AD38 *self, s16 deleting) {
    s32 i;
    if (self) {
        self->vtable = __vt__17TAdFloorLoadPrtGC;
        if (*(void **)((u8 *)self + 0x39C)) {
            queue_destruction__7TObjectFv(*(void **)((u8 *)self + 0x39C));
            *(void **)((u8 *)self + 0x39C) = NULL;
        }
        for (i = 0; i < 32; i++) {
            if (self->slots[i].ctrl) {
                queue_destruction__7TObjectFv(self->slots[i].ctrl);
                self->slots[i].ctrl = NULL;
            }
        }
        __dt__7TObjectFv(self, 0);
        if (deleting > 0) __dl__7TObjectFPv(self);
    }
    return self;
}
void fn_8034AED4(s16 arg0) {
    s32 i;
    if (arg0 != lbl_804F0070[0]) {
        for (i = 15; i > 0; i--) {
            lbl_804F0070[i] = lbl_804F0070[i - 1];
        }
        lbl_804F0070[0] = arg0;
    }
}

}
