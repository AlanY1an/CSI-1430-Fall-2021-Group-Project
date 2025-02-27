//
//  Objects.h
//  Falling Ball
//
//  Created by Zhongbo Sun on 11/10/21.
//

#ifndef Objects_h
#define Objects_h

#include "SDL_Plotter.h"
#include <fstream>
#include <cmath>
#include <vector>
#include "Data.h"

void drawBackground(int sizeX,int sizeY,int R,int G,int B,SDL_Plotter& screen);

void drawButton(int centerX,int centerY,int sizeX,int sizeY,int R,int G,int B,SDL_Plotter& screen);

void drawBallAdder(int centerX,int centerY,SDL_Plotter& screen);

void drawCircle(int centerX,int centerY,int radius,int R,int G,int B,SDL_Plotter& screen);

void drawRectangle(int centerX,int centerY,int sizeX,int sizeY,int R,int G,int B,SDL_Plotter& screen);

void drawTriangle(int centerX,int centerY,int height,int R, int G, int B, SDL_Plotter& screen);

void plotPoint(int X,int Y,int R,int G,int B,SDL_Plotter& screen);

void plotChar(int X,int Y,char goal,int fontSize,int R,int G,int B,SDL_Plotter& screen);

void plotString(const char text[],int numberOfChar,int fontSize,int X,int Y,int R,int G,int B,SDL_Plotter& screen);

void plotInt(int num,int fontSize,int X,int Y,int R,int G,int B,SDL_Plotter& screen);

#endif /* Objects_h */
