//
// Created by atta on 11/10/20.
//

#ifndef PARTICLE_SIMULATION_PARTICLE_H
#define PARTICLE_SIMULATION_PARTICLE_H
#include <stdlib.h>
using namespace std;

namespace Simulation {

    class Particle {
    private:
        double m_x;
        double m_y;

    public:
        Particle();
        virtual ~Particle();

    };

}

#endif //PARTICLE_SIMULATION_PARTICLE_H
