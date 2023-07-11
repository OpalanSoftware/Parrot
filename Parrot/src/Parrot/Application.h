#pragma once

#include "Core.h"

namespace Parrot {

	class PARROT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

