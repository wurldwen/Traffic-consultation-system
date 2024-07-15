#ifndef STAFFMODIFY_H
#define STAFFMODIFY_H

#include <QMainWindow>
#include"ui_SatffModify.h"
class CrawlerWidget;
class StaffModify : public QMainWindow
{
    Q_OBJECT
public:
    explicit StaffModify(QWidget *parent = nullptr);
    virtual~StaffModify();
    Ui::StaffModify*ui;
    CrawlerWidget* m_pCrawlerWidget;
signals:
    void SHP();
private slots:
    void on_homebtn_clicked();
    void on_stfbtnCrawler_clicked();
};

#endif // STAFFMODIFY_H