#ifndef DRAW_H
#define DRAW_H

#include "stds.h"

extern App app;

/*
 * Clears the screen with a black color.
 */
extern void prepareScene();

/*
 * Presents the current scene from the application.
 */
extern void presentScene();

/*
 * Copies the graphics from the texture to a different
 * rectangle. You can specify what portion of the src
 * SDL_Texture* to render by the size attributes of the
 * SDL_Rect* pointer. Integers and floats can be passed
 * for the location parameters, but they will be down-casted
 * to integers.
 */
extern void blitRect(SDL_Texture*, SDL_Rect*, float, float);

/*
 * Renders a texture, specified by src, at
 * coordinates (x, y). You may pass in both integers or
 * floating-point numbers to this function, but any floating-point
 * values will be down-casted to integers.
 */
extern void blit(SDL_Texture*, float, float, bool);

/*
 * Draws a rotated SDL_Texture pointer at an x, y coordinate. You may
 * pass in both integers or floating-point numbers to this function, but
 * any floating-point values will be down-casted to integers.
 *
 * @param SDL_Texture* pointer to texture object.
 * @param float x coordinate.
 * @param int y coordinate.
 * @param int angle of rotation (0 to 360).
 */
extern void blitRotated(SDL_Texture*, float, float, uint16_t);

/*
 * Blits a rotated SDL texture at an x and y coordinate with a given
 * scale. A color is also provided to alter the color of the texture.
 */
extern void blitColorTextureScaled(SDL_Texture*, float, float, float, float, uint16_t, int16_t, int16_t, int16_t, int16_t);

/*
 * Blits a rotated SDL texture at an x and y coordinate with a given
 * scale. Note that you will have to account for the scaling routine
 * yourself in your game (i.e. handling collisions if applicable).
 */
extern void blitTextureScaled(SDL_Texture*, float, float, float, float, uint16_t);

/*
 * Draws a rectangle with the supplied color to the screen. The
 * rectangle's properties should be filled (i.e x, y, w, and h).
 * If the last parameter is true, the shape will be filled.
 */
extern void drawRect(SDL_Rect*, uint8_t, uint8_t, uint8_t, uint8_t, bool);

/*
 * Draws a line with the specified color to the screen.
 */
extern void drawLine(float, float, float, float, uint8_t, uint8_t, uint8_t, uint8_t);

/*
 * Loads an image from the specified path. An error is
 * displayed if the file cannot be found or is not
 * loadable.
 */
extern SDL_Texture* loadTexture(const char*);

#endif