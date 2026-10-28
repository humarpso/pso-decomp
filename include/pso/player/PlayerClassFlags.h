#ifndef PSO_PLAYER_PLAYER_CLASS_FLAGS_H
#define PSO_PLAYER_PLAYER_CLASS_FLAGS_H

enum player_class_flags {
    CLASS_FLAG_MALE    = 0x01,
    CLASS_FLAG_FEMALE  = 0x02,
    CLASS_FLAG_HUMAN   = 0x04,
    CLASS_FLAG_NEWMAN  = 0x08,
    CLASS_FLAG_ANDROID = 0x10,
    CLASS_FLAG_HUNTER  = 0x20,
    CLASS_FLAG_RANGER  = 0x40,
    CLASS_FLAG_FORCE   = 0x80,
    CLASS_FLAG_TYPE_MASK = CLASS_FLAG_HUNTER | CLASS_FLAG_RANGER | CLASS_FLAG_FORCE
};

enum player_class_type {
    CLASS_TYPE_HUNTER = 0,
    CLASS_TYPE_RANGER = 1,
    CLASS_TYPE_FORCE  = 2,
    CLASS_TYPE_NONE   = 3
};

enum player_race {
    RACE_HUMAN   = 0,
    RACE_NEWMAN  = 1,
    RACE_ANDROID = 2,
    RACE_NONE    = 3
};

enum player_gender {
    GENDER_MALE   = 0,
    GENDER_FEMALE = 1,
    GENDER_NONE   = 2
};

#endif
