#include "Numero.h"
#include <cctype>

/**
 * @brief Valida o formato do numero conforme as regras do dominio.
 * @param numero_string String com o valor informado.
 * @return Valor inteiro validado.
 * @throw invalid_argument Se o formato ou o valor forem invalidos.
 */
int Numero::validarNumero(const string &numero_string) {
    if (numero_string.empty()) {
        throw invalid_argument("Numero invalido: campo vazio.");
    }

    for (char c : numero_string) {
        if (!isdigit(static_cast<unsigned char>(c))) {
            throw invalid_argument("Numero invalido: deve conter apenas digitos (0-9).");
        }
    }

    if (numero_string.size() > 1 && numero_string[0] == '0') {
        throw invalid_argument("Numero invalido: nao pode conter zeros a esquerda.");
    }

    int numero = stoi(numero_string);

    if (numero < 1 || numero > 999) {
        throw invalid_argument("Numero invalido: deve estar entre 1 e 999.");
    }

    return numero;
}

/**
 * @brief Define o valor apos validacao.
 * @param numero_string String contendo o valor informado.
 * @throw invalid_argument Se o valor for invalido.
 */
void Numero::setValor(const string &numero_string) {
    valor = validarNumero(numero_string);
}

/**
 * @brief Retorna o valor armazenado.
 * @return Valor inteiro do numero.
 */
int Numero::getValor() const {
    return valor;
}
