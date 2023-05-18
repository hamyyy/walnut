#include "Walnut/Application.h"
#include "Walnut/Image.h"

class ExampleLayer : public Walnut::Layer
{
public:
	virtual void OnAttach() override
	{
		auto &io = ImGui::GetIO();
		// io.ConfigFlags &= ~ImGuiConfigFlags_ViewportsEnable; 
		// io.ConfigDockingAlwaysTabBar = true;
		// io.ConfigViewportsNoDefaultParent = true;
	}

	virtual void OnUpdate(float ts) override
	{
	}

	virtual void OnUIRender() override
	{
		ImGui::Begin("Hello");
		ImGui::Button("Button");
		ImGui::End();

		ImGui::ShowDemoWindow();
	}
};

Walnut::Application *Walnut::CreateApplication(int argc, char **argv)
{
	Walnut::ApplicationSpecification spec;
	spec.Name = "Vulkan Triangle Demo";

	Walnut::Application *app = new Walnut::Application(spec);
	app->PushLayer<ExampleLayer>();
	app->SetMenubarCallback([app]()
							{
		if (ImGui::BeginMenu("File"))
		{
			if (ImGui::MenuItem("Exit"))
			{
				app->Close();
			}
			ImGui::EndMenu();
		} });
	return app;
}