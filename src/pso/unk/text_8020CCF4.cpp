#include "types.h"

extern "C" {
typedef s32 (*Fn_8020CCF4)(void *);
struct Out_8020CCF4 { s32 a; Fn_8020CCF4 fn; };
s32 find_enemy_factory_entry(void *, void *);
s32 construct_enemy_from_set_row(u8 *arg0) {
    Out_8020CCF4 o;
    if (find_enemy_factory_entry(arg0, &o) >= 0) {
        return o.fn(arg0 + 4);
    }
    return 0;
}

}
