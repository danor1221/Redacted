#include <Redacted.h>

class Sandbox : public Redacted::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Redacted::Application* Redacted::CreateApplication()
{
	return new Sandbox();
}