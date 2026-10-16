#ifndef PSO_MISC_THUNTERGUILDSEQONLINE_SERVER_H
#define PSO_MISC_THUNTERGUILDSEQONLINE_SERVER_H
#include "types.h"
#include "pso/misc/TShopSequence.h"

class THunterGuildSeqOnline_Server : public TShopSequence {
public:
    virtual ~THunterGuildSeqOnline_Server();
    u8 unk_10[0x34];
};
typedef char THunterGuildSeqOnline_Server_size[sizeof(THunterGuildSeqOnline_Server) == 0x44 ? 1 : -1];

#endif
