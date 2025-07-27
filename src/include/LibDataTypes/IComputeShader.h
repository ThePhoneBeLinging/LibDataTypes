//
// Created by Elias Aggergaard Larsen on 27/07-2025.
//

#ifndef ICOMPUTESHADER_H
#define ICOMPUTESHADER_H
#include <vector>

#include "Double3.h"
#include "Ray.h"
#include "Sphere.h"

namespace EAL
{
  class IComputeShader
  {
    public:
    virtual ~IComputeShader() = default;
    virtual std::vector<EAL::Double3> computeWithShader(const std::vector<EAL::Ray>& rays,
                                                        const std::vector<EAL::Sphere>& spheres) = 0;
  };
}

#endif //ICOMPUTESHADER_H
