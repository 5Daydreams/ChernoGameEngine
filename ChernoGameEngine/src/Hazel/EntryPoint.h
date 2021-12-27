#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Starting engine...");
	auto app = Hazel::CreateApplication();
	printf(" Success!\n");
	app->Run();
	printf("Closing engine application");
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
