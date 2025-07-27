//
// Created by Elias Aggergaard Larsen on 27/07-2025.
//

#ifndef ICOMPUTESHADER_H
#define ICOMPUTESHADER_H
#include <vector>

#include "Double3.h"
#include "Image.h"
#include "Ray.h"
#include "Sphere.h"

namespace EAL
{
  class IComputeShader
  {
    public:
    virtual ~IComputeShader() = default;
    virtual void computeWithShader(const std::vector<EAL::Ray>& rays,
                                                        const std::vector<EAL::Sphere>& spheres, EAL::Image* image) = 0;
  };
}

#endif //ICOMPUTESHADER_H
