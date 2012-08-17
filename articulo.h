#ifndef ARTICULO_H
#define ARTICULO_H
#include <QString>
#include <QSqlQuery>
#include <QDate>


class Articulo
{
public:
    Articulo();
    void Anadir();
    void Recuperar(QString cSQL);
    void Borrar(int nId);
    void Vender(int id, int cantidad, double rPVP);
    void Devolucion(int id, int cantidad, double rImporte, QString cMotivo, QString dFechaDevolucion);

    // getters
    QString getId();
    QString getcCodigo();
    QString getcCodigoBarras();
    QString getcCodigoFabricante();
    QString getcDescripcion();
    QString getcDescripcionReducida();
    int getid_Proveedor();
    QString getcCodigoFamilia();
    int getid_Familia();
    QString getcSubfamilia();
    QString getcCodigoIva();
    int getid_TipoIva();
    double getrCoste();
    double getrTarifa1();
    double getrTarifa2();
    double getrTarifa3();
    double getrDto();
    double getnDtoProveedor();
    double getnDtoProveedor2();
    double getnDtoProveedor3();
    QDate getdUltimaCompra();
    QDate getdUltimaVenta();
    double getnMargen1();
    double getnMargen2();
    double getnMargen3();
    double getrPrecioMedio();
    int getnUnidadesCompradas();
    double getrPrecioMedio2();
    int getnUnidadesVendidas();
    double getrPrecioMedio3();
    double getrAcumuladoCompras();
    double getrAcumuladoVentas();
    QString gettComentario();
    int getnStockMaximo();
    int getnStockMinimo();
    int getnStockReal();
    QString getcTipoUnidad();
    int getlControlarStock();
    QString getcModelo();
    QString getcTalla();
    QString getcColor();
    QString getcComposicion();
    int getlPvpIncluyeIva();
    int getlPendienteRecibir();
    int getnCantidadPendienteRecibir();
    int getnReservados();
    int getlMostrarWeb();
    int getnEtiquetas();
    int getnPaquetes();
    QString getcLocalizacion();

    // Setters
    void setId(int nId);
    void setcCodigo(QString cCodigo);
    void setcCodigoBarras(QString cCodigoBarras);
    void setcCodigoFabricante(QString cCodigoFabricante);
    void setcDescripcion(QString cDescripcion);
    void setcDescripcionReducida(QString cDescripcionReducida);
    void setid_Proveedor(int id_Proveedor);
    void setcCodigoFamilia(QString cCodigoFamilia);
    void setid_Familia(int id_Familia);
    void setcSubfamilia(QString cSubfamilia);
    void setcCodigoIva(QString cCodigoIva);
    void setid_TipoIva(int id_TipoIva);
    void setrCoste(double rCoste);
    void setrTarifa1(double rTarifa1);
    void setrTarifa2(double rTarifa2);
    void setrTarifa3(double rTarifa3);
    void setrDto(double rDto);
    void setnDtoProveedor(double nDtoProveedor);
    void setnDtoProveedor2(double nDtoProveedor2);
    void setnDtoProveedor3(double nDtoProveedor3);
    void setdUltimaCompra(QDate dUltimaCompra);
    void setdUltimaVenta(QDate dUltimaVenta);
    void setnMargen1(double nMargen1);
    void setnMargen2(double nMargen2);
    void setnMargen3(double nMargen3);
    void setrPrecioMedio(double rPrecioMedio);
    void setnUnidadesCompradas(int nUnidadesCompradas);
    void setrPrecioMedio2(double rPrecioMedio2);
    void setnUnidadesVendidas( int nUnidadesVendidas);
    void setrPrecioMedio3(double rPrecioMedio3);
    void setrAcumuladoCompras(double rAcumuladoCompras);
    void setrAcumuladoVentas(double rAcumuladoVentas);
    void settComentario(QString tComentario);
    void setnStockMaximo(int nStockMaximo);
    void setnStockMinimo(int nStockMinimo);
    void setnStockReal(int nStockReal);
    void setcTipoUnidad(QString cTipoUnidad);
    void setlControlarStock(int lControlarStock);
    void setcModelo(QString cModelo);
    void setcTalla(QString cTalla);
    void setcColor(QString cColor);
    void setcComposicion(QString cComposicion);
    void setlPvpIncluyeIva(int lPvpIncluyeIva);
    void setlPendienteRecibir(int lPendienteRecibir);
    void setnCantidadPendienteRecibir(int nCantidadPendienteRecibir);
    void setnReservados(int nReservados);
    void setlMostrarWeb(int lMostrarWeb);
    void setnEtiquetas(int nEtiquetas);
    void setnPaquetes(int nPaquetes);
    void setcLocalizacion(QString cLocalizacion);



private:
    int id;
    QString cCodigo;
    QString cCodigoBarras;
    QString cCodigoFabricante;
    QString cDescripcion;
    QString cDescripcionReducida;
    int id_Proveedor;
    QString cCodigoFamilia;
    int id_Familia;
    QString cSubfamilia;
    QString cCodigoIva;
    int id_TipoIva;
    double rCoste;
    double rTarifa1;
    double rTarifa2;
    double rTarifa3;
    double rDto;
    double nDtoProveedor;
    double nDtoProveedor2;
    double nDtoProveedor3;
    QDate dUltimaCompra;
    QDate dUltimaVenta;
    double nMargen1;
    double nMargen2;
    double nMargen3;
    double rPrecioMedio;
    int nUnidadesCompradas;
    double rPrecioMedio2;
    int nUnidadesVendidas;
    double rPrecioMedio3;
    double rAcumuladoCompras;
    double rAcumuladoVentas;
    QString tComentario;
    int nStockMaximo;
    int nStockMinimo;
    int nStockReal;
    QString cTipoUnidad;
    int lControlarStock;
    QString cModelo;
    QString cTalla;
    QString cColor;
    QString cComposicion;
    int lPvpIncluyeIva;
    int lPendienteRecibir;
    int nCantidadPendienteRecibir;
    int nReservados;
    int lMostrarWeb;
    int nEtiquetas;
    int nPaquetes;
    QString cLocalizacion;



    QSqlQuery qryArticulo;

};

#endif // ARTICULO_H
