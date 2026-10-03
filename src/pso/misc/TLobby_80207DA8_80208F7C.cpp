#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80208F7C {
    s32 sp8;
    M2C_UNK spC;
    M2C_UNK sp10;
};

extern "C" {
s32 is_area_transfer_pending();
s32 get_floor_map_selection(int, void *);
M2C_UNK load_area_event_set(int, int, int, int);
s32 TLobby__sub_80208F7C(void);
}

extern "C" {

int get_team_state__6TLobbyFPv(void* p);
int TLobby__sub_80208E30(void*);

s32 TLobby__sub_80208F7C(void) {
    Stack_80208F7C stack;
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((get_floor_map_selection((int) (var_r31), (void *) (&stack.sp8)) == 1) && (stack.sp8 >= 0)) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        load_area_event_set((int) (var_r31), (int) (stack.sp8), (int) (stack.spC), (int) (stack.sp10));
        goto block_6;
    }
block_6:
    var_r31 += 1;
    if (var_r31 >= 0x12) {
        return 1;
    }
    goto loop_1;
}

}
