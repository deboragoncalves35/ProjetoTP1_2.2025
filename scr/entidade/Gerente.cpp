#include "Gerente.h"

void Gerente::setRamal(const Ramal &valor) {
    ramal = valor;
}

void Gerente::setSenha(const Senha &valor) {
    senha = valor;
}

const Ramal& Gerente::getRamal() const {
    return ramal;
}

const Senha& Gerente::getSenha() const {
    return senha;
}
