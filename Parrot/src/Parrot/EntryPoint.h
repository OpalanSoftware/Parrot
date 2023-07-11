#pragma once

#ifdef PR_PLATFORM_WINDOWS

extern Parrot::Application* Parrot::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Parrot::CreateApplication();
	app->Run();
	delete app;
}

#endif