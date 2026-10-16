#ifndef PSO_MISC_THUNTERGUILDSEQONLINE_CLIENT_H
#define PSO_MISC_THUNTERGUILDSEQONLINE_CLIENT_H
#include "types.h"
#include "pso/misc/TShopSequence.h"

class THunterGuildSeqOnline_Client : public TShopSequence {
public:
    virtual ~THunterGuildSeqOnline_Client();
    u8 unk_10[0x30];
};
typedef char THunterGuildSeqOnline_Client_size[sizeof(THunterGuildSeqOnline_Client) == 0x40 ? 1 : -1];

#endif
