#include "types.h"
#include "pso/misc/TMainCursor_8013E44C.h"
#include "pso/misc/TMainCursor.h"

extern "C" {
int set_flags__10TObjPlayerFUl(void*, int);

int TMainCursor::is_same_target(void *b) {
    u8 result = 0;
    if (TMainCursor__sub_8013E40C((TMainCursor *)((u8 *)this), ((TMainCursor *)b)->get_id()) != 0) {
        if (((u8)this->get_type()) == ((u8)((TMainCursor *)b)->get_type())) {
            if (((u8)this->get_enabled()) == ((u8)((TMainCursor *)b)->get_enabled())) {
                result = 1;
            }
        }
    }
    return result;
}

int TMainCursor__sub_8013E40C(TMainCursor *arg0, u16 arg1) {
    return (u8) (arg1 == arg0->get_id());
}

}

#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TWindowActionPalette.h"

extern "C" {

void*TMainCursor::get_list() { return (char*)this + 0xc; }
int TMainCursor::update_target_sub() { return set_flags__10TObjPlayerFUl((char*)this + 0x20, 1); }

}
