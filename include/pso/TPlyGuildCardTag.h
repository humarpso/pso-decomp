#ifndef PSO_TPLYGUILDCARDTAG_H
#define PSO_TPLYGUILDCARDTAG_H

/* TPlyGuildCardTag - Guild card identification tag.
 * Derived from pso-gc-reference decomp (mrb0nk500).
 *
 * Used throughout the protocol to identify players.
 * Contains a tag triplet + guild card number.
 */

#include "pso/forward.h"
#include "pso/protocol.h"
#include "types.h"

struct gc_tag {
    gc_tag() { init(); };
    ~gc_tag() {};
    void init() {
        tag0 = 0;
        tag1 = 0;
        tag2 = 0;
    };
    void bswap() {
        bswap_16(&tag2);
    };

    u8 tag0;
    u8 tag1;
    u16 tag2;
};

class TPlyGuildCardTag {
public:
    TPlyGuildCardTag();

    TPlyGuildCardTag(u16 tag2, u32 guildcard_number) {
        m_tag0 = 0;
        m_tag1 = 0;
        m_tag2 = tag2;
        m_guildcard_number = guildcard_number;
    };

    int operator==(TPlyGuildCardTag &other) {
        return (m_tag1 == other.m_tag1) &&
               (m_tag2 == other.m_tag2) &&
               (m_guildcard_number == other.m_guildcard_number);
    };

    void bswap();

public:
    u8 m_tag0;
    u8 m_tag1;
    u16 m_tag2;
    u32 m_guildcard_number;
};

#endif
