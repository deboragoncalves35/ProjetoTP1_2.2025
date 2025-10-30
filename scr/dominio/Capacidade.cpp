#include "Capacidade.h"

/**
 * @brief Verifica se o valor informado está dentro do intervalo permitido.
 * @param valor Valor inteiro a ser validado.
 * @throw invalid_argument Se o valor não for 1, 2, 3 ou 4.
 */
void Capacidade::validar(int valor) {
    if (valor < 1 || valor > 4) {
        throw invalid_argument("Capacidade inválida: deve ser 1, 2, 3 ou 4.");
    }
}

/**
 * @brief Define o valor da capacidade após validação.
 * @param valor Valor inteiro (1, 2, 3 ou 4).
 * @throw invalid_argument Se o valor estiver fora do intervalo permitido.
 */
void Capacidade::setValor(int valor) {
    validar(valor);       // Chama a função de validação.
    this->valor = valor;  // Atribui o valor se for válido.
}

/**
 * @brief Retorna o valor da capacidade armazenado.
 * @return Valor inteiro da capacidade.
 */
int Capacidade::getValor() const {
    return valor;
}
