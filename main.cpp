#include "Layers.h"

#include <QApplication>
#include <QFontDatabase>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);

    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Black.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-BlackItalic.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Bold.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-BoldItalic.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Italic.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Light.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-LightItalic.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Medium.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-MediumItalic.ttf");
	QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Regular.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-Thin.ttf");
    QFontDatabase::addApplicationFont("./fonts/Roboto/Roboto-ThinItalic.ttf");

	QFont f("Roboto", 12, QFont::Normal);

	f.setStyleStrategy(QFont::PreferAntialias);

	a.setFont(f);

    Layers::Window w("LayersDemo");

    w.finalize();

    w.setWindowIcon(QIcon("layers_2d_logo.png"));

    w.show();

    return a.exec();
}
