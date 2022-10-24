#include "raylib.h"

int main()
{
    InitWindow(640, 480, "Game");

    SetTargetFPS(60);

    Texture2D square = LoadTexture("../res/square.png");
    float squareX = 50.0f;
    float squareY = 55.0f;

    float velocity = 3.0f;

    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            ClearWindowState(1);
            DrawTexture(square, squareX, squareY, {255, 255, 255, 255});
        EndDrawing();

        if (IsKeyDown(KEY_W))
        {
            squareY -= velocity;
        }

        if (IsKeyDown(KEY_S))
        {
            squareY += velocity;
        }

        if (IsKeyDown(KEY_A))
        {
            squareX -= velocity;
        }

        if (IsKeyDown(KEY_D))
        {
            squareX += velocity;
        }


        if (IsKeyDown(KEY_ESCAPE))
        {
            CloseWindow();
        }
    }

    CloseWindow();
}