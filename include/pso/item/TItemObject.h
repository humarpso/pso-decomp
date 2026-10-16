#ifndef PSO_ITEM_TITEMOBJECT_H
#define PSO_ITEM_TITEMOBJECT_H

#include "types.h"
#include <stddef.h>
#include "pso/item/TItem.h"

struct TItemObject : public TItem {
    virtual ~TItemObject();
    virtual void vfunc_44();
    virtual void vfunc_14();
    virtual int vfunc_36();
    virtual void vfunc_31();
    u8 get_tool_pmt_amount_byte();
    u8 sub_80115D7C();
    void*vfunc_9();
    void store_encoded_value(s32 value);
    u32 m_f8;
    s32 encoded_value;
    u8 m_100;
    u8 m_101;
    void copy_and_register_item_data();
    int set_flag_1024();
    u8 *create();
    static s32 call_dispatch(s32 arg0);};

typedef char ItemObjectDataOffset[(offsetof(TItemObject, m_f8) == 0xF8) ? 1 : -1];
typedef char ItemObjectEncodedValueOffset[(offsetof(TItemObject, encoded_value) == 0xFC) ? 1 : -1];
typedef char ItemObjectTypeOffset[(offsetof(TItemObject, m_100) == 0x100) ? 1 : -1];

#endif
