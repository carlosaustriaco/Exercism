#include "resistor_color.h"

resistor_band_t color_map[] = {
        BLACK,
        BROWN,
        RED,
        ORANGE,
        YELLOW,
        GREEN,
        BLUE,
        VIOLET,
        GREY,
        WHITE
};

int color_code(resistor_band_t color){
    return color_map[color];
}

resistor_band_t* colors(){
    return color_map;
}