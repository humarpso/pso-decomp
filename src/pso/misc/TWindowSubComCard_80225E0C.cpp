#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 strncmp(void *, void *, s32);
void TWindowSubComCard__sub_80225E80(char *, char *);
s32 memset(void *, s32, s32);
s32 strncpy(void *, s32, s32);

const char profanity_word_mask[] = "#!@%#!@%#!@%#!@%#!@%#!@%#!@%#!@%#!@%";

char profanity_word_table[258][20] = {
    "adulterine",
    " anal ",
    " anus",
    "a s s h o l e",
    "asshole",
    "assfuker",
    "ass hole",
    " ass ",
    "aureol",
    "balls",
    "basttard",
    "bastard",
    "bisexual",
    "biatch",
    " bitch",
    "blow",
    "boff ",
    "bondage",
    "boner",
    "boob",
    "bo0b",
    "b0ob",
    "b00b",
    "bosch",
    "bosom",
    "breast",
    "bugger",
    "butthole butt ",
    "capon",
    "chink",
    "chinga",
    "clart",
    "cleft",
    "clitoris",
    "clit",
    "clutch",
    "cocksucker",
    "cock",
    "coolie",
    "coochie",
    "copulate",
    " copul ",
    "crap",
    "crotch",
    "c--u--m",
    "cumm",
    " cum ",
    "cunni",
    "cunny",
    "cunt",
    "dago",
    "damn",
    "dick",
    "dike",
    "dildo",
    "dingus",
    "dong",
    "douche",
    "dumbass",
    "eyetie",
    "f u c k",
    "f-a-g",
    "faggot",
    "fag",
    " fanny ",
    "fart",
    "felch",
    "fellat",
    "f#ck",
    "f#in",
    "f--k",
    "f-ck",
    "f^ck",
    "f.uck",
    "firk",
    "flcuk",
    "fluck",
    "foreskin",
    "frig",
    "frisky",
    "f-u-c-k",
    "f-u",
    "fu--c-k",
    "fu-ck",
    "fu_ck",
    "fu<k",
    "fuck",
    "fuker",
    " fuc ",
    " fud ",
    " fuk ",
    "fudgepacker",
    "fuhqer",
    " fuq ",
    "fvck",
    "gamy",
    "ginch",
    "glans",
    "gonad",
    "gook",
    " hell ",
    "hoes",
    " hoe ",
    "homo",
    "honkey",
    "honkay",
    "hooker",
    "hooter",
    "horny",
    " ho ",
    " jap ",
    "jism",
    "jugs",
    " kkk ",
    "kcid",
    "kcuf",
    "kike",
    "knocker",
    "kraut",
    "kunt",
    "labia",
    "laid",
    "lezbo",
    "marijuana",
    " masterbate ",
    "mstb",
    "msteb",
    "mastb",
    "masteb",
    "mstb",
    "mastb",
    "mstrb",
    "mastrb",
    "mstb",
    "mastb",
    "mstib",
    "mastib",
    "man/boy",
    "man-boy",
    "man/goo",
    "man-goo",
    "man goo",
    "maricones",
    "menstr",
    "motherfucker",
    "mutherfucker",
    "muthafucca",
    "nambla",
    "negra",
    "negro",
    "ni&&a",
    "nigga",
    "nigger",
    "nignog",
    "nigra",
    "nipple",
    " nip ",
    "nutsack",
    " orgy ",
    "paddy",
    "pecker",
    "pedophile",
    " pedo",
    "pen1s",
    "penile",
    "penis",
    "penetration",
    "phuche",
    "phuck",
    "p1mp",
    "pimp",
    " piss",
    "pms",
    "polock",
    "poontang",
    "poop",
    "porno",
    "porn",
    " prat ",
    "prick",
    "prik",
    "prosser",
    "prostitute",
    "pubic",
    " pud ",
    "pussy",
    "puto",
    "puta",
    " putz ",
    "queer",
    "quiff",
    "quim",
    "rape",
    " ream ",
    "rectum",
    "rim job",
    "rim-job",
    "rim/job",
    "riser",
    "ruttish",
    "sambo",
    "schlong",
    "screw",
    "scutz",
    "semen",
    "shag",
    "sh!t",
    "sh1t",
    "shieeeet",
    "sh-t",
    "shitty",
    " shit ",
    " shet ",
    "shlt",
    " sht ",
    "shiznit",
    "shlong",
    "shvontz",
    "sex",
    "slut",
    "smegma",
    " smeg",
    "snatch",
    " sodom",
    "sperm",
    "spooge",
    "spurm",
    "spic",
    "spume",
    "squeaker",
    "teat",
    "testicle",
    "throb",
    "tihs",
    "titties",
    "titty tits ",
    " tit ",
    "tnuc",
    " transv",
    "toute",
    "tumple",
    "turd",
    "twat",
    "twat",
    " urine ",
    "vagina",
    "vagita",
    " vag ",
    "vulva",
    " wank",
    "wanger",
    "weed",
    "wetback",
    "whitey",
    "whore",
    "wh0r3s",
    "wh0re",
    "",
};

void TWindowSubComCard::submit_card_password(s32 arg0) {
    char name[0x11];
    char sp8[0x11];

    memset(name, 0, 0x11);
    memset(sp8, 0, 0x11);
    strncpy(name, arg0, 0x10);
    TWindowSubComCard__sub_80225E80(name, sp8);
    strncmp(name, sp8, 0x10);
}

void TWindowSubComCard__sub_80225E80(char *src, char *dst) {
    char buf[0x108];
    const char *mask = profanity_word_mask;
    s32 i;
    s32 j;
    s32 k;
    s32 l;
    s32 m;
    s32 pos;
    char *word;

    i = 0;
    buf[0] = ' ';
    while (src[i] != 0) {
        char c = src[i];
        u8 alpha = 0;
        s32 lc;
        if (c >= 'A' && c <= 'z') {
            alpha = 1;
        }
        lc = c;
        if (alpha) {
            lc = (lc & 0x5F) + 0x20;
        }
        dst[i] = c;
        buf[i + 1] = lc;
        i++;
    }
    buf[i + 1] = ' ';
    buf[i + 2] = 0;
    dst[i] = 0;

    for (j = 0; profanity_word_table[j][0] != 0; j++) {
        word = profanity_word_table[j];
        do {
            pos = -1;
            for (k = 0; buf[k] != 0; k++) {
                for (l = k, m = 0; buf[l] == word[m]; l++, m++) {
                    if (word[m + 1] == 0) {
                        pos = k;
                    }
                }
            }
            if (pos >= 0) {
                for (k = 0; word[k] != 0; k++) {
                    if (word[k] != ' ') {
                        buf[pos + k] = mask[k];
                        if (pos + k > 0 && dst[pos + k - 2] != 0) {
                            dst[pos + k - 1] = mask[k];
                        }
                    }
                }
            }
        } while (pos != -1);
    }
}

}
