/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QGridLayout *gridLayout;
    QWidget *mainWindow;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *blueButton;
    QPushButton *selectButton;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName(QStringLiteral("Table"));
        Table->resize(1159, 768);
        gridLayout = new QGridLayout(Table);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainWindow = new QWidget(Table);
        mainWindow->setObjectName(QStringLiteral("mainWindow"));
        gridLayout_2 = new QGridLayout(mainWindow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mainWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboBox_2 = new QComboBox(mainWindow);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setFont(font);

        horizontalLayout->addWidget(comboBox_2);

        label_2 = new QLabel(mainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        comboBox_3 = new QComboBox(mainWindow);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy1);
        comboBox_3->setMaximumSize(QSize(16777215, 40));
        comboBox_3->setFont(font);

        horizontalLayout->addWidget(comboBox_3);

        lineEdit = new QLineEdit(mainWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMaximumSize(QSize(16777215, 40));
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(mainWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setMaximumSize(QSize(16777215, 40));
        lineEdit_2->setFont(font);

        horizontalLayout->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(326, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        blueButton = new QPushButton(mainWindow);
        blueButton->setObjectName(QStringLiteral("blueButton"));
        blueButton->setMaximumSize(QSize(16777215, 40));
        blueButton->setFont(font);

        horizontalLayout->addWidget(blueButton);

        selectButton = new QPushButton(mainWindow);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setMaximumSize(QSize(16777215, 40));
        selectButton->setFont(font);

        horizontalLayout->addWidget(selectButton);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        tableWidget = new QTableWidget(mainWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(mainWindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        textEdit = new QTextEdit(mainWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        verticalLayout->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 1);

        tabWidget = new QTabWidget(mainWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(5, 5, 5, 5);
        tableWidget_3 = new QTableWidget(tab);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));

        gridLayout_3->addWidget(tableWidget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout_4->addWidget(tableWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(1, 10);
        gridLayout_2->setRowStretch(2, 6);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 5);

        gridLayout->addWidget(mainWindow, 0, 0, 1, 1);


        retranslateUi(Table);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QDialog *Table)
    {
        Table->setWindowTitle(QApplication::translate("Table", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Table", "\346\237\245\350\257\242\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Table", "\345\275\223\345\244\251", Q_NULLPTR)
         << QApplication::translate("Table", "\350\277\221\344\270\211\345\244\251", Q_NULLPTR)
         << QApplication::translate("Table", "\345\205\250\351\203\250", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Table", "\346\223\215\344\275\234\345\221\230", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Table", "apps", Q_NULLPTR)
         << QApplication::translate("Table", "mgr", Q_NULLPTR)
        );
        blueButton->setText(QApplication::translate("Table", "\345\210\267\346\226\260", Q_NULLPTR));
        selectButton->setText(QApplication::translate("Table", "\345\257\274\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("Table", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Table", "\346\243\200\346\237\245\351\203\250\344\275\215", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Table", "\346\213\222\347\273\235\345\216\237\345\233\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
