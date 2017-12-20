#include "QtHelloWorld.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
//	QtHelloWorld w;
//	w.show();
	QLabel *label = new QLabel("hello world!");
	label->setMaximumSize(QSize(1000, 600));
	label->setMinimumSize(QSize(400, 300));
	label->show();
	return a.exec();
}
