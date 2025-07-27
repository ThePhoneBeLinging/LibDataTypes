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
  void updateTexture();
  void draw() const;
  std::vector<Color> pixelBuffer_;
private:
  Texture2D texture_;

};
}



#endif //IMAGE_H
