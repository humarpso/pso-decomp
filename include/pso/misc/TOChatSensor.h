#ifndef PSO_MISC_TOCHATSENSOR_H
#define PSO_MISC_TOCHATSENSOR_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOChatSensor : public TUnk_804B9870 {
    virtual ~TOChatSensor();
    u32 m_90;
    u16 m_94;
    u8 _pad96[0xA];
    u32 m_a0;
    u8 _padA4[0x20];
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
    static void dispatch_chat_message_to_children(s32 arg0);
    static void destroy_global();
    void check_player_proximity();
    void set_trigger_text(void *arg1);
    void handle_chat_message(void *arg1);
    void init_params();
    virtual void render();
    virtual void run_task();
    void send_state();
    void swap_state_endian();
    void init_packet_type();
    void send_switch_states();};

typedef char TOChatSensor_size[sizeof(TOChatSensor) == 0xD0 ? 1 : -1];
#endif
