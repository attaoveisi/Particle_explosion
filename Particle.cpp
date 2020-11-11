//
// Created by atta on 11/10/20.
//

#include "Particle.h"

namespace Simulation{

    Particle::Particle() {

        m_x = ((double)rand()/RAND_MAX)*2-1;
        m_y = ((double)rand()/RAND_MAX)*2-1;

    }

    Particle::~Particle() {

    }
}