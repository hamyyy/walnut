#include "Application.h"

bool g_ApplicationRunning = true;

int main(int argc, char **argv) {
  while (g_ApplicationRunning) {
    Walnut::Application *app = Walnut::CreateApplication(argc, argv);
    app->Run();
    delete app;
  }

  return 0;
}