#include "types.h"
struct Obj_801D7238 { u8 v; };

extern "C" {
u8 TItemDrop__sub_80107B04(Obj_801D7238 *p);
u8 get_rule_field_0__6TLobbyFPv(Obj_801D7238 *p);
}

extern "C" {

u8 get_rule_field_0__6TLobbyFPv(Obj_801D7238 *p) {
    if (p->v >= 2) {
        return TItemDrop__sub_80107B04(p);
    }
    return p->v;
}

}
