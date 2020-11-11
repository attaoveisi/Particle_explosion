//
// Created by atta on 11/11/20.
//

#ifndef PARTICLE_SIMULATION_SCREEN_H
#define PARTICLE_SIMULATION_SCREEN_H
#include <SDL2/SDL.h>

namespace Simulation {

    class Screen {
    private:
        const static int SCREEN_WIDTH = 1920;
        const static int SCREEN_HIGHT = 1080;

        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer1;
        Uint32 *m_buffer2;
        Uint32 *m_frontBuffer;
        Uint32 *m_backBuffer;

        const static short RED_SHIFT = 24;
        const static short GREEN_SHIFT = 16;
        const static short BLUE_SHIFT = 8;

    public:
        Screen();
        virtual ~Screen();

        bool init();
        void update();
        bool processEvents();
        void close();
        void boxBlur();
        void setPixel(int x, int y, unsigned char red, unsigned char green, unsigned char blue);


    };

}

#endif //PARTICLE_SIMULATION_SCREEN_H
