#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "vision.h"
#include "gui.h"
 
int main(int argc, char *argv[]){
	QApplication app (argc, argv);
	QMainWindow window;
	GuiMainWindow gui;
	gui.setupUi(&window);
/*
	Vision v = Vision();	
	QImage img = v.cvMatToQImage(v.getFrame());

	QGraphicsScene * scene = new QGraphicsScene();
	scene->addPixmap(QPixmap::fromImage(img));
	gui.graphicsView->setScene(scene);*/

	window.show();

	return app.exec();
}
