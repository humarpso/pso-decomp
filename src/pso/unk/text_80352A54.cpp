#include "types.h"

#include <stddef.h>
struct Stack_80352A54 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 trailing_storage[0x11];
};

extern "C" {
u16 TObjPlayer__sub_80100474(void *);
s32 replace_item_with_new_code(void *, void *);
u8 get_slot_count__14TItemProShieldFv(void *);
s32 get_item_flags__10TObjPlayerFv(void *);
void fn_80352A54(s32 arg0);
}

extern "C" {

void fn_80352A54(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80352A54, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_80352A54, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_80352A54, spA) == 0x2) ? 1 : -1];
    Stack_80352A54 stack;
    if ((get_slot_count__14TItemProShieldFv((void *) (arg0)) == 0) && (get_item_flags__10TObjPlayerFv((void *) (arg0)) & 0x100)) {
        stack.sp8 = 3;
        stack.sp9 = 0x17;
        stack.spA = TObjPlayer__sub_80100474((void *) (arg0));
        replace_item_with_new_code((void *) (&stack.sp8), (void *) (arg0));
    }
}

}
