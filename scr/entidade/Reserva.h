#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED

#include "../dominio/Data.h"
#include "../dominio/Dinheiro.h"
#include "../dominio/Codigo.h"
#include "Hospede.h"
#include "Quarto.h"
using namespace std;

/**
 * @class Reserva
 * @brief Representa uma reserva feita por um hospede em um quarto de hotel.
 *
 * A classe Reserva agrega os dominios Data, Dinheiro e Codigo,
 * e associa-se a um Hospede e um Quarto.
 */
class Reserva {
private:
    Data chegada;     ///< Data de inicio da reserva.
    Data partida;     ///< Data de termino da reserva.
    Dinheiro valor;   ///< Valor total da reserva.
    Codigo codigo;    ///< Codigo identificador da reserva (PK).
    Hospede hospede;  ///< Hospede associado à reserva.
    Quarto quarto;    ///< Quarto reservado.

public:

    void setChegada(const Data &valor);
    void setPartida(const Data &valor);
    void setValor(const Dinheiro &valor);
    void setCodigo(const Codigo &valor);
    const Data& getChegada() const;
    const Data& getPartida() const;
    const Dinheiro& getValor() const;
    const Codigo& getCodigo() const;

    void setHospede(const Hospede &valor);
    void setQuarto(const Quarto &valor);
    const Hospede& getHospede() const;
    const Quarto& getQuarto() const;
};

#endif // RESERVA_H_INCLUDED
