#ifndef PSO_TPLYCLIENTCONFIG_H
#define PSO_TPLYCLIENTCONFIG_H

#include "types.h"
#include "pso/macros.h"
#include "pso/protocol.h"

class TPlyClientConfig {
public:
public:
    struct {
        u32 magic[2];
        u32 flags;
        u32 proxy_dst_addr;
        u16 proxy_dst_port;
        u8 mbr_0xe[14];
    } config;
};

#endif
