#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"

struct VObj_8024C820 {
    char pad[0x18];
    virtual void m0(int);
};

extern "C" {

void TWindowCtrlMain::release_ptr(void **arg0) {
    VObj_8024C820 *obj = (VObj_8024C820 *)*arg0;
    if (obj) {
        if (obj) {
            obj->m0(1);
        }
        *arg0 = NULL;
    }
}

    extern const float TWindowCtrlMain__data_805DCC18;
    extern const float TWindowCtrlMain__data_805DCC1C;
    extern const float TWindowCtrlMain__data_805DCC20;
void TWindowCtrlMain::init_fields() { *(int*)((char*)this + 0x0) = 0; *(int*)((char*)this + 0x4) = 0; *(float*)((char*)this + 0x8) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)this + 0xc) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)this + 0x10) = TWindowCtrlMain__data_805DCC18; *(float*)((char*)this + 0x14) = TWindowCtrlMain__data_805DCC1C; *(float*)((char*)this + 0x18) = TWindowCtrlMain__data_805DCC20; }

}
