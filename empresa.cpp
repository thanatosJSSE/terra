#include "empresa.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include "frmdecision.h"

Empresa::Empresa(QObject *parent) :
    QObject(parent)
{
    this->id=0;
}

void Empresa::Anadir()
{
    qEmpresa = QSqlQuery(QSqlDatabase::database("terra"));
    if (!qEmpresa.exec("insert into empresa nombre values ('')"))
        QMessageBox::warning(NULL,QObject::tr("Gestión de Empresas"),QObject::tr("No se puede crear la empresa"),
                              qEmpresa.lastError().text());


}

void Empresa::Recuperar(QString cSQL)
{
    qEmpresa = QSqlQuery(QSqlDatabase::database("terra"));
    if (!qEmpresa.exec(cSQL))
        QMessageBox::warning(NULL,QObject::tr("Gestión de Empresas"),QObject::tr("No se puede recuperar la ficha de empresa"),
                             qEmpresa.lastError().text());
    else {
        if(qEmpresa.next()) {
            QSqlRecord registro = qEmpresa.record();
            this->id = registro.field("id").value().toInt();
            this->cCodigo = registro.field("codigo").value().toString();
            this->cNombre = registro.field("nombre").value().toString();
            this->nDigitosFactura = registro.field("digitosfactura").value().toInt();
            this->cSerie = registro.field("serie").value().toString();
            this->cRutaBDSqLite = registro.field("RutaBDSqLite").value().toString();
            this->cHost = registro.field("host").value().toString();
            this->cUser = registro.field("user").value().toString();
            this->cContrasena = registro.field("contrasena").value().toString();
            this->cPuerto = registro.field("puerto").value().toString();
            this->cNombreBD = registro.field("nombreBD").value().toString();
            this->cDriverBD = registro.field("driverBD").value().toString();
            this->cDireccion = registro.field("Direccion").value().toString();
            this->cCp = registro.field("cp").value().toString();
            this->cPoblacion = registro.field("poblacion").value().toString();
            this->cProvincia = registro.field("provincia").value().toString();
            this->cPais = registro.field("pais").value().toString();
            this->cTelefono1 = registro.field("telefono1").value().toString();
            this->cTelefono2 = registro.field("telefono2").value().toString();
            this->cFax = registro.field("fax").value().toString();
            this->cMail = registro.field("mail").value().toString();
            this->cWeb =registro.field("web").value().toString();
            this->cCif = registro.field("cif").value().toString();
            this->cInscripcion = registro.field("inscripcion").value().toString();
            this->cComentarioAlbaran = registro.field("comentarioalbaran").value().toString();
            this->cComentarioFactura = registro.field("comentariofactura").value().toString();
            this->cComentarioTicket = registro.field("comentarioticket").value().toString();
            this->nEjercicio = registro.field("ejercicio").value().toInt();
            this->nDigitosCuentas = registro.field("ndigitoscuenta").value().toInt();
            this->cCuentaClientes = registro.field("codigocuentaclientes").value().toString();
            this->cCuentaAcreeedores = registro.field("codigocuentaacreedores").value().toString();
            this->cCuentaProveedores = registro.field("codigocuentaproveedores").value().toString();

        } else {
            QMessageBox::information(NULL,QObject::tr("Gestión Empresas"),QObject::tr("No se ha podido encontrar la ficha de empresa"));


        }
    }
}

void Empresa::Recuperar(QString cSQL, int nProcede)
{
    qEmpresa = QSqlQuery(QSqlDatabase::database("terra"));
    if (!qEmpresa.exec(cSQL))
        QMessageBox::warning(NULL,QObject::tr("Gestión de Empresas"),QObject::tr("No se puede recuperar la ficha de empresa"),
                             qEmpresa.lastError().text());
    else {
        if(qEmpresa.next()) {
            QSqlRecord registro = qEmpresa.record();
            this->id = registro.field("id").value().toInt();
            this->cCodigo = registro.field("codigo").value().toString();
            this->cNombre = registro.field("nombre").value().toString();
            this->nDigitosFactura = registro.field("digitosfactura").value().toInt();
            this->cSerie = registro.field("serie").value().toString();
            this->cRutaBDSqLite = registro.field("RutaBDSqLite").value().toString();
            this->cHost = registro.field("host").value().toString();
            this->cUser = registro.field("user").value().toString();
            this->cContrasena = registro.field("contrasena").value().toString();
            this->cPuerto = registro.field("puerto").value().toString();
            this->cNombreBD = registro.field("nombreBD").value().toString();
            this->cDriverBD = registro.field("driverBD").value().toString();
            this->cDireccion = registro.field("Direccion").value().toString();
            this->cCp = registro.field("cp").value().toString();
            this->cPoblacion = registro.field("poblacion").value().toString();
            this->cProvincia = registro.field("provincia").value().toString();
            this->cPais = registro.field("pais").value().toString();
            this->cTelefono1 = registro.field("telefono1").value().toString();
            this->cTelefono2 = registro.field("telefono2").value().toString();
            this->cFax = registro.field("fax").value().toString();
            this->cMail = registro.field("mail").value().toString();
            this->cWeb =registro.field("web").value().toString();
            this->cCif = registro.field("cif").value().toString();
            this->cInscripcion = registro.field("inscripcion").value().toString();
            this->cComentarioAlbaran = registro.field("comentarioalbaran").value().toString();
            this->cComentarioFactura = registro.field("comentariofactura").value().toString();
            this->cComentarioTicket = registro.field("comentarioticket").value().toString();
            this->nEjercicio = registro.field("ejercicio").value().toInt();
            this->nDigitosCuentas = registro.field("ndigitoscuenta").value().toInt();
            this->cCuentaClientes = registro.field("codigocuentaclientes").value().toString();
            this->cCuentaAcreeedores = registro.field("codigocuentaacreedores").value().toString();
            this->cCuentaProveedores = registro.field("codigocuentaproveedores").value().toString();
        } else {
            if (nProcede == 1)
                QMessageBox::information(NULL,QObject::tr("Gestión Empresas"),QObject::tr("No hay más empresas: Se ha llegado al final del fichero"));
            else
                QMessageBox::information(NULL, QObject::tr("Gestión Empresas"),QObject::tr("No hay más empresas: se ha llegado al inicio del fichero"));

        }
    }
}

void Empresa::Guardar()
{
    qEmpresa = QSqlQuery(QSqlDatabase::database("terra"));
    qEmpresa.prepare("update empresas set "
                     "codigo =:cCodigo,"
                     "nombre =:cNombre,"
                     "digitosfactura =:nDigitosFactura,"
                     "serie =:cSerie,"
                     "RutaBDSqLite =:cRutaBDSqLite,"
                     "host =:cHost,"
                     "user =:cUser,"
                     "contrasena =:cContrasena,"
                     "puerto=:cPuerto,"
                     "nombreBD=:cNombreBD,"
                     "driverBD=:cDriverBD, "
                     "Direccion=:cDireccion,"
                     "cp=:cCP,"
                     "poblacion=:cPoblacion,"
                     "provincia=:cProvincia,"
                     "pais=:cPais,"
                     "telefono1=:cTelefono1,"
                     "telefono2=:cTelefono2,"
                     "fax=:cFax,"
                     "mail=:cMail,"
                     "web=:cWeb,"
                     "cif=:cCif,"
                     "inscripcion =:cInscripcion,"
                     "comentarioalbaran=:cComentarioAlbaran,"
                     "comentariofactura=:cComentarioFactura,"
                     "comentarioticket=:cComentarioTicket,"
                     "ejercicio=:ejercicio, "
                     "ndigitoscuenta =:ndigitoscuentas,"
                     "codigocuentaclientes =:codigocuentaclientes,"
                     "codigocuentaproveedores =:codigocuentaproveedores,"
                     "codigocuentaacreedores =:codigocuentaacreedores "
                     "where id=:nID");
    qEmpresa.bindValue(":cCodigo",this->cCodigo);
    qEmpresa.bindValue(":cNombre",this->cNombre);
    qEmpresa.bindValue(":nDigitosFactura",this->nDigitosFactura);
    qEmpresa.bindValue(":cSerie",this->cSerie);
    qEmpresa.bindValue(":cRutaBDSqLite",this->cRutaBDSqLite);
    qEmpresa.bindValue(":cHost",this->cHost);
    qEmpresa.bindValue(":cUser",this->cUser);
    qEmpresa.bindValue(":cContrasena",this->cContrasena);
    qEmpresa.bindValue(":cPuerto",this->cPuerto);
    qEmpresa.bindValue(":cNombreBD",this->cNombreBD);
    qEmpresa.bindValue(":cDriverBD",this->cDriverBD);
    qEmpresa.bindValue(":cDireccion",this->cDireccion);
    qEmpresa.bindValue(":cCP",this->cCp);
    qEmpresa.bindValue(":cPoblacion",this->cPoblacion);
    qEmpresa.bindValue(":cProvincia",this->cProvincia);
    qEmpresa.bindValue(":cPais",this->cPais);
    qEmpresa.bindValue(":cTelefono1",this->cTelefono1);
    qEmpresa.bindValue(":cTelefono2",this->cTelefono2);
    qEmpresa.bindValue(":cFax",this->cFax);
    qEmpresa.bindValue(":cMail",this->cMail);
    qEmpresa.bindValue(":cWeb",this->cWeb);
    qEmpresa.bindValue(":cCif",this->cCif);
    qEmpresa.bindValue(":cInscripcion",this->cInscripcion);
    qEmpresa.bindValue(":cComentarioAlbaran",this->cComentarioAlbaran);
    qEmpresa.bindValue(":cComentarioFactura",this->cComentarioFactura);
    qEmpresa.bindValue(":cComentarioTicket",this->cComentarioTicket);
    qEmpresa.bindValue(":ejercicio ",this->nEjercicio);
    qEmpresa.bindValue(":ndigitoscuenta",this->nDigitosCuentas);
    qEmpresa.bindValue(":codigocuentaclientes",this->cCuentaClientes);
    qEmpresa.bindValue(":codigocuentaproveedores",this->cCuentaProveedores);
    qEmpresa.bindValue(":codigocuentaacreedores",this->cCuentaAcreeedores);
    qEmpresa.bindValue(":nID",this->id);
    if (!qEmpresa.exec())
        QMessageBox::warning(NULL,QObject::tr("Gestión de Empresas"),QObject::tr("No se ha podido modificar la ficha de la empresa")+
                             qEmpresa.lastError().text(), QObject::tr("Ok"));
    else {
        QMessageBox::information(NULL,QObject::tr("Gestión de Empresas"),QObject::tr("La ficha de la empresa ha sido modificada\n"
                                                                                     "ADMINISTRADOR: Verifique funcionamiento correcto\n"
                                                                                     "antes de dar acceso a usuarios"),
                                 QObject::tr("OK"));
    }


}

void Empresa::Vaciar()
{
    this->cCodigo = "";
    this->cNombre = "";
    this->nDigitosFactura = 0;
    this->cSerie = "";
    this->cRutaBDSqLite = "";
    this->cHost = "";
    this->cUser = "";
    this->cContrasena = "";
    this->cPuerto = "";
    this->cNombreBD = "";
    this->cDriverBD = "";
    this->cCodEmpresa = "";
    this->cComentarioAlbaran = "";
    this->cComentarioFactura = "";
    this->cComentarioTicket = "";
    this->cCp = "";
    this->cDireccion = "";
    this->cPoblacion = "";
    this->cFax = "";
    this->cInscripcion = "";
    this->cMail = "";
    this->cPais = "";
    this->cTelefono1 = "";
    this->cTelefono2 = "";
    this->cWeb  = "";
    this->cCif = "";
    this->nEjercicio = 2000;
    this->nDigitosCuentas = 0;
    this->cCuentaAcreeedores = "410";
    this->cCuentaClientes = "430";
    this->cCuentaProveedores= "400";
}

void Empresa::Borrar(int nId)
{
    qEmpresa = QSqlQuery(QSqlDatabase::database("terra"));
    frmDecision *Decision = new frmDecision();
    Decision->Inicializar(QObject::tr("Borrar Empresa"),QObject::tr("¿Desea realmente Borrar esta ficha de empresa"),QObject::tr("Esta opción no se puede deshacer"),
                          QObject::tr("Se borrarán todos los datos de la empresa"),QObject::tr("Borrar"),QObject::tr("Cancelar"));
    int elegido = Decision->exec();
   if(elegido == 1) {
        qEmpresa.prepare("Delete from empresa where id = :nId");
        qEmpresa.bindValue(":id",nId);
        if(!qEmpresa.exec()){
           QMessageBox::critical(NULL,QObject::tr("Borrar Empresa"),QObject::tr("Falló el borrado de la Empresa"),QObject::tr("&Aceptar"));
        } else {
            // Busco el id más proximo
            qEmpresa.prepare("select * from articulos where id <:nId");
            qEmpresa.bindValue(":nId",this->id);
            qEmpresa.exec();
            QSqlRecord registro = qEmpresa.record();
            this->id = registro.field("id").value().toInt();

         }
    }
}

int Empresa::getid()
{
    return this->id;
}

QString Empresa::getcCodigo()
{
    return this->cCodigo;
}

QString Empresa::getcNombre()
{
    return this->cNombre;
}

int Empresa::getnDigitosFactura()
{
    return this->nDigitosFactura;
}

QString Empresa::getcSerie()
{
    return this->cSerie;
}

QString Empresa::getcRutaBDSqLite()
{
    return this->cRutaBDSqLite;
}

QString Empresa::getcHost()
{
    return this->cHost;
}

QString Empresa::getcUser()
{
    return this->cUser;
}

QString Empresa::getcContrasena()
{
    return this->cContrasena;
}

QString Empresa::getcNombreBD()
{
    return this->cNombreBD;
}

QString Empresa::getcPuerto()
{
    return this->cPuerto;
}

QString Empresa::getcDriverBD()
{
    return this->cDriverBD;
}

QString Empresa::getcDireccion()
{
    return this->cDireccion;
}

QString Empresa::getcCp()
{
    return this->cCp;
}

QString Empresa::getcPoblacion()
{
    return this->cPoblacion;
}

QString Empresa::getcProvincia()
{
    return this->cProvincia;
}

QString Empresa::getcPais()
{
    return this->cPais;
}

QString Empresa::getcTelefono1()
{
    return this->cTelefono1;
}

QString Empresa::getcTelefono2()
{
    return this->cTelefono2;
}

QString Empresa::getcFax()
{
    return this->cFax;
}

QString Empresa::getcMail()
{
    return this->cMail;
}

QString Empresa::getcWeb()
{
    return this->cWeb;
}

int Empresa::getnEjercicio()
{
    return this->nEjercicio;
}

QString Empresa::getcCif()
{
    return this->cCif;
}

QString Empresa::getcInscripcion()
{
    return this->cInscripcion;
}

QString Empresa::getcComentarioFactura()
{
    return this->cComentarioFactura;
}

QString Empresa::getcComentarioAlbaran()
{
    return this->cComentarioAlbaran;
}

QString Empresa::getcComentarioTicket()
{
    return this->cComentarioTicket;
}

int Empresa::getnDigitosCuentas()
{
    return this->nDigitosCuentas;
}

QString Empresa::getcCuentaClientes()
{
    return this->cCuentaClientes;
}

QString Empresa::getcCuentaProveedores()
{
    return this->cCuentaProveedores;
}

QString Empresa::getcCuentaAcreedores()
{
    return this->cCuentaAcreeedores;
}


void Empresa::setid(int id)
{
    this->id = id;
}

void Empresa::setcCodigo(QString cCodigo)
{
    this->cCodigo = cCodigo;
}

void Empresa::setcNombre(QString cNombre)
{
    this->cNombre = cNombre;
}

void Empresa::setnDigitosFactura(int nDigitosFactura)
{
    this->nDigitosFactura = nDigitosFactura;
}

void Empresa::setcSerie(QString cSerie)
{
    this->cSerie = cSerie;
}

void Empresa::setcRutaBDSqLite(QString cRutaBDSqLite)
{
    this->cRutaBDSqLite = cRutaBDSqLite;
}

void Empresa::setcHost(QString cHost)
{
    this->cHost = cHost;
}

void Empresa::setcUser(QString cUser)
{
    this->cUser = cUser;
}

void Empresa::setcContrasena(QString cContrasena)
{
    this->cContrasena = cContrasena;
}

void Empresa::setcNombreBD(QString cNombreBD)
{
    this->cNombreBD = cNombreBD;
}

void Empresa::setcPuerto(QString cPuerto)
{
    this->cPuerto = cPuerto;
}

void Empresa::setcDriverBD(QString cDriverBD)
{
    this->cDriverBD = cDriverBD;
}

void Empresa::setcDireccion(QString cDireccion)
{
    this->cDireccion = cDireccion;
}

void Empresa::setcCP(QString cCp)
{
    this->cCp = cCp;
}

void Empresa::setcPoblacion(QString cPoblacion)
{
    this->cPoblacion = cPoblacion;
}

void Empresa::setcProvincia(QString cProvincia)
{
    this->cProvincia = cProvincia;
}

void Empresa::setcPais(QString cPais)
{
    this->cPais;
}

void Empresa::setcTelefono1(QString cTelefono1)
{
    this->cTelefono1 = cTelefono1;
}

void Empresa::setcTelefono2(QString cTelefono2)
{
    this->cTelefono2 = cTelefono2;
}

void Empresa::setcFax(QString cFax)
{
    this->cFax = cFax;
}

void Empresa::setcMail(QString cMail)
{
    this->cMail = cMail;
}

void Empresa::setcWeb(QString cWeb)
{
    this->cWeb = cWeb;
}

void Empresa::setcCif(QString cCif)
{
    this->cCif = cCif;
}

void Empresa::setnEjercicio(int nEjercicio)
{
    this->nEjercicio = nEjercicio;

}

void Empresa::setcInscripcion(QString cInscripcion)
{
    this->cInscripcion = cInscripcion;
}

void Empresa::setcComentarioFactura(QString cComentarioFactura)
{
    this->cComentarioFactura = cComentarioFactura;
}

void Empresa::setcComemtarioAlbaran(QString cComentarioAlbaran)
{
    this->cComentarioAlbaran = cComentarioAlbaran;
}

void Empresa::setcComentarioTicket(QString cComentarioTicket)
{
    this->cComentarioTicket = cComentarioTicket;
}

void Empresa::setnDigitosCuentas(int nDigitosCuentas)
{
    this->nDigitosCuentas = nDigitosCuentas;
}

void Empresa::setcCodigoCuentaClientes(QString cCuentaClientes)
{
    this->cCuentaClientes = cCuentaClientes;
}

void Empresa::setcCodigoCuentaProveedor(QString cCuentaProveedores)
{
    this->cCuentaProveedores = cCuentaProveedores;
}

void Empresa::setcCodigoCuentaAcreedores(QString cCuentaAcreeedores)
{
    this->cCuentaAcreeedores = cCuentaAcreeedores;
}






