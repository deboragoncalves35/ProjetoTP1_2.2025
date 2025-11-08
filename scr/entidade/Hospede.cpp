#include "Hospede.h"

void Hospede::setEndereco(const Endereco &valor) {
    endereco = valor;
}

void Hospede::setCartao(const Cartao &valor) {
    cartao = valor;
}

const Endereco& Hospede::getEndereco() const {
    return endereco;
}

const Cartao& Hospede::getCartao() const {
    return cartao;
}
