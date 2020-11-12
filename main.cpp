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
    //srand(time(NULL));

    //Swarm swarm;

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HIGHT = 600;


    if (SDL_Init(SDL_INIT_VIDEO) < 0){
        cout << "SDL init failed!" << endl;
        return 1;
    }else{
        cout << "Success" << endl;
    }

    SDL_Window *window = SDL_CreateWindow("Particle explosion",
                                          SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH,SCREEN_HIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL){
        printf("Error by creating window: %s/n", SDL_GetError());
        SDL_Quit();
        return 2;
    }

    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture * texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
                                              SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HIGHT);

    if(renderer == NULL){
        cout << "Could not create renderer!" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }
    if(texture == NULL){
        cout << "Could not create texture!" << endl;
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        SDL_Quit();
        return 4;
    }

    Uint32 * buffer = new Uint32[SCREEN_WIDTH*SCREEN_HIGHT];

    memset(buffer, 0, SCREEN_WIDTH*SCREEN_HIGHT*sizeof(Uint32));

    buffer[30000] = 0xFFFFFFFF;

    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    //quit stops the animation
    bool quit = false;

    // Event loop
    SDL_Event  event;
    while(!quit){
        //Update particles
        //Draw particles
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                quit = true;
            }

        }

    }

    delete [] buffer;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();

    cout << "Enjoy!" << endl;
    return 0;
}
