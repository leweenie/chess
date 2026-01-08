#include <SDL3/SDL.h>
#include <algorithm>

#define SCREEN_WIDTH 1920 / 2
#define SCREEN_HEIGHT 1080 / 2

int main() {
    SDL_Window *window;
    SDL_Renderer *renderer;

    bool done = false;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("My SDL Window", 800, 650, SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, NULL);

    while (!done) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }

        // BACKGROUND
        SDL_SetRenderDrawColorFloat(renderer, 0.1f, 0.2f, 0.2f, 1.0f);
        SDL_RenderClear(renderer);

        // CREATE BOARD
        int winW, winH;
        SDL_GetWindowSize(window, &winW, &winH);

        float squareSize = std::min(winW, winH) / 8.0f;
        float offsetX = (winW - squareSize * 8) / 2.0f;
        float offsetY = (winH - squareSize * 8) / 2.0f;

        for (int y = 0; y < 8; ++y) {
            for (int x = 0; x < 8; ++x) {

                SDL_FRect square = {
                    offsetX + x * squareSize,
                    offsetY + y * squareSize,
                    squareSize,
                    squareSize};

                if ((x + y) % 2 == 0) {
                    // DARK
                    SDL_SetRenderDrawColorFloat(renderer, 0.5176f, 0.2471f, 0.0078f, 1.0f);
                } else {
                    // LIGHT
                    SDL_SetRenderDrawColorFloat(renderer, 0.9843f, 0.8314f, 0.6196f, 1.0f);
                }

                SDL_RenderFillRect(renderer, &square);
            }
        }
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return 0;
}
