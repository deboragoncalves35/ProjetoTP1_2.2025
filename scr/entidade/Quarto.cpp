#include "Quarto.h"

void Quarto::setNumero(const Numero &valor) {
    numero = valor;
}

void Quarto::setCapacidade(const Capacidade &valor) {
    capacidade = valor;
}

void Quarto::setDiaria(const Dinheiro &valor) {
    diaria = valor;
}

void Quarto::setRamal(const Ramal &valor) {
    ramal = valor;
}

const Numero& Quarto::getNumero() const {
    return numero;
}

const Capacidade& Quarto::getCapacidade() const {
    return capacidade;
}

const Dinheiro& Quarto::getDiaria() const {
    return diaria;
}

const Ramal& Quarto::getRamal() const {
    return ramal;
}
