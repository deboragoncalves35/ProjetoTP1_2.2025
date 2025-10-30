#include "Cartao.h"
#include <cctype> // Para isdigit()

/**
 * @brief Implementação do algoritmo de Luhn.
 * @param numero Número de cartão de 16 dígitos.
 * @return true se o número passar na verificação de Luhn.
 */
bool Cartao::luhnValido(const string &numero) const {
    int soma = 0;
    bool alternar = false;

    // percorre os dígitos de trás pra frente
    for (int i = numero.size() - 1; i >= 0; i--) {
        int digito = numero[i] - '0';
        if (alternar) {
            digito *= 2;
            if (digito > 9)
                digito -= 9;
        }
        soma += digito;
        alternar = !alternar;
    }

    // válido se a soma é múltiplo de 10
    return (soma % 10 == 0);
}

/**
 * @brief Verifica se o número do cartão possui 16 dígitos válidos e
 *        se passa na validação de Luhn.
 * @param numero Número do cartão a ser validado.
 * @throw invalid_argument Se o formato for inválido ou falhar o teste de Luhn.
 */
void Cartao::validar(const string &numero) {
    // Verifica se o número tem exatamente 16 caracteres numéricos
    if (numero.size() != 16)
        throw invalid_argument("Cartao inválido: deve conter exatamente 16 dígitos.");

    for (char c : numero) {
        if (!isdigit(static_cast<unsigned char>(c)))
            throw invalid_argument("Cartao inválido: apenas dígitos são permitidos.");
    }

    // Aplica o algoritmo de Luhn
    if (!luhnValido(numero))
        throw invalid_argument("Cartao inválido: falha no dígito verificador (algoritmo de Luhn).");
}

/**
 * @brief Define o valor do cartão após validação.
 * @param numero String contendo o número de 16 dígitos.
 * @throw invalid_argument Se o número não for válido.
 */
void Cartao::setValor(const string &numero) {
    validar(numero);
    this->valor = numero;
}

/**
 * @brief Retorna o número de cartão armazenado.
 * @return String com o número do cartão.
 */
string Cartao::getValor() const {
    return valor;
}
