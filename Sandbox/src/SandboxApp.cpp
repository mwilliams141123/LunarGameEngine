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

void main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}