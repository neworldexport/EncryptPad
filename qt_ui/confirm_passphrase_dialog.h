//**********************************************************************************
//EncryptPad Copyright 2016 Evgeny Pokhilko 
//<http://www.evpo.net/encryptpad>
//
//This file is part of EncryptPad
//
//EncryptPad is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 2 of the License, or
//(at your option) any later version.
//
//EncryptPad is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with EncryptPad.  If not, see <http://www.gnu.org/licenses/>.
//**********************************************************************************
#ifndef CONFIRM_PASSWORD_DIALOG_H
#define CONFIRM_PASSWORD_DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class ConfirmPassphraseDialog;
}

class ConfirmPassphraseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmPassphraseDialog(QWidget *parent = 0);
    ~ConfirmPassphraseDialog();

public slots:
    void invokeOk();
private:
    Ui::ConfirmPassphraseDialog *ui;

public:
    QString GetPassphrase() const;

};

#endif // CONFIRM_PASSWORD_DIALOG_H
