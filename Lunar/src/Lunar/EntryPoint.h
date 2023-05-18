#pragma once

extern Lunar::Application* Lunar::CreateApplication();

#ifdef L_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		auto app = Lunar::CreateApplication();
		app->Run();
		delete app;
	}
#endif
