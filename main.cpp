#include <iostream>
#include "Swarm.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL2/SDL.h>
#include <stdio.h>


using namespace std;
using namespace Simulation;

int main() {
    srand(time(NULL));

    Swarm swarm;

    const int SCREEN_WIDTH = 1920;
    const int SCREEN_HIGHT = 1080;


    if (SDL_Init(SDL_INIT_VIDEO) < 0){
        cout << "SDL init failed!" << endl;
    }else{
        cout << "Success" << endl;
    }

    SDL_Window *window = SDL_CreateWindow("Particle explosion",
                                          SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH,SCREEN_HIGHT, SDL_WINDOWEVENT_SHOWN);
    if (window == NULL){
        printf("Error by creating window: %s/n", SDL_GetError())
        SDL_Quit();
    }



    //while (true){
        //Update particles
        //Draw particles
    //}



    cout << "Enjoy!" << endl;
    return 0;
}
