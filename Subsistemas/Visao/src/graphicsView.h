#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QtGui/QWidget>
#include <QtGui/QGraphicsView>
#include <QtGui/QPaintEvent>
#include <QtGui/QGraphicsScene>

#include "vision.h"

class GraphicsView: public QGraphicsView{
private:	
	QGraphicsScene *scene;
	Vision vision;
	int time;
public:
	GraphicsView(QWidget *widget);
	~GraphicsView();
protected:
	void update();
	void timerEvent(QTimerEvent *event);
};


#endif