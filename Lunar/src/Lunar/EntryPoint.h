#pragma once

extern Lunar::Application* Lunar::CreateApplication();

#ifdef L_PLATFORM_WINDOWS
	int main(int argc, char** argv)
	{
		Lunar::Log::Init();
		LUNAR_CORE_WARN("Initialized");
		LUNAR_TRACE("Hello World!");

		auto app = Lunar::CreateApplication();
		app->Run();
		delete app;
	}
#endif
