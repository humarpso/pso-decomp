#ifndef PSO_NETWORK_IPV6_NEIGHBOR_DISCOVERY_H
#define PSO_NETWORK_IPV6_NEIGHBOR_DISCOVERY_H

#include "pso/network/IPv6Send.h"
#include <stddef.h>

struct NetIPv6PendingPacket {
    u8 tag[3];
    u8 in_use;
    s16 timer_ticks;
    u8 unknown_06[2];
    NetIPv6SendParameters send_parameters;
    s16 payload_length;
    u8 unknown_32[2];
    u8 *payload;
};

struct NetIPv6NeighborCacheEntry {
    u8 tag[3];
    u8 in_use;
    s16 neighbor_state;
    s16 selection_result;
    s16 interface_id;
    s16 timer_ticks;
    u8 advertisement_flags;
    u8 unknown_0D[3];
    NetIPv6PendingPacket *pending_packet;
    s16 retry_count;
    IPv6Address neighbor_address;
    s16 link_layer_address_length;
    u8 link_layer_address[32];
};

struct NetIPv6DefaultRouterEntry {
    u8 tag[3];
    u8 in_use;
    s16 interface_id;
    s16 reselection_count;
    s16 lifetime_ticks;
    u8 unknown_0A[2];
    s32 reachable_time_ms;
    s32 retransmit_time_ms;
    IPv6Address router_address;
};

typedef char NetIPv6PendingPacket_size_check[
    (sizeof(NetIPv6PendingPacket) == 0x38) ? 1 : -1];
typedef char NetIPv6PendingPacket_timer_check[
    (offsetof(NetIPv6PendingPacket, timer_ticks) == 0x04) ? 1 : -1];
typedef char NetIPv6PendingPacket_parameters_check[
    (offsetof(NetIPv6PendingPacket, send_parameters) == 0x08) ? 1 : -1];
typedef char NetIPv6PendingPacket_length_check[
    (offsetof(NetIPv6PendingPacket, payload_length) == 0x30) ? 1 : -1];
typedef char NetIPv6PendingPacket_payload_check[
    (offsetof(NetIPv6PendingPacket, payload) == 0x34) ? 1 : -1];

typedef char NetIPv6NeighborCacheEntry_size_check[
    (sizeof(NetIPv6NeighborCacheEntry) == 0x48) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_state_check[
    (offsetof(NetIPv6NeighborCacheEntry, neighbor_state) == 0x04) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_selection_check[
    (offsetof(NetIPv6NeighborCacheEntry, selection_result) == 0x06) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_interface_check[
    (offsetof(NetIPv6NeighborCacheEntry, interface_id) == 0x08) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_timer_check[
    (offsetof(NetIPv6NeighborCacheEntry, timer_ticks) == 0x0A) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_flags_check[
    (offsetof(NetIPv6NeighborCacheEntry, advertisement_flags) == 0x0C) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_pending_check[
    (offsetof(NetIPv6NeighborCacheEntry, pending_packet) == 0x10) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_retries_check[
    (offsetof(NetIPv6NeighborCacheEntry, retry_count) == 0x14) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_address_check[
    (offsetof(NetIPv6NeighborCacheEntry, neighbor_address) == 0x16) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_length_check[
    (offsetof(NetIPv6NeighborCacheEntry, link_layer_address_length) == 0x26) ? 1 : -1];
typedef char NetIPv6NeighborCacheEntry_link_address_check[
    (offsetof(NetIPv6NeighborCacheEntry, link_layer_address) == 0x28) ? 1 : -1];

typedef char NetIPv6DefaultRouterEntry_size_check[
    (sizeof(NetIPv6DefaultRouterEntry) == 0x24) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_interface_check[
    (offsetof(NetIPv6DefaultRouterEntry, interface_id) == 0x04) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_reselection_check[
    (offsetof(NetIPv6DefaultRouterEntry, reselection_count) == 0x06) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_lifetime_check[
    (offsetof(NetIPv6DefaultRouterEntry, lifetime_ticks) == 0x08) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_reachable_check[
    (offsetof(NetIPv6DefaultRouterEntry, reachable_time_ms) == 0x0C) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_retransmit_check[
    (offsetof(NetIPv6DefaultRouterEntry, retransmit_time_ms) == 0x10) ? 1 : -1];
typedef char NetIPv6DefaultRouterEntry_address_check[
    (offsetof(NetIPv6DefaultRouterEntry, router_address) == 0x14) ? 1 : -1];

#endif
