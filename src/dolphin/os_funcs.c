#include "types.h"

extern u32 OSDisableInterrupts(void);
extern void OSRestoreInterrupts(u32 state);
extern void ICFlashInvalidate(void);
extern void DCInvalidateRange(void* addr, u32 nBytes);
extern void func_80012FF0(u32);

typedef void (*DVDCallback)(s32 result, void* block);

typedef struct {
    u8 pad[0x34];
    s32 state;
    DVDCallback cb;
} DVDBlock;

void func_80016558(s32 result, DVDBlock* block) {
    if (block->cb) {
        block->cb(result, block);
    }
}

void func_80013068(u32 arg) {
    OSDisableInterrupts();
    *(volatile u16*)0xCC002002 = 0;
    ICFlashInvalidate();
    func_80012FF0(arg << 3);
}

typedef struct {
    u8 pad[0x0C];
    s32 state;
} StateObj;

s32 func_800183BC(StateObj* obj) {
    u32 state = OSDisableInterrupts();
    s32 val = obj->state;
    if (val == 3) {
        val = 1;
    }
    OSRestoreInterrupts(state);
    return val;
}

typedef struct AINode {
    struct AINode* next;
    struct AINode* prev;
} AINode;

s32 func_80018A7C(void) {
    u32 state = OSDisableInterrupts();
    s32 i;
    AINode* ptr = (AINode*)0x80040BD8;
    for (i = 0; i < 4; i++) {
        if (ptr->next != ptr) {
            OSRestoreInterrupts(state);
            return 1;
        }
        ptr++;
    }
    OSRestoreInterrupts(state);
    return 0;
}

s32 func_80018AD4(AINode* node) {
    u32 state = OSDisableInterrupts();
    AINode* prev = node->prev;
    AINode* next = node->next;
    if (prev == NULL || next == NULL) {
        OSRestoreInterrupts(state);
        return 0;
    }
    prev->next = next;
    next->prev = prev;
    OSRestoreInterrupts(state);
    return 1;
}

s32 func_80018974(s32 channel, AINode* node) {
    u32 state = OSDisableInterrupts();
    AINode* head = (AINode*)(0x80040BD8 + channel * 8);
    AINode* tail = head->prev;
    tail->next = node;
    node->prev = head->prev;
    node->next = head;
    head->prev = node;
    OSRestoreInterrupts(state);
    return 1;
}
