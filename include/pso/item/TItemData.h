#ifndef PSO_ITEM_TITEMDATA_H
#define PSO_ITEM_TITEMDATA_H

#include "types.h"
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
        u16 data_u16[2];
        u32 data_u32;
    } data2;
};

#include <stddef.h>
typedef char ItemDataSize[(sizeof(TItemData) == 0x14) ? 1 : -1];
typedef char ItemDataIDOffset[(offsetof(TItemData, id) == 0xC) ? 1 : -1];
typedef char ItemDataExtensionOffset[(offsetof(TItemData, data2) == 0x10) ? 1 : -1];
#endif
