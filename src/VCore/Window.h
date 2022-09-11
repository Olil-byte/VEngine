#include "pch.h"

#include <string_view>

class Window
{
public:
	Window(int width = 640, int height = 480, std::string_view title = "ZEngine Window");
	~Window();

	inline GLFWwindow* GetHandle() 
	{
		return window;
	}

private:
	GLFWwindow* window;

};

