#include <QApplication>
#include <QFont>
#include "panelwindow.h"



#include <QBrush>
#include <QHBoxLayout>
#include <QPalette>
#include <QPushButton>
#include <QWidget>





/**
 * This is the main function for ExtPlane-panel
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName("vranki");
    a.setOrganizationDomain("extplane.org");
    a.setApplicationName("ExtPlane-panel");
    PanelWindow win;

    /*  PLAYING WITHT EH BACKGROUND IMAGE */
    /*
    QWidget widget;

    QPalette palette = widget.palette();
    const QBrush brush(QImage(":/images/pedestal.png"));
    palette.setBrush(QPalette::Background, brush);
    widget.setPalette(palette);

    QHBoxLayout *layout = new QHBoxLayout(&widget);
    widget.setLayout(layout);
    layout->addWidget(new QWidget(&widget), 1);
    widget.setVisible(true);
    */

    win.show();
    return a.exec();
}
