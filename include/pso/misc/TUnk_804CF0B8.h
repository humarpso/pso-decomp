#ifndef PSO_MISC_TUNK_804CF0B8_H
#define PSO_MISC_TUNK_804CF0B8_H
#include "types.h"
#include "pso/misc/TUnk_804CDFE8.h"

class TUnk_804CF0B8 : public TUnk_804CDFE8 {
public:
    virtual ~TUnk_804CF0B8();
    int is_balloon_visible();
    int is_active();
    void clear_flag_20();
    int is_flag_set();
    void sub_80252C68();
    void set_flag();
    void clear_visible_flag();
    void clear_flag2c_bit100();
    void set_flag2c_bit200();
    void clear_flag2c_bit200();
    void set_flag2c_bit100();
    u8 unk_1C[0x7C];
};
typedef char TUnk_804CF0B8_size[sizeof(TUnk_804CF0B8) == 0x98 ? 1 : -1];

#endif
