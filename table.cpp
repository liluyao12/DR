#include "table.h"
#include "ui_table.h"

Table::Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Table),
    select(true)
{
    ui->setupUi(this);

    //this->SetStyle("./main.qss");
    this->SetStyle("./light.qss");

    ui->lineEdit->setPlaceholderText("姓名");
    ui->lineEdit_2->setPlaceholderText("检查流水号");

    ui->tableWidget->setRowCount(16);
    ui->tableWidget->setColumnCount(16);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<< tr("姓名") <<tr("PID") << tr("")  << tr("mA") << tr("KV") << tr("ms") << tr("DAP") << tr("Density") << tr("出生日期") <<
                                               tr("执行时间") << tr("检查部位" )<< tr("体位描述") << tr("曝光状态") << tr("图像状态") << tr("注释") << tr("操作者"));
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //自动调整最后一列的宽度使它和表格的右边界对齐
    ui->tableWidget->setShowGrid(false);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(200);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->tableWidget_2->setRowCount(16);
    ui->tableWidget_2->setColumnCount(8);
    ui->tableWidget_2->setHorizontalHeaderLabels(QStringList()<< tr("用户标识") << tr("拒绝原因") << tr("mA") << tr("KV") << tr("ms") << tr("DAP") << tr("Density") << tr(""));
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_2->verticalHeader()->setVisible(false);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true); //自动调整最后一列的宽度使它和表格的右边界对齐
    ui->tableWidget_2->setShowGrid(false);
    ui->tableWidget_2->horizontalHeader()->setDefaultSectionSize(200);
    ui->tableWidget_2->setFocusPolicy(Qt::NoFocus);

    ui->tableWidget_3->setRowCount(16);
    ui->tableWidget_3->setColumnCount(5);
    ui->tableWidget_3->setHorizontalHeaderLabels(QStringList()<< tr("用户标识") << tr("检查部位") << tr("接受比例") << tr("拒绝比例") << tr(""));
    ui->tableWidget_3->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget_3->verticalHeader()->setVisible(false);
    ui->tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_3->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableWidget_3->horizontalHeader()->setStretchLastSection(true); //自动调整最后一列的宽度使它和表格的右边界对齐
    ui->tableWidget_3->setShowGrid(false);
    ui->tableWidget_3->horizontalHeader()->setDefaultSectionSize(200);
    ui->tableWidget_3->setFocusPolicy(Qt::NoFocus);

    QTableWidgetItem *item  = new QTableWidgetItem;
    item->setText("saa");
    ui->tableWidget_2->setItem(0, 0, item);
    ChangeColor(ui->tableWidget_2);

 }

Table::~Table()
{
    delete ui;
}

void Table::on_blueButton_clicked()
{
    if(select){
        this->SetStyle("./dark.qss");
        select = false;
    }
    else {
        this->SetStyle("./light.qss");
        select = true;
    }

}
