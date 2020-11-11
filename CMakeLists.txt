cmake_minimum_required(VERSION 3.17)
project(Particle_simulation)

set(CMAKE_CXX_STANDARD 14)

add_executable(Particle_simulation main.cpp Particle.cpp Particle.h Swarm.cpp Swarm.h)
target_link_libraries(Particle_simulation SDL2 SDL2_image)