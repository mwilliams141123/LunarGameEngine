#include <Lunar.h>

class Sandbox : public Lunar::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Lunar::Application* Lunar::CreateApplication()
{
	return new Sandbox();
}