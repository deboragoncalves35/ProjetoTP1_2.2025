#include "Reserva.h"


void Reserva::setChegada(const Data &valor) { chegada = valor; }
void Reserva::setPartida(const Data &valor) { partida = valor; }
void Reserva::setValor(const Dinheiro &valor) { this->valor = valor; }
void Reserva::setCodigo(const Codigo &valor) { codigo = valor; }

const Data& Reserva::getChegada() const { return chegada; }
const Data& Reserva::getPartida() const { return partida; }
const Dinheiro& Reserva::getValor() const { return valor; }
const Codigo& Reserva::getCodigo() const { return codigo; }

void Reserva::setHospede(const Hospede &valor) { hospede = valor; }
void Reserva::setQuarto(const Quarto &valor) { quarto = valor; }

const Hospede& Reserva::getHospede() const { return hospede; }
const Quarto& Reserva::getQuarto() const { return quarto; }
