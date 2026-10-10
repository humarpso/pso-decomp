#ifndef PSO_NETWORK_IPV6_H
#define PSO_NETWORK_IPV6_H

#include "types.h"
#include <stddef.h>

struct IPv6Address {
    u8 bytes[16];
};

struct IPv6NeighborSolicitation {
    u8 header[8];
    IPv6Address target;
};

typedef char IPv6Address_size_check[(sizeof(IPv6Address) == 16) ? 1 : -1];
typedef char IPv6NeighborSolicitation_size_check[
    (sizeof(IPv6NeighborSolicitation) == 24) ? 1 : -1];
typedef char IPv6NeighborSolicitation_target_check[
    (offsetof(IPv6NeighborSolicitation, target) == 8) ? 1 : -1];

#endif
