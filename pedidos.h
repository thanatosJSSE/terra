#ifndef PEDIDOS_H
#define PEDIDOS_H
#include <QDate>
#include<QString>
#include <QSqlDatabase>
#include <QSqlQuery>

class Pedidos
{
public:
    Pedidos();


private:
    int id;
    QString cCodigoCliente;
    int nAlbaran;
    QString cPedido;
    int nPedido;
    QDate dFecha;
    QDate dFechaFactura;
    int iId_Cliente;
    QString cCliente;
    QString cDireccion;
    QString cDireccion2;
    QString cCp;
    QString cPoblacion;
    QString cProvincia;
    QString cPais;
    QString cCif;
    int lRecargoEquivalencia;
    double rSubtotal;
    int nDto;
    double rImporteDescuento;
    double rBase;
    int nIva;
    double rImporteIva;
    double rTotal;
    int lImpreso;
    int lFacturado;
    QString cFactura;
    QString tComentario;
    double rBase1;
    double rBase2;
    double rBase3;
    double rBase4;
    int nPorcentajeIVA1;
    int nPorcentajeIVA2;
    int nPorcentajeIVA3;
    int nPorcentajeIVA4;
    double rIVA1;
    double rIVA2;
    double rIVA3;
    double rIVA4;
    double rTotal1;
    double rTotal2;
    double rTotal3;
    double rTotal4;
    double nRec1;
    double nRec2;
    double nRec3;
    double nRec4;
    double rRecargoEq1;
    double rRecargoEq2;
    double rRecargoEq3;
    double rRecargoEq4;
    double rRecargoEqTotal;
    double rACuenta;
    double rImportePendiente;
    int lTraspasadoAlb;
    int lTraspasadoFac;
    QString cDireccionEntrega;
    QString cDireccionEntrega2;
    QString cCPEntrega;
    QString cPoblacionEntrega;
    QString cProvinciaEntrega;
    QString cPaisEntrega;
    int lEnviado;
    int lCompleto;
    int lEntregado;
    QDate dFechaLimiteEntrega;
    QSqlDatabase db;
    QSqlQuery *cab_ped;


public slots:
    // Metodos de trabajo Clase Pedido
    void AnadirPedido();
    void RecuperarPedido(QString cSQL);
    void GuardarPedido(int nId_Pedido);
    int NuevoNumeroPedido();
    void AnadirLineaPedido(int id_cab, QString cCodigo, double nCantidad, QString cDescripcion, double pvp, double subtotal,
                            double porcdto, double dto, double total, double nPorcIva);
    void ModificarLineaPedido(int id_lin, QString cCodigo, double nCantidad, QString cDescripcion, double pvp, double subtotal,
                            double porcdto, double dto, double total, double nPorcIva);
    void BorrarLineaPedido(int id_lin);
    void calcularPedido();
    void FacturarPedido();

    // getters
    int Getid();
    QString getcCodigoCliente();
    int getnAlbaran();
    int getnPedido();
    QString getcPedido();
    QDate getdFecha();
    QDate getdFechaFactura();
    QString getcFactura();
    int getiId_Cliente();
    QString getcCliente();
    QString getcDireccion();
    QString getcDireccion2();
    QString getcCp();
    QString getcPoblacion();
    QString getcProvincia();
    QString getcPais();
    QString getcCif();
    int getlRecargoEquivalencia();
    double getrSubtotal();
    int getnDto();
    double getrImporteDescuento();
    double getrBase();
    int getnIva();
    double getrImporteIva();
    double getrTotal();
    int getlImpreso();
    int getlFacturado();
    QString gettComentario();
    double getrBase1();
    double getrBase2();
    double getrBase3();
    double getrBase4();
    int getnPorcentajeIVA1();
    int getnPorcentajeIVA2();
    int getnPorcentajeIVA3();
    int getnPorcentajeIVA4();
    double getrIVA1();
    double getrIVA2();
    double getrIVA3();
    double getrIVA4();
    double getrTotal1();
    double getrTotal2();
    double getrTotal3();
    double getrTotal4();
    double getnRec1();
    double getnRec2();
    double getnRec3();
    double getnRec4();
    double getrRecargoEq1();
    double getrRecargoEq2();
    double getrRecargoEq3();
    double getrRecargoEq4();
    double getrRecargoEqTotal();
    double getrACuenta();
    double getrImportePendiente();
    int getlTraspasadoAlb();
    int getlTraspasadoFac();
    QString getcDireccionEntrega();
    QString getcDireccionEntrega2();
    QString getcCPEntrega();
    QString getcPoblacionEntrega();
    QString getcProvinciaEntrega();
    QString getcPaisEntrega();
    int getlEnviado();
    int getlCompleto();
    int getlEntregado();
    QDate getdFechaLimiteEntrega();


    // setters
    void setid( int iID_Pedido);
    void setcCodigoCliente(QString cCodigoCliente);
    void setnAlbaran( int nAlbaran);
    void setcPedido(QString cPedido);
    void setnPedido(int nPedido);
    void setdFecha(QDate dFecha);
    void setdFechaFactura(QDate dFechaFactura);
    void setcFactura(QString cFactura);
    void setiId_Cliente(int iId_Cliente);
    void setcCliente(QString cCliente);
    void setcDireccion(QString cDireccion);
    void setcDireccion2(QString cDireccion2);
    void setcCp(QString cCp);
    void setcPoblacion(QString cPoblacion);
    void setcProvincia(QString cProvincia);
    void setcPais(QString cPais);
    void setcCif(QString cCif);
    void setlRecargoEquivalencia(int lRecargoEquivalencia);
    void setrSubtotal(double rSubtotal);
    void setnDto(int nDto);
    void setrImporteDescuento(double rImporteDescuento);
    void setrBase(double rBase);
    void setnIva(int nIva);
    void setrImporteIva(double rImporteIva);
    void setrTotal(double rTotal);
    void setlImpreso(int lImpreso);
    void setlFacturado(int lFacturado);
    void settComentario(QString tComentario);
    void setrBase1(double rBase1);
    void setrBase2(double rBase2);
    void setrBase3(double rBase3);
    void setrBase4(double rBase4);
    void setnPorcentajeIVA1(int nPorcentajeIVA1);
    void setnPorcentajeIVA2(int nPorcentajeIVA2);
    void setnPorcentajeIVA3(int nPorcentajeIVA3);
    void setnPorcentajeIVA4(int nPorcentajeIVA4);
    void setrIVA1( double rIVA1);
    void setrIVA2( double rIVA2);
    void setrIVA3( double rIVA3);
    void setrIVA4( double rIVA4);
    void setrTotal1(double rTotal1);
    void setrTotal2(double rTotal2);
    void setrTotal3(double rTotal3);
    void setrTotal4(double rTotal4);
    void setnRec1(int nRec1);
    void setnRec2(int nRec2);
    void setnRec3(int nRec3);
    void setnRec4(int nRec4);
    void setrRecargoEq1(double rRecargoEq1);
    void setrRecargoEq2(double rRecargoEq2);
    void setrRecargoEq3(double rRecargoEq3);
    void setrRecargoEq4(double rRecargoEq4);
    void setrRecargoEqTotal(double rRecargoEqTotal);
    void setrACuenta(double rACuenta);
    void setlTraspasadoAlb(int lTraspasadoAlb);
    void setlTraspasadoFac(int lTraspasadoFac);
    void setcDireccionEntrega(QString cDireccionEntrega);
    void setcDireccionEntrega2(QString cDireccionEntrega2);
    void setcCPEntrega(QString cCPEntrega);
    void setcPoblacionEntrega(QString cPoblacionEntrega);
    void setcProvinciaEntrega(QString cProvinciaEntrega);
    void setcPaisEntrega(QString cPaisEntrega);
    void setlEnviado(int lEnviado);
    void setlCompleto(int lCompleto);
    void setlEntregado(int lEntregado);
    void setdFechaLimiteEntrega(QDate dFechaLimiteEntrega);
};

#endif // PEDIDOS_H
