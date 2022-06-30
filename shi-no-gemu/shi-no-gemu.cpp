#include <iostream>
#include <raylib.h>
#include "Flag.hpp"
#include "Window.hpp"

int main()
{
    //initialize
    Window window(800, 600);
    InitWindow(window.width, window.height, "Good byb your frends game");
    SetTargetFPS(60);
    GameState flag;
    

    while (!WindowShouldClose())
    {
        if (flag() == "title")
        {
            if (IsKeyPressed(KEY_ENTER))
            {
                flag.change("playing");
            }

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Welcome to Shi no game", 10, 10, 20, DARKGRAY);
            EndDrawing();
        }
        if (flag() == "playing")
        {
            BeginDrawing();
            ClearBackground(MAROON);
            EndDrawing();
        }
    }

    CloseWindow();
}
