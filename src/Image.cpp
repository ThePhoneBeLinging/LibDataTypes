//
// Created by Elias Aggergaard Larsen on 27/07-2025.
//

#include "LibDataTypes/Image.h"

EAL::Image::Image(const int width, const int height) : pixelBuffer_(width * height), texture_(LoadTextureFromImage(GenImageColor(width,height,WHITE)))
{
  for (int i = 0; i < pixelBuffer_.size(); i++)
  {
    pixelBuffer_[i].a = 255;
  }
}

void EAL::Image::updateTexture()
{
  UpdateTexture(texture_,pixelBuffer_.data());
}

void EAL::Image::draw() const
{
  DrawTexture(texture_,0,0,WHITE);
}
