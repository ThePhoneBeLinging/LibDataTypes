//
// Created by Elias Aggergaard Larsen on 27/07-2025.
//

#ifndef RAY_H
#define RAY_H
#include "Double3.h"

namespace EAL
{


class Ray
{
public:
  Ray();
  Double3 origin;
  Double3 vector;
};

}


#endif //RAY_H
