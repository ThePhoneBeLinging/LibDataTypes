//
// Created by Elias Aggergaard Larsen on 27/07-2025.
//

#ifndef IMAGE_H
#define IMAGE_H
#include <vector>

#include "raylib.h"

namespace EAL
{


class Image
{
public:
  Image(int width, int height);
  void setPixel(int x, int y, int r, int g, int b);
  void updateTexture();
  void draw() const;
private:
  int width_;
  int height_;
  std::vector<Color> pixelBuffer_;
  Texture2D texture_;

};
}



#endif //IMAGE_H
