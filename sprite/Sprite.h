#pragma once

#include <stdint.h>
#include "../common.h"

// Sprite class representing a sprite that can be drawn.
//
// Sprites do not contain a world offset, as that is managed upon drawing.
class Sprite {
    public:
        Sprite() {};
        ~Sprite() {}

        // Bitmap where the sprite is located
        ALLEGRO_BITMAP* bitmap;

        // Location and size of sprite
        float sx, sy;
        float width;
        float height;

        // Tint color for sprite
        ALLEGRO_COLOR tint;

        // Output location and scale
        float dx, dy;
        float dw, dh;

        std::vector<Sprite> subsprites;
};
