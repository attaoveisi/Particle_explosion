//
// Created by atta on 11/10/20.
//

#include "Swarm.h"
#include "Particle.h"

namespace Simulation{
    Swarm::Swarm(){
        n_pParticles = new Particle[NPARTICLES];
    }

    Swarm::~Swarm(){
        delete [] n_pParticles;
    }

}

