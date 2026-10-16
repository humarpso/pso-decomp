#include "types.h"
#include "pso/ui/TUnk_804F3428.h"
#include "pso/ui/TAdDialingMessageWindow.h"

extern "C" {

void *TAdDialingMessageWindow__sub_8036A0D0(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TUnk_804F3428::run_task() {
    u32 temp_r3;
    void *temp2_r3;

    if ((u32) this->m_20 != 0U) {
        temp_r3 = *(u32 *)((s8 *)this + 0x1C);
        if (temp_r3 != 0U) {
            *(u32 *)((s8 *)this + 0x1C) = (u32) (temp_r3 - 1);
            if ((u32) *(u32 *)((s8 *)this + 0x1C) == 0U) {
                temp2_r3 = *(void * *)&this->m_20;
                if ((u32) temp2_r3 != 0U) {
                    ((TAdDialingMessageWindow *)temp2_r3)->set_flag_and_notify();
                }
            }
        }
        ((TAdDialingMessageWindow *)(this->m_20))->run_child_tasks();
    }
}

extern s32 lbl_804F3428[];

void *TAdDialingMessageWindow__sub_8036A0D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F3428;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804F3428[];

void *TAdDialingMessageWindow::init(void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804F3428;
    *(void * *)&this->m_20 = arg2;
    *(void * *)&this->m_1c = arg3;
    return this;
}

}
