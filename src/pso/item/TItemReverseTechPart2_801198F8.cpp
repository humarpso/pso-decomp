#include "types.h"
#include "pso/item/TItemReverseTechBG.h"
#include "pso/item/TItemReverseTechPart2_801198F8.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/TItemReverseTechPart2.h"

extern "C" {

u32 __nw__7TObjectFUl(s32);

void TItemReverseTechPart2::render() {  }

void run_task__21TItemReverseTechPart2Fv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *nw;

    if ((*(s32 *)((s8 *)arg0 + 0x150) % 360) == 0) {
        if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
            __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x74);
        }
        if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
            __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xA0);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x154) < 0xC) {
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x150);
        if ((temp_r3 >= 0x78) && (((temp_r3 - 0x78) % 720) == 0)) {
            *(s32 *)((s8 *)arg0 + 0x28) = 0xC;
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x1C);
            }
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x48);
            }
            *(s32 *)((s8 *)arg0 + 0xD8) = (s32) *(s32 *)((s8 *)arg0 + 0x154);
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xCC);
            }
            *(s32 *)((s8 *)arg0 + 0x154) = (s32) (*(s32 *)((s8 *)arg0 + 0x154) + 1);
        }
        temp_r3_2 = *(s32 *)((s8 *)arg0 + 0x150);
        if ((temp_r3_2 >= 0x1E0) && (((temp_r3_2 - 0x1E0) % 720) == 0)) {
            *(s32 *)((s8 *)arg0 + 0x28) = 0xD;
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x1C);
            }
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x48);
            }
            *(s32 *)((s8 *)arg0 + 0x104) = (s32) *(s32 *)((s8 *)arg0 + 0x154);
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xF8);
            }
            *(s32 *)((s8 *)arg0 + 0x154) = (s32) (*(s32 *)((s8 *)arg0 + 0x154) + 1);
        }
        goto block_26;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x14) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
block_26:
    *(s32 *)((s8 *)arg0 + 0x150) = (s32) (*(s32 *)((s8 *)arg0 + 0x150) + 1);
}

}
