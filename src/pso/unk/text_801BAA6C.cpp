#include "types.h"
struct Msg_801BAB1C { u16 cmd; u16 id; s32 value; u8 pad8[8]; };

extern "C" {
s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
void TObjPlayer__sub_801C1890(Msg_801BAB1C *m);
void TObjPlayer__sub_801C18AC(Msg_801BAB1C *m);
void TTecLuker__sub_801BAB1C(void *obj, s32 value);
}

extern "C" {

void TTecLuker__sub_801BAB1C(void *obj, s32 value) {
    if (obj == 0 || obj_isState2_324(obj) == 0) {
        Msg_801BAB1C m;
        TObjPlayer__sub_801C1890(&m);
        m.id = obj_getField1c(obj);
        m.value = value;
        TObjPlayer__sub_801C18AC(&m);
    }
}

}
