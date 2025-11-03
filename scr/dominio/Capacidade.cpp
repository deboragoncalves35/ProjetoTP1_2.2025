#include "Capacidade.h"
#include <stdexcept>

/**
 * @brief Valida a capacidade conforme as regras do dominio.
 * @param valor Valor informado (1, 2, 3 ou 4).
 * @throw invalid_argument Se o valor estiver fora do intervalo permitido.
 */
void Capacidade::validar(int valor) {
    if (valor < 1 || valor > 4) {
        throw invalid_argument("Capacidade invalida: deve ser 1, 2, 3 ou 4.");
    }
}

/**
 * @brief Define o valor apos validacao.
 * @param valor Valor inteiro informado.
 * @throw invalid_argument Se o valor for invalido.
 */
void Capacidade::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

/**
 * @brief Retorna o valor armazenado.
 * @return Valor inteiro da capacidade.
 */
int Capacidade::getValor() const {
    return valor;
}

