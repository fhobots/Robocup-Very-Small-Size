#ifndef GUI_H
#define GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QWidget>
#include "graphicsView.h"

QT_BEGIN_NAMESPACE

class GuiMainWindow{
private:
    QWidget *centralwidget;
    QGroupBox *groupBoxColorRange;
    QScrollBar *verticalScrollBarHL;
    QScrollBar *verticalScrollBarSL;
    QScrollBar *verticalScrollBarVH;
    QScrollBar *verticalScrollBarVL;
    QScrollBar *verticalScrollBarSH;
    QScrollBar *verticalScrollBarHH;
    QGroupBox *groupBoxBlueTeam;
    QPushButton *pushButtonBlueTeamRemove;
    QListWidget *listWidgetBlueTeamPlaying;
    QPushButton *pushButtonBlueTeamAdd;
    QListWidget *listWidgetBlueTeamColors;
    QLabel *labelBlueTeam2;
    QLabel *labelBlueTeam1;
    QGroupBox *groupBoxControl;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonDebug;
    QGroupBox *groupBoxCalibration;
    QListWidget *listWidgetCalibration;
    QPushButton *pushButtonAddColor;
    QPushButton *pushButtonDeleteColor;
    QGroupBox *groupBoxYellowTeam;
    QPushButton *pushButtonYellowTeamRemove;
    QListWidget *listWidgetYellowTeamPlaying;
    QPushButton *pushButtonYellowTeamAdd;
    QListWidget *listWidgetYellowTeamColors;
    QLabel *labelYellowTeamPlaying;
    QLabel *labelYellowTeamColor;
    QGroupBox *groupBoxNetwork;
    QLineEdit *lineEditIP;
    QLabel *labelIP;
    QGroupBox *groupBoxXML;
    QPushButton *pushButtonLoadXML;
    QPushButton *pushButtonSaveXML;
    QGroupBox *groupBox;
    QPushButton *pushButtonSetField;
    QPushButton *pushButtonClearField;
    GraphicsView *graphicsView;
public:
    
    void setupUi(QMainWindow *MainWindow);

};

QT_END_NAMESPACE

#endif
