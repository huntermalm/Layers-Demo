#include "Layers.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    Layers::Application::setAttribute(Qt::AA_EnableHighDpiScaling);

	Layers::Application app("LayersDemo", "2.2.0a", "huntermalm/Layers-Demo", argc, argv);

	if (app.update_available())
		if (app.update_on_request()) return 0;

    Layers::Window window;

	window.finalize();

	window.setWindowIcon(QIcon("layers_2d_logo.png"));

	window.show();

    return app.exec();
}
