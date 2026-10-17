#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"

struct VObj_8024C820 {
    char pad[0x18];
    virtual void m0(int);
};

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
void TWindowCtrlMain::init_fields() { *(int *)&this->m_name = 0; *(int *)&this->m_flags = 0; *(float *)&this->m_prev = TWindowCtrlMain__data_805DCC18; *(float *)&this->m_next = TWindowCtrlMain__data_805DCC18; *(float *)&this->m_up = TWindowCtrlMain__data_805DCC18; *(float *)&this->m_down = TWindowCtrlMain__data_805DCC1C; *(float*)((char*)this + 0x18) = TWindowCtrlMain__data_805DCC20; }
