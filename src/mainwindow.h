#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <osgViewer/ViewerBase>
#include <osg/Camera>

#include "ui_mainwindow.h"
#include "viewerwidget.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

    public:
        MainWindow(osgViewer::ViewerBase::ThreadingModel threadingModel,
            QWidget *parent = 0);

    private slots:
        void on_actionQuit_triggered();

    private:
        ViewerWidget *_viewerWidget;
};

#endif

