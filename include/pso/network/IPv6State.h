#ifndef PSO_NETWORK_IPV6_STATE_H
#define PSO_NETWORK_IPV6_STATE_H

#include "pso/network/IPv6.h"
#include <stddef.h>

struct NetIPv6ProtocolEntry;
struct NetIPv6PendingPacket;
struct NetIPv6NeighborCacheEntry;
struct NetIPv6DefaultRouterEntry;

struct NetIPv6PacketHeader {
    u32 version_traffic_class_flow_label;
    u16 payload_length;
    u8 next_header;
    u8 hop_limit;
    IPv6Address source;
    IPv6Address destination;
};

struct NetIPv6ProtocolState {
    s16 protocol_entry_count;
    u8 unknown_02[2];
    struct NetIPv6ProtocolEntry *protocol_entries;
    u32 fragment_identification;
    u16 default_traffic_class_bits;
    u8 unknown_0E[2];
    u32 default_flow_label;
    u8 default_hop_limit;
    u8 unknown_15[3];
    NetIPv6PacketHeader outgoing_header;
};

struct NetIPv6NeighborDiscoveryState {
    s16 pending_packet_count;
    s16 neighbor_cache_count;
    s16 default_router_count;
    u8 unknown_06[2];
    NetIPv6PendingPacket *pending_packets;
    NetIPv6NeighborCacheEntry *neighbors;
    NetIPv6DefaultRouterEntry *default_routers;
    s16 pending_payload_capacity;
    u8 unknown_16[2];
    u8 *pending_payload_storage;
    s16 multicast_probe_limit;
    s16 unicast_probe_limit;
    s16 parameter_20;
    s16 parameter_22;
    s16 stale_lifetime_ticks;
    s16 reachable_time_ticks;
    s16 retransmit_ticks;
    s16 initial_probe_timeout_ticks;
    s16 delay_before_probe_ticks;
    u8 unknown_2E[2];
};

#define IPV6_STATE_OFFSET(type, member, value) \
    typedef char type##_##member##_offset[(offsetof(type, member) == value) ? 1 : -1]
IPV6_STATE_OFFSET(NetIPv6PacketHeader, payload_length, 0x04);
IPV6_STATE_OFFSET(NetIPv6PacketHeader, next_header, 0x06);
IPV6_STATE_OFFSET(NetIPv6PacketHeader, hop_limit, 0x07);
IPV6_STATE_OFFSET(NetIPv6PacketHeader, source, 0x08);
IPV6_STATE_OFFSET(NetIPv6PacketHeader, destination, 0x18);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, protocol_entries, 0x04);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, fragment_identification, 0x08);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, default_traffic_class_bits, 0x0C);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, default_flow_label, 0x10);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, default_hop_limit, 0x14);
IPV6_STATE_OFFSET(NetIPv6ProtocolState, outgoing_header, 0x18);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, neighbor_cache_count, 0x02);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, default_router_count, 0x04);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, pending_packets, 0x08);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, neighbors, 0x0C);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, default_routers, 0x10);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, pending_payload_capacity, 0x14);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, pending_payload_storage, 0x18);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, multicast_probe_limit, 0x1C);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, unicast_probe_limit, 0x1E);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, parameter_20, 0x20);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, parameter_22, 0x22);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, stale_lifetime_ticks, 0x24);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, reachable_time_ticks, 0x26);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, retransmit_ticks, 0x28);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, initial_probe_timeout_ticks, 0x2A);
IPV6_STATE_OFFSET(NetIPv6NeighborDiscoveryState, delay_before_probe_ticks, 0x2C);
#undef IPV6_STATE_OFFSET

typedef char NetIPv6PacketHeader_size[(sizeof(NetIPv6PacketHeader) == 0x28) ? 1 : -1];
typedef char NetIPv6ProtocolState_size[(sizeof(NetIPv6ProtocolState) == 0x40) ? 1 : -1];
typedef char NetIPv6NeighborDiscoveryState_size[(sizeof(NetIPv6NeighborDiscoveryState) == 0x30) ? 1 : -1];

#endif
