//
// Created by atta on 11/10/20.
//

#ifndef PARTICLE_SIMULATION_SWARM_H
#define PARTICLE_SIMULATION_SWARM_H
#include "Particle.h"

namespace Simulation {

    class Swarm {
    public:
        const static int NPARTICLES = 2000;
    private:
        // create a private pointer to the particle
        Particle *n_pParticles;


    public:
        Swarm();
        virtual ~Swarm();
        // delivers const pointer to the particle, i.e., pointer
        // that can't point anywhere else
        Particle * const getParticles(){
            return n_pParticles;
        };

    };

}



#endif //PARTICLE_SIMULATION_SWARM_H
