#ifndef PSO_PROTOCOL_H
#define PSO_PROTOCOL_H

/* PSO network protocol base types.
 * Derived from pso-gc-reference decomp (mrb0nk500).
 */

#include "pso/forward.h"
#include "types.h"

extern void bswap_16(u16 *val);
extern void bswap_32(u32 *val);

struct packet_header {
    u8 command;
    u8 flags;
    u16 size;
    void bswap() { bswap_16(&size); };
};

#endif
