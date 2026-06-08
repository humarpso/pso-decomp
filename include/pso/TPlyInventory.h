#ifndef PSO_TPLYINVENTORY_H
#define PSO_TPLYINVENTORY_H

#include "types.h"
#include "pso/macros.h"
#include "pso/protocol.h"

struct TItemData {
    void init() {
        data1.data_u8[0] = 0;
        data1.data_u8[1] = 0;
        data1.data_u8[2] = 0;
        data1.data_u8[3] = 0;
        data1.data_u8[4] = 0;
        data1.data_u8[5] = 0;
        data2.data_u32 = 0;
        for (int i = 0; i < 3; ++i) {
            data1.data_u8_pair[3+i][0] = 0;
            data1.data_u8_pair[3+i][1] = 0;
        }
        id = -1;
    };
    void bswap() {
        bswap_32(&data2.data_u32);
        bswap_32(&id);
    };

    union {
        u8 data_u8[12];
        u8 data_u8_pair[6][2];
        u16 data_u16[6];
        u32 data_u32[3];
    } data1;
    u32 id;
    union {
        u8 data_u8[4];
        u8 data_u16[2];
        u32 data_u32;
    } data2;
};

class TPlyInventoryItem {
public:
    void init() {
        m_present[0] = 0;
        m_present[1] = -1;
        m_flags = 0;
        m_present[3] = 0;
        m_present[2] = 0;
        m_data.init();
    };
    void bswap() {
        bswap_32(&m_flags);
        m_data.bswap();
    };
public:
    char m_present[4];
    u32 m_flags;
    TItemData m_data;
};

class TPlyInventory {
public:
    void bswap();
public:
    u8 m_num_items;
    u8 m_hp_materials_used;
    u8 m_tp_materials_used;
    u8 m_language;
    TPlyInventoryItem m_items[30];
};

#endif
