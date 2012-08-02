#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QObject>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileDialog>

class Configuracion : public QObject
{
    Q_OBJECT
public:
    explicit Configuracion(QObject *parent = 0);
    QString cRutaBdTerra;
    QString cSerie;
    int nDigitosFactura;
    QString cConector;
    int idEmpresa;
    QString cCodEmpresaActiva;
    QString cNombreEmpresa;
    QString cRutaBdEmpresa;
    QString cDriverBDEmpresa;
    QString cHostBDEmpresa;
    QString cUsuarioBDEmpresa;
    QString cPasswordBDEmpresa;
    QString cNombreBDEmpresa;
    QString cPuertoBDEmpresa;
    QString cDriverBDTerra;
    QString cHostBDTerra;
    QString cUsuarioBDTerra;
    QString cPasswordBDTerra;
    QString cNombreBDTerra;
    QString cPuertoBDTerra;
    QString cPais;
    QString cEjercicio;
    QString cEmpresaActiva;
    QString cUsuarioActivo;
    QString cNivelUsuarioActivo;
    QSqlDatabase dbConfiguracion;
    QSqlQuery *QryConfiguracion;
    QFileDialog dialogo;

public slots:


    
};

#endif // CONFIGURACION_H