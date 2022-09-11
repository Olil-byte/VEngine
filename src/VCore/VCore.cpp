#pragma once

#include "pch.h"
#include "VCore.h"

inline int Windows::Init() 
{
	return glfwInit();
}

inline void Windows::Terminate()
{
	glfwTerminate();
}

inline void Windows::PollEvents()
{
	glfwPollEvents();
}


