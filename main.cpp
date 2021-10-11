#include "Layers.h"

int main(int argc, char *argv[])
{
    //Layers::Application app("LayersDemo", "2.2.0a", "huntermalm/Layers-Demo", argc, argv);

    Layers::Application app(argc, argv,
        "Layers Demo",
        nullptr,
        new Layers::Version("2.2.0a"),
        new Layers::GitHubRepo("huntermalm/Layers-Demo"));

	//if (app.update_available())
	//	if (app.update_on_request()) return 0;

    Layers::Window window;

	window.setWindowIcon(QIcon("layers_2d_logo.png"));
	window.show();

    return app.exec();
}
