    #include "patientview.h"
    #include "ui_patientview.h"
    #include "idatabase.h"

    PatientView::PatientView(QWidget *parent)
        : QWidget(parent)
        , ui(new Ui::PatientView)
    {
        ui->setupUi(this);

        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);   // 选择整行
        ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);  // 单选模式
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);    // 禁止编辑
        ui->tableView->setAlternatingRowColors(true);

        IDatabase &iDatabase = IDatabase::getInstance();
        if(iDatabase.initPatientModel()){
            ui->tableView->setModel(iDatabase.patientTabModel);
            ui->tableView->setSelectionModel(iDatabase.thePatientSelection);
        }
    }

    PatientView::~PatientView()
    {
        delete ui;
    }

    void PatientView::on_btAdd_clicked()
    {
        int currow = IDatabase::getInstance().addNewPatient();
        emit goPatientEditView(currow);
    }

    void PatientView::on_btEdit_clicked()
    {
        QModelIndex curIndex =
            IDatabase::getInstance().thePatientSelection->currentIndex();

        emit goPatientEditView(curIndex.row());
    }


    void PatientView::on_btDelete_clicked()
    {
        IDatabase::getInstance().deleteCurrentPatient();
    }


    void PatientView::on_btSearch_clicked()
    {
        QString filter = QString("name like '%%1%'").arg(ui->txtSearch->text());
        IDatabase::getInstance().searchPatient(filter);
    }

