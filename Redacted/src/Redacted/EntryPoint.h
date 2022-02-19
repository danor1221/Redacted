#pragma once

#ifdef RD_PLATFORM_WINDOWS	

extern Redacted::Application* Redacted::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Redacted::CreateApplication();
	app->Run();
	delete app;
}

#endif