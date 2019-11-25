#include "Application.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"

namespace Hazel {

	Hazel::Application::Application() {

	}

	Hazel::Application::~Application() {

	}

	void Hazel::Application::Run() {
		WindowResizeEvent wre(1280, 720);
		if (!wre.IsInCategory(EventCategoryInput)) {
			printf("Wrong Category\n");
		}
		HZ_TRACE(wre);
		while (true);
	}
}

