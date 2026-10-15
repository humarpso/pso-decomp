#include "types.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

void *TRaderMapCore__sub_801FB9C8(void *arg0, s16 arg1);
s32 get_bml_model(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

    extern const float TRaderMapCore__data_805DC528;
    extern const float TRaderMapCore__data_805DC534;
void TRaderMapCore::reset() { *(float*)((char*)this + 0x8) = TRaderMapCore__data_805DC528; *(float*)((char*)this + 0x4) = TRaderMapCore__data_805DC528; *(float*)((char*)this + 0x0) = TRaderMapCore__data_805DC528; *(int*)((char*)this + 0xc) = 0; *(float*)((char*)this + 0x10) = TRaderMapCore__data_805DC534; *(short*)((char*)this + 0x14) = 0; *(short*)((char*)this + 0x16) = -1; *(float*)((char*)this + 0x24) = TRaderMapCore__data_805DC534; *(float*)((char*)this + 0x20) = TRaderMapCore__data_805DC534; *(float*)((char*)this + 0x1c) = TRaderMapCore__data_805DC534; *(float*)((char*)this + 0x18) = TRaderMapCore__data_805DC534; }

extern s32 TRaderMapCore__frame_model_resource;

void TRaderMapCore::init_map_ptr() {
    get_bml_model(TRaderMapCore__frame_model_resource);
}

extern s32 lbl_804C88A8[];

void *TRaderMapCore__sub_801FB9C8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C88A8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
