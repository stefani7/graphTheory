#include <QCoreApplication>
#include<QList>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    qDebug()<<"Sa e gjate eshte lista ";
    QTextStream in(stdin);
    QString line;
    in >> line;


    int value = line.toInt();
    qDebug()<<"gjatesia e listes = "<<value;

for(int i=0;i<=value;i++){

    qDebug()<<"Jep elementin "<<i<<" = ";
    QTextStream in(stdin);
    QString line;
    in >> line;
    int ij = line.toInt();
    List.append(ij);

}

    qSort(List.begin(),List.end());
    qDebug()<<"Lista e sortuar eshte ";

    foreach (int i, List) {
        qDebug()<<i;
    }


    return a.exec();
}
