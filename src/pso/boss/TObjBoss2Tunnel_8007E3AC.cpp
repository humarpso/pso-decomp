#include "types.h"

extern "C" {

int __dl__FPv();

s32 maybe_delete__15TObjBoss2TunnelFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

int reset_coords__15TObjBoss2TunnelFPv();

s32 reset_coords_pass__15TObjBoss2TunnelFi(s32 arg0) {
    reset_coords__15TObjBoss2TunnelFPv();
    return arg0;
}

}
