#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include <QFile>
#include <QApplication>
#include <QTableWidget>

namespace Ui {
class Table;
}

class Table : public QDialog
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = 0);
    ~Table();

private slots:
    void on_blueButton_clicked();

private:
    Ui::Table *ui;

    bool select;

    static void SetStyle(const QString &style){
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }

    void ChangeColor(QTableWidget *table){
        for (int i = 0; i < table->rowCount(); i++){
            if (i%2 == 0){
                for(int j = 0; j < table->columnCount(); j ++){
                    if(table->item(i, j)){
                        QColor color = QColor(255, 222, 156);
                        table->item(i, j)->setBackgroundColor(color);
                    }
                }
            }
        }
    }
};

#endif // TABLE_H
