#include "Ramal.h"
#include <cctype>

/**
 * @brief Valida o formato e o intervalo do ramal.
 * @param ramal_string String com o valor informado.
 * @return Valor numerico validado.
 * @throw invalid_argument Se o formato ou o valor forem invalidos.
 */
int Ramal::validarRamal(const string &ramal_string) {
    if (ramal_string.size() != 2) {
        throw invalid_argument("Ramal invalido: deve conter exatamente 2 digitos.");
    }

    for (char c : ramal_string) {
        if (!isdigit(static_cast<unsigned char>(c))) {
            throw invalid_argument("Ramal invalido: deve conter apenas digitos numericos (0-9).");
        }
    }

    int numero = stoi(ramal_string);

    if (numero < 0 || numero > 50) {
        throw invalid_argument("Ramal invalido: deve estar entre 00 e 50.");
    }

    return numero;
}

/**
 * @brief Define o valor apos validacao.
 * @param ramal_string String contendo o ramal informado.
 */
void Ramal::setValor(const string &ramal_string) {
    valor = validarRamal(ramal_string);
}

/**
 * @brief Retorna o valor armazenado.
 * @return Valor inteiro do ramal.
 */
int Ramal::getValor() const {
    return valor;
}
