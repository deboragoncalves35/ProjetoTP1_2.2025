#include "Hotel.h"

void Hotel::setNome(const Nome &valor) { nome = valor; }
void Hotel::setEndereco(const Endereco &valor) { endereco = valor; }
void Hotel::setTelefone(const Telefone &valor) { telefone = valor; }
void Hotel::setCodigo(const Codigo &valor) { codigo = valor; }

const Nome& Hotel::getNome() const { return nome; }
const Endereco& Hotel::getEndereco() const { return endereco; }
const Telefone& Hotel::getTelefone() const { return telefone; }
const Codigo& Hotel::getCodigo() const { return codigo; }

void Hotel::setGerente(const Gerente &valor) { gerente = valor; }
const Gerente& Hotel::getGerente() const { return gerente; }

void Hotel::adicionarQuarto(const Quarto &quarto) {
    quartos.push_back(quarto);
}

const vector<Quarto>& Hotel::getQuartos() const {
    return quartos;
}
