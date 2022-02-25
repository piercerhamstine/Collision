#ifndef COLLISION_HPP
#define COLLISION_HPP

#include "collider.hpp";

class Collision
{
public:
    Collision();
    Collision(Collider& col);
    ~Collision();


private:
    Collider& col;
};

#endif