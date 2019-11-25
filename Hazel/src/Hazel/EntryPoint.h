#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
	
	int main(int argc, char** argv)
	{
		Hazel::Log::Init();
		HZ_CORE_WARN("Initialised Log!");
		int a = 5;
		HZ_CORE_INFO("Hello! Var= {0}", a);

		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}

#else
	#error Hazel only supports Windows!
#endif // HZ_PLATFORM_WINDOWS
