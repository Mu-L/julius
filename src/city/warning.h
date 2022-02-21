#ifndef CITY_WARNING_H
#define CITY_WARNING_H

#include <stdint.h>

typedef enum {
    WARNING_ORIENTATION = 1,
    WARNING_CLEAR_LAND_NEEDED = 2,
    WARNING_OUT_OF_MONEY = 3,
    WARNING_ONE_BUILDING_OF_TYPE = 4,
    WARNING_ROAD_ACCESS_NEEDED = 11,
    WARNING_NOT_AVAILABLE = 13,
    WARNING_NOT_AVAILABLE_YET = 14,
    WARNING_MARBLE_NEEDED_LARGE_TEMPLE = 15,
    WARNING_MARBLE_NEEDED_ORACLE = 16,
    WARNING_WORKERS_NEEDED = 17,
    WARNING_MORE_FOOD_NEEDED = 18,
    WARNING_BUILD_MARKET = 19,
    WARNING_MEADOW_NEEDED = 20,
    WARNING_WATER_NEEDED = 21,
    WARNING_ROCK_NEEDED = 22,
    WARNING_TREE_NEEDED = 23,
    WARNING_SHORE_NEEDED = 25,
    WARNING_IRON_NEEDED = 26,
    WARNING_VINES_NEEDED = 27,
    WARNING_OLIVES_NEEDED = 28,
    WARNING_CLAY_NEEDED = 29,
    WARNING_TIMBER_NEEDED = 30,
    WARNING_OPEN_TRADE_TO_IMPORT = 31,
    WARNING_TRADE_IMPORT_RESOURCE = 32,
    WARNING_BUILD_IRON_MINE = 33,
    WARNING_BUILD_VINES_FARM = 34,
    WARNING_BUILD_OLIVE_FARM = 35,
    WARNING_BUILD_CLAY_PIT = 36,
    WARNING_BUILD_TIMBER_YARD = 37,
    WARNING_WATER_PIPE_ACCESS_NEEDED = 38,
    WARNING_PLACE_RESERVOIR_NEXT_TO_WATER = 39,
    WARNING_CONNECT_TO_RESERVOIR = 40,
    WARNING_SENTRIES_NEED_WALL = 41,
    WARNING_BUILD_BARRACKS = 42,
    WARNING_WEAPONS_NEEDED = 43,
    WARNING_BUILD_ACTOR_COLONY = 44,
    WARNING_BUILD_GLADIATOR_SCHOOL = 45,
    WARNING_BUILD_LION_HOUSE = 46,
    WARNING_BUILD_CHARIOT_MAKER = 47,
    WARNING_WALL_NEEDED = 49,
    WARNING_ENEMY_NEARBY = 50,
    WARNING_LEGION_MORALE_TOO_LOW = 51,
    WARNING_MAX_LEGIONS_REACHED = 52,
    WARNING_PEOPLE_ON_BRIDGE = 55,
    WARNING_DOCK_OPEN_WATER_NEEDED = 56,
    WARNING_EDITOR_NEED_MAP_EDGE = 58,
    WARNING_EDITOR_NEED_OPEN_WATER = 59,
    WARNING_EDITOR_CANNOT_PLACE = 60,
    WARNING_EDITOR_NO_EARTHQUAKE_SCHEDULED = 61,
    WARNING_HOUSE_TOO_FAR_FROM_ROAD = 62,
    WARNING_CITY_BOXED_IN = 63,
    WARNING_CITY_BOXED_IN_PEOPLE_WILL_PERISH = 64,
    WARNING_DATA_LIMIT_REACHED = 65
} warning_type;

void city_warning_show(warning_type type);
void city_warning_show_custom(const uint8_t *text);

int city_has_warnings(void);

const uint8_t *city_warning_get(int id);

void city_warning_clear_all(void);
void city_warning_clear_outdated(void);

#endif // CITY_WARNING_H
