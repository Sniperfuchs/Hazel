#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();

	HZ_CORE_WARN("WARNING");
	HZ_INFO("INFO");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif