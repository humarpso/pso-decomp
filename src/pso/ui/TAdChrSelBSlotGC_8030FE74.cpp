#include "types.h"
#include "pso/ui/TAdChrSelBSlotGC.h"

extern "C" {

void *__dt__16TAdChrSelBSlotGCFv(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
void queue_destruction__7TObjectFv(void *arg0);

extern void *__vt__16TAdChrSelBSlotGC[];

void *__dt__16TAdChrSelBSlotGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = __vt__16TAdChrSelBSlotGC;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_44 != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x44));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_44 = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x48) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x48));
            *(u32 *)((s8 *)arg0 + 0x48) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_4c != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x4C));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_4c = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x50) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x50));
            *(u32 *)((s8 *)arg0 + 0x50) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_54 != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x54));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_54 = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x58));
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_5c != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x5C));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_5c = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x60));
            *(u32 *)((s8 *)arg0 + 0x60) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_64 != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x64));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_64 = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_6c != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x6C));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_6c = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x70) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_74 != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x74));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_74 = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x78));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        if ((u32) *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_7c != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x7C));
            *(u32 *)&((TAdChrSelBSlotGC *)arg0)->m_7c = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
