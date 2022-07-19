#include <iostream>
#include "adder.h"
#include "GLFW/glfw3.h"

int main(int, char**) {
    std::cout << "Hello, world! from cmake with lib\n";
    std::cout << "add 15 + 8 = " << add(15, 8);

    GLFWwindow *window;

     if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    
    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

        // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        //draw();

        // Update animation
        //animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
}
