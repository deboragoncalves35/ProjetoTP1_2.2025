#include "Pessoa.h"

void Pessoa::setNome(const Nome &valor) {
    nome = valor;
}

void Pessoa::setEmail(const Email &valor) {
    email = valor;
}

const Nome& Pessoa::getNome() const {
    return nome;
}

const Email& Pessoa::getEmail() const {
    return email;
}
