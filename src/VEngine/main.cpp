#include "VCore/VCore.h"
#include "VCore/Window.h"

int main(int argc, char** argv) 
{
    Windows::Init();

    Window window;

    /* Make the window's context current */
    window.MakeContext();

    /* Loop until the user closes the window */
    while (!window.IsShouldClose())
    {
        /* Render here */

        /* Swap front and back buffers */
        window.SwapBuffers();

        /* Poll for and process events */
        Windows::PollEvents();
    }

    Windows::Terminate();

	return 0;
}