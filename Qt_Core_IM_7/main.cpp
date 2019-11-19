#include <QtCore/QCoreApplication>

#include <qset.h>
#include <qdebug.h>
#include <qstring.h>
// QSet<T> is one of Qt's generic container classes
// It stores values in an unspecified order and provides very fast lookup of the values. Internally.

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QSet<QString> people;
	people << "Bryan" << "Heather" << "Tammy" << "chris";
	people.insert("Rango");

	// 자동으로 정렬이 된다.
	foreach(QString person, people) {
		qInfo() << person;
	}

	// Very fast
	qInfo() << "Bryan in collection " << people.contains("Bryan");

	return a.exec();
}
