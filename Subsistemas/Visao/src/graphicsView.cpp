#include "graphicsView.h"
#include <iostream>
#include <QtOpenGL/QGLWidget>
#include <QtOpenGL/QGLFormat>

GraphicsView::GraphicsView(QWidget *widget):
QGraphicsView(widget),
scene(new QGraphicsScene(widget)),
vision(Vision())
{
    this->setScene(this->scene);
    time = startTimer(1);
//	free t;
	//scene->clear();		
	//this->setScene(scene);

}
GraphicsView::~GraphicsView(){
	scene->clear();
	killTimer(time);
}
void GraphicsView::update(){
	scene->clear();	
	scene->addPixmap(QPixmap::fromImage(vision.cvMatToQImage(vision.getFrame())));
}
void GraphicsView::timerEvent(QTimerEvent *event){
	this->update();
}