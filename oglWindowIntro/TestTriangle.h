#pragma once
class TestTriangle
{
    public:
        const float vertices[12] = {
             0.5f,  0.5f, 0.0f,  // top right
             0.5f, -0.5f, 0.0f,  // bottom right
            -0.5f, -0.5f, 0.0f,  // bottom left
            -0.5f,  0.5f, 0.0f   // top left 
        };

        const unsigned int indices[6] = {
            0, 1, 3,
            1, 2, 3
        };
};

