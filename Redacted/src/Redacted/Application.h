#pragma once

#include "Core.h"

namespace Redacted {

	class REDACTED_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();

}
